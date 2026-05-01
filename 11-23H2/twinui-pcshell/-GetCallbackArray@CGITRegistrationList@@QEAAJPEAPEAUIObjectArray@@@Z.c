/*
 * XREFs of ?GetCallbackArray@CGITRegistrationList@@QEAAJPEAPEAUIObjectArray@@@Z @ 0x180055F54
 * Callers:
 *     ?UpdateVisibility@MultitaskingViewVisibilityService@@AEAAXW4MULTITASKING_VIEW_TYPES@@0@Z @ 0x180055EA4 (-UpdateVisibility@MultitaskingViewVisibilityService@@AEAAXW4MULTITASKING_VIEW_TYPES@@0@Z.c)
 *     ?ShownWindowHidden@ViewPresentationMediator@@UEAAXPEAUHWND__@@@Z @ 0x1802D99C0 (-ShownWindowHidden@ViewPresentationMediator@@UEAAXPEAUHWND__@@@Z.c)
 *     ?_FireNotification@ObservableObjectArray@@AEAAJP8IObservableObjectArrayChanged@@EAAXPEAUIObservableObjectArray@@PEAUIObservableItem@@@ZW4ObservableArrayOperation@@1@Z @ 0x1802E2522 (-_FireNotification@ObservableObjectArray@@AEAAJP8IObservableObjectArrayChanged@@EAAXPEAUIObserva.c)
 *     ?NotifyAppLayoutChanged@TabletModePositionerManager@@AEAAJPEAUIImmersiveMonitor@@PEAUIAppLayoutOperation@@@Z @ 0x1802E61AE (-NotifyAppLayoutChanged@TabletModePositionerManager@@AEAAJPEAUIImmersiveMonitor@@PEAUIAppLayoutO.c)
 *     ?NotifyGameFocusChanged@BroadcastDVRComponent@@AEAAX_N@Z @ 0x1803D97D4 (-NotifyGameFocusChanged@BroadcastDVRComponent@@AEAAX_N@Z.c)
 *     ?FullScreenVisibilityChangedEvent@FullScreenPositioner@@AEAAX_N@Z @ 0x1803ED16C (-FullScreenVisibilityChangedEvent@FullScreenPositioner@@AEAAX_N@Z.c)
 *     ?_FireFullScreenModeChangedEvent@CFullScreenManager@@AEAAXH@Z @ 0x1803F1A38 (-_FireFullScreenModeChangedEvent@CFullScreenManager@@AEAAXH@Z.c)
 *     ?OnGroupWindowTemplateApplied@ViewPresentationMediator@@UEAAXPEAUHWND__@@KKUtagRECT@@1K@Z @ 0x1804F3A80 (-OnGroupWindowTemplateApplied@ViewPresentationMediator@@UEAAXPEAUHWND__@@KKUtagRECT@@1K@Z.c)
 *     ?OnMoveSizeAttempted@ViewPresentationMediator@@UEAAXPEAUHWND__@@PEAUIApplicationView@@KK@Z @ 0x1804F3C40 (-OnMoveSizeAttempted@ViewPresentationMediator@@UEAAXPEAUHWND__@@PEAUIApplicationView@@KK@Z.c)
 *     ?OnShellTrackedWindowPosChanged@ViewPresentationMediator@@UEAAXPEAUHWND__@@PEAUIApplicationView@@HKUtagRECT@@@Z @ 0x1804F3DD0 (-OnShellTrackedWindowPosChanged@ViewPresentationMediator@@UEAAXPEAUHWND__@@PEAUIApplicationView@.c)
 *     ?OnShowWindowPolicy@ViewPresentationMediator@@UEAAJPEAUHWND__@@IPEAKPEAUtagRECT@@K@Z @ 0x1804F3F70 (-OnShowWindowPolicy@ViewPresentationMediator@@UEAAJPEAUHWND__@@IPEAKPEAUtagRECT@@K@Z.c)
 *     ?FullScreenVisibilityChanged@CPerMonitorDesktopVisibilityService@@UEAAJH@Z @ 0x18059E950 (-FullScreenVisibilityChanged@CPerMonitorDesktopVisibilityService@@UEAAJH@Z.c)
 *     ?_FireWindowSnappingEvent@CShellSnapComponent@@AEAAXPEAUIApplicationView@@W4WINDOW_SNAP_STATE@@@Z @ 0x1806659BC (-_FireWindowSnappingEvent@CShellSnapComponent@@AEAAXPEAUIApplicationView@@W4WINDOW_SNAP_STATE@@@.c)
 *     ?FireApplicationViewChangeNotification@ApplicationViewFilteredCollection@@AEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x18068928C (-FireApplicationViewChangeNotification@ApplicationViewFilteredCollection@@AEAAJPEAUIApplicationV.c)
 * Callees:
 *     ??$MakeAndInitialize@VCGITCallbackArray@@UIObjectArray@@AEAV?$CCoSimpleArray@V?$ComPtr@UIGITCookieObject@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIGITCookieObject@@@WRL@Microsoft@@@@@@@Details@WRL@Microsoft@@YAJPEAPEAUIObjectArray@@AEAV?$CCoSimpleArray@V?$ComPtr@UIGITCookieObject@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIGITCookieObject@@@WRL@Microsoft@@@@@@@Z @ 0x1800560CC (--$MakeAndInitialize@VCGITCallbackArray@@UIObjectArray@@AEAV-$CCoSimpleArray@V-$ComPtr@UIGITCook.c)
 *     __Platform_ReleaseSRWLockShared @ 0x1801C7950 (__Platform_ReleaseSRWLockShared.c)
 *     __Platform_AcquireSRWLockShared @ 0x1801C7998 (__Platform_AcquireSRWLockShared.c)
 */

__int64 __fastcall CGITRegistrationList::GetCallbackArray(RTL_SRWLOCK *this, struct IObjectArray **a2)
{
  RTL_SRWLOCK *v2; // rdi
  RTL_SRWLOCK *v3; // rbx

  *a2 = 0LL;
  v2 = this + 1;
  v3 = this;
  _Platform_AcquireSRWLockShared(this + 1);
  LODWORD(v3) = Microsoft::WRL::Details::MakeAndInitialize<CGITCallbackArray,IObjectArray,CCoSimpleArray<Microsoft::WRL::ComPtr<IGITCookieObject>,4294967294,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IGITCookieObject>>> &>(
                  a2,
                  &v3[2]);
  _Platform_ReleaseSRWLockShared(v2);
  return (unsigned int)v3;
}
