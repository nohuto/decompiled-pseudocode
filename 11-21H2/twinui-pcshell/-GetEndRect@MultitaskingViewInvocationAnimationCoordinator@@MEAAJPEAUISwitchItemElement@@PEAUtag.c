/*
 * XREFs of ?GetEndRect@MultitaskingViewInvocationAnimationCoordinator@@MEAAJPEAUISwitchItemElement@@PEAUtagRECT@@@Z @ 0x1804C86E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall MultitaskingViewInvocationAnimationCoordinator::GetEndRect(
        MultitaskingViewInvocationAnimationCoordinator *this,
        struct ISwitchItemElement *a2,
        struct tagRECT *a3)
{
  return MultitaskingViewAnimationCoordinatorBase::GetDestinationRect(this, a2, a3);
}
