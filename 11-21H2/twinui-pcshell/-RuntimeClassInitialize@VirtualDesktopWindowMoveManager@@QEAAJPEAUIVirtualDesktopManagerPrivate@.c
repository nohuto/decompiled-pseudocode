/*
 * XREFs of ?RuntimeClassInitialize@VirtualDesktopWindowMoveManager@@QEAAJPEAUIVirtualDesktopManagerPrivate@@PEAUIVirtualDesktopCollection@@PEAUIVirtualDesktopVisibilityPolicy@@PEAUIVirtualDesktopPinnedAppsPrivate@@@Z @ 0x18011262C
 * Callers:
 *     ??$MakeAndInitialize@VVirtualDesktopWindowMoveManager@@V1@AEAPEAUIVirtualDesktopManagerPrivate@@AEAPEAUIVirtualDesktopCollection@@AEAPEAUIVirtualDesktopVisibilityPolicy@@AEAPEAUIVirtualDesktopPinnedAppsPrivate@@@Details@WRL@Microsoft@@YAJPEAPEAVVirtualDesktopWindowMoveManager@@AEAPEAUIVirtualDesktopManagerPrivate@@AEAPEAUIVirtualDesktopCollection@@AEAPEAUIVirtualDesktopVisibilityPolicy@@AEAPEAUIVirtualDesktopPinnedAppsPrivate@@@Z @ 0x1801122A0 (--$MakeAndInitialize@VVirtualDesktopWindowMoveManager@@V1@AEAPEAUIVirtualDesktopManagerPrivate@@.c)
 * Callees:
 *     ??4?$ComPtr@UIVirtualDesktopVisibilityPolicy@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopVisibilityPolicy@@@Z @ 0x180112970 (--4-$ComPtr@UIVirtualDesktopVisibilityPolicy@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopVis.c)
 *     ??4?$ComPtr@UIVirtualDesktopCollection@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopCollection@@@Z @ 0x1801129D4 (--4-$ComPtr@UIVirtualDesktopCollection@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopCollectio.c)
 *     ??4?$ComPtr@UIVirtualDesktopManagerPrivate@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopManagerPrivate@@@Z @ 0x180112A38 (--4-$ComPtr@UIVirtualDesktopManagerPrivate@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopManag.c)
 *     ??4?$ComPtr@UIVirtualDesktopPinnedAppsPrivate@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopPinnedAppsPrivate@@@Z @ 0x180112A9C (--4-$ComPtr@UIVirtualDesktopPinnedAppsPrivate@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopPi.c)
 */

__int64 __fastcall VirtualDesktopWindowMoveManager::RuntimeClassInitialize(
        VirtualDesktopWindowMoveManager *this,
        struct IVirtualDesktopManagerPrivate *a2,
        struct IVirtualDesktopCollection *a3,
        struct IVirtualDesktopVisibilityPolicy *a4,
        struct IVirtualDesktopPinnedAppsPrivate *a5)
{
  Microsoft::WRL::ComPtr<IVirtualDesktopManagerPrivate>::operator=((char *)this + 48, a2);
  Microsoft::WRL::ComPtr<IVirtualDesktopCollection>::operator=((char *)this + 56, a3);
  Microsoft::WRL::ComPtr<IVirtualDesktopVisibilityPolicy>::operator=((char *)this + 72, a4);
  Microsoft::WRL::ComPtr<IVirtualDesktopPinnedAppsPrivate>::operator=((char *)this + 80, a5);
  return 0LL;
}
