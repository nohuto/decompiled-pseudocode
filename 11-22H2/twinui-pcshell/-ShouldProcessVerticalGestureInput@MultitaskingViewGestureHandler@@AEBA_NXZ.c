/*
 * XREFs of ?ShouldProcessVerticalGestureInput@MultitaskingViewGestureHandler@@AEBA_NXZ @ 0x18054FFFC
 * Callers:
 *     ?ShouldProcessGestureInput@MultitaskingViewGestureHandler@@AEBA_NAEBUMultitaskingViewState@1@@Z @ 0x1802DF600 (-ShouldProcessGestureInput@MultitaskingViewGestureHandler@@AEBA_NAEBUMultitaskingViewState@1@@Z.c)
 * Callees:
 *     ?DetermineGestureDirection@MultitaskingViewGestureHandlerHelpers@@YA?AW4GestureDirection@1@HH@Z @ 0x1802DF22A (-DetermineGestureDirection@MultitaskingViewGestureHandlerHelpers@@YA-AW4GestureDirection@1@HH@Z.c)
 */

bool __fastcall MultitaskingViewGestureHandler::ShouldProcessVerticalGestureInput(MultitaskingViewGestureHandler *this)
{
  char v1; // bl
  __int64 v2; // r11

  v1 = 0;
  if ( (unsigned int)MultitaskingViewGestureHandlerHelpers::DetermineGestureDirection(
                       *((_DWORD *)this + 32),
                       *((_DWORD *)this + 33))
     - 1 <= 1 )
    return (double)(int)abs32(*(_DWORD *)(v2 + 132)) > (double)*(int *)(v2 + 140) * *(double *)(v2 + 144);
  return v1;
}
