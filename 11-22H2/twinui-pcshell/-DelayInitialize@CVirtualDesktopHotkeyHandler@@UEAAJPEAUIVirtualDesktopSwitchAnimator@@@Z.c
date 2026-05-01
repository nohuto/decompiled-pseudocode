/*
 * XREFs of ?DelayInitialize@CVirtualDesktopHotkeyHandler@@UEAAJPEAUIVirtualDesktopSwitchAnimator@@@Z @ 0x180608E80
 * Callers:
 *     ?DelayInitialize@CVirtualDesktopHotkeyHandler@@W7EAAJPEAUIVirtualDesktopSwitchAnimator@@@Z @ 0x1802A8DF0 (-DelayInitialize@CVirtualDesktopHotkeyHandler@@W7EAAJPEAUIVirtualDesktopSwitchAnimator@@@Z.c)
 * Callees:
 *     ??4?$ComPtr@UIVirtualDesktopSwitchAnimator@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopSwitchAnimator@@@Z @ 0x18013C138 (--4-$ComPtr@UIVirtualDesktopSwitchAnimator@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopSwitc.c)
 */

__int64 __fastcall CVirtualDesktopHotkeyHandler::DelayInitialize(
        CVirtualDesktopHotkeyHandler *this,
        struct IVirtualDesktopSwitchAnimator *a2)
{
  Microsoft::WRL::ComPtr<IVirtualDesktopSwitchAnimator>::operator=((__int64 *)this + 4, (__int64)a2);
  return 0LL;
}
