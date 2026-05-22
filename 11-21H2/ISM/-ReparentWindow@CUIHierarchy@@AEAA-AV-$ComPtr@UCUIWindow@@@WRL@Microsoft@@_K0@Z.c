/*
 * XREFs of ?ReparentWindow@CUIHierarchy@@AEAA?AV?$ComPtr@UCUIWindow@@@WRL@Microsoft@@_K0@Z @ 0x180086504
 * Callers:
 *     ?OnUniversalPropertyChanged@CUIHierarchy@@AEAAXUIUniversalAppModelWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@UUniversalPropertyChangedEventArgs@34567@@Z @ 0x180085710 (-OnUniversalPropertyChanged@CUIHierarchy@@AEAAXUIUniversalAppModelWatcher@WindowManagement@Appli.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIAsyncActionCompletedHandler@Foundation@Windows@@@WRL@Microsoft@@IEBAXXZ @ 0x18004905C (-InternalAddRef@-$ComPtr@UIAsyncActionCompletedHandler@Foundation@Windows@@@WRL@Microsoft@@IEBAX.c)
 *     ?AddWindowWorker@CUIHierarchy@@AEAAXV?$ComPtr@UCUIWindow@@@WRL@Microsoft@@@Z @ 0x180084B68 (-AddWindowWorker@CUIHierarchy@@AEAAXV-$ComPtr@UCUIWindow@@@WRL@Microsoft@@@Z.c)
 *     ?RemoveWindow@CUIHierarchy@@AEAA?AV?$ComPtr@UCUIWindow@@@WRL@Microsoft@@_K@Z @ 0x1800863AC (-RemoveWindow@CUIHierarchy@@AEAA-AV-$ComPtr@UCUIWindow@@@WRL@Microsoft@@_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall CUIHierarchy::ReparentWindow(__int64 *a1, __int64 *a2, __int64 a3, __int64 a4)
{
  __int64 v8[2]; // [rsp+28h] [rbp-10h] BYREF

  CUIHierarchy::RemoveWindow((__int64)a1, a2, a3);
  if ( *a2 )
  {
    *(_QWORD *)(*a2 + 24) = a4;
    v8[0] = *a2;
    Microsoft::WRL::ComPtr<Windows::Foundation::IAsyncActionCompletedHandler>::InternalAddRef(v8);
    CUIHierarchy::AddWindowWorker(a1, v8);
  }
  return a2;
}
