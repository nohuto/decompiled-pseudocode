/*
 * XREFs of ??_E?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIBroadcastDVRComponent@@UIBroadcastDVRCommand@@VCImmersiveShellComponentWithGITSite@@UIImmersiveApplicationNotification@@UIApplicationViewChangeListener@@UIImmersiveSessionIdleNotification@@@23@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIImmersiveShellHookNotification@@UIGameFocusNotificationService@@VFtmBase@23@@23@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x1803D50F4
 * Callers:
 *     ??_E?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIBroadcastDVRComponent@@UIBroadcastDVRCommand@@VCImmersiveShellComponentWithGITSite@@UIImmersiveApplicationNotification@@UIApplicationViewChangeListener@@UIImmersiveSessionIdleNotification@@@23@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIImmersiveShellHookNotification@@UIGameFocusNotificationService@@VFtmBase@23@@23@@WRL@Microsoft@@WDI@EAAPEAXI@Z @ 0x180292FF0 (--_E-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@U-$Implements@U-$RuntimeClassFlags@$0.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1CWRLObjectWithGITSite@@IEAA@XZ @ 0x1800FFD58 (--1CWRLObjectWithGITSite@@IEAA@XZ.c)
 *     ??1CImmersiveShellComponent@@UEAA@XZ @ 0x1801026C4 (--1CImmersiveShellComponent@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 */

char *__fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IBroadcastDVRComponent,IBroadcastDVRCommand,CImmersiveShellComponentWithGITSite,IImmersiveApplicationNotification,IApplicationViewChangeListener,IImmersiveSessionIdleNotification>,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IImmersiveShellHookNotification,IGameFocusNotificationService,Microsoft::WRL::FtmBase>>::`vector deleting destructor'(
        char *a1,
        char a2)
{
  *((_DWORD *)a1 + 55) = -1073741823;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)a1 + 24);
  CImmersiveShellComponent::~CImmersiveShellComponent((CImmersiveShellComponent *)(a1 + 56));
  CWRLObjectWithGITSite::~CWRLObjectWithGITSite((CWRLObjectWithGITSite *)(a1 + 16));
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
