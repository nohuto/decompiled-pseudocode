/*
 * XREFs of sub_1800DEC60 @ 0x1800DEC60
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180011C7C @ 0x180011C7C (sub_180011C7C.c)
 *     sub_180013348 @ 0x180013348 (sub_180013348.c)
 *     sub_1800DE464 @ 0x1800DE464 (sub_1800DE464.c)
 *     sub_1800DFB78 @ 0x1800DFB78 (sub_1800DFB78.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
char __fastcall sub_1800DEC60(__int64 a1, _QWORD *a2)
{
  struct _Mtx_internal_imp_t *v4; // rbx
  _QWORD *v5; // rax
  __int64 v6; // rdi
  char v7; // di
  _BYTE v9[32]; // [rsp+28h] [rbp-40h] BYREF

  v4 = (struct _Mtx_internal_imp_t *)(a1 + 64);
  sub_180011C7C((struct _Mtx_internal_imp_t *)(a1 + 64));
  v5 = (_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *, _QWORD *))(*(_QWORD *)a1 + 56LL))(a1, v9, a2);
  v6 = sub_1800DE464((__int64 *)(a1 + 144), v5);
  sub_180013348((__int64)v9);
  if ( a2[3] >= 8uLL )
    a2 = (_QWORD *)*a2;
  v7 = sub_1800DFB78(v6, a2);
  Mtx_unlock(v4);
  return v7;
}
