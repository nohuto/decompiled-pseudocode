/*
 * XREFs of ??$open_and_watch_errors@V?$tip_test@U_tip_SwipeDashboard@@@tip@@@tip@@YA?AV?$test_watcher@U_tip_SwipeDashboard@@@0@XZ @ 0x1805BC138
 * Callers:
 *     ?CancelSwipe@DashboardManager@implementation@Shell@Internal@Windows@winrt@@UEAAJXZ @ 0x1805BCDD0 (-CancelSwipe@DashboardManager@implementation@Shell@Internal@Windows@winrt@@UEAAJXZ.c)
 *     _winrt::Windows::Internal::Shell::implementation::DashboardManager::CancelSwipe_::_1_::catch$20 @ 0x1805BD001 (_winrt--Windows--Internal--Shell--implementation--DashboardManager--CancelSwipe_--_1_--catch$20.c)
 *     ?CommitSwipe@DashboardManager@implementation@Shell@Internal@Windows@winrt@@UEAAJIUtagPOINT@@@Z @ 0x1805BD0C0 (-CommitSwipe@DashboardManager@implementation@Shell@Internal@Windows@winrt@@UEAAJIUtagPOINT@@@Z.c)
 *     _winrt::Windows::Internal::Shell::implementation::DashboardManager::CommitSwipe_::_1_::catch$20 @ 0x1805BD326 (_winrt--Windows--Internal--Shell--implementation--DashboardManager--CommitSwipe_--_1_--catch$20.c)
 *     ?ContinueSwipe@DashboardManager@implementation@Shell@Internal@Windows@winrt@@UEAAJIUtagPOINT@@@Z @ 0x1805BD3E0 (-ContinueSwipe@DashboardManager@implementation@Shell@Internal@Windows@winrt@@UEAAJIUtagPOINT@@@Z.c)
 *     _winrt::Windows::Internal::Shell::implementation::DashboardManager::ContinueSwipe_::_1_::catch$20 @ 0x1805BD614 (_winrt--Windows--Internal--Shell--implementation--DashboardManager--ContinueSwipe_--_1_--catch$2.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180097BDC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?open_and_watch_errors@?$tip_test@U_tip_SwipeDashboard@@@tip@@QEAA?AV?$test_watcher@U_tip_SwipeDashboard@@@2@XZ @ 0x1805BE5FC (-open_and_watch_errors@-$tip_test@U_tip_SwipeDashboard@@@tip@@QEAA-AV-$test_watcher@U_tip_SwipeD.c)
 */

__int64 __fastcall tip::open_and_watch_errors<tip::tip_test<_tip_SwipeDashboard>>(__int64 a1)
{
  std::_Ref_count_base *v3[2]; // [rsp+20h] [rbp-18h] BYREF

  *(_OWORD *)v3 = 0LL;
  tip::tip_test<_tip_SwipeDashboard>::open_and_watch_errors(v3, a1);
  if ( v3[1] )
    std::_Ref_count_base::_Decref(v3[1]);
  return a1;
}
