/*
 * XREFs of sub_140A560D0 @ 0x140A560D0
 * Callers:
 *     sub_140AFB154 @ 0x140AFB154 (sub_140AFB154.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140A56B08 @ 0x140A56B08 (sub_140A56B08.c)
 */

char sub_140A560D0()
{
  char v5; // bl
  char result; // al
  bool v7; // zf

  _RAX = 2147483649LL;
  __asm { cpuid }
  if ( (_RDX & 0x100000) != 0 )
    return 1;
  v5 = 0;
  v7 = (unsigned int)sub_140A56B08(_RCX) == 1;
  result = 1;
  if ( !v7 )
    return v5;
  return result;
}
