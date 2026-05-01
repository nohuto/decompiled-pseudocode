/*
 * XREFs of ?FinishTouchSwipeInternal@MultitaskingViewGestureHandler@@AEAAJXZ @ 0x18054E37C
 * Callers:
 *     ?NotifyRaiseDesktopCompleted@MultitaskingViewGestureHandler@@UEAAXXZ @ 0x180066690 (-NotifyRaiseDesktopCompleted@MultitaskingViewGestureHandler@@UEAAXXZ.c)
 *     ?FinishTouchSwipe@MultitaskingViewGestureHandler@@UEAAJAEBUTouchSwipeArgs@@@Z @ 0x18054E360 (-FinishTouchSwipe@MultitaskingViewGestureHandler@@UEAAJAEBUTouchSwipeArgs@@@Z.c)
 *     std::_Func_impl_no_alloc__lambda_f24106f1cc6abfeb29e81a24361831f7__void_::_Do_call @ 0x180550920 (std--_Func_impl_no_alloc__lambda_f24106f1cc6abfeb29e81a24361831f7__void_--_Do_call.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetMultitaskingViewState@MultitaskingViewGestureHandler@@AEBAJPEAUMultitaskingViewState@1@@Z @ 0x1802DF2DC (-GetMultitaskingViewState@MultitaskingViewGestureHandler@@AEBAJPEAUMultitaskingViewState@1@@Z.c)
 *     ??$SwipeGestureState@IH_N@MultitaskingViewTelemetry@@SAX$$QEAI$$QEAH$$QEA_N@Z @ 0x18054B540 (--$SwipeGestureState@IH_N@MultitaskingViewTelemetry@@SAX$$QEAI$$QEAH$$QEA_N@Z.c)
 *     ?AnimationComplete@MultitaskingViewGestureHandler@@AEAAXW4AnimationType@CAppThumbnailWindow@@@Z @ 0x18054D660 (-AnimationComplete@MultitaskingViewGestureHandler@@AEAAXW4AnimationType@CAppThumbnailWindow@@@Z.c)
 *     ?ProcessTouchGestureInput@MultitaskingViewGestureHandler@@AEAAJW4GestureState@@AEBUMultitaskingViewState@1@@Z @ 0x18054F674 (-ProcessTouchGestureInput@MultitaskingViewGestureHandler@@AEAAJW4GestureState@@AEBUMultitaskingV.c)
 */

__int64 __fastcall MultitaskingViewGestureHandler::FinishTouchSwipeInternal(MultitaskingViewGestureHandler *this)
{
  int MultitaskingViewState; // edi
  bool v3; // zf
  __int64 v4; // rcx
  __int64 result; // rax
  __int64 v6; // [rsp+40h] [rbp+8h] BYREF
  int v7; // [rsp+48h] [rbp+10h] BYREF
  int v8; // [rsp+50h] [rbp+18h] BYREF

  MultitaskingViewState = 0;
  (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 10) + 24LL))(*((_QWORD *)this + 10), 3LL);
  v3 = *((_QWORD *)this + 12) == *((_QWORD *)this + 13);
  v7 = 0;
  LOBYTE(v6) = !v3;
  v8 = 3;
  MultitaskingViewTelemetry::SwipeGestureState<unsigned int,int,bool>(&v8, &v7, (char *)&v6);
  if ( *((_BYTE *)this + 212) )
  {
    LOBYTE(v6) = 0;
    HIDWORD(v6) = 0;
    MultitaskingViewState = MultitaskingViewGestureHandler::GetMultitaskingViewState(
                              this,
                              (struct MultitaskingViewGestureHandler::MultitaskingViewState *)&v6);
    if ( MultitaskingViewState >= 0 )
      MultitaskingViewState = MultitaskingViewGestureHandler::ProcessTouchGestureInput(this, 3LL, &v6);
  }
  MultitaskingViewGestureHandler::AnimationComplete((__int64)this, 1);
  v4 = *((_QWORD *)this + 10);
  *((_QWORD *)this + 16) = 0LL;
  v6 = 0LL;
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v4 + 24LL))(v4, 0LL);
  *((_QWORD *)this + 22) = 0LL;
  *(_QWORD *)((char *)this + 164) = 0LL;
  result = (unsigned int)MultitaskingViewState;
  *((_DWORD *)this + 40) = 0;
  *((_DWORD *)this + 55) = 5;
  *((_BYTE *)this + 212) = 0;
  *((_DWORD *)this + 54) = 0;
  return result;
}
