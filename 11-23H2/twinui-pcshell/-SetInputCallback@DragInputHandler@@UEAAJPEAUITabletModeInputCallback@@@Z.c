/*
 * XREFs of ?SetInputCallback@DragInputHandler@@UEAAJPEAUITabletModeInputCallback@@@Z @ 0x180587BB0
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$ComPtr@UITabletModeInputCallback@@@WRL@Microsoft@@QEAAAEAV012@PEAUITabletModeInputCallback@@@Z @ 0x180587804 (--4-$ComPtr@UITabletModeInputCallback@@@WRL@Microsoft@@QEAAAEAV012@PEAUITabletModeInputCallback@.c)
 */

__int64 __fastcall DragInputHandler::SetInputCallback(DragInputHandler *this, struct ITabletModeInputCallback *a2)
{
  Microsoft::WRL::ComPtr<ITabletModeInputCallback>::operator=((__int64 *)this + 4, (__int64)a2);
  return 0LL;
}
