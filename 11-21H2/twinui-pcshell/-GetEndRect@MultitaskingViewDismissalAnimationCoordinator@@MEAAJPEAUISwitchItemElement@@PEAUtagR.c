/*
 * XREFs of ?GetEndRect@MultitaskingViewDismissalAnimationCoordinator@@MEAAJPEAUISwitchItemElement@@PEAUtagRECT@@@Z @ 0x1804CB400
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall MultitaskingViewDismissalAnimationCoordinator::GetEndRect(
        MultitaskingViewDismissalAnimationCoordinator *this,
        struct ISwitchItemElement *a2,
        struct tagRECT *a3)
{
  return MultitaskingViewAnimationCoordinatorBase::GetSourceRect(this, a2, a3);
}
