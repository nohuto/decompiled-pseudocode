/*
 * XREFs of _lambda_3c92ed9cb50454309e6daa2ca29a5fa1_::operator() @ 0x18057F57C
 * Callers:
 *     wistd::__function::__func__lambda_3c92ed9cb50454309e6daa2ca29a5fa1__void___cdecl(enum_wil::RegistryChangeKind)_::operator() @ 0x18057F700 (wistd--__function--__func__lambda_3c92ed9cb50454309e6daa2ca29a5fa1__void___cdecl(enum_wil--Regis.c)
 * Callees:
 *     ??0?$shared_ptr@V?$test_merged_data@U_tip_SmartFillTest@@@details@tip@@@std@@QEAA@AEBV01@@Z @ 0x180016DE4 (--0-$shared_ptr@V-$test_merged_data@U_tip_SmartFillTest@@@details@tip@@@std@@QEAA@AEBV01@@Z.c)
 *     ?ParentRegKeyCallback@StartupAppMonitor@@SAXV?$shared_ptr@UREGKEYINFO@@@std@@W4RegistryChangeKind@wil@@@Z @ 0x18057FDC8 (-ParentRegKeyCallback@StartupAppMonitor@@SAXV-$shared_ptr@UREGKEYINFO@@@std@@W4RegistryChangeKin.c)
 */

__int64 __fastcall lambda_3c92ed9cb50454309e6daa2ca29a5fa1_::operator()(_QWORD *a1)
{
  const char *v1; // r9
  __int64 result; // rax
  _QWORD v3[3]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  std::shared_ptr<tip::details::test_merged_data<_tip_SmartFillTest>>::shared_ptr<tip::details::test_merged_data<_tip_SmartFillTest>>(
    v3,
    a1);
  try
  {
    result = StartupAppMonitor::ParentRegKeyCallback();
  }
  catch ( ... )
  {
    return wil::details::in1diag3::Log_CaughtException(
             retaddr,
             (void *)0x5E,
             (int)"pcshell\\twinui\\startupappmonitor\\lib\\startupappmonitorimpl.cpp",
             v1);
  }
  return result;
}
