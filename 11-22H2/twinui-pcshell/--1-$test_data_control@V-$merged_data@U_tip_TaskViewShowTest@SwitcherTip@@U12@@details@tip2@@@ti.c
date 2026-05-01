/*
 * XREFs of ??1?$test_data_control@V?$merged_data@U_tip_TaskViewShowTest@SwitcherTip@@U12@@details@tip2@@@tip2@@QEAA@XZ @ 0x18028A160
 * Callers:
 *     ?ViewLoaded@TaskViewHost@@UEAAJXZ @ 0x18001CF30 (-ViewLoaded@TaskViewHost@@UEAAJXZ.c)
 *     ?Show@TaskViewHost@@UEAAJPEAUIImmersiveMonitorManager@@PEAUIImmersiveMonitor@@W4ALL_UP_VIEW_FLAGS@@@Z @ 0x18007A310 (-Show@TaskViewHost@@UEAAJPEAUIImmersiveMonitorManager@@PEAUIImmersiveMonitor@@W4ALL_UP_VIEW_FLAG.c)
 * Callees:
 *     ?end_update@?$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAXXZ @ 0x180086920 (-end_update@-$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAXXZ.c)
 *     ?reset@?$com_ptr_t@V?$merged_data@U_tip_TaskViewShowTest@SwitcherTip@@U12@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18028AF34 (-reset@-$com_ptr_t@V-$merged_data@U_tip_TaskViewShowTest@SwitcherTip@@U12@@details@tip2@@Uerr_re.c)
 */

__int64 __fastcall tip2::test_data_control<tip2::details::merged_data<SwitcherTip::_tip_TaskViewShowTest,SwitcherTip::_tip_TaskViewShowTest>>::~test_data_control<tip2::details::merged_data<SwitcherTip::_tip_TaskViewShowTest,SwitcherTip::_tip_TaskViewShowTest>>(
        void **a1,
        __int64 a2)
{
  void *v3; // rcx

  v3 = *a1;
  if ( v3 )
  {
    tip2::details::shared_data<0,0,0>::end_update((__int64)v3 + 8, a2);
    wil::com_ptr_t<tip2::details::merged_data<SwitcherTip::_tip_TaskViewShowTest,SwitcherTip::_tip_TaskViewShowTest>,wil::err_returncode_policy>::reset(a1);
  }
  return wil::com_ptr_t<tip2::details::merged_data<SwitcherTip::_tip_TaskViewShowTest,SwitcherTip::_tip_TaskViewShowTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<SwitcherTip::_tip_TaskViewShowTest,SwitcherTip::_tip_TaskViewShowTest>,wil::err_returncode_policy>(a1);
}
