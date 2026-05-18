/*
 * XREFs of sub_1800DE990 @ 0x1800DE990
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180011C7C @ 0x180011C7C (sub_180011C7C.c)
 *     sub_180012440 @ 0x180012440 (sub_180012440.c)
 *     sub_180013348 @ 0x180013348 (sub_180013348.c)
 *     sub_18001F84C @ 0x18001F84C (sub_18001F84C.c)
 *     sub_1800DE464 @ 0x1800DE464 (sub_1800DE464.c)
 *     sub_1800DEB70 @ 0x1800DEB70 (sub_1800DEB70.c)
 *     sub_1800DFA18 @ 0x1800DFA18 (sub_1800DFA18.c)
 *     sub_1800DFB78 @ 0x1800DFB78 (sub_1800DFB78.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800DE990(__int64 a1, _QWORD *a2)
{
  struct _Mtx_internal_imp_t *v4; // rbx
  unsigned int v5; // esi
  _QWORD *v6; // rax
  __int64 v7; // rdi
  _QWORD *v8; // rdx
  _QWORD *v9; // rax
  __int64 v10; // rax
  _QWORD v12[4]; // [rsp+30h] [rbp-68h] BYREF
  _BYTE v13[32]; // [rsp+50h] [rbp-48h] BYREF

  v4 = (struct _Mtx_internal_imp_t *)(a1 + 64);
  sub_180011C7C((struct _Mtx_internal_imp_t *)(a1 + 64));
  v5 = 0;
  if ( !sub_18001F84C((__int64)a2) )
  {
    v6 = (_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *, _QWORD *))(*(_QWORD *)a1 + 56LL))(a1, v13, a2);
    v7 = sub_1800DE464((__int64 *)(a1 + 144), v6);
    sub_180013348((__int64)v13);
    v8 = a2;
    if ( a2[3] >= 8uLL )
      v8 = (_QWORD *)*a2;
    if ( (unsigned __int8)sub_1800DFB78(v7, v8) )
    {
      v9 = sub_180012440(v12, (__int64)a2);
      v10 = sub_1800DFA18(v7, v9);
      v5 = sub_1800DEB70(a1, v10);
    }
  }
  Mtx_unlock(v4);
  return v5;
}
