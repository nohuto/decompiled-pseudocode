/*
 * XREFs of ??0MultitaskingViewGestureHandler@@QEAA@XZ @ 0x1800FE828
 * Callers:
 *     ??$MakeAndInitialize@VMultitaskingViewGestureHandler@@V1@AEAPEAUIMultitaskingViewTaskScheduler@@AEAPEAUIMultitaskingViewVisibilityService@@@Details@WRL@Microsoft@@YAJPEAPEAVMultitaskingViewGestureHandler@@AEAPEAUIMultitaskingViewTaskScheduler@@AEAPEAUIMultitaskingViewVisibilityService@@@Z @ 0x1800FD5C8 (--$MakeAndInitialize@VMultitaskingViewGestureHandler@@V1@AEAPEAUIMultitaskingViewTaskScheduler@@.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIMultitaskingViewGestureHandler@@UITouchpadGesture@@UITouchSwipe@@@WRL@Microsoft@@QEAA@XZ @ 0x1800FE904 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIMultitaskingViewGestureHandler@@UITo.c)
 */

MultitaskingViewGestureHandler *__fastcall MultitaskingViewGestureHandler::MultitaskingViewGestureHandler(
        MultitaskingViewGestureHandler *this)
{
  MultitaskingViewGestureHandler *result; // rax

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IMultitaskingViewGestureHandler,ITouchpadGesture,ITouchSwipe>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IMultitaskingViewGestureHandler,ITouchpadGesture,ITouchSwipe>();
  *((_DWORD *)this + 55) = 5;
  *((_QWORD *)this + 20) = 0LL;
  *(_QWORD *)this = &MultitaskingViewGestureHandler::`vftable';
  *((_QWORD *)this + 1) = &MultitaskingViewGestureHandler::`vftable'{for `ITouchpadGesture'};
  *((_QWORD *)this + 2) = &MultitaskingViewGestureHandler::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,ITouchSwipe>'};
  *((_QWORD *)this + 18) = 0x3F947AE147AE147BLL;
  *((_QWORD *)this + 19) = 0x3F947AE147AE147BLL;
  *((_QWORD *)this + 23) = 300000LL;
  *((_QWORD *)this + 24) = 300000LL;
  result = this;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 17) = 0LL;
  *((_DWORD *)this + 42) = 0;
  *((_QWORD *)this + 22) = 0LL;
  *((_DWORD *)this + 52) = 0;
  *((_BYTE *)this + 212) = 0;
  *((_DWORD *)this + 54) = 0;
  return result;
}
