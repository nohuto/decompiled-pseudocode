/*
 * XREFs of ?GetTimestampForPointerInput@MultitaskingViewGestureHandler@@AEBA_KI@Z @ 0x180230CBC
 * Callers:
 *     ?ProcessTouchpadGestureInput@MultitaskingViewGestureHandler@@AEAAJW4GestureState@@AEBUMultitaskingViewState@1@I@Z @ 0x180230D4A (-ProcessTouchpadGestureInput@MultitaskingViewGestureHandler@@AEAAJW4GestureState@@AEBUMultitaski.c)
 *     ?StartSwipe@MultitaskingViewGestureHandler@@UEAAJHHIUTOUCHPAD_GESTURE_CONTEXT@@@Z @ 0x180497350 (-StartSwipe@MultitaskingViewGestureHandler@@UEAAJHHIUTOUCHPAD_GESTURE_CONTEXT@@@Z.c)
 *     ?StartTouchSwipe@MultitaskingViewGestureHandler@@UEAAJIAEBUTouchSwipeArgs@@@Z @ 0x1804974D0 (-StartTouchSwipe@MultitaskingViewGestureHandler@@UEAAJIAEBUTouchSwipeArgs@@@Z.c)
 * Callees:
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18019033C (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

LONGLONG __fastcall MultitaskingViewGestureHandler::GetTimestampForPointerInput(
        MultitaskingViewGestureHandler *this,
        unsigned int a2)
{
  LONGLONG v4; // rbx
  const char *v5; // r9
  _BYTE v7[80]; // [rsp+20h] [rbp-68h] BYREF
  __int64 v8; // [rsp+70h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]
  LARGE_INTEGER v10; // [rsp+90h] [rbp+8h] BYREF

  QueryPerformanceCounter(&v10);
  v4 = 1000000 * v10.QuadPart / *((_QWORD *)this + 25);
  if ( (unsigned int)GetPointerInfo(a2, v7) )
    return v8;
  wil::details::in1diag3::_Log_GetLastError(
    retaddr,
    (void *)0x1EF,
    (int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewgesturehandler.cpp",
    v5);
  return v4;
}
