/*
 * XREFs of ?DelayInitialize@CVirtualDesktopHotkeyHandler@@UEAAJPEAUISwitchThumbnailDeviceManager@@PEAUIApplicationViewCollection@@PEAUIVirtualDesktopSwitchAnimator@@PEAUIImmersiveSettingsCache@@PEAUIImmersiveMonitorManager@@AEBV?$com_ptr_t@UIRemoteSessionWindowManager@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x180139CB0
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$ComPtr@UISwitchThumbnailDeviceManager@@@WRL@Microsoft@@QEAAAEAV012@PEAUISwitchThumbnailDeviceManager@@@Z @ 0x180139DB0 (--4-$ComPtr@UISwitchThumbnailDeviceManager@@@WRL@Microsoft@@QEAAAEAV012@PEAUISwitchThumbnailDevi.c)
 *     ??4?$ComPtr@UIImmersiveSettingsCache@@@WRL@Microsoft@@QEAAAEAV012@PEAUIImmersiveSettingsCache@@@Z @ 0x18013A2E4 (--4-$ComPtr@UIImmersiveSettingsCache@@@WRL@Microsoft@@QEAAAEAV012@PEAUIImmersiveSettingsCache@@@.c)
 *     ??4?$ComPtr@UIImmersiveMonitorManager@@@WRL@Microsoft@@QEAAAEAV012@PEAUIImmersiveMonitorManager@@@Z @ 0x18013A3B0 (--4-$ComPtr@UIImmersiveMonitorManager@@@WRL@Microsoft@@QEAAAEAV012@PEAUIImmersiveMonitorManager@.c)
 *     ??4?$ComPtr@UIApplicationViewCollection@@@WRL@Microsoft@@QEAAAEAV012@PEAUIApplicationViewCollection@@@Z @ 0x18013A7FC (--4-$ComPtr@UIApplicationViewCollection@@@WRL@Microsoft@@QEAAAEAV012@PEAUIApplicationViewCollect.c)
 *     ??4?$com_ptr_t@UIRemoteSessionWindowManager@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEAUIRemoteSessionWindowManager@Shell@Internal@Windows@@@Z @ 0x18013A8F4 (--4-$com_ptr_t@UIRemoteSessionWindowManager@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@.c)
 *     ??4?$ComPtr@UIVirtualDesktopSwitchAnimator@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopSwitchAnimator@@@Z @ 0x18013C138 (--4-$ComPtr@UIVirtualDesktopSwitchAnimator@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopSwitc.c)
 */

__int64 __fastcall CVirtualDesktopHotkeyHandler::DelayInitialize(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        _QWORD *a7)
{
  __int64 result; // rax

  Microsoft::WRL::ComPtr<ISwitchThumbnailDeviceManager>::operator=(a1 + 48, a2);
  Microsoft::WRL::ComPtr<IVirtualDesktopSwitchAnimator>::operator=(a1 + 24, a4);
  Microsoft::WRL::ComPtr<IImmersiveSettingsCache>::operator=(a1 + 40, a5);
  Microsoft::WRL::ComPtr<IImmersiveMonitorManager>::operator=(a1 + 32, a6);
  Microsoft::WRL::ComPtr<IApplicationViewCollection>::operator=(a1 + 56);
  wil::com_ptr_t<Windows::Internal::Shell::IRemoteSessionWindowManager,wil::err_exception_policy>::operator=(
    a1 + 72,
    *a7);
  result = 0LL;
  *(_BYTE *)(a1 + 80) = 1;
  return result;
}
