/*
 * XREFs of ?DisconnectProvider@RemoteSystemDataModel@implementation@Shell@Internal@Windows@winrt@@SAXAEBUhstring@6@@Z @ 0x1807110E8
 * Callers:
 *     _lambda_665315f8e7a3be3e9382c02473f3b139_::operator() @ 0x18027B6B8 (_lambda_665315f8e7a3be3e9382c02473f3b139_--operator().c)
 *     ?DisconnectAllRemoteSessions@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x180721540 (-DisconnectAllRemoteSessions@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@wi.c)
 *     ?DeactivateRemoteDesktop@SwitchConnectionHandler@implementation@Shell@Internal@Windows@winrt@@UEBAXAEBUguid@6@@Z @ 0x180731570 (-DeactivateRemoteDesktop@SwitchConnectionHandler@implementation@Shell@Internal@Windows@winrt@@UE.c)
 * Callees:
 *     ?end_update@?$test_common_data@$00@details@tip@@QEAAXXZ @ 0x1800404E8 (-end_update@-$test_common_data@$00@details@tip@@QEAAXXZ.c)
 *     ?begin_update@?$test_common_data@$00@details@tip@@QEAA_NXZ @ 0x1800405EC (-begin_update@-$test_common_data@$00@details@tip@@QEAA_NXZ.c)
 *     ??1?$test_watcher@U_tip_DiscoverabilityManagerTipTest@@@tip@@QEAA@XZ @ 0x180072254 (--1-$test_watcher@U_tip_DiscoverabilityManagerTipTest@@@tip@@QEAA@XZ.c)
 *     ??0?$shared_ptr@V?$test_merged_data@U_tip_DeactivateRemoteDesktopTipTest@@@details@tip@@@std@@QEAA@AEBV01@@Z @ 0x18008D2F8 (--0-$shared_ptr@V-$test_merged_data@U_tip_DeactivateRemoteDesktopTipTest@@@details@tip@@@std@@QE.c)
 *     ??1?$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@QEAA@XZ @ 0x180092FD0 (--1-$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation.c)
 *     ?complete@?$test_common_data@$00@details@tip@@QEAAXXZ @ 0x180095B9C (-complete@-$test_common_data@$00@details@tip@@QEAAXXZ.c)
 *     ?reset@?$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAAXXZ @ 0x180098ACC (-reset@-$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAAXXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$assign@Uhstring@winrt@@$0A@@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV01@AEBUhstring@winrt@@@Z @ 0x1800B53F0 (--$assign@Uhstring@winrt@@$0A@@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_W365Switch_Engineering_Improvements_SwitchBugFixes@@@details@wil@@QEAA_NXZ @ 0x180278868 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_W365Switch_Engineeri_ea_180278868.c)
 *     ??B?$test_watcher@U_tip_RemoteSessionOnStateChangedTipTest@@@tip@@QEBA_NXZ @ 0x1806006B8 (--B-$test_watcher@U_tip_RemoteSessionOnStateChangedTipTest@@@tip@@QEBA_NXZ.c)
 *     ?Size@?$consume_Windows_Foundation_Collections_IVectorView@U?$IVectorView@UAppInfo@ApplicationModel@Windows@winrt@@@Collections@Foundation@Windows@winrt@@UAppInfo@ApplicationModel@45@@impl@winrt@@QEBA@XZ @ 0x1806FC2A4 (-Size@-$consume_Windows_Foundation_Collections_IVectorView@U-$IVectorView@UAppInfo@ApplicationMo.c)
 *     ??$open_and_watch_errors@V?$tip_test@U_tip_DeactivateRemoteDesktopTipTest@@@tip@@@tip@@YA?A_PXZ @ 0x18070CD04 (--$open_and_watch_errors@V-$tip_test@U_tip_DeactivateRemoteDesktopTipTest@@@tip@@@tip@@YA-A_PXZ.c)
 *     ?GetAt@?$consume_Windows_Foundation_Collections_IVectorView@U?$IVectorView@UWindowId@UI@Windows@winrt@@@Collections@Foundation@Windows@winrt@@UWindowId@UI@45@@impl@winrt@@QEBA@I@Z @ 0x180711658 (-GetAt@-$consume_Windows_Foundation_Collections_IVectorView@U-$IVectorView@UWindowId@UI@Windows@.c)
 *     ?GetRemoteSystem@RemoteSystemDataModel@implementation@Shell@Internal@Windows@winrt@@SA?AURemoteSystem@3456@AEBUhstring@6@@Z @ 0x180712E84 (-GetRemoteSystem@RemoteSystemDataModel@implementation@Shell@Internal@Windows@winrt@@SA-AURemoteS.c)
 *     ?ProviderWindows@?$consume_Windows_Internal_Shell_IRemoteSystem@UIRemoteSystem@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180716410 (-ProviderWindows@-$consume_Windows_Internal_Shell_IRemoteSystem@UIRemoteSystem@Shell@Internal@Wi.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall winrt::Windows::Internal::Shell::implementation::RemoteSystemDataModel::DisconnectProvider(
        const struct winrt::hstring *a1)
{
  bool v2; // al
  __int64 v3; // rbx
  __int64 v4; // rdi
  __int64 v5; // r8
  __int64 v6; // rcx
  __int64 v7; // rdi
  __int64 v8; // rax
  unsigned int v9; // edi
  int v10; // r14d
  __int64 v11; // rbx
  __int64 v12; // rax
  __int64 v13; // [rsp+20h] [rbp-50h] BYREF
  std::_Ref_count_base *v14; // [rsp+28h] [rbp-48h]
  _BYTE v15[48]; // [rsp+30h] [rbp-40h] BYREF
  _QWORD v16[2]; // [rsp+60h] [rbp-10h] BYREF
  __int64 v17; // [rsp+A8h] [rbp+38h] BYREF
  __int64 v18; // [rsp+B0h] [rbp+40h] BYREF
  HWND hWnd; // [rsp+B8h] [rbp+48h] BYREF

  tip::open_and_watch_errors<tip::tip_test<_tip_DeactivateRemoteDesktopTipTest>>((struct wil::details::IFailureCallback *)v15);
  winrt::Windows::Internal::Shell::implementation::RemoteSystemDataModel::GetRemoteSystem(&v18, a1);
  v2 = tip::test_watcher<_tip_RemoteSessionOnStateChangedTipTest>::operator bool((__int64)v15);
  v3 = v18;
  if ( !v2 )
    goto LABEL_30;
  std::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>(
    &v13,
    v16);
  v4 = v13;
  tip::details::test_common_data<1>::begin_update(v13 + 8);
  v6 = v4 + 184;
  if ( !v4 )
    v6 = 8LL;
  std::wstring::assign<winrt::hstring,0>(v6, (__int64)a1, v5);
  if ( v4 )
  {
    tip::details::test_common_data<1>::end_update(v4 + 8);
    std::shared_ptr<PeoplePaneViewInfo>::reset(&v13);
  }
  if ( v14 )
    std::_Ref_count_base::_Decref(v14);
  if ( v3 )
    goto LABEL_30;
  std::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>(
    &v13,
    v16);
  v7 = v13;
  tip::details::test_common_data<1>::begin_update(v13 + 8);
  v8 = v7 + 216;
  if ( !v7 )
    v8 = 40LL;
  *(_BYTE *)v8 = 1;
  if ( v7 )
  {
    tip::details::test_common_data<1>::end_update(v7 + 8);
    std::shared_ptr<PeoplePaneViewInfo>::reset(&v13);
  }
  if ( v14 )
    std::_Ref_count_base::_Decref(v14);
  tip::details::test_common_data<1>::complete(v16[0] + 8LL);
  if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_W365Switch_Engineering_Improvements_SwitchBugFixes>::__private_IsEnabled((__int64)&`wil::Feature<__WilFeatureTraits_Feature_W365Switch_Engineering_Improvements_SwitchBugFixes>::GetImpl'::`2'::impl) )
  {
LABEL_30:
    if ( !wil::details::FeatureImpl<__WilFeatureTraits_Feature_W365Switch_Engineering_Improvements_SwitchBugFixes>::__private_IsEnabled((__int64)&`wil::Feature<__WilFeatureTraits_Feature_W365Switch_Engineering_Improvements_SwitchBugFixes>::GetImpl'::`2'::impl)
      || v3 )
    {
      winrt::impl::consume_Windows_Internal_Shell_IRemoteSystem<winrt::Windows::Internal::Shell::IRemoteSystem>::ProviderWindows(
        &v18,
        &v17);
      v9 = 0;
      v10 = winrt::impl::consume_Windows_Foundation_Collections_IVectorView<winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::ApplicationModel::AppInfo>,winrt::Windows::ApplicationModel::AppInfo>::Size(&v17);
      while ( v9 != v10 )
      {
        winrt::impl::consume_Windows_Foundation_Collections_IVectorView<winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::UI::WindowId>,winrt::Windows::UI::WindowId>::GetAt(
          &v17,
          &hWnd,
          v9);
        if ( !PostMessageW(hWnd, 0x10u, 0LL, 0LL)
          && tip::test_watcher<_tip_RemoteSessionOnStateChangedTipTest>::operator bool((__int64)v15) )
        {
          std::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>(
            &v13,
            v16);
          v11 = v13;
          tip::details::test_common_data<1>::begin_update(v13 + 8);
          v12 = v11 + 218;
          if ( !v11 )
            v12 = 42LL;
          *(_BYTE *)v12 = 1;
          if ( v11 )
          {
            tip::details::test_common_data<1>::end_update(v11 + 8);
            std::shared_ptr<PeoplePaneViewInfo>::reset(&v13);
          }
          if ( v14 )
            std::_Ref_count_base::_Decref(v14);
          tip::details::test_common_data<1>::complete(v16[0] + 8LL);
        }
        ++v9;
      }
      if ( v17 )
        winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v17);
    }
  }
  winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>((winrt::Windows::Foundation::IUnknown *)&v18);
  tip::test_watcher<_tip_DiscoverabilityManagerTipTest>::~test_watcher<_tip_DiscoverabilityManagerTipTest>((__int64)v15);
}
