/*
 * XREFs of sub_1800304D8 @ 0x1800304D8
 * Callers:
 *     sub_18003036C @ 0x18003036C (sub_18003036C.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_1800129F4 @ 0x1800129F4 (sub_1800129F4.c)
 *     sub_180030408 @ 0x180030408 (sub_180030408.c)
 *     sub_18004614C @ 0x18004614C (sub_18004614C.c)
 *     sub_1800465B0 @ 0x1800465B0 (sub_1800465B0.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_1800304D8(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 *v6; // rax
  _QWORD *v7; // rax
  unsigned __int64 v8; // rdx
  __int64 result; // rax
  _QWORD v10[2]; // [rsp+20h] [rbp-58h] BYREF
  __int64 v11[5]; // [rsp+30h] [rbp-48h] BYREF

  v11[4] = a3;
  v6 = sub_1800129F4(v11, a3);
  sub_18004614C(a1, v10, v6);
  v7 = (_QWORD *)sub_1800465B0(v10[0], v11);
  sub_180030408(a1, a2, v7);
  sub_180010910((__int64)v11);
  sub_180010910((__int64)v10);
  v8 = *(_QWORD *)(a3 + 24);
  if ( v8 >= 8 )
    sub_180010884(*(char **)a3, 2 * v8 + 2);
  result = 0LL;
  *(_QWORD *)(a3 + 16) = 0LL;
  *(_QWORD *)(a3 + 24) = 7LL;
  *(_WORD *)a3 = 0;
  return result;
}
