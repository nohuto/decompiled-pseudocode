/*
 * XREFs of ?GetCallbackArray@AgileRegistrationList@@QEAAJPEAPEAUIObjectArray@@@Z @ 0x1800C8F50
 * Callers:
 *     ?_PrepareDeferredNotifications@CImmersiveMode@@AEAAXW4ZBID@@@Z @ 0x18004FC74 (-_PrepareDeferredNotifications@CImmersiveMode@@AEAAXW4ZBID@@@Z.c)
 *     ?GetListeners@CApplicationManager@@UEAAJPEAPEAUIObjectArray@@@Z @ 0x180069AB0 (-GetListeners@CApplicationManager@@UEAAJPEAPEAUIObjectArray@@@Z.c)
 *     ?RaiseApplicationViewChanged@CApplicationViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x1800C8550 (-RaiseApplicationViewChanged@CApplicationViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_V.c)
 *     ?ProcessPendingNotifications@ApplicationViewManagerVisibilityDebouncer@@AEAAJXZ @ 0x1800C9510 (-ProcessPendingNotifications@ApplicationViewManagerVisibilityDebouncer@@AEAAJXZ.c)
 *     ??$_QueueNotification2@UIVirtualDesktopNotification@@PEAUIApplicationView@@$$ZV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@CVirtualDesktopNotifications@@AEAAJP8IVirtualDesktopNotification@@EAAJPEAUIApplicationView@@@ZV?$tuple@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@std@@@Z @ 0x18014DA4C (--$_QueueNotification2@UIVirtualDesktopNotification@@PEAUIApplicationView@@$$ZV-$ComPtr@UIApplic.c)
 *     ?_ScheduleLegacyModeNotification@CImmersiveMode@@AEAAXW4IMM_SYSTEM_MODE@@0@Z @ 0x1801817F8 (-_ScheduleLegacyModeNotification@CImmersiveMode@@AEAAXW4IMM_SYSTEM_MODE@@0@Z.c)
 *     ?_SendViewTransitionNotification@HolographicPositioner@@AEAAJPEAUIApplicationView@@W4ViewTransitionDirection@@@Z @ 0x1804B04BC (-_SendViewTransitionNotification@HolographicPositioner@@AEAAJPEAUIApplicationView@@W4ViewTransit.c)
 *     ??$_QueueNotification2@UIVirtualDesktopNotification@@PEAUIVirtualDesktop@@$$ZV?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@@CVirtualDesktopNotifications@@AEAAJP8IVirtualDesktopNotification@@EAAJPEAUIVirtualDesktop@@@ZV?$tuple@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@@std@@@Z @ 0x1805F924C (--$_QueueNotification2@UIVirtualDesktopNotification@@PEAUIVirtualDesktop@@$$ZV-$ComPtr@UIVirtual.c)
 *     ??$_QueueNotification2@UIVirtualDesktopNotification@@PEAUIVirtualDesktop@@II$$ZV?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@II@CVirtualDesktopNotifications@@AEAAJP8IVirtualDesktopNotification@@EAAJPEAUIVirtualDesktop@@II@ZV?$tuple@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@II@std@@@Z @ 0x1805F935C (--$_QueueNotification2@UIVirtualDesktopNotification@@PEAUIVirtualDesktop@@II$$ZV-$ComPtr@UIVirtu.c)
 *     ??$_QueueNotification2@UIVirtualDesktopNotification@@PEAUIVirtualDesktop@@PEAU2@$$ZV?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@V345@@CVirtualDesktopNotifications@@AEAAJP8IVirtualDesktopNotification@@EAAJPEAUIVirtualDesktop@@0@ZV?$tuple@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@V123@@std@@@Z @ 0x1805F9460 (--$_QueueNotification2@UIVirtualDesktopNotification@@PEAUIVirtualDesktop@@PEAU2@$$ZV-$ComPtr@UIV.c)
 *     ??$_QueueNotification2@UIVirtualDesktopNotification@@PEAUIVirtualDesktop@@PEAUHSTRING__@@$$ZV?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@VHString@Wrappers@56@@CVirtualDesktopNotifications@@AEAAJP8IVirtualDesktopNotification@@EAAJPEAUIVirtualDesktop@@PEAUHSTRING__@@@ZV?$tuple@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@VHString@Wrappers@23@@std@@@Z @ 0x1805F9560 (--$_QueueNotification2@UIVirtualDesktopNotification@@PEAUIVirtualDesktop@@PEAUHSTRING__@@$$ZV-$C.c)
 *     ??$_QueueNotification2@UIVirtualDesktopNotification@@PEAUIVirtualDesktop@@W4VirtualDesktopSwitchType@@$$ZV?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@W43@@CVirtualDesktopNotifications@@AEAAJP8IVirtualDesktopNotification@@EAAJPEAUIVirtualDesktop@@W4VirtualDesktopSwitchType@@@ZV?$tuple@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@W4VirtualDesktopSwitchType@@@std@@@Z @ 0x1805F96D0 (--$_QueueNotification2@UIVirtualDesktopNotification@@PEAUIVirtualDesktop@@W4VirtualDesktopSwitch.c)
 *     ?BeginAnimatedSwitch@VirtualDesktopAnimationSyncNotifications@@UEAAJPEAUIVirtualDesktop@@0PEAPEAUIVirtualDesktopAnimationNotificationInstance@@@Z @ 0x180608A50 (-BeginAnimatedSwitch@VirtualDesktopAnimationSyncNotifications@@UEAAJPEAUIVirtualDesktop@@0PEAPEA.c)
 * Callees:
 *     ??$Make@VAgileCallbackArray@AgileRegistrationList@@AEAV?$vector@UItem@AgileRegistrationList@@V?$allocator@UItem@AgileRegistrationList@@@std@@@std@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VAgileCallbackArray@AgileRegistrationList@@@12@AEAV?$vector@UItem@AgileRegistrationList@@V?$allocator@UItem@AgileRegistrationList@@@std@@@std@@@Z @ 0x1801CFE84 (--$Make@VAgileCallbackArray@AgileRegistrationList@@AEAV-$vector@UItem@AgileRegistrationList@@V-$.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
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
