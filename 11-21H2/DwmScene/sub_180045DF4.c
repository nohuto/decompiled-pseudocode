/*
 * XREFs of sub_180045DF4 @ 0x180045DF4
 * Callers:
 *     sub_180070344 @ 0x180070344 (sub_180070344.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_1800129F4 @ 0x1800129F4 (sub_1800129F4.c)
 *     sub_180045E9C @ 0x180045E9C (sub_180045E9C.c)
 *     sub_18004614C @ 0x18004614C (sub_18004614C.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180045DF4(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 *v6; // rax
  __int64 v7; // rax
  unsigned __int64 v8; // rdx
  _BYTE v10[16]; // [rsp+20h] [rbp-68h] BYREF
  __int64 v11[5]; // [rsp+30h] [rbp-58h] BYREF

  v11[4] = a3;
  v6 = sub_1800129F4(v11, a3);
  v7 = sub_18004614C(a1, v10, v6);
  sub_180045E9C(a1, a2, v7);
  v8 = *(_QWORD *)(a3 + 24);
  if ( v8 >= 8 )
    sub_180010884(*(char **)a3, 2 * v8 + 2);
  *(_QWORD *)(a3 + 16) = 0LL;
  *(_QWORD *)(a3 + 24) = 7LL;
  *(_WORD *)a3 = 0;
  return a2;
}
