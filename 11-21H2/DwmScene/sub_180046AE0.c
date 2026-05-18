/*
 * XREFs of sub_180046AE0 @ 0x180046AE0
 * Callers:
 *     sub_180015360 @ 0x180015360 (sub_180015360.c)
 *     sub_180015C60 @ 0x180015C60 (sub_180015C60.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_1800129F4 @ 0x1800129F4 (sub_1800129F4.c)
 *     sub_1800441CC @ 0x1800441CC (sub_1800441CC.c)
 *     sub_1800441E4 @ 0x1800441E4 (sub_1800441E4.c)
 *     sub_18004614C @ 0x18004614C (sub_18004614C.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180046AE0(__int64 a1, __int64 a2)
{
  __int64 *v4; // rax
  __int64 v5; // rcx
  char v6; // al
  char *v7; // rdx
  unsigned __int64 v8; // rdx
  __int64 result; // rax
  char v10[8]; // [rsp+20h] [rbp-58h] BYREF
  _QWORD v11[2]; // [rsp+28h] [rbp-50h] BYREF
  __int64 v12[5]; // [rsp+38h] [rbp-40h] BYREF

  v12[4] = a2;
  v4 = sub_1800129F4(v12, a2);
  v5 = *sub_18004614C(a1, v11, (char *)v4) + 72LL;
  v10[0] = 1;
  sub_1800441CC(v5);
  v6 = sub_1800441E4((__int64)v10);
  *v7 = v6;
  sub_180010910((__int64)v11);
  v8 = *(_QWORD *)(a2 + 24);
  if ( v8 >= 8 )
    sub_180010884(*(char **)a2, 2 * v8 + 2);
  result = 0LL;
  *(_QWORD *)(a2 + 16) = 0LL;
  *(_QWORD *)(a2 + 24) = 7LL;
  *(_WORD *)a2 = 0;
  return result;
}
