/*
 * XREFs of sub_14050E5E8 @ 0x14050E5E8
 * Callers:
 *     sub_1403B3864 @ 0x1403B3864 (sub_1403B3864.c)
 * Callees:
 *     sub_1403B37B0 @ 0x1403B37B0 (sub_1403B37B0.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

bool sub_14050E5E8()
{
  if ( !sub_1403B37B0() )
    return 0;
  _RAX = 1073741828LL;
  __asm { cpuid }
  return (_RAX & 0x80000) != 0;
}
