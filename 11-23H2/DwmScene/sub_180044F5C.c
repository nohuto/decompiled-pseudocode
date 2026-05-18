/*
 * XREFs of sub_180044F5C @ 0x180044F5C
 * Callers:
 *     sub_180045FF8 @ 0x180045FF8 (sub_180045FF8.c)
 *     sub_180046554 @ 0x180046554 (sub_180046554.c)
 *     sub_18007E900 @ 0x18007E900 (sub_18007E900.c)
 *     sub_18007FF54 @ 0x18007FF54 (sub_18007FF54.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180011B24 @ 0x180011B24 (sub_180011B24.c)
 *     sub_180044DCC @ 0x180044DCC (sub_180044DCC.c)
 */

__int64 __fastcall sub_180044F5C(__int64 a1, __int64 a2, __int64 a3, __int128 *a4)
{
  _QWORD v7[5]; // [rsp+20h] [rbp-48h] BYREF
  __int128 v8; // [rsp+48h] [rbp-20h] BYREF
  __int64 v9; // [rsp+58h] [rbp-10h] BYREF

  v7[2] = a1;
  v7[4] = a2;
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_OWORD *)a1 = *(_OWORD *)a2;
  *(_OWORD *)(a1 + 16) = *(_OWORD *)(a2 + 16);
  *(_QWORD *)(a2 + 16) = 0LL;
  *(_QWORD *)(a2 + 24) = 15LL;
  *(_BYTE *)a2 = 0;
  *(_DWORD *)(a1 + 32) = 5;
  v8 = *a4;
  v7[0] = &v8;
  v7[1] = &v9;
  sub_180044DCC((__int64 *)(a1 + 40), (__int64)v7, a3);
  sub_180011B24(a2);
  return a1;
}
