/*
 * XREFs of ?GetCallbackArray@AgileRegistrationList@@QEAAJPEAPEAUIObjectArray@@@Z @ 0x18007CB00
 * Callers:
 *     ?_PrepareDeferredNotifications@CImmersiveMode@@AEAAXW4ZBID@@@Z @ 0x180025698 (-_PrepareDeferredNotifications@CImmersiveMode@@AEAAXW4ZBID@@@Z.c)
 *     ?GetListeners@CApplicationManager@@UEAAJPEAPEAUIObjectArray@@@Z @ 0x18007A560 (-GetListeners@CApplicationManager@@UEAAJPEAPEAUIObjectArray@@@Z.c)
 *     ?RaiseApplicationViewChanged@CApplicationViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x18007B5B0 (-RaiseApplicationViewChanged@CApplicationViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_V.c)
 *     ?OnApplicationViewChanged@ApplicationViewManagerVisibilityDebouncer@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x18007C630 (-OnApplicationViewChanged@ApplicationViewManagerVisibilityDebouncer@@UEAAJPEAUIApplicationView@@.c)
 *     ?_ScheduleLegacyModeNotification@CImmersiveMode@@AEAAXW4IMM_SYSTEM_MODE@@0@Z @ 0x1800B7D60 (-_ScheduleLegacyModeNotification@CImmersiveMode@@AEAAXW4IMM_SYSTEM_MODE@@0@Z.c)
 *     ?ProcessPendingNotifications@ApplicationViewManagerVisibilityDebouncer@@AEAAJXZ @ 0x1800E97CC (-ProcessPendingNotifications@ApplicationViewManagerVisibilityDebouncer@@AEAAJXZ.c)
 *     ?OnMessage@CApplicationManager@@UEAA_JI_K_JPEA_N@Z @ 0x1800EBD40 (-OnMessage@CApplicationManager@@UEAA_JI_K_JPEA_N@Z.c)
 *     ??$_QueueNotification2@UIVirtualDesktopNotification@@PEAUIApplicationView@@$$ZV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@CVirtualDesktopNotifications@@AEAAJP8IVirtualDesktopNotification@@EAAJPEAUIApplicationView@@@ZV?$tuple@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@std@@@Z @ 0x18010F6E0 (--$_QueueNotification2@UIVirtualDesktopNotification@@PEAUIApplicationView@@$$ZV-$ComPtr@UIApplic.c)
 *     ?_SendServiceAvailabilityChangedNotification@CApplicationManager@@AEAAXPEAUIImmersiveApplication@@IQEBU_GUID@@W4IMM_APP_SERVICE_NOTIFY_FLAGS@@@Z @ 0x1802EB978 (-_SendServiceAvailabilityChangedNotification@CApplicationManager@@AEAAXPEAUIImmersiveApplication.c)
 *     ?_SendViewTransitionNotification@HolographicPositioner@@AEAAJPEAUIApplicationView@@W4ViewTransitionDirection@@@Z @ 0x1803D35F0 (-_SendViewTransitionNotification@HolographicPositioner@@AEAAJPEAUIApplicationView@@W4ViewTransit.c)
 *     ??$_QueueNotification2@UIVirtualDesktopNotification@@H$$ZH@CVirtualDesktopNotifications@@AEAAJP8IVirtualDesktopNotification@@EAAJH@ZV?$tuple@H@std@@@Z @ 0x18053E6E4 (--$_QueueNotification2@UIVirtualDesktopNotification@@H$$ZH@CVirtualDesktopNotifications@@AEAAJP8.c)
 *     ??$_QueueNotification2@UIVirtualDesktopNotification@@PEAUIObjectArray@@PEAUIVirtualDesktop@@$$ZV?$ComPtr@UIObjectArray@@@WRL@Microsoft@@V?$ComPtr@UIVirtualDesktop@@@56@@CVirtualDesktopNotifications@@AEAAJP8IVirtualDesktopNotification@@EAAJPEAUIObjectArray@@PEAUIVirtualDesktop@@@ZV?$tuple@V?$ComPtr@UIObjectArray@@@WRL@Microsoft@@V?$ComPtr@UIVirtualDesktop@@@23@@std@@@Z @ 0x18053E7D8 (--$_QueueNotification2@UIVirtualDesktopNotification@@PEAUIObjectArray@@PEAUIVirtualDesktop@@$$ZV.c)
 *     ??$_QueueNotification2@UIVirtualDesktopNotification@@PEAUIObjectArray@@PEAUIVirtualDesktop@@II$$ZV?$ComPtr@UIObjectArray@@@WRL@Microsoft@@V?$ComPtr@UIVirtualDesktop@@@56@II@CVirtualDesktopNotifications@@AEAAJP8IVirtualDesktopNotification@@EAAJPEAUIObjectArray@@PEAUIVirtualDesktop@@II@ZV?$tuple@V?$ComPtr@UIObjectArray@@@WRL@Microsoft@@V?$ComPtr@UIVirtualDesktop@@@23@II@std@@@Z @ 0x18053E8F0 (--$_QueueNotification2@UIVirtualDesktopNotification@@PEAUIObjectArray@@PEAUIVirtualDesktop@@II$$.c)
 *     ??$_QueueNotification2@UIVirtualDesktopNotification@@PEAUIObjectArray@@PEAUIVirtualDesktop@@PEAU3@$$ZV?$ComPtr@UIObjectArray@@@WRL@Microsoft@@V?$ComPtr@UIVirtualDesktop@@@56@V756@@CVirtualDesktopNotifications@@AEAAJP8IVirtualDesktopNotification@@EAAJPEAUIObjectArray@@PEAUIVirtualDesktop@@1@ZV?$tuple@V?$ComPtr@UIObjectArray@@@WRL@Microsoft@@V?$ComPtr@UIVirtualDesktop@@@23@V423@@std@@@Z @ 0x18053EA14 (--$_QueueNotification2@UIVirtualDesktopNotification@@PEAUIObjectArray@@PEAUIVirtualDesktop@@PEAU.c)
 *     ??$_QueueNotification2@UIVirtualDesktopNotification@@PEAUIVirtualDesktop@@PEAUHSTRING__@@$$ZV?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@VHString@Wrappers@56@@CVirtualDesktopNotifications@@AEAAJP8IVirtualDesktopNotification@@EAAJPEAUIVirtualDesktop@@PEAUHSTRING__@@@ZV?$tuple@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@VHString@Wrappers@23@@std@@@Z @ 0x18053EB4C (--$_QueueNotification2@UIVirtualDesktopNotification@@PEAUIVirtualDesktop@@PEAUHSTRING__@@$$ZV-$C.c)
 *     ?BeginAnimatedSwitch@VirtualDesktopAnimationSyncNotifications@@UEAAJPEAUIVirtualDesktop@@0PEAPEAUIVirtualDesktopAnimationNotificationInstance@@@Z @ 0x18054D570 (-BeginAnimatedSwitch@VirtualDesktopAnimationSyncNotifications@@UEAAJPEAUIVirtualDesktop@@0PEAPEA.c)
 * Callees:
 *     ??$Make@VAgileCallbackArray@AgileRegistrationList@@AEAV?$vector@UItem@AgileRegistrationList@@V?$allocator@UItem@AgileRegistrationList@@@std@@@std@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VAgileCallbackArray@AgileRegistrationList@@@12@AEAV?$vector@UItem@AgileRegistrationList@@V?$allocator@UItem@AgileRegistrationList@@@std@@@std@@@Z @ 0x18018F964 (--$Make@VAgileCallbackArray@AgileRegistrationList@@AEAV-$vector@UItem@AgileRegistrationList@@V-$.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall AgileRegistrationList::GetCallbackArray(RTL_SRWLOCK *this, struct IObjectArray **a2)
{
  RTL_SRWLOCK *v4; // rbx
  struct IObjectArray *v5; // rcx
  volatile signed __int32 *v6; // r8
  signed __int32 i; // edx
  struct IObjectArray *v9; // [rsp+40h] [rbp+8h] BYREF
  RTL_SRWLOCK *v10; // [rsp+48h] [rbp+10h]

  *a2 = 0LL;
  v4 = this + 3;
  AcquireSRWLockShared(this + 3);
  v10 = v4;
  Microsoft::WRL::Details::Make<AgileRegistrationList::AgileCallbackArray,std::vector<AgileRegistrationList::Item> &>(
    &v9,
    this);
  v5 = v9;
  *a2 = v9;
  ((void (__fastcall *)(struct IObjectArray *))v5->lpVtbl->AddRef)(v5);
  v6 = (volatile signed __int32 *)v9;
  if ( v9 )
  {
    v9 = 0LL;
    for ( i = *((_DWORD *)v6 + 11); i != 0x7FFFFFFF; i = *((_DWORD *)v6 + 11) )
    {
      if ( i == _InterlockedCompareExchange(v6 + 11, i - 1, i) )
        break;
    }
    if ( i == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v6 + 40LL))(v6, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
  }
  if ( v4 )
    ReleaseSRWLockShared(v4);
  return 0LL;
}
