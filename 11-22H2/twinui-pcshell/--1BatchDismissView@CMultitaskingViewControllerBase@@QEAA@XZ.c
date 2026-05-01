/*
 * XREFs of ??1BatchDismissView@CMultitaskingViewControllerBase@@QEAA@XZ @ 0x180576C10
 * Callers:
 *     ?_DismissView@CMultitaskingViewControllerBase@@IEAAXXZ @ 0x1802E41E8 (-_DismissView@CMultitaskingViewControllerBase@@IEAAXXZ.c)
 *     ?DragSwitchItem@CMultitaskingViewControllerBase@@UEAAXPEAUISwitchItem@@PEAUIExternalDragCallback@@@Z @ 0x180576F40 (-DragSwitchItem@CMultitaskingViewControllerBase@@UEAAXPEAUISwitchItem@@PEAUIExternalDragCallback.c)
 *     _CMultitaskingViewControllerBase::DragSwitchItem_::_1_::dtor$0 @ 0x180577053 (_CMultitaskingViewControllerBase--DragSwitchItem_--_1_--dtor$0.c)
 * Callees:
 *     ?_CommitDismissView@CMultitaskingViewControllerBase@@AEAAXXZ @ 0x1805778F4 (-_CommitDismissView@CMultitaskingViewControllerBase@@AEAAXXZ.c)
 */

void __fastcall CMultitaskingViewControllerBase::BatchDismissView::~BatchDismissView(
        CMultitaskingViewControllerBase **this)
{
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)*this + 24, 0xFFFFFFFF) == 1 )
    CMultitaskingViewControllerBase::_CommitDismissView(*this);
}
