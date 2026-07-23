/*
 * XREFs of sub_1403DE864 @ 0x1403DE864
 * Callers:
 *     sub_1403B38C8 @ 0x1403B38C8 (sub_1403B38C8.c)
 *     sub_14050E430 @ 0x14050E430 (sub_14050E430.c)
 *     sub_14050E460 @ 0x14050E460 (sub_14050E460.c)
 * Callees:
 *     sub_1403B37B0 @ 0x1403B37B0 (sub_1403B37B0.c)
 *     sub_1403B3A6C @ 0x1403B3A6C (sub_1403B3A6C.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

bool sub_1403DE864()
{
  bool v0; // zf

  if ( sub_1403B37B0() )
  {
    _RAX = 1073741827LL;
    __asm { cpuid }
    v0 = (_RDX & 0x100) == 0;
  }
  else
  {
    v0 = sub_1403B3A6C() == 0;
  }
  return !v0;
}
