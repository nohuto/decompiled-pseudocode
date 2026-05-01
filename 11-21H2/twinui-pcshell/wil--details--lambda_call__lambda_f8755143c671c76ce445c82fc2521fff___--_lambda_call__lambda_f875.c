/*
 * XREFs of wil::details::lambda_call__lambda_f8755143c671c76ce445c82fc2521fff___::_lambda_call__lambda_f8755143c671c76ce445c82fc2521fff___ @ 0x18030F960
 * Callers:
 *     _CApplicationViewManager::SwitchTo_::_1_::dtor$0 @ 0x180310B6B (_CApplicationViewManager--SwitchTo_--_1_--dtor$0.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall wil::details::lambda_call__lambda_f8755143c671c76ce445c82fc2521fff___::_lambda_call__lambda_f8755143c671c76ce445c82fc2521fff___(
        _BYTE *a1)
{
  int v1; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a1[8] )
  {
    a1[8] = 0;
    v1 = (*(__int64 (__fastcall **)(_QWORD))(***(_QWORD ***)a1 + 56LL))(**(_QWORD **)a1);
    if ( v1 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x2CC,
        (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
        (const char *)(unsigned int)v1);
  }
}
