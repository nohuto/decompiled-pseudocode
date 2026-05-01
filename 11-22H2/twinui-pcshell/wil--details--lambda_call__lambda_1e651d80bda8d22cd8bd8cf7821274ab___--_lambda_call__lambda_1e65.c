/*
 * XREFs of wil::details::lambda_call__lambda_1e651d80bda8d22cd8bd8cf7821274ab___::_lambda_call__lambda_1e651d80bda8d22cd8bd8cf7821274ab___ @ 0x1801D8998
 * Callers:
 *     ?SwitchTo@CApplicationViewManager@@UEAAJPEAUIApplicationView@@@Z @ 0x1803CC390 (-SwitchTo@CApplicationViewManager@@UEAAJPEAUIApplicationView@@@Z.c)
 *     _CApplicationViewManager::SwitchTo_::_1_::dtor$0 @ 0x1803CC451 (_CApplicationViewManager--SwitchTo_--_1_--dtor$0.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall wil::details::lambda_call__lambda_1e651d80bda8d22cd8bd8cf7821274ab___::_lambda_call__lambda_1e651d80bda8d22cd8bd8cf7821274ab___(
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
        (void *)0x2CF,
        (int)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
        (const char *)(unsigned int)v1);
  }
}
