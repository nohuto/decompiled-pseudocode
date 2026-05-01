/*
 * XREFs of ?NotifyRaiseDesktopCompleted@MultitaskingViewGestureHandler@@UEAAXXZ @ 0x180066690
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     ??1MinimizeAnimationSystemStateOverride@@QEAA@XZ @ 0x18054C7BC (--1MinimizeAnimationSystemStateOverride@@QEAA@XZ.c)
 *     ?AnimationComplete@MultitaskingViewGestureHandler@@AEAAXW4AnimationType@CAppThumbnailWindow@@@Z @ 0x18054D660 (-AnimationComplete@MultitaskingViewGestureHandler@@AEAAXW4AnimationType@CAppThumbnailWindow@@@Z.c)
 *     ?FinishTouchSwipeInternal@MultitaskingViewGestureHandler@@AEAAJXZ @ 0x18054E37C (-FinishTouchSwipeInternal@MultitaskingViewGestureHandler@@AEAAJXZ.c)
 *     ?StartTaskbarBounceAnimation@CAppThumbnailWindow@@QEAAXXZ @ 0x18055CA00 (-StartTaskbarBounceAnimation@CAppThumbnailWindow@@QEAAXXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgs @ 0x18074BCA8 (MicrosoftTelemetryAssertTriggeredNoArgs.c)
 */

void __fastcall MultitaskingViewGestureHandler::NotifyRaiseDesktopCompleted(MultitaskingViewGestureHandler *this)
{
  MinimizeAnimationSystemStateOverride *v1; // rdi
  CAppThumbnailWindow **v3; // rsi
  CAppThumbnailWindow **i; // rdi

  v1 = (MinimizeAnimationSystemStateOverride *)*((_QWORD *)this + 31);
  *((_QWORD *)this + 31) = 0LL;
  if ( v1 )
  {
    MinimizeAnimationSystemStateOverride::~MinimizeAnimationSystemStateOverride(v1);
    operator delete(v1, 4uLL);
  }
  if ( *((_BYTE *)this + 232) )
  {
    if ( !*((_QWORD *)this + 10) )
      MicrosoftTelemetryAssertTriggeredNoArgs();
    v3 = (CAppThumbnailWindow **)*((_QWORD *)this + 13);
    for ( i = (CAppThumbnailWindow **)*((_QWORD *)this + 12); i != v3; i += 2 )
      CAppThumbnailWindow::StartTaskbarBounceAnimation(*i);
    MultitaskingViewGestureHandler::AnimationComplete(this, 0LL);
    if ( *((_QWORD *)this + 12) == *((_QWORD *)this + 13) )
      MultitaskingViewGestureHandler::FinishTouchSwipeInternal(this);
  }
}
