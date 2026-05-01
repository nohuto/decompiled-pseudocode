/*
 * XREFs of ?_lambda_invoker_cdecl_@_lambda_10c2d457696a47a750b06b77de2a577d_@@CAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x180457760
 * Callers:
 *     <none>
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18018F71C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall _lambda_10c2d457696a47a750b06b77de2a577d_::_lambda_invoker_cdecl_(
        struct _WNF_STATE_NAME a1,
        int a2,
        struct _WNF_TYPE_ID *a3,
        const char *a4,
        const void *a5,
        unsigned int a6)
{
  __int64 v6; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a2 )
  {
    if ( a6 != 4 )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x38B,
        (int)"onecore\\internal\\sdk\\inc\\wil\\Resource.h",
        a4);
    v6 = *((_QWORD *)a4 + 16);
    if ( !v6 )
      __fastfail(7u);
    (*(void (__fastcall **)(__int64, const void *, struct _WNF_TYPE_ID *))(*(_QWORD *)v6 + 32LL))(v6, a5, a3);
  }
  return 0LL;
}
