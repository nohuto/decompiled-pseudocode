/*
 * XREFs of sub_18005D470 @ 0x18005D470
 * Callers:
 *     sub_180059EA8 @ 0x180059EA8 (sub_180059EA8.c)
 *     sub_18006D0BC @ 0x18006D0BC (sub_18006D0BC.c)
 *     sub_18008DC1C @ 0x18008DC1C (sub_18008DC1C.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180011B24 @ 0x180011B24 (sub_180011B24.c)
 *     sub_180017648 @ 0x180017648 (sub_180017648.c)
 *     sub_180058DE4 @ 0x180058DE4 (sub_180058DE4.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18005D470(__int64 a1, __int64 a2, _DWORD *a3, int a4)
{
  _DWORD *v7; // rdx
  _BYTE v9[16]; // [rsp+28h] [rbp-50h] BYREF
  __int64 v10; // [rsp+38h] [rbp-40h]
  int v11; // [rsp+40h] [rbp-38h] BYREF
  _QWORD v12[4]; // [rsp+48h] [rbp-30h] BYREF

  v10 = a2;
  v11 = a4;
  sub_180017648(v12, a2);
  v7 = *(_DWORD **)sub_180058DE4((_QWORD *)(a1 + 1616), (__int64)v9, &v11);
  v7[18] = *a3;
  v7[19] = a3[1];
  v7[20] = a3[2];
  v7[21] = a3[3];
  sub_180011B24((__int64)v12);
  return sub_180011B24(a2);
}
