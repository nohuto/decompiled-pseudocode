/*
 * XREFs of wil::details::ScopeExitFn__lambda_60697f14981c94887dfc91549ceffe6a___::_ScopeExitFn__lambda_60697f14981c94887dfc91549ceffe6a___ @ 0x1803DEF34
 * Callers:
 *     _WindowEventDispatcher::AppViewActivationShowRequested_::_1_::dtor$6 @ 0x180220739 (_WindowEventDispatcher--AppViewActivationShowRequested_--_1_--dtor$6.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall wil::details::ScopeExitFn__lambda_60697f14981c94887dfc91549ceffe6a___::_ScopeExitFn__lambda_60697f14981c94887dfc91549ceffe6a___(
        _BYTE *a1)
{
  int v1; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a1[8] )
  {
    a1[8] = 0;
    v1 = (*(__int64 (__fastcall **)(_QWORD, __int64))(***(_QWORD ***)a1 + 24LL))(**(_QWORD **)a1, 2147500037LL);
    if ( v1 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x399,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
        (const char *)(unsigned int)v1);
  }
}
