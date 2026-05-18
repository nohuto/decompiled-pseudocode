/*
 * XREFs of sub_1800451CC @ 0x1800451CC
 * Callers:
 *     sub_180045FF8 @ 0x180045FF8 (sub_180045FF8.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180011B24 @ 0x180011B24 (sub_180011B24.c)
 *     sub_180044E24 @ 0x180044E24 (sub_180044E24.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800451CC(__int64 a1, __int64 a2)
{
  _DWORD v5[4]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v6; // [rsp+30h] [rbp-28h]
  __int64 v7; // [rsp+40h] [rbp-18h]

  v6 = a1;
  v7 = a2;
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_OWORD *)a1 = *(_OWORD *)a2;
  *(_OWORD *)(a1 + 16) = *(_OWORD *)(a2 + 16);
  *(_QWORD *)(a2 + 16) = 0LL;
  *(_QWORD *)(a2 + 24) = 15LL;
  *(_BYTE *)a2 = 0;
  *(_DWORD *)(a1 + 32) = 0;
  v5[0] = 0;
  sub_180044E24((__int64 *)(a1 + 40), a2, v5);
  sub_180011B24(a2);
  return a1;
}
