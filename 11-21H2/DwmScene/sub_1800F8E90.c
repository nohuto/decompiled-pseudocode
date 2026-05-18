/*
 * XREFs of sub_1800F8E90 @ 0x1800F8E90
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_1800F7D18 @ 0x1800F7D18 (sub_1800F7D18.c)
 *     sub_1800F881C @ 0x1800F881C (sub_1800F881C.c)
 *     sub_1800F8A14 @ 0x1800F8A14 (sub_1800F8A14.c)
 *     sub_1800FA768 @ 0x1800FA768 (sub_1800FA768.c)
 *     sub_1800FA818 @ 0x1800FA818 (sub_1800FA818.c)
 */

// Hidden C++ exception states: #wind=2
int __fastcall sub_1800F8E90(__int64 a1)
{
  struct _Mtx_internal_imp_t *v2; // rbx
  int v3; // eax
  __int64 *v4; // rsi
  _QWORD *v5; // rdi
  __int64 v6; // rdi
  __int64 v7; // rax
  __int64 v8; // r8
  __int64 v9; // rdi
  __int64 v10; // rax
  __int64 v11; // r8
  _BYTE v13[128]; // [rsp+30h] [rbp-98h] BYREF

  v2 = (struct _Mtx_internal_imp_t *)(a1 + 64);
  v3 = Mtx_lock((_Mtx_t)(a1 + 64));
  if ( v3 )
    std::_Throw_C_error(v3);
  v4 = (__int64 *)(a1 + 144);
  v5 = (_QWORD *)*v4;
  sub_1800F7D18((__int64)v4, (__int64)v4, *(char **)(*v4 + 8));
  v5[1] = v5;
  *v5 = v5;
  v5[2] = v5;
  v4[1] = 0LL;
  v6 = sub_1800FA768(v13);
  v7 = sub_1800F8A14(v4, (char *)&qword_1801FAD20);
  sub_1800F881C(v7, v6, v8);
  sub_1800FA818(v13);
  v9 = sub_1800FA768(v13);
  v10 = sub_1800F8A14(v4, (char *)&qword_1801FAD40);
  sub_1800F881C(v10, v9, v11);
  sub_1800FA818(v13);
  return Mtx_unlock(v2);
}
