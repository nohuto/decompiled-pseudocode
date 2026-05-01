/*
 * XREFs of ??1?$ComPtr@VWindowArrangementView@@@WRL@Microsoft@@QEAA@XZ @ 0x1805183B8
 * Callers:
 *     _WindowArrangementView::CancelPlacement_::_1_::dtor$0 @ 0x180518F7B (_WindowArrangementView--CancelPlacement_--_1_--dtor$0.c)
 *     _WindowArrangementView::CancelPlacement_::_1_::dtor$1 @ 0x180518F87 (_WindowArrangementView--CancelPlacement_--_1_--dtor$1.c)
 *     _WindowArrangementView::Hide_::_1_::dtor$0 @ 0x180519E94 (_WindowArrangementView--Hide_--_1_--dtor$0.c)
 *     _WindowArrangementView::ShowView_::_1_::dtor$2 @ 0x18051C0E4 (_WindowArrangementView--ShowView_--_1_--dtor$2.c)
 *     _WindowArrangementView::ShowView_::_1_::dtor$3 @ 0x18051C0F0 (_WindowArrangementView--ShowView_--_1_--dtor$3.c)
 *     _WindowArrangementView::TickPlaceModeIdleAnimation_::_1_::dtor$2 @ 0x18051CAD0 (_WindowArrangementView--TickPlaceModeIdleAnimation_--_1_--dtor$2.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<WindowArrangementView>::~ComPtr<WindowArrangementView>(__int64 a1)
{
  return Microsoft::WRL::ComPtr<WindowArrangementView>::InternalRelease(a1);
}
