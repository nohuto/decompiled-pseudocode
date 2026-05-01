/*
 * XREFs of ?RuntimeClassInitialize@CVirtualDesktopApplicationViewEventListener@@QEAAJPEAUIVirtualDesktopManagerPrivate@@PEAUIVirtualDesktopSwitchAnimator@@PEAUIVirtualDesktopForegroundPolicy@@PEAUIVirtualDesktopWindowMoveManager@@PEAUIVirtualDesktopPinnedAppsPrivate@@PEAUIVirtualDesktopLock@@@Z @ 0x18013BD00
 * Callers:
 *     ??$MakeAndInitialize@VCVirtualDesktopApplicationViewEventListener@@V1@AEAPEAUIVirtualDesktopManagerPrivate@@AEAPEAUIVirtualDesktopSwitchAnimator@@AEAPEAUIVirtualDesktopForegroundPolicy@@AEAPEAUIVirtualDesktopWindowMoveManager@@AEAPEAUIVirtualDesktopPinnedAppsPrivate@@AEAPEAUIVirtualDesktopLock@@@Details@WRL@Microsoft@@YAJPEAPEAVCVirtualDesktopApplicationViewEventListener@@AEAPEAUIVirtualDesktopManagerPrivate@@AEAPEAUIVirtualDesktopSwitchAnimator@@AEAPEAUIVirtualDesktopForegroundPolicy@@AEAPEAUIVirtualDesktopWindowMoveManager@@AEAPEAUIVirtualDesktopPinnedAppsPrivate@@AEAPEAUIVirtualDesktopLock@@@Z @ 0x18013D514 (--$MakeAndInitialize@VCVirtualDesktopApplicationViewEventListener@@V1@AEAPEAUIVirtualDesktopMana.c)
 * Callees:
 *     ??4?$ComPtr@UIVirtualDesktopWindowMoveManager@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopWindowMoveManager@@@Z @ 0x18013BD7C (--4-$ComPtr@UIVirtualDesktopWindowMoveManager@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopWi.c)
 *     ??4?$ComPtr@UIVirtualDesktopPinnedAppsPrivate@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopPinnedAppsPrivate@@@Z @ 0x18013BDDC (--4-$ComPtr@UIVirtualDesktopPinnedAppsPrivate@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopPi.c)
 *     ??4?$ComPtr@UIVirtualDesktopManagerPrivate@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopManagerPrivate@@@Z @ 0x18013BE3C (--4-$ComPtr@UIVirtualDesktopManagerPrivate@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopManag.c)
 *     ??4?$ComPtr@UIVirtualDesktopLock@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopLock@@@Z @ 0x18013BF58 (--4-$ComPtr@UIVirtualDesktopLock@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopLock@@@Z.c)
 *     ??4?$ComPtr@UIVirtualDesktopForegroundPolicy@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopForegroundPolicy@@@Z @ 0x18013BFB8 (--4-$ComPtr@UIVirtualDesktopForegroundPolicy@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopFor.c)
 *     ??4?$ComPtr@UIVirtualDesktopSwitchAnimator@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopSwitchAnimator@@@Z @ 0x18013C138 (--4-$ComPtr@UIVirtualDesktopSwitchAnimator@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopSwitc.c)
 */

__int64 __fastcall CVirtualDesktopApplicationViewEventListener::RuntimeClassInitialize(
        CVirtualDesktopApplicationViewEventListener *this,
        struct IVirtualDesktopManagerPrivate *a2,
        struct IVirtualDesktopSwitchAnimator *a3,
        struct IVirtualDesktopForegroundPolicy *a4,
        struct IVirtualDesktopWindowMoveManager *a5,
        struct IVirtualDesktopPinnedAppsPrivate *a6,
        struct IVirtualDesktopLock *a7)
{
  Microsoft::WRL::ComPtr<IVirtualDesktopManagerPrivate>::operator=((char *)this + 48, a2);
  Microsoft::WRL::ComPtr<IVirtualDesktopSwitchAnimator>::operator=((char *)this + 56, a3);
  Microsoft::WRL::ComPtr<IVirtualDesktopForegroundPolicy>::operator=((char *)this + 64, a4);
  Microsoft::WRL::ComPtr<IVirtualDesktopWindowMoveManager>::operator=((char *)this + 72, a5);
  Microsoft::WRL::ComPtr<IVirtualDesktopPinnedAppsPrivate>::operator=((char *)this + 80, a6);
  Microsoft::WRL::ComPtr<IVirtualDesktopLock>::operator=((char *)this + 88, a7);
  return 0LL;
}
