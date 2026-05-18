/*
 * XREFs of sub_1800F9670 @ 0x1800F9670
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_1800F88AC @ 0x1800F88AC (sub_1800F88AC.c)
 *     sub_1800FAB78 @ 0x1800FAB78 (sub_1800FAB78.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
char __fastcall sub_1800F9670(__int64 a1, _QWORD *a2)
{
  struct _Mtx_internal_imp_t *v4; // rbx
  int v5; // eax
  __int64 v6; // rax
  __int64 v7; // rdi
  char v8; // di
  char *v10[3]; // [rsp+28h] [rbp-40h] BYREF
  unsigned __int64 v11; // [rsp+40h] [rbp-28h]

  v4 = (struct _Mtx_internal_imp_t *)(a1 + 64);
  v5 = Mtx_lock((_Mtx_t)(a1 + 64));
  if ( v5 )
    std::_Throw_C_error(v5);
  v6 = (*(__int64 (__fastcall **)(__int64, char **, _QWORD *))(*(_QWORD *)a1 + 56LL))(a1, v10, a2);
  v7 = sub_1800F88AC((__int64 *)(a1 + 144), v6);
  if ( v11 >= 8 )
    sub_180010884(v10[0], 2 * v11 + 2);
  v10[2] = 0LL;
  v11 = 7LL;
  LOWORD(v10[0]) = 0;
  if ( a2[3] >= 8uLL )
    a2 = (_QWORD *)*a2;
  v8 = sub_1800FAB78(v7, a2);
  Mtx_unlock(v4);
  return v8;
}
