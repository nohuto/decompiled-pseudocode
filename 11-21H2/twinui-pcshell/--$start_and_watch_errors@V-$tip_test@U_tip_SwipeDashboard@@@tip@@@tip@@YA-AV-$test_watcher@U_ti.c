/*
 * XREFs of ??$start_and_watch_errors@V?$tip_test@U_tip_SwipeDashboard@@@tip@@@tip@@YA?AV?$test_watcher@U_tip_SwipeDashboard@@@0@XZ @ 0x1805BC838
 * Callers:
 *     _lambda_50eab521f3249b7fa1c207805ae80cf1_::operator() @ 0x1801C4DA0 (_lambda_50eab521f3249b7fa1c207805ae80cf1_--operator().c)
 *     _winrt::Windows::Internal::Shell::implementation::DashboardManager::StartSwipe_::_1_::catch$8 @ 0x1805BDD80 (_winrt--Windows--Internal--Shell--implementation--DashboardManager--StartSwipe_--_1_--catch$8.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180097BDC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?start@?$test_common_data@$00@details@tip@@QEAA?AU_GUID@@XZ @ 0x180121CB4 (-start@-$test_common_data@$00@details@tip@@QEAA-AU_GUID@@XZ.c)
 *     ??0?$test_watcher@U_tip_SnapFlyoutShowTest@@@tip@@IEAA@AEAV?$shared_ptr@V?$test_merged_data@U_tip_SnapFlyoutShowTest@@@details@tip@@@std@@@Z @ 0x1805AE504 (--0-$test_watcher@U_tip_SnapFlyoutShowTest@@@tip@@IEAA@AEAV-$shared_ptr@V-$test_merged_data@U_ti.c)
 *     ?ensure_data@?$tip_test@U_tip_SwipeDashboard@@@tip@@AEBAAEAV?$shared_ptr@V?$test_merged_data@U_tip_SwipeDashboard@@@details@tip@@@std@@XZ @ 0x1805BE364 (-ensure_data@-$tip_test@U_tip_SwipeDashboard@@@tip@@AEBAAEAV-$shared_ptr@V-$test_merged_data@U_t.c)
 */

struct wil::details::IFailureCallback *__fastcall tip::start_and_watch_errors<tip::tip_test<_tip_SwipeDashboard>>(
        struct wil::details::IFailureCallback *a1)
{
  _QWORD *v2; // rax
  std::_Ref_count_base *v4[2]; // [rsp+20h] [rbp-28h] BYREF
  __int128 v5; // [rsp+30h] [rbp-18h] BYREF

  *(_OWORD *)v4 = 0LL;
  v2 = (_QWORD *)tip::tip_test<_tip_SwipeDashboard>::ensure_data(v4);
  tip::details::test_common_data<1>::start(*v2 + 8LL, &v5);
  tip::test_watcher<_tip_SnapFlyoutShowTest>::test_watcher<_tip_SnapFlyoutShowTest>(a1, v4);
  if ( v4[1] )
    std::_Ref_count_base::_Decref(v4[1]);
  return a1;
}
