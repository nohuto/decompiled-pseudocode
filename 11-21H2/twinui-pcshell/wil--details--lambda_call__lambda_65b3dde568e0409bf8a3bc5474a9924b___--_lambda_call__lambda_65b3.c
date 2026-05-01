/*
 * XREFs of wil::details::lambda_call__lambda_65b3dde568e0409bf8a3bc5474a9924b___::_lambda_call__lambda_65b3dde568e0409bf8a3bc5474a9924b___ @ 0x1803EA78C
 * Callers:
 *     _UwpWindowEventDispatcher::UwpWindowSwitchRequested_::_1_::dtor$5 @ 0x1803F7476 (_UwpWindowEventDispatcher--UwpWindowSwitchRequested_--_1_--dtor$5.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall wil::details::lambda_call__lambda_65b3dde568e0409bf8a3bc5474a9924b___::_lambda_call__lambda_65b3dde568e0409bf8a3bc5474a9924b___(
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
        (void *)0x5C7,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
        (const char *)(unsigned int)v1);
  }
}
