/*
 * XREFs of ?InvokeCampaign@DiscoverabilityManager@implementation@Shell@Internal@Windows@winrt@@AEAAJXZ @ 0x1806FB2F8
 * Callers:
 *     ?LaunchActionCenterNotification@DiscoverabilityManager@implementation@Shell@Internal@Windows@winrt@@AEAAJXZ @ 0x1806FB5C8 (-LaunchActionCenterNotification@DiscoverabilityManager@implementation@Shell@Internal@Windows@win.c)
 * Callees:
 *     ?end_update@?$test_common_data@$00@details@tip@@QEAAXXZ @ 0x1800404E8 (-end_update@-$test_common_data@$00@details@tip@@QEAAXXZ.c)
 *     ?begin_update@?$test_common_data@$00@details@tip@@QEAA_NXZ @ 0x1800405EC (-begin_update@-$test_common_data@$00@details@tip@@QEAA_NXZ.c)
 *     ??0?$shared_ptr@V?$test_merged_data@U_tip_DeactivateRemoteDesktopTipTest@@@details@tip@@@std@@QEAA@AEBV01@@Z @ 0x18008D2F8 (--0-$shared_ptr@V-$test_merged_data@U_tip_DeactivateRemoteDesktopTipTest@@@details@tip@@@std@@QE.c)
 *     ?complete@?$test_common_data@$00@details@tip@@QEAAXXZ @ 0x180095B9C (-complete@-$test_common_data@$00@details@tip@@QEAAXXZ.c)
 *     ?reset@?$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAAXXZ @ 0x180098ACC (-reset@-$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAAXXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x1800C69A4 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ??B?$test_watcher@U_tip_RemoteSessionOnStateChangedTipTest@@@tip@@QEBA_NXZ @ 0x1806006B8 (--B-$test_watcher@U_tip_RemoteSessionOnStateChangedTipTest@@@tip@@QEBA_NXZ.c)
 *     ??$open_and_watch_errors@V?$tip_test@U_tip_DiscoverabilityManagerTipTest@@@tip@@@tip@@YA?A_PXZ @ 0x1806F81D8 (--$open_and_watch_errors@V-$tip_test@U_tip_DiscoverabilityManagerTipTest@@@tip@@@tip@@YA-A_PXZ.c)
 *     ?CleanUp@DiscoverabilityManager@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x1806F9EF0 (-CleanUp@DiscoverabilityManager@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ.c)
 *     ?ConfigureRegistryKeys@Utils@implementation@Shell@Internal@Windows@winrt@@SAXKHAEAU_SYSTEMTIME@@@Z @ 0x1806FA008 (-ConfigureRegistryKeys@Utils@implementation@Shell@Internal@Windows@winrt@@SAXKHAEAU_SYSTEMTIME@@.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_CastDiscoverabilityNotification@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1806FC0D4 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_CastDiscoverabilityNotification@@@details.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_CastDiscoverabilityNotification@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x1806FC5E8 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_CastDiscoverabilityNotification@@.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_CastDiscoverabilityNotification@@@details@wil@@QEAA_NXZ @ 0x1806FC628 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_CastDiscoverabilityN_ea_1806FC628.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall winrt::Windows::Internal::Shell::implementation::DiscoverabilityManager::InvokeCampaign(
        winrt::Windows::Internal::Shell::implementation::DiscoverabilityManager *this)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  unsigned int v4; // ecx
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v8; // [rsp+20h] [rbp-58h] BYREF
  std::_Ref_count_base *v9; // [rsp+28h] [rbp-50h]
  _BYTE v10[8]; // [rsp+30h] [rbp-48h] BYREF
  _BYTE v11[24]; // [rsp+38h] [rbp-40h] BYREF
  int v12; // [rsp+50h] [rbp-28h]
  __int64 v13; // [rsp+60h] [rbp-18h] BYREF
  std::_Ref_count_base *v14; // [rsp+68h] [rbp-10h]

  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_CastDiscoverabilityNotification>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_CastDiscoverabilityNotification>::GetImpl'::`2'::impl) )
  {
    tip::open_and_watch_errors<tip::tip_test<_tip_DiscoverabilityManagerTipTest>>((struct wil::details::IFailureCallback *)v10);
    LOBYTE(v2) = (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_CastDiscoverabilityNotification>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_CastDiscoverabilityNotification>::GetImpl'::`2'::impl) != 0;
    LOBYTE(v3) = 1;
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_CastDiscoverabilityNotification>::ReportUsage(
      &`wil::Feature<__WilFeatureTraits_Feature_CastDiscoverabilityNotification>::GetImpl'::`2'::impl,
      v2,
      v3);
    GetSystemTime((LPSYSTEMTIME)this + 32);
    v4 = *((_DWORD *)this + 132) + 1;
    *((_DWORD *)this + 132) = v4;
    if ( v4 >= 6 )
      *((_DWORD *)this + 133) = 1;
    winrt::Windows::Internal::Shell::implementation::Utils::ConfigureRegistryKeys(
      v4,
      *((_DWORD *)this + 133),
      (const BYTE *)this + 512);
    if ( tip::test_watcher<_tip_RemoteSessionOnStateChangedTipTest>::operator bool((__int64)v10) )
    {
      std::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>(
        &v8,
        &v13);
      v5 = v8;
      tip::details::test_common_data<1>::begin_update(v8 + 8);
      v6 = v5 + 192;
      if ( !v5 )
        v6 = 16LL;
      *(_BYTE *)v6 = 1;
      if ( v5 )
      {
        tip::details::test_common_data<1>::end_update(v5 + 8);
        std::shared_ptr<PeoplePaneViewInfo>::reset(&v8);
      }
      if ( v9 )
        std::_Ref_count_base::_Decref(v9);
      tip::details::test_common_data<1>::complete(v13 + 8);
    }
    winrt::Windows::Internal::Shell::implementation::DiscoverabilityManager::CleanUp(this);
    if ( v14 )
      std::_Ref_count_base::_Decref(v14);
    if ( v12 )
      wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v11);
  }
  return 0LL;
}
