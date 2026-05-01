/*
 * XREFs of ?SetManagerReference@CMultitaskingViewServiceProvider@@UEAAJPEAUIMultitaskingViewManager@@@Z @ 0x180177F20
 * Callers:
 *     <none>
 * Callees:
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x180141840 (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     ??4?$ComPtr@UIMultitaskingViewManager@@@WRL@Microsoft@@QEAAAEAV012@PEAUIMultitaskingViewManager@@@Z @ 0x180177F98 (--4-$ComPtr@UIMultitaskingViewManager@@@WRL@Microsoft@@QEAAAEAV012@PEAUIMultitaskingViewManager@.c)
 */

__int64 __fastcall CMultitaskingViewServiceProvider::SetManagerReference(
        CMultitaskingViewServiceProvider *this,
        struct IMultitaskingViewManager *a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rbp
  int v5; // ebx

  v4 = (struct _RTL_CRITICAL_SECTION *)(((unsigned __int64)this + 24) & -(__int64)(this != (CMultitaskingViewServiceProvider *)88));
  v5 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread((__int64)v4, 1);
  Microsoft::WRL::ComPtr<IMultitaskingViewManager>::operator=((char *)this + 72, a2);
  if ( v5 >= 0 )
    LeaveCriticalSection(v4);
  return 0LL;
}
