/*
 * XREFs of wil::details::ScopeExitFn__lambda_20ce1ce428f4836adb2156ca7fb68eee___::_ScopeExitFn__lambda_20ce1ce428f4836adb2156ca7fb68eee___ @ 0x1803DEE7C
 * Callers:
 *     _WindowEventDispatcher::AppViewShowRequested_::_1_::dtor$7 @ 0x1803E0FD7 (_WindowEventDispatcher--AppViewShowRequested_--_1_--dtor$7.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall wil::details::ScopeExitFn__lambda_20ce1ce428f4836adb2156ca7fb68eee___::_ScopeExitFn__lambda_20ce1ce428f4836adb2156ca7fb68eee___(
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
        (void *)0x406,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
        (const char *)(unsigned int)v1);
  }
}
