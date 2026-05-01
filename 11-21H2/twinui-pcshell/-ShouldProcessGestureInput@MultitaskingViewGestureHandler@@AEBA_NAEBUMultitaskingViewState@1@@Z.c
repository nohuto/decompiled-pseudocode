/*
 * XREFs of ?ShouldProcessGestureInput@MultitaskingViewGestureHandler@@AEBA_NAEBUMultitaskingViewState@1@@Z @ 0x18049723C
 * Callers:
 *     ?ContinueSwipe@MultitaskingViewGestureHandler@@UEAAJHHHHI@Z @ 0x180230AC0 (-ContinueSwipe@MultitaskingViewGestureHandler@@UEAAJHHHHI@Z.c)
 *     ?StartSwipe@MultitaskingViewGestureHandler@@UEAAJHHIUTOUCHPAD_GESTURE_CONTEXT@@@Z @ 0x180497350 (-StartSwipe@MultitaskingViewGestureHandler@@UEAAJHHIUTOUCHPAD_GESTURE_CONTEXT@@@Z.c)
 * Callees:
 *     ?ShouldProcessHorizontalGestureInput@MultitaskingViewGestureHandler@@AEBA_NXZ @ 0x18049727C (-ShouldProcessHorizontalGestureInput@MultitaskingViewGestureHandler@@AEBA_NXZ.c)
 *     ?ShouldProcessVerticalGestureInput@MultitaskingViewGestureHandler@@AEBA_NXZ @ 0x1804972DC (-ShouldProcessVerticalGestureInput@MultitaskingViewGestureHandler@@AEBA_NXZ.c)
 */

char __fastcall MultitaskingViewGestureHandler::ShouldProcessGestureInput(
        MultitaskingViewGestureHandler *this,
        const struct MultitaskingViewGestureHandler::MultitaskingViewState *a2)
{
  char v3; // bl

  if ( (*((_BYTE *)a2 + 4) & 1) != 0 )
    return 1;
  v3 = 0;
  if ( MultitaskingViewGestureHandler::ShouldProcessHorizontalGestureInput(this)
    || MultitaskingViewGestureHandler::ShouldProcessVerticalGestureInput(this) )
  {
    return 1;
  }
  return v3;
}
