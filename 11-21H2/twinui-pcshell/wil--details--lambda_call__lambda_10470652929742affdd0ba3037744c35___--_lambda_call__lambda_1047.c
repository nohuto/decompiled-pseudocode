/*
 * XREFs of wil::details::lambda_call__lambda_10470652929742affdd0ba3037744c35___::_lambda_call__lambda_10470652929742affdd0ba3037744c35___ @ 0x1803EA730
 * Callers:
 *     _UwpWindowEventDispatcher::UwpWindowShowRequested_::_1_::dtor$11 @ 0x1803F6F37 (_UwpWindowEventDispatcher--UwpWindowShowRequested_--_1_--dtor$11.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall wil::details::lambda_call__lambda_10470652929742affdd0ba3037744c35___::_lambda_call__lambda_10470652929742affdd0ba3037744c35___(
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
        (void *)0x56E,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
        (const char *)(unsigned int)v1);
  }
}
