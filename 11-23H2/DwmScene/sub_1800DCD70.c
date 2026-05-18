/*
 * XREFs of sub_1800DCD70 @ 0x1800DCD70
 * Callers:
 *     sub_1800DCD70 @ 0x1800DCD70 (sub_1800DCD70.c)
 *     sub_1800DE7E0 @ 0x1800DE7E0 (sub_1800DE7E0.c)
 *     sub_1800DF180 @ 0x1800DF180 (sub_1800DF180.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180011C7C @ 0x180011C7C (sub_180011C7C.c)
 *     sub_180012440 @ 0x180012440 (sub_180012440.c)
 *     sub_180013348 @ 0x180013348 (sub_180013348.c)
 *     sub_18001E3BC @ 0x18001E3BC (sub_18001E3BC.c)
 *     sub_180041410 @ 0x180041410 (sub_180041410.c)
 *     sub_1800DC118 @ 0x1800DC118 (sub_1800DC118.c)
 *     j_?IsContext@WorkItem@details@Concurrency@@QEBA_NXZ @ 0x1800DC164 (j_-IsContext@WorkItem@details@Concurrency@@QEBA_NXZ.c)
 *     sub_1800DCD70 @ 0x1800DCD70 (sub_1800DCD70.c)
 *     sub_1800DE464 @ 0x1800DE464 (sub_1800DE464.c)
 *     sub_1800DFA18 @ 0x1800DFA18 (sub_1800DFA18.c)
 *     sub_1800DFB78 @ 0x1800DFB78 (sub_1800DFB78.c)
 *     sub_1800DFC44 @ 0x1800DFC44 (sub_1800DFC44.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_1800DCD70(__int64 a1, _QWORD *a2, _DWORD *a3)
{
  struct _Mtx_internal_imp_t *v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rdi
  _QWORD *v9; // rdx
  unsigned int v10; // edi
  _QWORD *v11; // rax
  __int64 v12; // rdi
  Concurrency::details::WorkItem *v13; // rcx
  _QWORD *v14; // rdx
  _QWORD *v15; // rax
  Concurrency::details::WorkItem *v16; // rax
  __int64 v18; // [rsp+20h] [rbp-39h] BYREF
  __int64 v19; // [rsp+28h] [rbp-31h]
  __int64 v20; // [rsp+40h] [rbp-19h]
  _QWORD v21[4]; // [rsp+48h] [rbp-11h] BYREF
  _QWORD v22[4]; // [rsp+68h] [rbp+Fh] BYREF

  v6 = (struct _Mtx_internal_imp_t *)(a1 + 64);
  v20 = a1 + 64;
  sub_180011C7C((struct _Mtx_internal_imp_t *)(a1 + 64));
  v7 = (*(__int64 (__fastcall **)(__int64, _QWORD *, _QWORD *))(*(_QWORD *)a1 + 56LL))(a1, v22, a2);
  v8 = sub_1800DE464(a1 + 144, v7);
  sub_180013348((__int64)v22);
  v9 = a2;
  if ( a2[3] >= 8uLL )
    v9 = (_QWORD *)*a2;
  if ( (unsigned __int8)sub_1800DFB78(v8, v9) )
  {
    v11 = sub_180012440(v21, (__int64)a2);
    v12 = sub_1800DFA18(v8, v11);
    if ( (unsigned __int8)sub_1800DFC44(v12) )
    {
      sub_18001E3BC(v22, (__int64)L"Value");
      v14 = v22;
      if ( v22[3] >= 8uLL )
        v14 = (_QWORD *)v22[0];
      if ( (unsigned __int8)sub_1800DFB78(v12, v14) )
      {
        v15 = sub_180012440(&v18, (__int64)v22);
        v16 = (Concurrency::details::WorkItem *)sub_1800DFA18(v12, v15);
        if ( Concurrency::details::WorkItem::IsContext(v16) )
        {
          *a3 = sub_1800DC118();
          sub_180013348((__int64)v22);
LABEL_20:
          v10 = 0;
          goto LABEL_21;
        }
      }
      sub_180013348((__int64)v22);
    }
    else if ( Concurrency::details::WorkItem::IsContext(v13) )
    {
      *a3 = *(_DWORD *)(v12 + 40);
      goto LABEL_20;
    }
    v10 = 1;
    goto LABEL_21;
  }
  sub_180041410(a1, &v18);
  if ( v18 )
  {
    v10 = sub_1800DCD70(v18, a2, a3);
    if ( v19 )
      sub_180010530(v19);
  }
  else
  {
    if ( v19 )
      sub_180010530(v19);
    v10 = 2;
  }
LABEL_21:
  Mtx_unlock(v6);
  return v10;
}
