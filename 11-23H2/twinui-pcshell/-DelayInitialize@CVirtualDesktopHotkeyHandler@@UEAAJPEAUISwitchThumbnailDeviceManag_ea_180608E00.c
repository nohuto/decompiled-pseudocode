/*
 * XREFs of ?DelayInitialize@CVirtualDesktopHotkeyHandler@@UEAAJPEAUISwitchThumbnailDeviceManager@@PEAUIApplicationViewCollection@@PEAUIVirtualDesktopSwitchAnimator@@PEAUIImmersiveSettingsCache@@PEAUIImmersiveMonitorManager@@@Z @ 0x180608E00
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$ComPtr@UISwitchThumbnailDeviceManager@@@WRL@Microsoft@@QEAAAEAV012@PEAUISwitchThumbnailDeviceManager@@@Z @ 0x180139DB0 (--4-$ComPtr@UISwitchThumbnailDeviceManager@@@WRL@Microsoft@@QEAAAEAV012@PEAUISwitchThumbnailDevi.c)
 *     ??4?$ComPtr@UIImmersiveSettingsCache@@@WRL@Microsoft@@QEAAAEAV012@PEAUIImmersiveSettingsCache@@@Z @ 0x18013A2E4 (--4-$ComPtr@UIImmersiveSettingsCache@@@WRL@Microsoft@@QEAAAEAV012@PEAUIImmersiveSettingsCache@@@.c)
 *     ??4?$ComPtr@UIImmersiveMonitorManager@@@WRL@Microsoft@@QEAAAEAV012@PEAUIImmersiveMonitorManager@@@Z @ 0x18013A3B0 (--4-$ComPtr@UIImmersiveMonitorManager@@@WRL@Microsoft@@QEAAAEAV012@PEAUIImmersiveMonitorManager@.c)
 *     ??4?$ComPtr@UIApplicationViewCollection@@@WRL@Microsoft@@QEAAAEAV012@PEAUIApplicationViewCollection@@@Z @ 0x18013A7FC (--4-$ComPtr@UIApplicationViewCollection@@@WRL@Microsoft@@QEAAAEAV012@PEAUIApplicationViewCollect.c)
 *     ??4?$ComPtr@UIVirtualDesktopSwitchAnimator@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopSwitchAnimator@@@Z @ 0x18013C138 (--4-$ComPtr@UIVirtualDesktopSwitchAnimator@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopSwitc.c)
 */

__int64 __fastcall CVirtualDesktopHotkeyHandler::DelayInitialize(
        CVirtualDesktopHotkeyHandler *this,
        struct ISwitchThumbnailDeviceManager *a2,
        struct IApplicationViewCollection *a3,
        struct IVirtualDesktopSwitchAnimator *a4,
        struct IImmersiveSettingsCache *a5,
        struct IImmersiveMonitorManager *a6)
{
  __int64 result; // rax

  Microsoft::WRL::ComPtr<ISwitchThumbnailDeviceManager>::operator=((__int64 *)this + 6, (__int64)a2);
  Microsoft::WRL::ComPtr<IVirtualDesktopSwitchAnimator>::operator=((__int64 *)this + 3, (__int64)a4);
  Microsoft::WRL::ComPtr<IImmersiveSettingsCache>::operator=((__int64 *)this + 5, (__int64)a5);
  Microsoft::WRL::ComPtr<IImmersiveMonitorManager>::operator=((__int64 *)this + 4, (__int64)a6);
  Microsoft::WRL::ComPtr<IApplicationViewCollection>::operator=((__int64 *)this + 7, (__int64)a3);
  result = 0LL;
  *((_BYTE *)this + 80) = 1;
  return result;
}
