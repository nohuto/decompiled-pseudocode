/*
 * XREFs of ?ShowTransitionScreen@SwitchConnectingState@implementation@Shell@Internal@Windows@winrt@@UEAAXAEBV?$shared_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@std@@AEBUhstring@6@AEBV?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@8@@Z @ 0x180732AE0
 * Callers:
 *     <none>
 * Callees:
 *     ?end_update@?$test_common_data@$00@details@tip@@QEAAXXZ @ 0x1800404E8 (-end_update@-$test_common_data@$00@details@tip@@QEAAXXZ.c)
 *     ?begin_update@?$test_common_data@$00@details@tip@@QEAA_NXZ @ 0x1800405EC (-begin_update@-$test_common_data@$00@details@tip@@QEAA_NXZ.c)
 *     ??1?$test_watcher@U_tip_DiscoverabilityManagerTipTest@@@tip@@QEAA@XZ @ 0x180072254 (--1-$test_watcher@U_tip_DiscoverabilityManagerTipTest@@@tip@@QEAA@XZ.c)
 *     ??0?$shared_ptr@V?$test_merged_data@U_tip_DeactivateRemoteDesktopTipTest@@@details@tip@@@std@@QEAA@AEBV01@@Z @ 0x18008D2F8 (--0-$shared_ptr@V-$test_merged_data@U_tip_DeactivateRemoteDesktopTipTest@@@details@tip@@@std@@QE.c)
 *     ?complete@?$test_common_data@$00@details@tip@@QEAAXXZ @ 0x180095B9C (-complete@-$test_common_data@$00@details@tip@@QEAAXXZ.c)
 *     ?reset@?$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAAXXZ @ 0x180098ACC (-reset@-$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAAXXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800B6D14 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ @ 0x180176DC4 (-add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ.c)
 *     ??B?$test_watcher@U_tip_RemoteSessionOnStateChangedTipTest@@@tip@@QEBA_NXZ @ 0x1806006B8 (--B-$test_watcher@U_tip_RemoteSessionOnStateChangedTipTest@@@tip@@QEBA_NXZ.c)
 *     ?SystemId@?$consume_Windows_Internal_Shell_IRegistrationData@UIRegistrationData@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1807192A8 (-SystemId@-$consume_Windows_Internal_Shell_IRegistrationData@UIRegistrationData@Shell@Internal@W.c)
 *     ?Show@?$consume_Windows_Internal_Shell_CloudDesktop_TransitionScreen_ITransitionScreen@UITransitionScreen@TransitionScreen@CloudDesktop@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@AEBUCpcId@TransitionScreen@CloudDesktop@Shell@Internal@Windows@3@AEBW4ScreenType@567893@AEBV?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@AEBUhstring@param@3@_K_NAEBW4TransitionScreenOptions@567893@@Z @ 0x18072E704 (-Show@-$consume_Windows_Internal_Shell_CloudDesktop_TransitionScreen_ITransitionScr_ea_18072E704.c)
 *     ??$open_and_watch_errors@V?$tip_test@U_tip_RemoteSessionOnStateChangedTipTest@@@tip@@@tip@@YA?A_PXZ @ 0x180731318 (--$open_and_watch_errors@V-$tip_test@U_tip_RemoteSessionOnStateChangedTipTest@@@tip@@@tip@@YA-A_.c)
 *     ?IsTransitionScreenShown@RemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@QEAAX_N@Z @ 0x180733A64 (-IsTransitionScreenShown@RemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@Q.c)
 *     ?IsTransitionScreenShown@RemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@QEAA_NXZ @ 0x180733ABC (-IsTransitionScreenShown@RemoteSessionInformation@implementation@Shell@Internal@Win_ea_180733ABC.c)
 *     ?TransitionScreenId@RemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBU0TransitionScreen@CloudDesktop@3456@@Z @ 0x180733D34 (-TransitionScreenId@RemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@QEAAXA.c)
 *     ?TransitionScreenType@RemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@QEAAXW4ScreenType@TransitionScreen@CloudDesktop@3456@@Z @ 0x180733E3C (-TransitionScreenType@RemoteSessionInformation@implementation@Shell@Internal@Window_ea_180733E3C.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall winrt::Windows::Internal::Shell::implementation::SwitchConnectingState::ShowTransitionScreen(
        __int64 a1,
        winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation **a2,
        _QWORD *a3,
        _QWORD *a4)
{
  volatile signed __int32 *v7; // rbx
  __int64 v8; // rax
  HMONITOR v9; // rdi
  __int64 v10; // r14
  __int64 v11; // rbx
  unsigned int v12; // [rsp+58h] [rbp-49h] BYREF
  int v13; // [rsp+5Ch] [rbp-45h] BYREF
  __int64 v14; // [rsp+60h] [rbp-41h] BYREF
  __int64 v15; // [rsp+68h] [rbp-39h] BYREF
  volatile signed __int32 *v16; // [rsp+70h] [rbp-31h] BYREF
  std::_Ref_count_base *v17; // [rsp+78h] [rbp-29h]
  _BYTE v18[48]; // [rsp+88h] [rbp-19h] BYREF
  __int64 v19; // [rsp+B8h] [rbp+17h] BYREF
  _QWORD v20[4]; // [rsp+C8h] [rbp+27h] BYREF
  POINT pt; // [rsp+110h] [rbp+6Fh] BYREF

  tip::open_and_watch_errors<tip::tip_test<_tip_RemoteSessionOnStateChangedTipTest>>((__int64)v18);
  if ( winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation::IsTransitionScreenShown(*a2) )
  {
    if ( tip::test_watcher<_tip_RemoteSessionOnStateChangedTipTest>::operator bool((__int64)v18) )
    {
      std::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>(
        &v16,
        &v19);
      v7 = v16;
      tip::details::test_common_data<1>::begin_update((__int64)(v16 + 2));
      v8 = (__int64)v7 + 259;
      if ( !v7 )
        v8 = 83LL;
      *(_BYTE *)v8 = 1;
      if ( v7 )
      {
        tip::details::test_common_data<1>::end_update((__int64)(v7 + 2));
        std::shared_ptr<PeoplePaneViewInfo>::reset(&v16);
      }
      if ( v17 )
        std::_Ref_count_base::_Decref(v17);
      tip::details::test_common_data<1>::complete(v19 + 8);
    }
  }
  else
  {
    pt = 0LL;
    v9 = MonitorFromPoint(0LL, 1u);
    v10 = *((_QWORD *)*a2 + 1);
    v15 = v10;
    winrt::Windows::Foundation::IUnknown::add_ref((winrt::Windows::Foundation::IUnknown *)&v15);
    pt.x = 2;
    v20[0] = *a3;
    v12 = 0;
    v14 = *(_QWORD *)*a2;
    v11 = v14;
    winrt::Windows::Foundation::IUnknown::add_ref((winrt::Windows::Foundation::IUnknown *)&v14);
    winrt::impl::consume_Windows_Internal_Shell_IRegistrationData<winrt::Windows::Internal::Shell::IRegistrationData>::SystemId(
      &v14,
      &v16);
    winrt::impl::consume_Windows_Internal_Shell_CloudDesktop_TransitionScreen_ITransitionScreen<winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::ITransitionScreen>::Show(
      &v15,
      &v13,
      &v16,
      &v12,
      a4,
      v20,
      (__int64)v9,
      0,
      &pt);
    winrt::handle_type<winrt::impl::hstring_traits>::close(&v16);
    if ( v11 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v14);
    if ( v10 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v15);
    winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation::TransitionScreenId(
      *a2,
      (const struct winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::TransitionScreenId *)&v13);
    winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation::TransitionScreenType(*a2, 0LL);
    winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation::IsTransitionScreenShown(*a2, 1);
  }
  tip::test_watcher<_tip_DiscoverabilityManagerTipTest>::~test_watcher<_tip_DiscoverabilityManagerTipTest>((__int64)v18);
}
