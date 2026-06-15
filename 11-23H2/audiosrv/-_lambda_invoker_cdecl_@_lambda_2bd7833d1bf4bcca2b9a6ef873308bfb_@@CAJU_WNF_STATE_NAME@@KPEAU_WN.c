/*
 * XREFs of ?_lambda_invoker_cdecl_@_lambda_2bd7833d1bf4bcca2b9a6ef873308bfb_@@CAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x180102F70
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Log_HrMsg@in1diag3@details@wil@@YAJPEAXIPEBDJ1ZZ @ 0x1801086A0 (-Log_HrMsg@in1diag3@details@wil@@YAJPEAXIPEBDJ1ZZ.c)
 */

__int64 __fastcall _lambda_2bd7833d1bf4bcca2b9a6ef873308bfb_::_lambda_invoker_cdecl_(
        struct _WNF_STATE_NAME a1,
        __int64 a2,
        struct _WNF_TYPE_ID *a3,
        _QWORD *a4,
        const void *a5,
        unsigned int a6)
{
  __int64 v6; // rcx
  const char *v8; // [rsp+28h] [rbp-20h]
  unsigned __int64 v9; // [rsp+30h] [rbp-18h] BYREF
  const void *v10; // [rsp+38h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  if ( (a6 & 1) != 0 )
  {
    wil::details::in1diag3::Log_HrMsg(
      retaddr,
      (void *)0x3E0,
      (unsigned int)"onecore\\internal\\sdk\\inc\\wil\\resource.h",
      (const char *)0x8000FFFFLL,
      (int)"Inconsistent state data size in WNF callback",
      v8);
  }
  else
  {
    v6 = a4[16];
    v9 = (unsigned __int64)a6 >> 1;
    v10 = a5;
    if ( !v6 )
      __fastfail(7u);
    (*(void (__fastcall **)(__int64, const void **, unsigned __int64 *))(*(_QWORD *)v6 + 32LL))(v6, &v10, &v9);
  }
  return 0LL;
}
