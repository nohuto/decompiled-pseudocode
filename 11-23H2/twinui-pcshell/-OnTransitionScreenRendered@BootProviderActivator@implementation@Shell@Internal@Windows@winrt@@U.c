/*
 * XREFs of ?OnTransitionScreenRendered@BootProviderActivator@implementation@Shell@Internal@Windows@winrt@@UEAAXAEBUTransitionScreen@7CloudDesktop@3456@@Z @ 0x18072E210
 * Callers:
 *     <none>
 * Callees:
 *     ?end_update@?$test_common_data@$00@details@tip@@QEAAXXZ @ 0x1800404E8 (-end_update@-$test_common_data@$00@details@tip@@QEAAXXZ.c)
 *     ?begin_update@?$test_common_data@$00@details@tip@@QEAA_NXZ @ 0x1800405EC (-begin_update@-$test_common_data@$00@details@tip@@QEAA_NXZ.c)
 *     ??0?$shared_ptr@V?$test_merged_data@U_tip_DeactivateRemoteDesktopTipTest@@@details@tip@@@std@@QEAA@AEBV01@@Z @ 0x18008D2F8 (--0-$shared_ptr@V-$test_merged_data@U_tip_DeactivateRemoteDesktopTipTest@@@details@tip@@@std@@QE.c)
 *     ?complete@?$test_common_data@$00@details@tip@@QEAAXXZ @ 0x180095B9C (-complete@-$test_common_data@$00@details@tip@@QEAAXXZ.c)
 *     ?reset@?$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAAXXZ @ 0x180098ACC (-reset@-$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAAXXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x1800C29B0 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x1800C69A4 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?wil_details_GetKernelBaseModuleHandle@@YAPEAUHINSTANCE__@@XZ @ 0x180182AE4 (-wil_details_GetKernelBaseModuleHandle@@YAPEAUHINSTANCE__@@XZ.c)
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x1801917C4 (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??B?$test_watcher@U_tip_RemoteSessionOnStateChangedTipTest@@@tip@@QEBA_NXZ @ 0x1806006B8 (--B-$test_watcher@U_tip_RemoteSessionOnStateChangedTipTest@@@tip@@QEBA_NXZ.c)
 *     ??$open_and_watch_errors@V?$tip_test@U_tip_BootToCloudPCTest@@@tip@@@tip@@YA?A_PXZ @ 0x180702AF4 (--$open_and_watch_errors@V-$tip_test@U_tip_BootToCloudPCTest@@@tip@@@tip@@YA-A_PXZ.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall winrt::Windows::Internal::Shell::implementation::BootProviderActivator::OnTransitionScreenRendered(
        winrt::Windows::Internal::Shell::implementation::BootProviderActivator *this,
        const struct winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::TransitionScreen *a2)
{
  HANDLE v2; // rbx
  void *v3; // rdx
  __int64 v4; // rdi
  __int64 v5; // rcx
  __int64 v6; // rdi
  __int64 v7; // rcx
  __int64 v8; // rdi
  __int64 v9; // rax
  FARPROC ProcAddress; // rax
  HMODULE KernelBaseModuleHandle; // rax
  __int64 v12; // [rsp+20h] [rbp-50h] BYREF
  std::_Ref_count_base *v13; // [rsp+28h] [rbp-48h]
  _BYTE v14[8]; // [rsp+30h] [rbp-40h] BYREF
  _BYTE v15[24]; // [rsp+38h] [rbp-38h] BYREF
  int v16; // [rsp+50h] [rbp-20h]
  __int64 v17; // [rsp+60h] [rbp-10h] BYREF
  std::_Ref_count_base *v18; // [rsp+68h] [rbp-8h]

  v2 = OpenEventW(2u, 0, L"ShellDesktopSwitchEvent");
  tip::open_and_watch_errors<tip::tip_test<_tip_BootToCloudPCTest>>((struct wil::details::IFailureCallback *)v14);
  if ( v2 )
  {
    SetEvent(v2);
    if ( tip::test_watcher<_tip_RemoteSessionOnStateChangedTipTest>::operator bool((__int64)v14) )
    {
      std::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>(
        &v12,
        &v17);
      v4 = v12;
      tip::details::test_common_data<1>::begin_update(v12 + 8);
      v5 = v4 + 200;
      if ( !v4 )
        v5 = 24LL;
      std::wstring::assign(
        (char *)v5,
        L"BootProviderActivator::OnTransitionScreenRendered, ShellDesktopSwitchEvent Triggered",
        0x54uLL);
      if ( v4 )
      {
        tip::details::test_common_data<1>::end_update(v4 + 8);
        std::shared_ptr<PeoplePaneViewInfo>::reset(&v12);
      }
      if ( v13 )
        std::_Ref_count_base::_Decref(v13);
    }
  }
  else if ( tip::test_watcher<_tip_RemoteSessionOnStateChangedTipTest>::operator bool((__int64)v14) )
  {
    std::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>(
      &v12,
      &v17);
    v6 = v12;
    tip::details::test_common_data<1>::begin_update(v12 + 8);
    v7 = v6 + 200;
    if ( !v6 )
      v7 = 24LL;
    std::wstring::assign(
      (char *)v7,
      L"BootProviderActivator::OnTransitionScreenRendered, Failed to open ShellDesktopSwitchEvent",
      0x59uLL);
    if ( v6 )
    {
      tip::details::test_common_data<1>::end_update(v6 + 8);
      std::shared_ptr<PeoplePaneViewInfo>::reset(&v12);
    }
    if ( v13 )
      std::_Ref_count_base::_Decref(v13);
    std::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>(
      &v12,
      &v17);
    v8 = v12;
    tip::details::test_common_data<1>::begin_update(v12 + 8);
    v9 = v8 + 187;
    if ( !v8 )
      v9 = 11LL;
    *(_BYTE *)v9 = 1;
    if ( v8 )
    {
      tip::details::test_common_data<1>::end_update(v8 + 8);
      std::shared_ptr<PeoplePaneViewInfo>::reset(&v12);
    }
    if ( v13 )
      std::_Ref_count_base::_Decref(v13);
    tip::details::test_common_data<1>::complete(v17 + 8);
    ProcAddress = (FARPROC)`TestControlReporting'::`2'::s_pfnTestControlReporting[0];
    if ( `TestControlReporting'::`2'::s_pfnTestControlReporting[0]
      || (KernelBaseModuleHandle = wil_details_GetKernelBaseModuleHandle(),
          ProcAddress = GetProcAddress(KernelBaseModuleHandle, "TestControlReporting"),
          (`TestControlReporting'::`2'::s_pfnTestControlReporting[0] = (__int64)ProcAddress) != 0) )
    {
      ((void (__fastcall *)(_QWORD))ProcAddress)(0LL);
    }
  }
  if ( v18 )
    std::_Ref_count_base::_Decref(v18);
  if ( v16 )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v15);
  if ( v2 )
    wil::details::CloseHandle((wil::details *)v2, v3);
}
