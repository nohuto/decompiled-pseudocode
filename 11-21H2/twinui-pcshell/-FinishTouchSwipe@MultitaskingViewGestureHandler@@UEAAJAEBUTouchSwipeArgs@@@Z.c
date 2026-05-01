/*
 * XREFs of ?FinishTouchSwipe@MultitaskingViewGestureHandler@@UEAAJAEBUTouchSwipeArgs@@@Z @ 0x180496DE0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetMultitaskingViewState@MultitaskingViewGestureHandler@@AEBAJPEAUMultitaskingViewState@1@@Z @ 0x180230BFA (-GetMultitaskingViewState@MultitaskingViewGestureHandler@@AEBAJPEAUMultitaskingViewState@1@@Z.c)
 *     ??$SwipeGestureState@IH_N@MultitaskingViewTelemetry@@SAX$$QEAI$$QEAH$$QEA_N@Z @ 0x1804955A8 (--$SwipeGestureState@IH_N@MultitaskingViewTelemetry@@SAX$$QEAI$$QEAH$$QEA_N@Z.c)
 *     ?AnimationComplete@MultitaskingViewGestureHandler@@AEAAXW4AnimationType@CAppThumbnailWindow@@@Z @ 0x180496420 (-AnimationComplete@MultitaskingViewGestureHandler@@AEAAXW4AnimationType@CAppThumbnailWindow@@@Z.c)
 *     ?ProcessTouchGestureInput@MultitaskingViewGestureHandler@@AEAAJW4GestureState@@AEBUMultitaskingViewState@1@@Z @ 0x180497088 (-ProcessTouchGestureInput@MultitaskingViewGestureHandler@@AEAAJW4GestureState@@AEBUMultitaskingV.c)
 */

__int64 __fastcall MultitaskingViewGestureHandler::FinishTouchSwipe(
        MultitaskingViewGestureHandler *this,
        const struct TouchSwipeArgs *a2)
{
  bool v3; // zf
  int MultitaskingViewState; // edi
  __int64 v5; // rcx
  __int64 result; // rax
  __int64 v7; // [rsp+40h] [rbp+8h] BYREF
  int v8; // [rsp+50h] [rbp+18h] BYREF
  int v9; // [rsp+58h] [rbp+20h] BYREF

  (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 8) + 24LL))(*((_QWORD *)this + 8), 3LL);
  v3 = *((_QWORD *)this + 10) == *((_QWORD *)this + 11);
  v9 = 3;
  LOBYTE(v7) = !v3;
  v8 = 0;
  MultitaskingViewTelemetry::SwipeGestureState<unsigned int,int,bool>(&v9, &v8, (char *)&v7);
  MultitaskingViewState = 0;
  if ( *((_BYTE *)this + 196) )
  {
    LOBYTE(v7) = 0;
    HIDWORD(v7) = 0;
    MultitaskingViewState = MultitaskingViewGestureHandler::GetMultitaskingViewState(
                              (MultitaskingViewGestureHandler *)((char *)this - 16),
                              (struct MultitaskingViewGestureHandler::MultitaskingViewState *)&v7);
    if ( MultitaskingViewState >= 0 )
      MultitaskingViewState = MultitaskingViewGestureHandler::ProcessTouchGestureInput((char *)this - 16, 3LL, &v7);
  }
  if ( *((_QWORD *)this + 10) != *((_QWORD *)this + 11) )
    MultitaskingViewGestureHandler::AnimationComplete((__int64)this - 16, 1);
  v5 = *((_QWORD *)this + 8);
  *((_QWORD *)this + 14) = 0LL;
  v7 = 0LL;
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v5 + 24LL))(v5, 0LL);
  *((_QWORD *)this + 20) = 0LL;
  *(_QWORD *)((char *)this + 148) = 0LL;
  result = (unsigned int)MultitaskingViewState;
  *((_DWORD *)this + 36) = 0;
  *((_DWORD *)this + 51) = 5;
  *((_BYTE *)this + 196) = 0;
  *((_DWORD *)this + 50) = 0;
  return result;
}
