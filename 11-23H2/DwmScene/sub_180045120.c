/*
 * XREFs of sub_180045120 @ 0x180045120
 * Callers:
 *     sub_180045298 @ 0x180045298 (sub_180045298.c)
 *     sub_180045FF8 @ 0x180045FF8 (sub_180045FF8.c)
 *     sub_18007E900 @ 0x18007E900 (sub_18007E900.c)
 *     sub_18007FF54 @ 0x18007FF54 (sub_18007FF54.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180011B24 @ 0x180011B24 (sub_180011B24.c)
 *     sub_180044DCC @ 0x180044DCC (sub_180044DCC.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180045120(__int64 a1, __int64 a2, __int64 a3, float a4)
{
  float v7; // [rsp+20h] [rbp-48h] BYREF
  int v8; // [rsp+24h] [rbp-44h] BYREF
  _QWORD v9[5]; // [rsp+30h] [rbp-38h] BYREF

  v9[2] = a1;
  v9[4] = a2;
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_OWORD *)a1 = *(_OWORD *)a2;
  *(_OWORD *)(a1 + 16) = *(_OWORD *)(a2 + 16);
  *(_QWORD *)(a2 + 16) = 0LL;
  *(_QWORD *)(a2 + 24) = 15LL;
  *(_BYTE *)a2 = 0;
  *(_DWORD *)(a1 + 32) = 2;
  v7 = a4;
  v9[0] = &v7;
  v9[1] = &v8;
  sub_180044DCC((__int64 *)(a1 + 40), (__int64)v9, a3);
  sub_180011B24(a2);
  return a1;
}
