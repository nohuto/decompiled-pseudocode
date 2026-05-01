/*
 * XREFs of ??$start_and_watch_errors@V?$tip_test@U_tip_ToggleDashboardExtension@@@tip@@@tip@@YA?AV?$test_watcher@U_tip_ToggleDashboardExtension@@@0@XZ @ 0x180033E98
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::ToggleDashboardVisibilityAsync$_ResumeCoro$1 @ 0x1801CBB10 (winrt--Windows--Internal--Shell--implementation--DashboardManager--ToggleDashboardV_ea_1801CBB10.c)
 * Callees:
 *     ?start_and_watch_errors@?$tip_test@U_tip_ToggleDashboardExtension@@@tip@@QEAA?AV?$test_watcher@U_tip_ToggleDashboardExtension@@@2@XZ @ 0x180033ED8 (-start_and_watch_errors@-$tip_test@U_tip_ToggleDashboardExtension@@@tip@@QEAA-AV-$test_watcher@U.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180097BDC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

__int64 __fastcall tip::start_and_watch_errors<tip::tip_test<_tip_ToggleDashboardExtension>>(__int64 a1)
{
  std::_Ref_count_base *v3[2]; // [rsp+20h] [rbp-18h] BYREF

  *(_OWORD *)v3 = 0LL;
  tip::tip_test<_tip_ToggleDashboardExtension>::start_and_watch_errors(v3, a1);
  if ( v3[1] )
    std::_Ref_count_base::_Decref(v3[1]);
  return a1;
}
