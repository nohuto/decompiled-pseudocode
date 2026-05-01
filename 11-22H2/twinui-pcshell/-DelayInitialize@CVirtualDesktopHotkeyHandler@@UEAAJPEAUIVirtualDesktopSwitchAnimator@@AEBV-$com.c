/*
 * XREFs of ?DelayInitialize@CVirtualDesktopHotkeyHandler@@UEAAJPEAUIVirtualDesktopSwitchAnimator@@AEBV?$com_ptr_t@UIRemoteSessionWindowManager@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x180608EA0
 * Callers:
 *     ?DelayInitialize@CVirtualDesktopHotkeyHandler@@W7EAAJPEAUIVirtualDesktopSwitchAnimator@@AEBV?$com_ptr_t@UIRemoteSessionWindowManager@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1802A8E10 (-DelayInitialize@CVirtualDesktopHotkeyHandler@@W7EAAJPEAUIVirtualDesktopSwitchAnimator@@AEBV-$co.c)
 * Callees:
 *     ??4?$com_ptr_t@UIRemoteSessionWindowManager@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEAUIRemoteSessionWindowManager@Shell@Internal@Windows@@@Z @ 0x18013A8F4 (--4-$com_ptr_t@UIRemoteSessionWindowManager@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@.c)
 *     ??4?$ComPtr@UIVirtualDesktopSwitchAnimator@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopSwitchAnimator@@@Z @ 0x18013C138 (--4-$ComPtr@UIVirtualDesktopSwitchAnimator@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopSwitc.c)
 */

__int64 __fastcall CVirtualDesktopHotkeyHandler::DelayInitialize(__int64 a1, __int64 a2, __int64 *a3)
{
  wil::com_ptr_t<Windows::Internal::Shell::IRemoteSessionWindowManager,wil::err_exception_policy>::operator=(
    (__int64 *)(a1 + 80),
    *a3);
  Microsoft::WRL::ComPtr<IVirtualDesktopSwitchAnimator>::operator=((__int64 *)(a1 + 32), a2);
  return 0LL;
}
