/*
 * XREFs of ?StartSwipe@MultitaskingViewGestureHandler@@UEAAJHHIUTOUCHPAD_GESTURE_CONTEXT@@@Z @ 0x1805500B0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetMultitaskingViewState@MultitaskingViewGestureHandler@@AEBAJPEAUMultitaskingViewState@1@@Z @ 0x1802DF2DC (-GetMultitaskingViewState@MultitaskingViewGestureHandler@@AEBAJPEAUMultitaskingViewState@1@@Z.c)
 *     ?GetTimestampForPointerInput@MultitaskingViewGestureHandler@@AEBA_KI@Z @ 0x1802DF3E2 (-GetTimestampForPointerInput@MultitaskingViewGestureHandler@@AEBA_KI@Z.c)
 *     ?ProcessTouchpadGestureInput@MultitaskingViewGestureHandler@@AEAAJW4GestureState@@AEBUMultitaskingViewState@1@I@Z @ 0x1802DF470 (-ProcessTouchpadGestureInput@MultitaskingViewGestureHandler@@AEAAJW4GestureState@@AEBUMultitaski.c)
 *     ?ShouldProcessGestureInput@MultitaskingViewGestureHandler@@AEBA_NAEBUMultitaskingViewState@1@@Z @ 0x1802DF600 (-ShouldProcessGestureInput@MultitaskingViewGestureHandler@@AEBA_NAEBUMultitaskingViewState@1@@Z.c)
 *     ?UpdateDeviceDimensions@MultitaskingViewGestureHandler@@AEAAJI@Z @ 0x180550644 (-UpdateDeviceDimensions@MultitaskingViewGestureHandler@@AEAAJI@Z.c)
 */

__int64 __fastcall MultitaskingViewGestureHandler::StartSwipe(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        __int64 a5)
{
  int updated; // ebx
  __int64 v10; // rdx
  __int64 v12; // rcx
  int v13; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 72) + 24LL))(*(_QWORD *)(a1 + 72), 1LL);
  *(_QWORD *)(a1 + 168) = MultitaskingViewGestureHandler::GetTimestampForPointerInput(
                            (MultitaskingViewGestureHandler *)(a1 - 8),
                            a4);
  *(_QWORD *)(a1 + 156) = a5;
  updated = MultitaskingViewGestureHandler::UpdateDeviceDimensions((MultitaskingViewGestureHandler *)(a1 - 8), a4);
  if ( updated < 0 )
  {
    v10 = 77LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewgesturehandler.cpp",
      (const char *)(unsigned int)updated);
    return (unsigned int)updated;
  }
  a5 = a2;
  *(_QWORD *)(a1 + 120) = __PAIR64__(a3, a2);
  LOBYTE(a5) = 0;
  updated = MultitaskingViewGestureHandler::GetMultitaskingViewState(
              (MultitaskingViewGestureHandler *)(a1 - 8),
              (struct MultitaskingViewGestureHandler::MultitaskingViewState *)&a5);
  if ( updated < 0 )
  {
    v10 = 81LL;
    goto LABEL_3;
  }
  if ( MultitaskingViewGestureHandler::ShouldProcessGestureInput(
         (MultitaskingViewGestureHandler *)(a1 - 8),
         (const struct MultitaskingViewGestureHandler::MultitaskingViewState *)&a5) )
  {
    updated = MultitaskingViewGestureHandler::ProcessTouchpadGestureInput(a1 - 8, 1, (__int64)&a5, a4);
    if ( updated < 0 )
    {
      v10 = 85LL;
      goto LABEL_3;
    }
  }
  v12 = *(_QWORD *)(a1 + 40);
  if ( v12 )
  {
    v13 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v12 + 32LL))(v12);
    if ( v13 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x5A,
        (int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewgesturehandler.cpp",
        (const char *)(unsigned int)v13);
  }
  return 0LL;
}
