/* -*-mode:c++; tab-width: 4; indent-tabs-mode: nil; c-basic-offset: 4 -*- */

#ifndef UTIL_HH
#define UTIL_HH

#include <string>

std::string shell_path( void );
void drop_privileges( void );
void check_requirements( const int argc, const char * const argv[] );

#endif /* UTIL_HH */
