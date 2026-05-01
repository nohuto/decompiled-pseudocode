/*
 * XREFs of ?GetMultitaskingViewState@MultitaskingViewGestureHandler@@AEBAJPEAUMultitaskingViewState@1@@Z @ 0x180230BFA
 * Callers:
 *     ?ContinueSwipe@MultitaskingViewGestureHandler@@UEAAJHHHHI@Z @ 0x180230AC0 (-ContinueSwipe@MultitaskingViewGestureHandler@@UEAAJHHHHI@Z.c)
 *     ?CanBePreempted@MultitaskingViewGestureHandler@@UEAAHXZ @ 0x180496510 (-CanBePreempted@MultitaskingViewGestureHandler@@UEAAHXZ.c)
 *     ?ContinueTouchSwipe@MultitaskingViewGestureHandler@@UEAAJAEBUTouchSwipeArgs@@@Z @ 0x180496690 (-ContinueTouchSwipe@MultitaskingViewGestureHandler@@UEAAJAEBUTouchSwipeArgs@@@Z.c)
 *     ?FinishSwipe@MultitaskingViewGestureHandler@@UEAAJHHHHI@Z @ 0x180496CF0 (-FinishSwipe@MultitaskingViewGestureHandler@@UEAAJHHHHI@Z.c)
 *     ?FinishTouchSwipe@MultitaskingViewGestureHandler@@UEAAJAEBUTouchSwipeArgs@@@Z @ 0x180496DE0 (-FinishTouchSwipe@MultitaskingViewGestureHandler@@UEAAJAEBUTouchSwipeArgs@@@Z.c)
 *     ?StartSwipe@MultitaskingViewGestureHandler@@UEAAJHHIUTOUCHPAD_GESTURE_CONTEXT@@@Z @ 0x180497350 (-StartSwipe@MultitaskingViewGestureHandler@@UEAAJHHIUTOUCHPAD_GESTURE_CONTEXT@@@Z.c)
 *     ?StartTouchSwipe@MultitaskingViewGestureHandler@@UEAAJIAEBUTouchSwipeArgs@@@Z @ 0x1804974D0 (-StartTouchSwipe@MultitaskingViewGestureHandler@@UEAAJIAEBUTouchSwipeArgs@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall MultitaskingViewGestureHandler::GetMultitaskingViewState(
        MultitaskingViewGestureHandler *this,
        struct MultitaskingViewGestureHandler::MultitaskingViewState *a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  int v6; // ebx
  HWND WindowW; // rax
  LRESULT v8; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF

  HIDWORD(v10) = 0;
  LOBYTE(v10) = 0;
  *(_QWORD *)a2 = (unsigned int)v10;
  v3 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64 *))(**((_QWORD **)this + 9) + 24LL))(
         *((_QWORD *)this + 9),
         3LL,
         &v10);
  v4 = v3;
  if ( v3 >= 0 )
  {
    v6 = v10;
    WindowW = FindWindowW(L"Shell_TrayWnd", 0LL);
    v8 = SendMessageW(WindowW, 0x5C6u, 0LL, 0LL);
    HIDWORD(v10) = v6;
    LOBYTE(v10) = v8 != 0;
    *(_QWORD *)a2 = v10;
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2F3,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewgesturehandler.cpp",
      (const char *)(unsigned int)v3);
    return v4;
  }
}
