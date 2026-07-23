/*
 * XREFs of sub_1403B3A6C @ 0x1403B3A6C
 * Callers:
 *     sub_1403B32E8 @ 0x1403B32E8 (sub_1403B32E8.c)
 *     sub_1403B3594 @ 0x1403B3594 (sub_1403B3594.c)
 *     sub_1403DE864 @ 0x1403DE864 (sub_1403DE864.c)
 *     sub_14050E854 @ 0x14050E854 (sub_14050E854.c)
 *     sub_14050F0A0 @ 0x14050F0A0 (sub_14050F0A0.c)
 *     sub_14051E90C @ 0x14051E90C (sub_14051E90C.c)
 *     sub_14085E510 @ 0x14085E510 (sub_14085E510.c)
 *     sub_140B27364 @ 0x140B27364 (sub_140B27364.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

char sub_1403B3A6C()
{
  char v0; // r8

  v0 = byte_140C0978E;
  if ( byte_140C0978E == -1 )
  {
    v0 = 0;
    _RAX = 1LL;
    __asm { cpuid }
    if ( (int)_RCX < 0 )
    {
      _RAX = 1073741825LL;
      __asm { cpuid }
      v0 = (_DWORD)_RAX == 1986945624;
    }
    byte_140C0978E = v0;
  }
  return v0;
}
