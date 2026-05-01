/*
 * XREFs of ??$open_and_watch_errors@V?$tip_test@U_tip_RecoverRemoteSessionTipTest@@@tip@@@tip@@YA?A_PXZ @ 0x18008D098
 * Callers:
 *     ?RecoverRemoteSessionsData@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@QEAA_NXZ @ 0x18008CE7C (-RecoverRemoteSessionsData@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@w.c)
 *     ?RestoreRemoteSystemsDataAndNotifyOnLocal@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@AEAA_NAEBUhstring@6@AEBV?$vector@UWindowId@UI@Windows@winrt@@V?$allocator@UWindowId@UI@Windows@winrt@@@std@@@std@@@Z @ 0x180717EE4 (-RestoreRemoteSystemsDataAndNotifyOnLocal@RemoteSystemDataModel@factory_implementation@Shell@Int.c)
 *     ?RecreateDesktopWithViewsAssociation@SwitchConnectStateBase@implementation@Shell@Internal@Windows@winrt@@IEAAXAEBUhstring@6@@Z @ 0x180732144 (-RecreateDesktopWithViewsAssociation@SwitchConnectStateBase@implementation@Shell@Internal@Window.c)
 * Callees:
 *     ?ensure_data@?$tip_test@U_tip_RecoverRemoteSessionTipTest@@@tip@@AEBAAEAV?$shared_ptr@V?$test_merged_data@U_tip_RecoverRemoteSessionTipTest@@@details@tip@@@std@@XZ @ 0x18008D0E8 (-ensure_data@-$tip_test@U_tip_RecoverRemoteSessionTipTest@@@tip@@AEBAAEAV-$shared_ptr@V-$test_me.c)
 *     ?open@?$tip_test@U_tip_RecoverRemoteSessionTipTest@@@tip@@QEAA_NW4TestRetrievalOptions@@@Z @ 0x18008D19C (-open@-$tip_test@U_tip_RecoverRemoteSessionTipTest@@@tip@@QEAA_NW4TestRetrievalOptions@@@Z.c)
 *     ??0?$test_watcher@U_tip_RecoverRemoteSessionTipTest@@@tip@@IEAA@AEAV?$shared_ptr@V?$test_merged_data@U_tip_RecoverRemoteSessionTipTest@@@details@tip@@@std@@@Z @ 0x18008D2A4 (--0-$test_watcher@U_tip_RecoverRemoteSessionTipTest@@@tip@@IEAA@AEAV-$shared_ptr@V-$test_merged_.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

struct wil::details::IFailureCallback *__fastcall tip::open_and_watch_errors<tip::tip_test<_tip_RecoverRemoteSessionTipTest>>(
        struct wil::details::IFailureCallback *a1)
{
  std::_Ref_count_base *v3[2]; // [rsp+20h] [rbp-18h] BYREF

  *(_OWORD *)v3 = 0LL;
  tip::tip_test<_tip_RecoverRemoteSessionTipTest>::open(v3);
  tip::tip_test<_tip_RecoverRemoteSessionTipTest>::ensure_data(v3);
  tip::test_watcher<_tip_RecoverRemoteSessionTipTest>::test_watcher<_tip_RecoverRemoteSessionTipTest>(a1);
  if ( v3[1] )
    std::_Ref_count_base::_Decref(v3[1]);
  return a1;
}
