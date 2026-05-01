/*
 * XREFs of ??C?$test_watcher@U_tip_SwipeDashboard@@@tip@@QEAA?AV?$test_data_control@U_tip_SwipeDashboard@@@1@XZ @ 0x180033F74
 * Callers:
 *     _lambda_062269caf21d1731995437aeb6cb5354_::operator() @ 0x1801C49D4 (_lambda_062269caf21d1731995437aeb6cb5354_--operator().c)
 *     _lambda_50eab521f3249b7fa1c207805ae80cf1_::operator() @ 0x1801C4DA0 (_lambda_50eab521f3249b7fa1c207805ae80cf1_--operator().c)
 *     _lambda_ff813731644cb9328dc438ea795a8eda_::operator() @ 0x1801C58BC (_lambda_ff813731644cb9328dc438ea795a8eda_--operator().c)
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::ToggleDashboardVisibilityAsync$_ResumeCoro$1 @ 0x1801CBB10 (winrt--Windows--Internal--Shell--implementation--DashboardManager--ToggleDashboardV_ea_1801CBB10.c)
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::VerifyAndActivateAppAsync$_ResumeCoro$1 @ 0x1801CCCE0 (winrt--Windows--Internal--Shell--implementation--DashboardManager--VerifyAndActivateAppAsync$_Re.c)
 * Callees:
 *     ??0?$shared_ptr@V?$test_merged_data@U_tip_SmartFillTest@@@details@tip@@@std@@QEAA@AEBV01@@Z @ 0x180016DE4 (--0-$shared_ptr@V-$test_merged_data@U_tip_SmartFillTest@@@details@tip@@@std@@QEAA@AEBV01@@Z.c)
 *     ?begin_update@?$test_common_data@$00@details@tip@@QEAA_NXZ @ 0x180120B54 (-begin_update@-$test_common_data@$00@details@tip@@QEAA_NXZ.c)
 */

_QWORD *__fastcall tip::test_watcher<_tip_SwipeDashboard>::operator->(__int64 a1, _QWORD *a2)
{
  std::shared_ptr<tip::details::test_merged_data<_tip_SmartFillTest>>::shared_ptr<tip::details::test_merged_data<_tip_SmartFillTest>>(
    a2,
    (_QWORD *)(a1 + 48));
  tip::details::test_common_data<1>::begin_update(*a2 + 8LL);
  return a2;
}
