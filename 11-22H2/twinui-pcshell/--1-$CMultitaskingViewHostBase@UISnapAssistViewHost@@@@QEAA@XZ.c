/*
 * XREFs of ??1?$CMultitaskingViewHostBase@UISnapAssistViewHost@@@@QEAA@XZ @ 0x180081420
 * Callers:
 *     ??1TaskViewHost@@UEAA@XZ @ 0x18007F830 (--1TaskViewHost@@UEAA@XZ.c)
 *     ??1XamlAltTabViewHost@@UEAA@XZ @ 0x1802EC532 (--1XamlAltTabViewHost@@UEAA@XZ.c)
 *     ??1CAltTabViewHost@@UEAA@XZ @ 0x180560E2C (--1CAltTabViewHost@@UEAA@XZ.c)
 *     ??_G?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@V?$CMultitaskingViewHostBase@UIPPIAllUpViewHost@@@@UIExternalDragHost@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x180560F60 (--_G-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@V-$CMultitaskingViewHostBase@UIPPIAll.c)
 *     ??1CPPIAllUpViewHost@@UEAA@XZ @ 0x180562E94 (--1CPPIAllUpViewHost@@UEAA@XZ.c)
 *     ??1?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@V?$CMultitaskingViewHostBase@UIAllUpViewHost@@@@UIAllUpViewHostInternal@@UITabletModeChangeListener@@V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@@WRL@Microsoft@@UEAA@XZ @ 0x180767794 (--1-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@V-$CMultitaskingViewHostBase@UIAllUpVi.c)
 *     ??_G?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@V?$CMultitaskingViewHostBase@UIAllUpViewHost@@@@UIAllUpViewHostInternal@@UITabletModeChangeListener@@V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x180767830 (--_G-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@V-$CMultitaskingViewHostBase@UIAllUpV.c)
 *     ??1?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@V?$CMultitaskingViewHostBase@UISnapAssistViewHost@@@@UIXamlSnapAssistViewHostInternal@@UIGuidedSnapAssistHost@WindowSnapping@Shell@Internal@Windows@ABI@@U5@UIImmersiveMonitorNotification@@V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@@Details@WRL@Microsoft@@UEAA@XZ @ 0x18076A41C (--1-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@V-$CMultitaskingViewHost.c)
 *     ??1?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@V?$CMultitaskingViewHostBase@UIVirtualDesktopSwitcherHost@@@@UIVirtualDesktopSwitcherViewHostInternal@@@Details@WRL@Microsoft@@UEAA@XZ @ 0x180771C28 (--1-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@V-$CMultita_ea_180771C28.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     Microsoft::WRL::ComPtr__anonymous_namespace_::MonitorEventRegistration_::InternalRelease_0 @ 0x1800739D0 (Microsoft--WRL--ComPtr__anonymous_namespace_--MonitorEventRegistration_--InternalRelease_0.c)
 *     EventRegistrationHelpers::EventListener_IImmersiveMonitorNotificationService_IImmersiveMonitorNotification__anonymous_namespace_::MonitorEventRegistration_::Unregister_0 @ 0x180081474 (EventRegistrationHelpers--EventListener_IImmersiveMonitorNotificationService_IImmer_ea_180081474.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CMultitaskingViewHostBase<ISnapAssistViewHost>::~CMultitaskingViewHostBase<ISnapAssistViewHost>(
        __int64 a1)
{
  EventRegistrationHelpers::EventListener_IImmersiveMonitorNotificationService_IImmersiveMonitorNotification__anonymous_namespace_::MonitorEventRegistration_::Unregister_0(a1 + 96);
  Microsoft::WRL::ComPtr__anonymous_namespace_::MonitorEventRegistration_::InternalRelease_0((__int64 *)(a1 + 104));
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)(a1 + 88));
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)(a1 + 80));
  DeleteCriticalSection((LPCRITICAL_SECTION)(a1 + 24));
}
