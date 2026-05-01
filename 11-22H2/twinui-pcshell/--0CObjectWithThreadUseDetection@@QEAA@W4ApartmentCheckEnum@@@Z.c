/*
 * XREFs of ??0CObjectWithThreadUseDetection@@QEAA@W4ApartmentCheckEnum@@@Z @ 0x1800FF6E8
 * Callers:
 *     ??0?$CMultitaskingViewHostBase@UIAllUpViewHost@@@@QEAA@XZ @ 0x1800779B8 (--0-$CMultitaskingViewHostBase@UIAllUpViewHost@@@@QEAA@XZ.c)
 *     ??0CApplicationManager@@QEAA@XZ @ 0x1800FE474 (--0CApplicationManager@@QEAA@XZ.c)
 *     ??0CImmersiveMode@@QEAA@XZ @ 0x1800FEE68 (--0CImmersiveMode@@QEAA@XZ.c)
 *     ??0CClassicWindowManager@@QEAA@XZ @ 0x1800FF008 (--0CClassicWindowManager@@QEAA@XZ.c)
 *     ??0CMultitaskingViewServiceProvider@@QEAA@XZ @ 0x1800FF104 (--0CMultitaskingViewServiceProvider@@QEAA@XZ.c)
 *     ??0CMultitaskingViewManager@@QEAA@XZ @ 0x1800FF1CC (--0CMultitaskingViewManager@@QEAA@XZ.c)
 *     ??0CAppTransitionManager@@QEAA@XZ @ 0x1800FF3D4 (--0CAppTransitionManager@@QEAA@XZ.c)
 *     ??0CDesktopPositioner@@QEAA@XZ @ 0x1800FF4C8 (--0CDesktopPositioner@@QEAA@XZ.c)
 *     ??0CRealmActivationHistory@@QEAA@PEAUIImmersiveApplicationManagerInternal@@@Z @ 0x1800FF9E0 (--0CRealmActivationHistory@@QEAA@PEAUIImmersiveApplicationManagerInternal@@@Z.c)
 *     ??0?$CMultitaskingViewHostBase@UIAltTabViewHost@@@@QEAA@XZ @ 0x1802E0218 (--0-$CMultitaskingViewHostBase@UIAltTabViewHost@@@@QEAA@XZ.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@V?$CMultitaskingViewHostBase@UIPPIAllUpViewHost@@@@UIExternalDragHost@@@WRL@Microsoft@@QEAA@XZ @ 0x180562D48 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@V-$CMultitaskingViewHostBase@UIPPIAllU.c)
 *     ??0DesktopOperation@@QEAA@XZ @ 0x1805B606C (--0DesktopOperation@@QEAA@XZ.c)
 *     ??0AppSwitchOperation@@QEAA@XZ @ 0x1805C7080 (--0AppSwitchOperation@@QEAA@XZ.c)
 *     ??0WindowArrangementOperation@@QEAA@XZ @ 0x1805C87E4 (--0WindowArrangementOperation@@QEAA@XZ.c)
 *     ??0AppResizeOperation@@QEAA@XZ @ 0x1805C9734 (--0AppResizeOperation@@QEAA@XZ.c)
 *     ??0BackOperation@@QEAA@XZ @ 0x1805CA4F4 (--0BackOperation@@QEAA@XZ.c)
 *     ??0TabletModePositionerOperation@@QEAA@XZ @ 0x1805CAA8C (--0TabletModePositionerOperation@@QEAA@XZ.c)
 *     ??0PPILayoutOperation@@QEAA@XZ @ 0x1805CC320 (--0PPILayoutOperation@@QEAA@XZ.c)
 *     ??0PPIWin32VtcLayoutOperation@@QEAA@XZ @ 0x1805CD0EC (--0PPIWin32VtcLayoutOperation@@QEAA@XZ.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$02@WRL@Microsoft@@V?$CMultitaskingViewHostBase@UISnapAssistViewHost@@@@UIXamlSnapAssistViewHostInternal@@UIGuidedSnapAssistHost@WindowSnapping@Shell@Internal@Windows@ABI@@U5@UIImmersiveMonitorNotification@@V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@@WRL@Microsoft@@QEAA@XZ @ 0x180769A2C (--0-$RuntimeClass@U-$RuntimeClassFlags@$02@WRL@Microsoft@@V-$CMultitaskingViewHostBase@UISnapAss.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$02@WRL@Microsoft@@V?$CMultitaskingViewHostBase@UIVirtualDesktopSwitcherHost@@@@UIVirtualDesktopSwitcherViewHostInternal@@@WRL@Microsoft@@QEAA@XZ @ 0x180771310 (--0-$RuntimeClass@U-$RuntimeClassFlags@$02@WRL@Microsoft@@V-$CMultitaskingViewHostBase@UIVirtual.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CObjectWithThreadUseDetection::CObjectWithThreadUseDetection(__int64 a1, int a2)
{
  *(_DWORD *)(a1 + 40) = -2;
  *(_DWORD *)(a1 + 44) = a2;
  InitializeCriticalSection((LPCRITICAL_SECTION)a1);
  return a1;
}
