/*
 * XREFs of ??1?$test_data_control@U_tip_AppPrelaunch@@@tip@@QEAA@XZ @ 0x180039960
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::ToggleDashboardVisibilityAsync$_ResumeCoro$1 @ 0x1801CBB10 (winrt--Windows--Internal--Shell--implementation--DashboardManager--ToggleDashboardV_ea_1801CBB10.c)
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::VerifyAndActivateAppAsync$_ResumeCoro$1 @ 0x1801CCCE0 (winrt--Windows--Internal--Shell--implementation--DashboardManager--VerifyAndActivateAppAsync$_Re.c)
 *     _winrt::Windows::Internal::Shell::implementation::DashboardManager::VerifyAndActivateAppAsync$_ResumeCoro$1_::_1_::dtor$3 @ 0x1801CD786 (_winrt--Windows--Internal--Shell--implementation--DashboardManager--VerifyAndActiva_ea_1801CD786.c)
 * Callees:
 *     ?reset@?$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAAXXZ @ 0x180016F04 (-reset@-$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAAXXZ.c)
 *     ?end_update@?$test_common_data@$00@details@tip@@QEAAXXZ @ 0x180120A64 (-end_update@-$test_common_data@$00@details@tip@@QEAAXXZ.c)
 */

void __fastcall tip::test_data_control<_tip_AppPrelaunch>::~test_data_control<_tip_AppPrelaunch>(__int64 *a1)
{
  __int64 v2; // rcx
  std::_Ref_count_base *v3; // rcx

  v2 = *a1;
  if ( v2 )
  {
    tip::details::test_common_data<1>::end_update(v2 + 8);
    std::shared_ptr<PeoplePaneViewInfo>::reset(a1);
  }
  v3 = (std::_Ref_count_base *)a1[1];
  if ( v3 )
    std::_Ref_count_base::_Decref(v3);
}
