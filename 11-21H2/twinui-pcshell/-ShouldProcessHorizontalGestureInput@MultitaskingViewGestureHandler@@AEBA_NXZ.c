/*
 * XREFs of ?ShouldProcessHorizontalGestureInput@MultitaskingViewGestureHandler@@AEBA_NXZ @ 0x18049727C
 * Callers:
 *     ?ShouldProcessGestureInput@MultitaskingViewGestureHandler@@AEBA_NAEBUMultitaskingViewState@1@@Z @ 0x18049723C (-ShouldProcessGestureInput@MultitaskingViewGestureHandler@@AEBA_NAEBUMultitaskingViewState@1@@Z.c)
 * Callees:
 *     ?DetermineGestureDirection@MultitaskingViewGestureHandlerHelpers@@YA?AW4GestureDirection@1@HH@Z @ 0x180496C3C (-DetermineGestureDirection@MultitaskingViewGestureHandlerHelpers@@YA-AW4GestureDirection@1@HH@Z.c)
 */

char __fastcall MultitaskingViewGestureHandler::ShouldProcessHorizontalGestureInput(
        MultitaskingViewGestureHandler *this)
{
  char v1; // bl
  int v2; // ecx
  __int64 v3; // r11

  v1 = 0;
  if ( (unsigned int)MultitaskingViewGestureHandlerHelpers::DetermineGestureDirection(
                       *((_DWORD *)this + 32),
                       *((_DWORD *)this + 33))
     - 3 <= 1 )
    return (double)(int)abs32(v2) > (double)*(int *)(v3 + 136) * *(double *)(v3 + 152);
  return v1;
}
