/*
 * XREFs of ??$open_and_watch_errors@V?$tip_test@U_tip_SnapFlyoutShowTest@@@tip@@@tip@@YA?AV?$test_watcher@U_tip_SnapFlyoutShowTest@@@0@XZ @ 0x1805B8048
 * Callers:
 *     ?Initialize@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@QEAA_NIPEAUHWND__@@_N1AEBUIInspectable@Foundation@67@@Z @ 0x1805B8EB4 (-Initialize@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@QEAA_N.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180097BDC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??0?$test_watcher@U_tip_SnapFlyoutShowTest@@@tip@@IEAA@AEAV?$shared_ptr@V?$test_merged_data@U_tip_SnapFlyoutShowTest@@@details@tip@@@std@@@Z @ 0x1805AE504 (--0-$test_watcher@U_tip_SnapFlyoutShowTest@@@tip@@IEAA@AEAV-$shared_ptr@V-$test_merged_data@U_ti.c)
 *     ?ensure_data@?$tip_test@U_tip_SnapFlyoutShowTest@@@tip@@AEBAAEAV?$shared_ptr@V?$test_merged_data@U_tip_SnapFlyoutShowTest@@@details@tip@@@std@@XZ @ 0x1805B1964 (-ensure_data@-$tip_test@U_tip_SnapFlyoutShowTest@@@tip@@AEBAAEAV-$shared_ptr@V-$test_merged_data.c)
 *     ?open@?$tip_test@U_tip_SnapFlyoutShowTest@@@tip@@QEAA_NW4TestRetrievalOptions@@@Z @ 0x1805BB8E0 (-open@-$tip_test@U_tip_SnapFlyoutShowTest@@@tip@@QEAA_NW4TestRetrievalOptions@@@Z.c)
 */

struct wil::details::IFailureCallback *__fastcall tip::open_and_watch_errors<tip::tip_test<_tip_SnapFlyoutShowTest>>(
        struct wil::details::IFailureCallback *a1)
{
  _QWORD *v2; // rax
  std::_Ref_count_base *v4[2]; // [rsp+20h] [rbp-18h] BYREF

  *(_OWORD *)v4 = 0LL;
  tip::tip_test<_tip_SnapFlyoutShowTest>::open(v4);
  v2 = tip::tip_test<_tip_SnapFlyoutShowTest>::ensure_data(v4);
  tip::test_watcher<_tip_SnapFlyoutShowTest>::test_watcher<_tip_SnapFlyoutShowTest>(a1, v2);
  if ( v4[1] )
    std::_Ref_count_base::_Decref(v4[1]);
  return a1;
}
