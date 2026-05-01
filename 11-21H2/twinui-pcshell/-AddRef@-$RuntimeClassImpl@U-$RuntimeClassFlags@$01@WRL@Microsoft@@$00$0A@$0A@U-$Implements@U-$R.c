/*
 * XREFs of ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ITypedEventHandler@PEAUIVirtualDesktopPerMonitorCollection@Multitasking@ComposableShell@Internal@Windows@@PEAUIVirtualDesktopPerMonitorCollectionChangedEventArgs@2345@@Foundation@Windows@@VFtmBase@23@@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180042C20
 * Callers:
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIAsyncCallback@@VFtmBase@23@@23@@Details@WRL@Microsoft@@W7EAAKXZ @ 0x1801F09C0 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U-$Im_ea_1801F09C0.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCWRLObjectWithSite@@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIImmersiveMonitorNotification@@UIActiveZBandNotificationForMonitor@@@23@@Details@WRL@Microsoft@@WBI@EAAKXZ @ 0x1802049A0 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCWRL_ea_1802049A0.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCWRLObjectWithSite@@UIXamlLauncherState@@UIImmersiveLauncherCortana@@UIImmersiveWindowMessageNotification@@UIImmersiveSessionIdleNotification@@@Details@WRL@Microsoft@@WCA@EAAKXZ @ 0x1802049C0 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCWRL_ea_1802049C0.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCWRLObjectWithSite@@UIXamlLauncherState@@UIImmersiveLauncherCortana@@UIImmersiveWindowMessageNotification@@UIImmersiveSessionIdleNotification@@@Details@WRL@Microsoft@@WCI@EAAKXZ @ 0x1802049E0 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCWRL_ea_1802049E0.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCWRLObjectWithSite@@UIXamlLauncherState@@UIImmersiveLauncherCortana@@UIImmersiveWindowMessageNotification@@UIImmersiveSessionIdleNotification@@@Details@WRL@Microsoft@@WDA@EAAKXZ @ 0x180204A00 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCWRL_ea_180204A00.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@UIVirtualDesktopAccessibility@@UIVirtualDesktopAccessibilityInternal@@VFtmBase@23@@Details@WRL@Microsoft@@WBA@EAAKXZ @ 0x18020CDB0 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@V-$Vi_ea_18020CDB0.c)
 * Callees:
 *     <none>
 */

unsigned int __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopPerMonitorCollection *,Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopPerMonitorCollectionChangedEventArgs *>,Microsoft::WRL::FtmBase>>::AddRef(
        __int64 a1,
        volatile int *a2)
{
  return Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(a1 + 60), a2);
}
