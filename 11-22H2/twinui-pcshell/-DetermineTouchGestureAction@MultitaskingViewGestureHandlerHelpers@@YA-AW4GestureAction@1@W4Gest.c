/*
 * XREFs of ?DetermineTouchGestureAction@MultitaskingViewGestureHandlerHelpers@@YA?AW4GestureAction@1@W4GestureDirection@1@_NW4MULTITASKING_VIEW_TYPES@@@Z @ 0x18054E204
 * Callers:
 *     ?ContinueTouchSwipe@MultitaskingViewGestureHandler@@UEAAJAEBUTouchSwipeArgs@@@Z @ 0x18054DA70 (-ContinueTouchSwipe@MultitaskingViewGestureHandler@@UEAAJAEBUTouchSwipeArgs@@@Z.c)
 *     ?ProcessTouchGestureInput@MultitaskingViewGestureHandler@@AEAAJW4GestureState@@AEBUMultitaskingViewState@1@@Z @ 0x18054F674 (-ProcessTouchGestureInput@MultitaskingViewGestureHandler@@AEAAJW4GestureState@@AEBUMultitaskingV.c)
 *     ?StartTouchSwipe@MultitaskingViewGestureHandler@@UEAAJIAEBUTouchSwipeArgs@@@Z @ 0x180550220 (-StartTouchSwipe@MultitaskingViewGestureHandler@@UEAAJIAEBUTouchSwipeArgs@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MultitaskingViewGestureHandlerHelpers::DetermineTouchGestureAction(int a1, char a2, char a3)
{
  unsigned int v3; // r9d

  v3 = 0;
  if ( (a3 & 1) == 0 )
  {
    if ( (unsigned int)(a1 - 3) > 1 || (a3 & 2) != 0 )
    {
      if ( a1 == 1 )
      {
        if ( (a3 & 2) == 0 )
          return a2 != 0 ? 4 : 1;
      }
      else if ( a1 == 2 )
      {
        if ( a2 )
        {
          if ( (a3 & 2) == 0 )
            return v3;
        }
        else if ( (a3 & 2) == 0 )
        {
          return 3;
        }
        return 2;
      }
    }
    else
    {
      return 8;
    }
  }
  return v3;
}
