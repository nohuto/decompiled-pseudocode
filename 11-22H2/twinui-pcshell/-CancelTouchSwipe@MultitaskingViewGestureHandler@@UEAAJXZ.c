/*
 * XREFs of ?CancelTouchSwipe@MultitaskingViewGestureHandler@@UEAAJXZ @ 0x18054D880
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$SwipeGestureState@IH_N@MultitaskingViewTelemetry@@SAX$$QEAI$$QEAH$$QEA_N@Z @ 0x18054B540 (--$SwipeGestureState@IH_N@MultitaskingViewTelemetry@@SAX$$QEAI$$QEAH$$QEA_N@Z.c)
 *     ?AnimationComplete@MultitaskingViewGestureHandler@@AEAAXW4AnimationType@CAppThumbnailWindow@@@Z @ 0x18054D660 (-AnimationComplete@MultitaskingViewGestureHandler@@AEAAXW4AnimationType@CAppThumbnailWindow@@@Z.c)
 */

__int64 __fastcall MultitaskingViewGestureHandler::CancelTouchSwipe(MultitaskingViewGestureHandler *this)
{
  bool v2; // zf
  __int64 v3; // rcx
  __int64 result; // rax
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF
  int v6; // [rsp+38h] [rbp+10h] BYREF
  int v7; // [rsp+40h] [rbp+18h] BYREF

  (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 8) + 24LL))(*((_QWORD *)this + 8), 4LL);
  v2 = *((_QWORD *)this + 10) == *((_QWORD *)this + 11);
  v7 = 4;
  LOBYTE(v5) = !v2;
  v6 = 0;
  MultitaskingViewTelemetry::SwipeGestureState<unsigned int,int,bool>(&v7, &v6, (char *)&v5);
  if ( *((_QWORD *)this + 10) != *((_QWORD *)this + 11) )
    MultitaskingViewGestureHandler::AnimationComplete((__int64)this - 16, 1);
  v3 = *((_QWORD *)this + 8);
  v5 = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v3 + 24LL))(v3, 0LL);
  *((_QWORD *)this + 20) = 0LL;
  *((_DWORD *)this + 36) = 0;
  *((_DWORD *)this + 50) = 0;
  *(_QWORD *)((char *)this + 148) = 0LL;
  result = 2147500033LL;
  *((_DWORD *)this + 51) = 5;
  return result;
}
