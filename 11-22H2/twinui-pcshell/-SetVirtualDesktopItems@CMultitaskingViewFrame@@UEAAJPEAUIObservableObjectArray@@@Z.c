/*
 * XREFs of ?SetVirtualDesktopItems@CMultitaskingViewFrame@@UEAAJPEAUIObservableObjectArray@@@Z @ 0x18056EE90
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$ComPtr@UIObservableObjectArray@@@WRL@Microsoft@@QEAAAEAV012@PEAUIObservableObjectArray@@@Z @ 0x1805671A4 (--4-$ComPtr@UIObservableObjectArray@@@WRL@Microsoft@@QEAAAEAV012@PEAUIObservableObjectArray@@@Z.c)
 */

__int64 __fastcall CMultitaskingViewFrame::SetVirtualDesktopItems(
        CMultitaskingViewFrame *this,
        struct IObservableObjectArray *a2)
{
  Microsoft::WRL::ComPtr<IObservableObjectArray>::operator=((__int64 *)this + 306, (__int64)a2);
  return 0LL;
}
