/*
 * XREFs of ??1BatchDismissView@CMultitaskingViewControllerBase@@QEAA@XZ @ 0x1804BC088
 * Callers:
 *     ?_DismissView@CMultitaskingViewControllerBase@@IEAAXXZ @ 0x180235A90 (-_DismissView@CMultitaskingViewControllerBase@@IEAAXXZ.c)
 *     ?DragSwitchItem@CMultitaskingViewControllerBase@@UEAAXPEAUISwitchItem@@PEAUIExternalDragCallback@@@Z @ 0x1804BC3E0 (-DragSwitchItem@CMultitaskingViewControllerBase@@UEAAXPEAUISwitchItem@@PEAUIExternalDragCallback.c)
 *     _CMultitaskingViewControllerBase::DragSwitchItem_::_1_::dtor$0 @ 0x1804BC4FA (_CMultitaskingViewControllerBase--DragSwitchItem_--_1_--dtor$0.c)
 *     ?_AnimateDismissView@CMultitaskingViewControllerBase@@IEAAXPEAUISwitchItem@@@Z @ 0x1804BCECC (-_AnimateDismissView@CMultitaskingViewControllerBase@@IEAAXPEAUISwitchItem@@@Z.c)
 * Callees:
 *     ?_CommitDismissView@CMultitaskingViewControllerBase@@AEAAXXZ @ 0x1804BCF44 (-_CommitDismissView@CMultitaskingViewControllerBase@@AEAAXXZ.c)
 */

void __fastcall CMultitaskingViewControllerBase::BatchDismissView::~BatchDismissView(
        CMultitaskingViewControllerBase **this)
{
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)*this + 26, 0xFFFFFFFF) == 1 )
    CMultitaskingViewControllerBase::_CommitDismissView(*this);
}
