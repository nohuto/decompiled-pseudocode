/*
 * XREFs of ?ShowErrorTransitionScreen@BootConnectionHandler@implementation@Shell@Internal@Windows@winrt@@UEAAXAEBV?$shared_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@std@@@Z @ 0x18072F870
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
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??B?$test_watcher@U_tip_RemoteSessionOnStateChangedTipTest@@@tip@@QEBA_NXZ @ 0x1806006B8 (--B-$test_watcher@U_tip_RemoteSessionOnStateChangedTipTest@@@tip@@QEBA_NXZ.c)
 *     ??$open_and_watch_errors@V?$tip_test@U_tip_BootToCloudPCTest@@@tip@@@tip@@YA?A_PXZ @ 0x180702AF4 (--$open_and_watch_errors@V-$tip_test@U_tip_BootToCloudPCTest@@@tip@@@tip@@YA-A_PXZ.c)
 *     ?ShowErrorTransitionScreen@ConnectionHandler@implementation@Shell@Internal@Windows@winrt@@UEAAXAEBV?$shared_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@std@@@Z @ 0x180736440 (-ShowErrorTransitionScreen@ConnectionHandler@implementation@Shell@Internal@Windows@winrt@@UEAAXA.c)
 */

// Hidden C++ exception states: #wind=2
void winrt::Windows::Internal::Shell::implementation::BootConnectionHandler::ShowErrorTransitionScreen()
{
  __int64 v0; // rbx
  __int64 v1; // rcx
  __int64 v2; // rbx
  __int64 v3; // rax
  FARPROC ProcAddress; // rax
  HMODULE KernelBaseModuleHandle; // rax
  __int64 v6; // [rsp+20h] [rbp-50h] BYREF
  std::_Ref_count_base *v7; // [rsp+28h] [rbp-48h]
  _BYTE v8[8]; // [rsp+30h] [rbp-40h] BYREF
  _BYTE v9[24]; // [rsp+38h] [rbp-38h] BYREF
  int v10; // [rsp+50h] [rbp-20h]
  __int64 v11; // [rsp+60h] [rbp-10h] BYREF
  std::_Ref_count_base *v12; // [rsp+68h] [rbp-8h]

  winrt::Windows::Internal::Shell::implementation::ConnectionHandler::ShowErrorTransitionScreen();
  tip::open_and_watch_errors<tip::tip_test<_tip_BootToCloudPCTest>>((struct wil::details::IFailureCallback *)v8);
  if ( tip::test_watcher<_tip_RemoteSessionOnStateChangedTipTest>::operator bool((__int64)v8) )
  {
    std::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>(
      &v6,
      &v11);
    v0 = v6;
    tip::details::test_common_data<1>::begin_update(v6 + 8);
    v1 = v0 + 200;
    if ( !v0 )
      v1 = 24LL;
    std::wstring::assign(
      (char *)v1,
      L"BootConnectionHandler::ShowErrorTransitionScreen, Error Transition Screen Triggered",
      0x53uLL);
    if ( v0 )
    {
      tip::details::test_common_data<1>::end_update(v0 + 8);
      std::shared_ptr<PeoplePaneViewInfo>::reset(&v6);
    }
    if ( v7 )
      std::_Ref_count_base::_Decref(v7);
    std::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>(
      &v6,
      &v11);
    v2 = v6;
    tip::details::test_common_data<1>::begin_update(v6 + 8);
    v3 = v2 + 190;
    if ( !v2 )
      v3 = 14LL;
    *(_BYTE *)v3 = 1;
    if ( v2 )
    {
      tip::details::test_common_data<1>::end_update(v2 + 8);
      std::shared_ptr<PeoplePaneViewInfo>::reset(&v6);
    }
    if ( v7 )
      std::_Ref_count_base::_Decref(v7);
    tip::details::test_common_data<1>::complete(v11 + 8);
    ProcAddress = (FARPROC)`TestControlReporting'::`2'::s_pfnTestControlReporting[0];
    if ( `TestControlReporting'::`2'::s_pfnTestControlReporting[0]
      || (KernelBaseModuleHandle = wil_details_GetKernelBaseModuleHandle(),
          ProcAddress = GetProcAddress(KernelBaseModuleHandle, "TestControlReporting"),
          (`TestControlReporting'::`2'::s_pfnTestControlReporting[0] = (__int64)ProcAddress) != 0) )
    {
      ((void (__fastcall *)(_QWORD))ProcAddress)(0LL);
    }
  }
  if ( v12 )
    std::_Ref_count_base::_Decref(v12);
  if ( v10 )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v9);
}
