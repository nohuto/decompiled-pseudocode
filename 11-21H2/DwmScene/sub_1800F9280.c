/*
 * XREFs of sub_1800F9280 @ 0x1800F9280
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_1800129F4 @ 0x1800129F4 (sub_1800129F4.c)
 *     sub_1800F88AC @ 0x1800F88AC (sub_1800F88AC.c)
 *     sub_1800F94D4 @ 0x1800F94D4 (sub_1800F94D4.c)
 *     sub_1800FA89C @ 0x1800FA89C (sub_1800FA89C.c)
 *     sub_1800FAB78 @ 0x1800FAB78 (sub_1800FAB78.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800F9280(__int64 a1, _QWORD *a2)
{
  struct _Mtx_internal_imp_t *v4; // rbx
  int v5; // eax
  unsigned int v6; // esi
  __int64 v7; // rax
  __int64 v8; // rdi
  _QWORD *v9; // rdx
  __int64 *v10; // rax
  __int64 v11; // rax
  __int64 v13[4]; // [rsp+30h] [rbp-68h] BYREF
  char *v14[3]; // [rsp+50h] [rbp-48h] BYREF
  unsigned __int64 v15; // [rsp+68h] [rbp-30h]

  v4 = (struct _Mtx_internal_imp_t *)(a1 + 64);
  v5 = Mtx_lock((_Mtx_t)(a1 + 64));
  v6 = 0;
  if ( v5 )
    std::_Throw_C_error(v5);
  if ( a2[2] )
  {
    v7 = (*(__int64 (__fastcall **)(__int64, char **, _QWORD *))(*(_QWORD *)a1 + 56LL))(a1, v14, a2);
    v8 = sub_1800F88AC((__int64 *)(a1 + 144), v7);
    if ( v15 >= 8 )
      sub_180010884(v14[0], 2 * v15 + 2);
    v14[2] = 0LL;
    v15 = 7LL;
    LOWORD(v14[0]) = 0;
    v9 = a2;
    if ( a2[3] >= 8uLL )
      v9 = (_QWORD *)*a2;
    if ( (unsigned __int8)sub_1800FAB78(v8, v9) )
    {
      v10 = sub_1800129F4(v13, (__int64)a2);
      v11 = sub_1800FA89C(v8, v10);
      v6 = sub_1800F94D4(a1, v11);
    }
  }
  Mtx_unlock(v4);
  return v6;
}
