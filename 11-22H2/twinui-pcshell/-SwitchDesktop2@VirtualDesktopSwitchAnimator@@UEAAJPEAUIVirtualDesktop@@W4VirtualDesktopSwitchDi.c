/*
 * XREFs of ?SwitchDesktop2@VirtualDesktopSwitchAnimator@@UEAAJPEAUIVirtualDesktop@@W4VirtualDesktopSwitchDirection@@PEAUISwitchThumbnailDeviceManager@@PEAUIImmersiveSettingsCache@@PEAUIApplicationViewCollection@@PEAUIImmersiveMonitorManager@@W4VirtualDesktopSwitchType@@@Z @ 0x180617490
 * Callers:
 *     <none>
 * Callees:
 *     ?end_update@?$test_common_data@$00@details@tip@@QEAAXXZ @ 0x1800404E8 (-end_update@-$test_common_data@$00@details@tip@@QEAAXXZ.c)
 *     ?begin_update@?$test_common_data@$00@details@tip@@QEAA_NXZ @ 0x1800405EC (-begin_update@-$test_common_data@$00@details@tip@@QEAA_NXZ.c)
 *     ??0?$shared_ptr@V?$test_merged_data@U_tip_DeactivateRemoteDesktopTipTest@@@details@tip@@@std@@QEAA@AEBV01@@Z @ 0x18008D2F8 (--0-$shared_ptr@V-$test_merged_data@U_tip_DeactivateRemoteDesktopTipTest@@@details@tip@@@std@@QE.c)
 *     ?complete@?$test_common_data@$00@details@tip@@QEAAXXZ @ 0x180095B9C (-complete@-$test_common_data@$00@details@tip@@QEAAXXZ.c)
 *     ?reset@?$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAAXXZ @ 0x180098ACC (-reset@-$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAAXXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x1800C69A4 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$ComPtr@UISwitchThumbnailDeviceManager@@@WRL@Microsoft@@QEAAAEAV012@PEAUISwitchThumbnailDeviceManager@@@Z @ 0x180139DB0 (--4-$ComPtr@UISwitchThumbnailDeviceManager@@@WRL@Microsoft@@QEAAAEAV012@PEAUISwitchThumbnailDevi.c)
 *     ??4?$ComPtr@UIImmersiveSettingsCache@@@WRL@Microsoft@@QEAAAEAV012@PEAUIImmersiveSettingsCache@@@Z @ 0x18013A2E4 (--4-$ComPtr@UIImmersiveSettingsCache@@@WRL@Microsoft@@QEAAAEAV012@PEAUIImmersiveSettingsCache@@@.c)
 *     ??4?$ComPtr@UIImmersiveMonitorManager@@@WRL@Microsoft@@QEAAAEAV012@PEAUIImmersiveMonitorManager@@@Z @ 0x18013A3B0 (--4-$ComPtr@UIImmersiveMonitorManager@@@WRL@Microsoft@@QEAAAEAV012@PEAUIImmersiveMonitorManager@.c)
 *     ??4?$ComPtr@UIApplicationViewCollection@@@WRL@Microsoft@@QEAAAEAV012@PEAUIApplicationViewCollection@@@Z @ 0x18013A7FC (--4-$ComPtr@UIApplicationViewCollection@@@WRL@Microsoft@@QEAAAEAV012@PEAUIApplicationViewCollect.c)
 *     ??$open_and_watch_errors@V?$tip_test@U_tip_VDSlideAnimationPerfTest@@@tip@@@tip@@YA?A_PXZ @ 0x1805FE91C (--$open_and_watch_errors@V-$tip_test@U_tip_VDSlideAnimationPerfTest@@@tip@@@tip@@YA-A_PXZ.c)
 *     ??B?$test_watcher@U_tip_RemoteSessionOnStateChangedTipTest@@@tip@@QEBA_NXZ @ 0x1806006B8 (--B-$test_watcher@U_tip_RemoteSessionOnStateChangedTipTest@@@tip@@QEBA_NXZ.c)
 *     ?AnimateOperation2@VirtualDesktopSwitchAnimator@@AEAAJPEAUIVirtualDesktop@@W4VirtualDesktopSwitchDirection@@W4VirtualDesktopSwitchType@@@Z @ 0x18061684C (-AnimateOperation2@VirtualDesktopSwitchAnimator@@AEAAJPEAUIVirtualDesktop@@W4VirtualDesktopSwitc.c)
 *     ?Cleanup@VirtualDesktopSwitchAnimator@@UEAAXXZ @ 0x180617220 (-Cleanup@VirtualDesktopSwitchAnimator@@UEAAXXZ.c)
 */

__int64 __fastcall VirtualDesktopSwitchAnimator::SwitchDesktop2(
        __int64 a1,
        __int64 (__fastcall ***a2)(__int64, GUID *, __int64 *),
        int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        unsigned int a8)
{
  int v12; // eax
  unsigned int v13; // ebp
  __int64 v14; // rbx
  __int64 v15; // rax
  __int64 v16; // [rsp+20h] [rbp-58h] BYREF
  std::_Ref_count_base *v17; // [rsp+28h] [rbp-50h]
  _BYTE v18[8]; // [rsp+30h] [rbp-48h] BYREF
  _BYTE v19[24]; // [rsp+38h] [rbp-40h] BYREF
  int v20; // [rsp+50h] [rbp-28h]
  __int64 v21; // [rsp+60h] [rbp-18h] BYREF
  std::_Ref_count_base *v22; // [rsp+68h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  if ( *(_BYTE *)(a1 + 168) )
    return 0LL;
  Microsoft::WRL::ComPtr<ISwitchThumbnailDeviceManager>::operator=((__int64 *)(a1 + 24), a4);
  Microsoft::WRL::ComPtr<IImmersiveSettingsCache>::operator=((__int64 *)(a1 + 56), a5);
  Microsoft::WRL::ComPtr<IImmersiveMonitorManager>::operator=((__int64 *)(a1 + 48), a7);
  Microsoft::WRL::ComPtr<IApplicationViewCollection>::operator=((__int64 *)(a1 + 32), a6);
  *(_BYTE *)(a1 + 168) = 1;
  v12 = VirtualDesktopSwitchAnimator::AnimateOperation2(a1 - 24, a2, a3, a8);
  v13 = v12;
  if ( v12 < 0 )
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x16C,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopswitchanimator.cpp",
      (const char *)(unsigned int)v12);
    tip::open_and_watch_errors<tip::tip_test<_tip_VDSlideAnimationPerfTest>>((struct wil::details::IFailureCallback *)v18);
    if ( tip::test_watcher<_tip_RemoteSessionOnStateChangedTipTest>::operator bool((__int64)v18) )
    {
      std::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>(
        &v16,
        &v21);
      v14 = v16;
      tip::details::test_common_data<1>::begin_update(v16 + 8);
      v15 = v14 + 189;
      if ( !v14 )
        v15 = 13LL;
      *(_BYTE *)v15 = 1;
      if ( v14 )
      {
        tip::details::test_common_data<1>::end_update(v14 + 8);
        std::shared_ptr<PeoplePaneViewInfo>::reset(&v16);
      }
      if ( v17 )
        std::_Ref_count_base::_Decref(v17);
      tip::details::test_common_data<1>::complete(v21 + 8);
    }
    if ( v22 )
      std::_Ref_count_base::_Decref(v22);
    if ( v20 )
      wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v19);
    VirtualDesktopSwitchAnimator::Cleanup((VirtualDesktopSwitchAnimator *)a1);
  }
  return v13;
}
