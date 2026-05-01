/*
 * XREFs of ?SetVirtualDesktopItems@CMultitaskingViewFrame@@UEAAJPEAUIObservableObjectArray@@@Z @ 0x1804B2540
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$ComPtr@UIObservableObjectArray@@@WRL@Microsoft@@QEAAAEAV012@PEAUIObservableObjectArray@@@Z @ 0x1804AA584 (--4-$ComPtr@UIObservableObjectArray@@@WRL@Microsoft@@QEAAAEAV012@PEAUIObservableObjectArray@@@Z.c)
 */

__int64 __fastcall CMultitaskingViewFrame::SetVirtualDesktopItems(
        CMultitaskingViewFrame *this,
        struct IObservableObjectArray *a2)
{
  Microsoft::WRL::ComPtr<IObservableObjectArray>::operator=((__int64 *)this + 306, (__int64)a2);
  return 0LL;
}
