/*
 * XREFs of ?TryGetHostServicesForAppProcess@RemoteSystemServiceBroker@implementation@Shell@Internal@Windows@winrt@@SA?AUIRemoteSystemServicesExtension@RemoteSystems@3456@AEBI@Z @ 0x18072AB1C
 * Callers:
 *     ?PerformLocalAction@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@QEAAXAEBW4RemoteDesktopLocalAction@3456@@Z @ 0x180716018 (-PerformLocalAction@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@Q.c)
 *     ?RestoreRemoteSystemsDataAndNotifyOnRemote@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUhstring@6@AEBV?$unordered_set@IU?$hash@I@std@@U?$equal_to@I@2@V?$allocator@I@2@@std@@@Z @ 0x180718430 (-RestoreRemoteSystemsDataAndNotifyOnRemote@RemoteSystemDataModel@factory_implementation@Shell@In.c)
 *     ?SwitchToRemoteDesktop@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@QEAAXAEBUhstring@6@@Z @ 0x180718E60 (-SwitchToRemoteDesktop@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt.c)
 * Callees:
 *     ?end_update@?$test_common_data@$00@details@tip@@QEAAXXZ @ 0x1800404E8 (-end_update@-$test_common_data@$00@details@tip@@QEAAXXZ.c)
 *     ?begin_update@?$test_common_data@$00@details@tip@@QEAA_NXZ @ 0x1800405EC (-begin_update@-$test_common_data@$00@details@tip@@QEAA_NXZ.c)
 *     ??0?$shared_ptr@V?$test_merged_data@U_tip_DeactivateRemoteDesktopTipTest@@@details@tip@@@std@@QEAA@AEBV01@@Z @ 0x18008D2F8 (--0-$shared_ptr@V-$test_merged_data@U_tip_DeactivateRemoteDesktopTipTest@@@details@tip@@@std@@QE.c)
 *     ?complete@?$test_common_data@$00@details@tip@@QEAAXXZ @ 0x180095B9C (-complete@-$test_common_data@$00@details@tip@@QEAAXXZ.c)
 *     ?reset@?$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAAXXZ @ 0x180098ACC (-reset@-$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAAXXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x1800C69A4 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ??$start_and_watch_errors@V?$tip_test@U_tip_BrokerTipTest@@@tip@@@tip@@YA?A_PXZ @ 0x18072AADC (--$start_and_watch_errors@V-$tip_test@U_tip_BrokerTipTest@@@tip@@@tip@@YA-A_PXZ.c)
 */

_QWORD *__fastcall winrt::Windows::Internal::Shell::implementation::RemoteSystemServiceBroker::TryGetHostServicesForAppProcess(
        _QWORD *a1,
        unsigned int *a2)
{
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v9; // [rsp+20h] [rbp-50h] BYREF
  std::_Ref_count_base *v10; // [rsp+28h] [rbp-48h]
  _BYTE v11[8]; // [rsp+30h] [rbp-40h] BYREF
  _BYTE v12[24]; // [rsp+38h] [rbp-38h] BYREF
  int v13; // [rsp+50h] [rbp-20h]
  __int64 v14; // [rsp+60h] [rbp-10h] BYREF
  std::_Ref_count_base *v15; // [rsp+68h] [rbp-8h]

  tip::start_and_watch_errors<tip::tip_test<_tip_BrokerTipTest>>((__int64)v11);
  std::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>(
    &v9,
    &v14);
  v4 = v9;
  tip::details::test_common_data<1>::begin_update(v9 + 8);
  v5 = v4 + 200;
  if ( !v4 )
    v5 = 24LL;
  *(_BYTE *)v5 = 0;
  if ( v4 )
  {
    tip::details::test_common_data<1>::end_update(v4 + 8);
    std::shared_ptr<PeoplePaneViewInfo>::reset(&v9);
  }
  if ( v10 )
    std::_Ref_count_base::_Decref(v10);
  *a1 = 0LL;
  if ( (int)CoreQueryApplicationService(
              *a2,
              &SID_RemoteDesktopHostService,
              &winrt::impl::guid_v<winrt::Windows::Internal::Shell::RemoteSystems::IRemoteSystemServicesExtension>,
              a1) >= 0 )
  {
    std::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>(
      &v9,
      &v14);
    v6 = v9;
    tip::details::test_common_data<1>::begin_update(v9 + 8);
    v7 = v6 + 184;
    if ( !v6 )
      v7 = 8LL;
    *(_BYTE *)v7 = 1;
    if ( v6 )
    {
      tip::details::test_common_data<1>::end_update(v6 + 8);
      std::shared_ptr<PeoplePaneViewInfo>::reset(&v9);
    }
    if ( v10 )
      std::_Ref_count_base::_Decref(v10);
  }
  tip::details::test_common_data<1>::complete(v14 + 8);
  if ( v15 )
    std::_Ref_count_base::_Decref(v15);
  if ( v13 )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v12);
  return a1;
}
