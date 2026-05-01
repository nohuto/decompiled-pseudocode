/*
 * XREFs of ?UpdateDeviceDimensions@MultitaskingViewGestureHandler@@AEAAJI@Z @ 0x180550644
 * Callers:
 *     ?StartSwipe@MultitaskingViewGestureHandler@@UEAAJHHIUTOUCHPAD_GESTURE_CONTEXT@@@Z @ 0x1805500B0 (-StartSwipe@MultitaskingViewGestureHandler@@UEAAJHHIUTOUCHPAD_GESTURE_CONTEXT@@@Z.c)
 *     ?StartTouchSwipe@MultitaskingViewGestureHandler@@UEAAJIAEBUTouchSwipeArgs@@@Z @ 0x180550220 (-StartTouchSwipe@MultitaskingViewGestureHandler@@UEAAJIAEBUTouchSwipeArgs@@@Z.c)
 * Callees:
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1801322B8 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 */

__int64 __fastcall MultitaskingViewGestureHandler::UpdateDeviceDimensions(
        MultitaskingViewGestureHandler *this,
        unsigned int a2)
{
  const char *v3; // r9
  __int64 v4; // rdx
  _BYTE v6[16]; // [rsp+20h] [rbp-98h] BYREF
  __int64 v7; // [rsp+30h] [rbp-88h]
  __int128 v8; // [rsp+80h] [rbp-38h] BYREF
  __int128 v9; // [rsp+90h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+0h]

  if ( !(unsigned int)GetPointerInfo(a2, v6) )
  {
    v4 = 561LL;
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)v4,
             (int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewgesturehandler.cpp",
             v3);
  }
  v9 = 0LL;
  v8 = 0LL;
  if ( !(unsigned int)GetPointerDeviceRects(v7, &v8, &v9) )
  {
    v4 = 567LL;
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)v4,
             (int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewgesturehandler.cpp",
             v3);
  }
  LODWORD(v9) = DWORD2(v8) - v8;
  DWORD1(v9) = HIDWORD(v8) - DWORD1(v8);
  *((_QWORD *)this + 17) = v9;
  return 0LL;
}
