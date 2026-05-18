/*
 * XREFs of sub_18008784C @ 0x18008784C
 * Callers:
 *     sub_180060378 @ 0x180060378 (sub_180060378.c)
 *     sub_18007E900 @ 0x18007E900 (sub_18007E900.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180010DD0 @ 0x180010DD0 (sub_180010DD0.c)
 *     sub_180011B24 @ 0x180011B24 (sub_180011B24.c)
 *     sub_180017648 @ 0x180017648 (sub_180017648.c)
 *     sub_1800878E8 @ 0x1800878E8 (sub_1800878E8.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18008784C(__int64 a1, __int64 a2)
{
  __int64 v4; // rdi
  _QWORD *v5; // rbx
  _QWORD *v6; // rax
  _QWORD v8[4]; // [rsp+30h] [rbp-68h] BYREF
  _QWORD v9[5]; // [rsp+50h] [rbp-48h] BYREF

  v9[4] = a2;
  v4 = **(_QWORD **)(a1 + 24);
  v5 = sub_180010DD0(v8, (__int64)byte_180106082);
  v6 = sub_180017648(v9, a2);
  sub_1800878E8(a1, v6, v4, v5);
  return sub_180011B24(a2);
}
