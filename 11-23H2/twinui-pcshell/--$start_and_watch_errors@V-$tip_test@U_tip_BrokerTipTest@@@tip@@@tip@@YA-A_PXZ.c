/*
 * XREFs of ??$start_and_watch_errors@V?$tip_test@U_tip_BrokerTipTest@@@tip@@@tip@@YA?A_PXZ @ 0x18072AADC
 * Callers:
 *     ?TryGetHostServicesForAppProcess@RemoteSystemServiceBroker@implementation@Shell@Internal@Windows@winrt@@SA?AUIRemoteSystemServicesExtension@RemoteSystems@3456@AEBI@Z @ 0x18072AB1C (-TryGetHostServicesForAppProcess@RemoteSystemServiceBroker@implementation@Shell@Internal@Windows.c)
 *     ?TryGetProviderServicesForAppWindow@RemoteSystemServiceBroker@implementation@Shell@Internal@Windows@winrt@@SA?AUIRemoteSystemServicesExtension@RemoteSystems@3456@AEBUWindowId@UI@56@@Z @ 0x18072AC60 (-TryGetProviderServicesForAppWindow@RemoteSystemServiceBroker@implementation@Shell@Internal@Wind.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?start_and_watch_errors@?$tip_test@U_tip_BrokerTipTest@@@tip@@QEAA?AV?$test_watcher@U_tip_BrokerTipTest@@@2@XZ @ 0x18072B018 (-start_and_watch_errors@-$tip_test@U_tip_BrokerTipTest@@@tip@@QEAA-AV-$test_watcher@U_tip_Broker.c)
 */

__int64 __fastcall tip::start_and_watch_errors<tip::tip_test<_tip_BrokerTipTest>>(__int64 a1)
{
  std::_Ref_count_base *v3[2]; // [rsp+20h] [rbp-18h] BYREF

  *(_OWORD *)v3 = 0LL;
  tip::tip_test<_tip_BrokerTipTest>::start_and_watch_errors(v3, a1);
  if ( v3[1] )
    std::_Ref_count_base::_Decref(v3[1]);
  return a1;
}
