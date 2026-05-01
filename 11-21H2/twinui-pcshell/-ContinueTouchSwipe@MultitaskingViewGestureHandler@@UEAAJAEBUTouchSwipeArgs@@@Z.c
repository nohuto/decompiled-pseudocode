/*
 * XREFs of ?ContinueTouchSwipe@MultitaskingViewGestureHandler@@UEAAJAEBUTouchSwipeArgs@@@Z @ 0x180496690
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetMultitaskingViewState@MultitaskingViewGestureHandler@@AEBAJPEAUMultitaskingViewState@1@@Z @ 0x180230BFA (-GetMultitaskingViewState@MultitaskingViewGestureHandler@@AEBAJPEAUMultitaskingViewState@1@@Z.c)
 *     ??$SwipeGestureState@II_N@MultitaskingViewTelemetry@@SAX$$QEAI0$$QEA_N@Z @ 0x18049563C (--$SwipeGestureState@II_N@MultitaskingViewTelemetry@@SAX$$QEAI0$$QEA_N@Z.c)
 *     ?DetermineGestureDirection@MultitaskingViewGestureHandlerHelpers@@YA?AW4GestureDirection@1@HH@Z @ 0x180496C3C (-DetermineGestureDirection@MultitaskingViewGestureHandlerHelpers@@YA-AW4GestureDirection@1@HH@Z.c)
 *     ?DetermineTouchGestureAction@MultitaskingViewGestureHandlerHelpers@@YA?AW4GestureAction@1@W4GestureDirection@1@_NW4MULTITASKING_VIEW_TYPES@@@Z @ 0x180496C80 (-DetermineTouchGestureAction@MultitaskingViewGestureHandlerHelpers@@YA-AW4GestureAction@1@W4Gest.c)
 *     ?ProcessTouchGestureInput@MultitaskingViewGestureHandler@@AEAAJW4GestureState@@AEBUMultitaskingViewState@1@@Z @ 0x180497088 (-ProcessTouchGestureInput@MultitaskingViewGestureHandler@@AEAAJW4GestureState@@AEBUMultitaskingV.c)
 */

__int64 __fastcall MultitaskingViewGestureHandler::ContinueTouchSwipe(
        MultitaskingViewGestureHandler *this,
        const struct TouchSwipeArgs *a2)
{
  int v4; // eax
  int MultitaskingViewState; // esi
  __int64 v6; // rdx
  unsigned int v8; // eax
  __int64 v9; // rdx
  int v10; // eax
  bool v11; // cl
  float v12; // edx
  bool v13; // zf
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+28h]
  bool v15; // [rsp+58h] [rbp+38h] BYREF
  unsigned int v16; // [rsp+5Ch] [rbp+3Ch]
  float v17; // [rsp+60h] [rbp+40h] BYREF
  int v18; // [rsp+68h] [rbp+48h] BYREF

  if ( ((*(_DWORD *)a2 - 1) & 0xFFFFFFFC) != 0 || *(_DWORD *)a2 == 3 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xDA,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewgesturehandler.cpp",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
  else
  {
    (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 8) + 24LL))(*((_QWORD *)this + 8), 2LL);
    v4 = (int)*((float *)a2 + 2);
    v16 = 0;
    v15 = 0;
    *((_DWORD *)this + 28) += v4;
    *((_DWORD *)this + 29) += (int)*((float *)a2 + 3);
    MultitaskingViewState = MultitaskingViewGestureHandler::GetMultitaskingViewState(
                              (MultitaskingViewGestureHandler *)((char *)this - 16),
                              (struct MultitaskingViewGestureHandler::MultitaskingViewState *)&v15);
    if ( MultitaskingViewState < 0 )
    {
      v6 = 227LL;
LABEL_5:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v6,
        (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewgesturehandler.cpp",
        (const char *)(unsigned int)MultitaskingViewState);
      return (unsigned int)MultitaskingViewState;
    }
    v8 = MultitaskingViewGestureHandlerHelpers::DetermineGestureDirection(
           *((unsigned int *)this + 28),
           *((unsigned int *)this + 29));
    LOBYTE(v9) = v15;
    v10 = MultitaskingViewGestureHandlerHelpers::DetermineTouchGestureAction(v8, v9, v16);
    v11 = *((_BYTE *)a2 + 24) && (v10 == 8 || v10 == 1 && *((_DWORD *)a2 + 1) == 3);
    *((_BYTE *)this + 196) = v11;
    *((_DWORD *)this + 50) = v11 ? v10 : 0;
    v12 = *(float *)a2;
    if ( *(_DWORD *)a2 != 1 && !v11 )
    {
      MultitaskingViewState = MultitaskingViewGestureHandler::ProcessTouchGestureInput((char *)this - 16, 2LL, &v15);
      if ( MultitaskingViewState < 0 )
      {
        v6 = 238LL;
        goto LABEL_5;
      }
      v12 = *(float *)a2;
    }
    v13 = *((_QWORD *)this + 10) == *((_QWORD *)this + 11);
    v17 = v12;
    v15 = !v13;
    v18 = 2;
    MultitaskingViewTelemetry::SwipeGestureState<unsigned int,unsigned int,bool>(&v18, (int *)&v17, (char *)&v15);
    return 0LL;
  }
}
