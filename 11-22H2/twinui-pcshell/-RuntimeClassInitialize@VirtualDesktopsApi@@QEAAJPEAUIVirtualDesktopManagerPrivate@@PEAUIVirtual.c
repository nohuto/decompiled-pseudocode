/*
 * XREFs of ?RuntimeClassInitialize@VirtualDesktopsApi@@QEAAJPEAUIVirtualDesktopManagerPrivate@@PEAUIVirtualDesktopCollection@@PEAUIVirtualDesktopVisibilityPolicy@@PEAUIVirtualDesktopWindowMoveManager@@PEAUIVirtualDesktopLock@@@Z @ 0x18013BB50
 * Callers:
 *     ??$MakeAndInitialize@VVirtualDesktopsApi@@V1@AEAPEAUIVirtualDesktopManagerPrivate@@AEAPEAUIVirtualDesktopCollection@@AEAPEAUIVirtualDesktopVisibilityPolicy@@AEAPEAUIVirtualDesktopWindowMoveManager@@AEAPEAUIVirtualDesktopLock@@@Details@WRL@Microsoft@@YAJPEAPEAVVirtualDesktopsApi@@AEAPEAUIVirtualDesktopManagerPrivate@@AEAPEAUIVirtualDesktopCollection@@AEAPEAUIVirtualDesktopVisibilityPolicy@@AEAPEAUIVirtualDesktopWindowMoveManager@@AEAPEAUIVirtualDesktopLock@@@Z @ 0x18013D390 (--$MakeAndInitialize@VVirtualDesktopsApi@@V1@AEAPEAUIVirtualDesktopManagerPrivate@@AEAPEAUIVirtu.c)
 * Callees:
 *     ??4?$ComPtr@UIVirtualDesktopWindowMoveManager@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopWindowMoveManager@@@Z @ 0x18013BD7C (--4-$ComPtr@UIVirtualDesktopWindowMoveManager@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopWi.c)
 *     ??4?$ComPtr@UIVirtualDesktopManagerPrivate@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopManagerPrivate@@@Z @ 0x18013BE3C (--4-$ComPtr@UIVirtualDesktopManagerPrivate@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopManag.c)
 *     ??4?$ComPtr@UIVirtualDesktopVisibilityPolicy@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopVisibilityPolicy@@@Z @ 0x18013BEF8 (--4-$ComPtr@UIVirtualDesktopVisibilityPolicy@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopVis.c)
 *     ??4?$ComPtr@UIVirtualDesktopLock@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopLock@@@Z @ 0x18013BF58 (--4-$ComPtr@UIVirtualDesktopLock@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopLock@@@Z.c)
 *     ??4?$ComPtr@UIVirtualDesktopCollection@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopCollection@@@Z @ 0x18013C018 (--4-$ComPtr@UIVirtualDesktopCollection@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopCollectio.c)
 */

__int64 __fastcall VirtualDesktopsApi::RuntimeClassInitialize(
        VirtualDesktopsApi *this,
        struct IVirtualDesktopManagerPrivate *a2,
        struct IVirtualDesktopCollection *a3,
        struct IVirtualDesktopVisibilityPolicy *a4,
        struct IVirtualDesktopWindowMoveManager *a5,
        struct IVirtualDesktopLock *a6)
{
  Microsoft::WRL::ComPtr<IVirtualDesktopManagerPrivate>::operator=((char *)this + 56, a2);
  Microsoft::WRL::ComPtr<IVirtualDesktopCollection>::operator=((char *)this + 64, a3);
  Microsoft::WRL::ComPtr<IVirtualDesktopVisibilityPolicy>::operator=((char *)this + 72, a4);
  Microsoft::WRL::ComPtr<IVirtualDesktopWindowMoveManager>::operator=((char *)this + 80, a5);
  Microsoft::WRL::ComPtr<IVirtualDesktopLock>::operator=((char *)this + 88, a6);
  return 0LL;
}
