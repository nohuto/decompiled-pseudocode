/*
 * XREFs of sub_14054FF30 @ 0x14054FF30
 * Callers:
 *     sub_140882604 @ 0x140882604 (sub_140882604.c)
 *     sub_1409317A0 @ 0x1409317A0 (sub_1409317A0.c)
 * Callees:
 *     sub_140358A20 @ 0x140358A20 (sub_140358A20.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall sub_14054FF30(__int64 a1)
{
  _QWORD v3[14]; // [rsp+20h] [rbp-88h] BYREF

  memset(v3, 0, 0x68uLL);
  v3[1] = a1;
  return sub_140358A20(2u, 30, 0, (__int64)v3);
}
