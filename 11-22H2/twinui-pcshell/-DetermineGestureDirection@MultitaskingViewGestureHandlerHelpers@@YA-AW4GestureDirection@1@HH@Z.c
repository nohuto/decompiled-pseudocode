/*
 * XREFs of ?DetermineGestureDirection@MultitaskingViewGestureHandlerHelpers@@YA?AW4GestureDirection@1@HH@Z @ 0x1802DF22A
 * Callers:
 *     ?ProcessTouchpadGestureInput@MultitaskingViewGestureHandler@@AEAAJW4GestureState@@AEBUMultitaskingViewState@1@I@Z @ 0x1802DF470 (-ProcessTouchpadGestureInput@MultitaskingViewGestureHandler@@AEAAJW4GestureState@@AEBUMultitaski.c)
 *     ?ContinueTouchSwipe@MultitaskingViewGestureHandler@@UEAAJAEBUTouchSwipeArgs@@@Z @ 0x18054DA70 (-ContinueTouchSwipe@MultitaskingViewGestureHandler@@UEAAJAEBUTouchSwipeArgs@@@Z.c)
 *     ?InputGestureOperationStarted@MultitaskingViewGestureHandler@@AEAAXAEBUInputGestureOperation@Input@Internal@UI@Windows@winrt@@AEBUInputGestureOperationEventArgs@34567@@Z @ 0x18054EEE0 (-InputGestureOperationStarted@MultitaskingViewGestureHandler@@AEAAXAEBUInputGestureOperation@Inp.c)
 *     ?ProcessTouchGestureInput@MultitaskingViewGestureHandler@@AEAAJW4GestureState@@AEBUMultitaskingViewState@1@@Z @ 0x18054F674 (-ProcessTouchGestureInput@MultitaskingViewGestureHandler@@AEAAJW4GestureState@@AEBUMultitaskingV.c)
 *     ?ShouldProcessHorizontalGestureInput@MultitaskingViewGestureHandler@@AEBA_NXZ @ 0x18054FF9C (-ShouldProcessHorizontalGestureInput@MultitaskingViewGestureHandler@@AEBA_NXZ.c)
 *     ?ShouldProcessVerticalGestureInput@MultitaskingViewGestureHandler@@AEBA_NXZ @ 0x18054FFFC (-ShouldProcessVerticalGestureInput@MultitaskingViewGestureHandler@@AEBA_NXZ.c)
 *     ?StartTouchSwipe@MultitaskingViewGestureHandler@@UEAAJIAEBUTouchSwipeArgs@@@Z @ 0x180550220 (-StartTouchSwipe@MultitaskingViewGestureHandler@@UEAAJIAEBUTouchSwipeArgs@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MultitaskingViewGestureHandlerHelpers::DetermineGestureDirection(int a1, int a2)
{
  unsigned int v2; // r9d

  v2 = 0;
  if ( (int)abs32(a1) <= (int)abs32(a2) )
  {
    if ( a2 )
    {
      LOBYTE(v2) = a2 > 0;
      ++v2;
    }
  }
  else
  {
    LOBYTE(v2) = a1 > 0;
    v2 += 3;
  }
  return v2;
}
