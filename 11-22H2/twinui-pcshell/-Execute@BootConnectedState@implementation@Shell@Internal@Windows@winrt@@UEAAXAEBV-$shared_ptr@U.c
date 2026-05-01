/*
 * XREFs of ?Execute@BootConnectedState@implementation@Shell@Internal@Windows@winrt@@UEAAXAEBV?$shared_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@std@@W4CloudPCState@3456@@Z @ 0x18072EF70
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
 *     ?DismissTransitionScreen@ConnectionStateBase@implementation@Shell@Internal@Windows@winrt@@IEAAXAEBV?$shared_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@std@@AEBW4DismissalReason@TransitionScreen@CloudDesktop@3456@@Z @ 0x180735D40 (-DismissTransitionScreen@ConnectionStateBase@implementation@Shell@Internal@Windows@winrt@@IEAAXA.c)
 *     ?ThrowIllegalStateTransition@ConnectionStateBase@implementation@Shell@Internal@Windows@winrt@@IEAAXW4CloudPCState@3456@0@Z @ 0x180736C60 (-ThrowIllegalStateTransition@ConnectionStateBase@implementation@Shell@Internal@Windows@winrt@@IE.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall winrt::Windows::Internal::Shell::implementation::BootConnectedState::Execute(
        __int64 a1,
        __int64 a2,
        unsigned int a3)
{
  __int64 v3; // rcx
  __int64 v4; // rbx
  __int64 v5; // rcx
  __int64 v6; // rbx
  __int64 v7; // rax
  FARPROC ProcAddress; // rax
  HMODULE KernelBaseModuleHandle; // rax
  __int64 v10; // [rsp+20h] [rbp-50h] BYREF
  std::_Ref_count_base *v11; // [rsp+28h] [rbp-48h]
  _BYTE v12[8]; // [rsp+30h] [rbp-40h] BYREF
  _BYTE v13[24]; // [rsp+38h] [rbp-38h] BYREF
  int v14; // [rsp+50h] [rbp-20h]
  __int64 v15; // [rsp+60h] [rbp-10h] BYREF
  std::_Ref_count_base *v16; // [rsp+68h] [rbp-8h]
  int v17; // [rsp+90h] [rbp+20h] BYREF

  if ( a3 )
  {
    if ( a3 != 2 )
    {
      v3 = a3 - 98;
      if ( (unsigned int)v3 > 1 )
        winrt::Windows::Internal::Shell::implementation::ConnectionStateBase::ThrowIllegalStateTransition(v3, a3, 1LL);
    }
  }
  else
  {
    v17 = 3;
    winrt::Windows::Internal::Shell::implementation::ConnectionStateBase::DismissTransitionScreen(0LL, a2, &v17, 0LL);
    tip::open_and_watch_errors<tip::tip_test<_tip_BootToCloudPCTest>>((struct wil::details::IFailureCallback *)v12);
    if ( tip::test_watcher<_tip_RemoteSessionOnStateChangedTipTest>::operator bool((__int64)v12) )
    {
      std::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>(
        &v10,
        &v15);
      v4 = v10;
      tip::details::test_common_data<1>::begin_update(v10 + 8);
      v5 = v4 + 200;
      if ( !v4 )
        v5 = 24LL;
      std::wstring::assign((char *)v5, L"BootConnectedState::Execute, CloudPC Connected Successfully", 0x3BuLL);
      if ( v4 )
      {
        tip::details::test_common_data<1>::end_update(v4 + 8);
        std::shared_ptr<PeoplePaneViewInfo>::reset(&v10);
      }
      if ( v11 )
        std::_Ref_count_base::_Decref(v11);
      std::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>(
        &v10,
        &v15);
      v6 = v10;
      tip::details::test_common_data<1>::begin_update(v10 + 8);
      v7 = v6 + 184;
      if ( !v6 )
        v7 = 8LL;
      *(_BYTE *)v7 = 1;
      if ( v6 )
      {
        tip::details::test_common_data<1>::end_update(v6 + 8);
        std::shared_ptr<PeoplePaneViewInfo>::reset(&v10);
      }
      if ( v11 )
        std::_Ref_count_base::_Decref(v11);
      tip::details::test_common_data<1>::complete(v15 + 8);
      ProcAddress = (FARPROC)`TestControlReporting'::`2'::s_pfnTestControlReporting[0];
      if ( `TestControlReporting'::`2'::s_pfnTestControlReporting[0]
        || (KernelBaseModuleHandle = wil_details_GetKernelBaseModuleHandle(),
            ProcAddress = GetProcAddress(KernelBaseModuleHandle, "TestControlReporting"),
            (`TestControlReporting'::`2'::s_pfnTestControlReporting[0] = (__int64)ProcAddress) != 0) )
      {
        ((void (__fastcall *)(_QWORD))ProcAddress)(0LL);
      }
    }
    if ( v16 )
      std::_Ref_count_base::_Decref(v16);
    if ( v14 )
      wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v13);
  }
}
