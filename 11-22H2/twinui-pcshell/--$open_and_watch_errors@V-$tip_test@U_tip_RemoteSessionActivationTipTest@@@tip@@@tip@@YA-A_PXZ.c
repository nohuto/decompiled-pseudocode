/*
 * XREFs of ??$open_and_watch_errors@V?$tip_test@U_tip_RemoteSessionActivationTipTest@@@tip@@@tip@@YA?A_PXZ @ 0x18071FA24
 * Callers:
 *     _lambda_5dd99ac34d6bd03dd8b88786cad3764c_::operator() @ 0x1802841E4 (_lambda_5dd99ac34d6bd03dd8b88786cad3764c_--operator().c)
 *     ?ActivateRemoteDesktopProvider@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBURemoteDesktopProviderInfo@3456@@Z @ 0x180720D54 (-ActivateRemoteDesktopProvider@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@.c)
 *     ?HandleProviderAppLaunchResult@SwitchProviderActivator@implementation@Shell@Internal@Windows@winrt@@UEAAXAEBU?$IAsyncOperation@_N@Foundation@56@@Z @ 0x180730B10 (-HandleProviderAppLaunchResult@SwitchProviderActivator@implementation@Shell@Internal@Windows@win.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??0?$test_watcher@U_tip_VDSlideAnimationPerfTest@@@tip@@IEAA@AEAV?$shared_ptr@V?$test_merged_data@U_tip_VDSlideAnimationPerfTest@@@details@tip@@@std@@@Z @ 0x1805FFFF4 (--0-$test_watcher@U_tip_VDSlideAnimationPerfTest@@@tip@@IEAA@AEAV-$shared_ptr@V-$test_merged_dat.c)
 *     ?ensure_data@?$tip_test@U_tip_RemoteSessionActivationTipTest@@@tip@@AEBAAEAV?$shared_ptr@V?$test_merged_data@U_tip_RemoteSessionActivationTipTest@@@details@tip@@@std@@XZ @ 0x1807240E8 (-ensure_data@-$tip_test@U_tip_RemoteSessionActivationTipTest@@@tip@@AEBAAEAV-$shared_ptr@V-$test.c)
 *     ?open@?$tip_test@U_tip_RemoteSessionActivationTipTest@@@tip@@QEAA_NW4TestRetrievalOptions@@@Z @ 0x1807248E8 (-open@-$tip_test@U_tip_RemoteSessionActivationTipTest@@@tip@@QEAA_NW4TestRetrievalOptions@@@Z.c)
 */

struct wil::details::IFailureCallback *__fastcall tip::open_and_watch_errors<tip::tip_test<_tip_RemoteSessionActivationTipTest>>(
        struct wil::details::IFailureCallback *a1)
{
  _QWORD *v2; // rax
  std::_Ref_count_base *v4[2]; // [rsp+20h] [rbp-18h] BYREF

  *(_OWORD *)v4 = 0LL;
  tip::tip_test<_tip_RemoteSessionActivationTipTest>::open(v4);
  v2 = (_QWORD *)tip::tip_test<_tip_RemoteSessionActivationTipTest>::ensure_data(v4);
  tip::test_watcher<_tip_VDSlideAnimationPerfTest>::test_watcher<_tip_VDSlideAnimationPerfTest>(a1, v2);
  if ( v4[1] )
    std::_Ref_count_base::_Decref(v4[1]);
  return a1;
}
