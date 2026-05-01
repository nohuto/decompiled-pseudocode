/*
 * XREFs of ??C?$tip_test@U_tip_AppPrelaunch@@@tip@@QEAA?AV?$test_data_control@U_tip_AppPrelaunch@@@1@XZ @ 0x1801C48B8
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::VerifyAndActivateAppAsync$_ResumeCoro$1 @ 0x1801CCCE0 (winrt--Windows--Internal--Shell--implementation--DashboardManager--VerifyAndActivateAppAsync$_Re.c)
 * Callees:
 *     ?ensure_data@?$tip_test@U_tip_AppPrelaunch@@@tip@@AEBAAEAV?$shared_ptr@V?$test_merged_data@U_tip_AppPrelaunch@@@details@tip@@@std@@XZ @ 0x18011B350 (-ensure_data@-$tip_test@U_tip_AppPrelaunch@@@tip@@AEBAAEAV-$shared_ptr@V-$test_merged_data@U_tip.c)
 *     ??0?$test_data_control@U_tip_WidgetsAppInstallTIP@@@tip@@IEAA@AEBV?$shared_ptr@V?$test_merged_data@U_tip_WidgetsAppInstallTIP@@@details@tip@@@std@@@Z @ 0x1801C4054 (--0-$test_data_control@U_tip_WidgetsAppInstallTIP@@@tip@@IEAA@AEBV-$shared_ptr@V-$test_merged_da.c)
 */

_QWORD *__fastcall tip::tip_test<_tip_AppPrelaunch>::operator->(_QWORD *a1, _QWORD *a2)
{
  _QWORD *v3; // rax

  v3 = tip::tip_test<_tip_AppPrelaunch>::ensure_data(a1);
  tip::test_data_control<_tip_WidgetsAppInstallTIP>::test_data_control<_tip_WidgetsAppInstallTIP>(a2, v3);
  return a2;
}
