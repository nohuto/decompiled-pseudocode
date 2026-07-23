/*
 * XREFs of sub_1409A0F20 @ 0x1409A0F20
 * Callers:
 *     sub_1405D3540 @ 0x1405D3540 (sub_1405D3540.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140811238 @ 0x140811238 (sub_140811238.c)
 */

__int64 __fastcall sub_1409A0F20(int a1, int a2, int a3)
{
  _QWORD v4[6]; // [rsp+20h] [rbp-40h] BYREF
  int v5; // [rsp+70h] [rbp+10h] BYREF
  int v6; // [rsp+78h] [rbp+18h] BYREF
  int v7; // [rsp+80h] [rbp+20h] BYREF

  v7 = a3;
  v6 = a2;
  v5 = a1;
  v4[1] = 4LL;
  v4[0] = &v5;
  v4[3] = 4LL;
  v4[2] = &v6;
  v4[5] = 4LL;
  v4[4] = &v7;
  return sub_140811238((__int64)qword_14003C0E8, 3u, (__int64)v4);
}
