/*
 * XREFs of wil::details::lambda_call__lambda_c359444cdd8593d0f82fb42f1def3c63___::_lambda_call__lambda_c359444cdd8593d0f82fb42f1def3c63___ @ 0x1803EA7E8
 * Callers:
 *     _UwpWindowEventDispatcher::RecoverViews_::_1_::dtor$5 @ 0x1803F0677 (_UwpWindowEventDispatcher--RecoverViews_--_1_--dtor$5.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall wil::details::lambda_call__lambda_c359444cdd8593d0f82fb42f1def3c63___::_lambda_call__lambda_c359444cdd8593d0f82fb42f1def3c63___(
        _BYTE *a1)
{
  int v1; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a1[8] )
  {
    a1[8] = 0;
    v1 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(***(_QWORD ***)a1 + 344LL))(**(_QWORD **)a1, 0LL);
    if ( v1 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x8A8,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
        (const char *)(unsigned int)v1);
  }
}
