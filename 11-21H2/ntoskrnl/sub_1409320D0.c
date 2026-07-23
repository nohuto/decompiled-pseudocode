/*
 * XREFs of sub_1409320D0 @ 0x1409320D0
 * Callers:
 *     sub_140800338 @ 0x140800338 (sub_140800338.c)
 * Callees:
 *     sub_140358A20 @ 0x140358A20 (sub_140358A20.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 sub_1409320D0()
{
  _BYTE v1[112]; // [rsp+20h] [rbp-88h] BYREF

  memset(v1, 0, 0x68uLL);
  return sub_140358A20(2u, 37, 0, (__int64)v1);
}
