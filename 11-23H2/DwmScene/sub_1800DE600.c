/*
 * XREFs of sub_1800DE600 @ 0x1800DE600
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180011C7C @ 0x180011C7C (sub_180011C7C.c)
 *     sub_1800DD6AC @ 0x1800DD6AC (sub_1800DD6AC.c)
 *     sub_1800DDA48 @ 0x1800DDA48 (sub_1800DDA48.c)
 *     sub_1800DE3C4 @ 0x1800DE3C4 (sub_1800DE3C4.c)
 *     sub_1800DF954 @ 0x1800DF954 (sub_1800DF954.c)
 *     sub_1800DF9E4 @ 0x1800DF9E4 (sub_1800DF9E4.c)
 */

// Hidden C++ exception states: #wind=2
int __fastcall sub_1800DE600(__int64 a1)
{
  __int64 *v1; // rsi
  struct _Mtx_internal_imp_t *v2; // rbx
  _QWORD *v3; // rdi
  __int64 v4; // rdi
  _QWORD *v5; // rax
  __int64 v6; // rdi
  _QWORD *v7; // rax
  _BYTE v9[24]; // [rsp+28h] [rbp-B0h] BYREF
  _BYTE v10[128]; // [rsp+40h] [rbp-98h] BYREF

  v1 = (__int64 *)(a1 + 144);
  v2 = (struct _Mtx_internal_imp_t *)(a1 + 64);
  sub_180011C7C((struct _Mtx_internal_imp_t *)(a1 + 64));
  v3 = (_QWORD *)*v1;
  sub_1800DD6AC((__int64)v1, (__int64)v1, *(char **)(*v1 + 8));
  v3[1] = v3;
  *v3 = v3;
  v3[2] = v3;
  v1[1] = 0LL;
  v4 = sub_1800DF954(v10);
  v5 = (_QWORD *)sub_1800DDA48(v1, (__int64)v9, qword_1801D88B0);
  sub_1800DE3C4(*v5 + 64LL, v4);
  sub_1800DF9E4(v10);
  v6 = sub_1800DF954(v10);
  v7 = (_QWORD *)sub_1800DDA48(v1, (__int64)v9, qword_1801D88D0);
  sub_1800DE3C4(*v7 + 64LL, v6);
  sub_1800DF9E4(v10);
  return Mtx_unlock(v2);
}
