/*
 * XREFs of ?OnNetworkChanged@BootProviderActivator@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUTransitionScreen@7CloudDesktop@3456@AEBURemoteDesktopProviderInfo@3456@@Z @ 0x18072E000
 * Callers:
 *     winrt::impl::delegate_winrt::Windows::Foundation::EventHandler_winrt::Windows::Foundation::IInspectable___lambda_ad045d4b5c3bf658d2720d8e49b9b5c2___::Invoke @ 0x180280EE0 (winrt--impl--delegate_winrt--Windows--Foundation--EventHandler_winrt--Windows--Foun_ea_180280EE0.c)
 * Callees:
 *     ?end_update@?$test_common_data@$00@details@tip@@QEAAXXZ @ 0x1800404E8 (-end_update@-$test_common_data@$00@details@tip@@QEAAXXZ.c)
 *     ?begin_update@?$test_common_data@$00@details@tip@@QEAA_NXZ @ 0x1800405EC (-begin_update@-$test_common_data@$00@details@tip@@QEAA_NXZ.c)
 *     ??0?$shared_ptr@V?$test_merged_data@U_tip_DeactivateRemoteDesktopTipTest@@@details@tip@@@std@@QEAA@AEBV01@@Z @ 0x18008D2F8 (--0-$shared_ptr@V-$test_merged_data@U_tip_DeactivateRemoteDesktopTipTest@@@details@tip@@@std@@QE.c)
 *     ?reset@?$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAAXXZ @ 0x180098ACC (-reset@-$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAAXXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x1800C29B0 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x1800C69A4 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?GetInstance@NetworkConnectionUtils@implementation@Shell@Internal@Windows@winrt@@SA?AU13456@XZ @ 0x180283E64 (-GetInstance@NetworkConnectionUtils@implementation@Shell@Internal@Windows@winrt@@SA-AU13456@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??B?$test_watcher@U_tip_RemoteSessionOnStateChangedTipTest@@@tip@@QEBA_NXZ @ 0x1806006B8 (--B-$test_watcher@U_tip_RemoteSessionOnStateChangedTipTest@@@tip@@QEBA_NXZ.c)
 *     ??$open_and_watch_errors@V?$tip_test@U_tip_BootToCloudPCTest@@@tip@@@tip@@YA?A_PXZ @ 0x180702AF4 (--$open_and_watch_errors@V-$tip_test@U_tip_BootToCloudPCTest@@@tip@@@tip@@YA-A_PXZ.c)
 *     ?IsNetworkConnected@?$consume_Windows_Internal_Shell_INetworkConnectionUtils@UINetworkConnectionUtils@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x18072DEC0 (-IsNetworkConnected@-$consume_Windows_Internal_Shell_INetworkConnectionUtils@UINetworkConnection.c)
 *     ?revoke@?$event_revoker@UINetworkConnectionUtils@Shell@Internal@Windows@winrt@@$MP8type@?$abi@UINetworkConnectionUtils@Shell@Internal@Windows@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BEA@AA@impl@winrt@@QEAAXXZ @ 0x18072E900 (-revoke@-$event_revoker@UINetworkConnectionUtils@Shell@Internal@Windows@winrt@@$MP8type@-$abi@UI.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall winrt::Windows::Internal::Shell::implementation::BootProviderActivator::OnNetworkChanged(
        winrt::Windows::Internal::Shell::implementation::BootProviderActivator *this,
        const struct winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::TransitionScreen *a2,
        const struct winrt::Windows::Internal::Shell::RemoteDesktopProviderInfo *a3)
{
  __int64 *Instance; // rcx
  char IsNetworkConnected; // bl
  const char *v8; // r9
  __int64 v9; // rbx
  __int64 v10; // rcx
  __int64 v11; // rbx
  __int64 v12; // rax
  __int64 v13; // [rsp+30h] [rbp-68h] BYREF
  std::_Ref_count_base *v14; // [rsp+38h] [rbp-60h]
  _BYTE v15[8]; // [rsp+40h] [rbp-58h] BYREF
  _BYTE v16[24]; // [rsp+48h] [rbp-50h] BYREF
  int v17; // [rsp+60h] [rbp-38h]
  __int64 v18; // [rsp+70h] [rbp-28h] BYREF
  std::_Ref_count_base *v19; // [rsp+78h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]
  __int64 v21; // [rsp+B8h] [rbp+20h] BYREF

  try
  {
    Instance = (__int64 *)winrt::Windows::Internal::Shell::implementation::NetworkConnectionUtils::GetInstance((winrt::Windows::Foundation::IUnknown *)&v21);
    IsNetworkConnected = winrt::impl::consume_Windows_Internal_Shell_INetworkConnectionUtils<winrt::Windows::Internal::Shell::INetworkConnectionUtils>::IsNetworkConnected(Instance);
    if ( v21 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v21);
    if ( IsNetworkConnected )
    {
      _revoke___event_revoker_UINetworkConnectionUtils_Shell_Internal_Windows_winrt___MP8type___abi_UINetworkConnectionUtils_Shell_Internal_Windows_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BEA_AA_impl_winrt__QEAAXXZ((char *)this + 48);
      tip::open_and_watch_errors<tip::tip_test<_tip_BootToCloudPCTest>>((struct wil::details::IFailureCallback *)v15);
      if ( tip::test_watcher<_tip_RemoteSessionOnStateChangedTipTest>::operator bool((__int64)v15) )
      {
        std::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>(
          &v13,
          &v18);
        v9 = v13;
        tip::details::test_common_data<1>::begin_update(v13 + 8);
        v10 = v9 + 200;
        if ( !v9 )
          v10 = 24LL;
        std::wstring::assign(
          (char *)v10,
          L"BootProviderActivator::ActivateProvider, Network connected after failing fast",
          0x4DuLL);
        if ( v9 )
        {
          tip::details::test_common_data<1>::end_update(v9 + 8);
          std::shared_ptr<PeoplePaneViewInfo>::reset(&v13);
        }
        if ( v14 )
          std::_Ref_count_base::_Decref(v14);
        std::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>(
          &v13,
          &v18);
        v11 = v13;
        tip::details::test_common_data<1>::begin_update(v13 + 8);
        v12 = v11 + 196;
        if ( !v11 )
          v12 = 20LL;
        *(_BYTE *)v12 = 1;
        if ( v11 )
        {
          tip::details::test_common_data<1>::end_update(v11 + 8);
          std::shared_ptr<PeoplePaneViewInfo>::reset(&v13);
        }
        if ( v14 )
          std::_Ref_count_base::_Decref(v14);
      }
      if ( v19 )
        std::_Ref_count_base::_Decref(v19);
      if ( v17 )
        wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v16);
      (*(void (__fastcall **)(winrt::Windows::Internal::Shell::implementation::BootProviderActivator *, __int64 *, const struct winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::TransitionScreen *, const struct winrt::Windows::Internal::Shell::RemoteDesktopProviderInfo *))(*(_QWORD *)this + 16LL))(
        this,
        &v21,
        a2,
        a3);
    }
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0xF3,
      (int)"pcshell\\twinui\\cloudpc\\lib\\bootprovideractivator.cpp",
      v8);
  }
}
