/*
 * XREFs of _lambda_f68c69481c14453c9aa040a1bc7d2eb1_::operator() @ 0x18063E630
 * Callers:
 *     wistd::__function::__func__lambda_f68c69481c14453c9aa040a1bc7d2eb1__void___cdecl(enum_wil::RegistryChangeKind)_::operator() @ 0x18063E740 (wistd--__function--__func__lambda_f68c69481c14453c9aa040a1bc7d2eb1__void___cdecl(enum_wil--Regis.c)
 * Callees:
 *     ??0?$shared_ptr@V?$test_merged_data@U_tip_DeactivateRemoteDesktopTipTest@@@details@tip@@@std@@QEAA@AEBV01@@Z @ 0x18008D2F8 (--0-$shared_ptr@V-$test_merged_data@U_tip_DeactivateRemoteDesktopTipTest@@@details@tip@@@std@@QE.c)
 *     ?RegKeyCallback@StartupAppMonitor@@SAXV?$shared_ptr@UREGKEYINFO@@@std@@W4RegistryChangeKind@wil@@@Z @ 0x18063F02C (-RegKeyCallback@StartupAppMonitor@@SAXV-$shared_ptr@UREGKEYINFO@@@std@@W4RegistryChangeKind@wil@.c)
 */

__int64 __fastcall lambda_f68c69481c14453c9aa040a1bc7d2eb1_::operator()(_QWORD *a1)
{
  const char *v1; // r9
  __int64 result; // rax
  _QWORD v3[3]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  std::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>(
    v3,
    a1);
  try
  {
    result = StartupAppMonitor::RegKeyCallback();
  }
  catch ( ... )
  {
    return wil::details::in1diag3::Log_CaughtException(
             retaddr,
             (void *)0x40,
             (int)"pcshell\\twinui\\startupappmonitor\\lib\\startupappmonitorimpl.cpp",
             v1);
  }
  return result;
}
