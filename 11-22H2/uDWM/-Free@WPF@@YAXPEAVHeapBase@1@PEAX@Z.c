/*
 * XREFs of ?Free@WPF@@YAXPEAVHeapBase@1@PEAX@Z @ 0x18003C7B0
 * Callers:
 *     ?Initialize@CDesktopManager@@AEAAJPEAUIUnknown@@@Z @ 0x1800493DC (-Initialize@CDesktopManager@@AEAAJPEAUIUnknown@@@Z.c)
 *     wistd::__function::__func__lambda_6990cc1065daf1bb2b53d774e458881b__void___cdecl(int_const_&)_::_scalar_deleting_destructor_ @ 0x180065370 (wistd--__function--__func__lambda_6990cc1065daf1bb2b53d774e458881b__void___cdecl(in_ea_180065370.c)
 *     ?OnWindowArrangementEnd@CWindowList@@AEAAJXZ @ 0x180065B74 (-OnWindowArrangementEnd@CWindowList@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall WPF::Free(WPF *this, struct WPF::HeapBase *a2, void *a3)
{
  (*(void (__fastcall **)(WPF::HeapBase *, struct WPF::HeapBase *, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
    WPF::g_pProcessHeap,
    a2,
    a3);
}
