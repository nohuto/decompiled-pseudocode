/*
 * XREFs of ??1?$ComPtr@VDragInputHandler@@@WRL@Microsoft@@QEAA@XZ @ 0x1804CFF14
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_DragInputHandler_DragInputHandler_IExternalDragHost___&__::_1_::dtor$2 @ 0x1804CFE8D (_Microsoft--WRL--Details--MakeAndInitialize_DragInputHandler_DragInputHandler_IExte_ea_1804CFE8D.c)
 *     _DragInputHandler_CreateInstance_::_1_::dtor$0 @ 0x1804D015C (_DragInputHandler_CreateInstance_--_1_--dtor$0.c)
 *     _CWRLImpWndProc_DragInputHandler_::s_WndProcBase_::_1_::dtor$0 @ 0x1804D0533 (_CWRLImpWndProc_DragInputHandler_--s_WndProcBase_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<DragInputHandler>::~ComPtr<DragInputHandler>(__int64 a1)
{
  return Microsoft::WRL::ComPtr<DragInputHandler>::InternalRelease(a1);
}
