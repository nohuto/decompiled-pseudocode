/*
 * XREFs of sub_1800DCF3C @ 0x1800DCF3C
 * Callers:
 *     sub_1800DCF3C @ 0x1800DCF3C (sub_1800DCF3C.c)
 *     sub_1800DE760 @ 0x1800DE760 (sub_1800DE760.c)
 *     sub_1800DF120 @ 0x1800DF120 (sub_1800DF120.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180011C7C @ 0x180011C7C (sub_180011C7C.c)
 *     sub_180012440 @ 0x180012440 (sub_180012440.c)
 *     sub_180013348 @ 0x180013348 (sub_180013348.c)
 *     sub_18001E3BC @ 0x18001E3BC (sub_18001E3BC.c)
 *     sub_180041410 @ 0x180041410 (sub_180041410.c)
 *     sub_1800DC124 @ 0x1800DC124 (sub_1800DC124.c)
 *     sub_1800DC170 @ 0x1800DC170 (sub_1800DC170.c)
 *     sub_1800DCF3C @ 0x1800DCF3C (sub_1800DCF3C.c)
 *     sub_1800DE464 @ 0x1800DE464 (sub_1800DE464.c)
 *     sub_1800DFA18 @ 0x1800DFA18 (sub_1800DFA18.c)
 *     sub_1800DFB78 @ 0x1800DFB78 (sub_1800DFB78.c)
 *     sub_1800DFC44 @ 0x1800DFC44 (sub_1800DFC44.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_1800DCF3C(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  __int64 v3; // xmm0_8
  struct _Mtx_internal_imp_t *v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rdi
  _QWORD *v10; // rdx
  unsigned int v11; // edi
  _QWORD *v12; // rax
  __int64 v13; // rdi
  _QWORD *v14; // rdx
  _QWORD *v15; // rax
  __int64 v17; // [rsp+20h] [rbp-39h] BYREF
  __int64 v18; // [rsp+28h] [rbp-31h]
  __int64 v19; // [rsp+40h] [rbp-19h]
  _QWORD v20[4]; // [rsp+48h] [rbp-11h] BYREF
  _QWORD v21[4]; // [rsp+68h] [rbp+Fh] BYREF

  v7 = (struct _Mtx_internal_imp_t *)(a1 + 64);
  v19 = a1 + 64;
  sub_180011C7C((struct _Mtx_internal_imp_t *)(a1 + 64));
  v8 = (*(__int64 (__fastcall **)(__int64, _QWORD *, _QWORD *))(*(_QWORD *)a1 + 56LL))(a1, v21, a2);
  v9 = sub_1800DE464(a1 + 144, v8);
  sub_180013348((__int64)v21);
  v10 = a2;
  if ( a2[3] >= 8uLL )
    v10 = (_QWORD *)*a2;
  if ( (unsigned __int8)sub_1800DFB78(v9, v10) )
  {
    v12 = sub_180012440(v20, (__int64)a2);
    v13 = sub_1800DFA18(v9, v12);
    if ( (unsigned __int8)sub_1800DFC44(v13) )
    {
      sub_18001E3BC(v21, (__int64)L"Value");
      v14 = v21;
      if ( v21[3] >= 8uLL )
        v14 = (_QWORD *)v21[0];
      if ( (unsigned __int8)sub_1800DFB78(v13, v14) )
      {
        v15 = sub_180012440(&v17, (__int64)v21);
        sub_1800DFA18(v13, v15);
        if ( (unsigned __int8)sub_1800DC170() )
        {
          sub_1800DC124();
          *a3 = v3;
          sub_180013348((__int64)v21);
LABEL_20:
          v11 = 0;
          goto LABEL_21;
        }
      }
      sub_180013348((__int64)v21);
    }
    else if ( (unsigned __int8)sub_1800DC170() )
    {
      *a3 = *(_QWORD *)(v13 + 48);
      goto LABEL_20;
    }
    v11 = 1;
    goto LABEL_21;
  }
  sub_180041410(a1, &v17);
  if ( v17 )
  {
    v11 = sub_1800DCF3C(v17, a2, a3);
    if ( v18 )
      sub_180010530(v18);
  }
  else
  {
    if ( v18 )
      sub_180010530(v18);
    v11 = 2;
  }
LABEL_21:
  Mtx_unlock(v7);
  return v11;
}
