/*
 * XREFs of sub_1403B3864 @ 0x1403B3864
 * Callers:
 *     sub_1403B36F4 @ 0x1403B36F4 (sub_1403B36F4.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14050E5E8 @ 0x14050E5E8 (sub_14050E5E8.c)
 */

bool sub_1403B3864()
{
  char v0; // r11
  char v1; // r10

  v0 = 0;
  v1 = 0;
  _RAX = 1LL;
  __asm { cpuid }
  if ( (_RCX & 0x200000) != 0 && (byte_140C09790 || (unsigned __int8)sub_14050E5E8(_RCX, _RDX)) )
    v1 = 1;
  return byte_140C0C686 != v0 && byte_140C4C678 == v0 && v1;
}
