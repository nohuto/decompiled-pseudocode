/*
 * XREFs of ?TryGetProviderServicesForAppWindow@RemoteSystemServiceBroker@implementation@Shell@Internal@Windows@winrt@@SA?AUIRemoteSystemServicesExtension@RemoteSystems@3456@AEBUWindowId@UI@56@@Z @ 0x18072AC60
 * Callers:
 *     ?RestoreRemoteSystemsDataAndNotifyOnLocal@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@AEAA_NAEBUhstring@6@AEBV?$vector@UWindowId@UI@Windows@winrt@@V?$allocator@UWindowId@UI@Windows@winrt@@@std@@@std@@@Z @ 0x180717EE4 (-RestoreRemoteSystemsDataAndNotifyOnLocal@RemoteSystemDataModel@factory_implementation@Shell@Int.c)
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

_QWORD *__fastcall winrt::Windows::Internal::Shell::implementation::RemoteSystemServiceBroker::TryGetProviderServicesForAppWindow(
        _QWORD *a1,
        _QWORD *a2)
{
  __int64 v4; // rdi
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v12; // [rsp+20h] [rbp-50h] BYREF
  std::_Ref_count_base *v13; // [rsp+28h] [rbp-48h]
  _BYTE v14[8]; // [rsp+30h] [rbp-40h] BYREF
  _BYTE v15[24]; // [rsp+38h] [rbp-38h] BYREF
  int v16; // [rsp+50h] [rbp-20h]
  __int64 v17; // [rsp+60h] [rbp-10h] BYREF
  std::_Ref_count_base *v18; // [rsp+68h] [rbp-8h]

  tip::start_and_watch_errors<tip::tip_test<_tip_BrokerTipTest>>((__int64)v14);
  v4 = *a2;
  std::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>(
    &v12,
    &v17);
  v5 = v12;
  tip::details::test_common_data<1>::begin_update(v12 + 8);
  v6 = v5 + 192;
  if ( !v5 )
    v6 = 16LL;
  *(_QWORD *)v6 = v4;
  if ( v5 )
  {
    tip::details::test_common_data<1>::end_update(v5 + 8);
    std::shared_ptr<PeoplePaneViewInfo>::reset(&v12);
  }
  if ( v13 )
    std::_Ref_count_base::_Decref(v13);
  std::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>(
    &v12,
    &v17);
  v7 = v12;
  tip::details::test_common_data<1>::begin_update(v12 + 8);
  v8 = v7 + 200;
  if ( !v7 )
    v8 = 24LL;
  *(_BYTE *)v8 = 1;
  if ( v7 )
  {
    tip::details::test_common_data<1>::end_update(v7 + 8);
    std::shared_ptr<PeoplePaneViewInfo>::reset(&v12);
  }
  if ( v13 )
    std::_Ref_count_base::_Decref(v13);
  *a1 = 0LL;
  if ( (int)CoreQueryWindowService(
              *a2,
              &SID_ProviderService,
              &winrt::impl::guid_v<winrt::Windows::Internal::Shell::RemoteSystems::IRemoteSystemServicesExtension>,
              a1) >= 0 )
  {
    std::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>(
      &v12,
      &v17);
    v9 = v12;
    tip::details::test_common_data<1>::begin_update(v12 + 8);
    v10 = v9 + 184;
    if ( !v9 )
      v10 = 8LL;
    *(_BYTE *)v10 = 1;
    if ( v9 )
    {
      tip::details::test_common_data<1>::end_update(v9 + 8);
      std::shared_ptr<PeoplePaneViewInfo>::reset(&v12);
    }
    if ( v13 )
      std::_Ref_count_base::_Decref(v13);
  }
  tip::details::test_common_data<1>::complete(v17 + 8);
  if ( v18 )
    std::_Ref_count_base::_Decref(v18);
  if ( v16 )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v15);
  return a1;
}
