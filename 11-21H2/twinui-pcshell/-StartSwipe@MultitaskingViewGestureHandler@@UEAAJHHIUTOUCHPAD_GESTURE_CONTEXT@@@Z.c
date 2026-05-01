/*
 * XREFs of ?StartSwipe@MultitaskingViewGestureHandler@@UEAAJHHIUTOUCHPAD_GESTURE_CONTEXT@@@Z @ 0x180497350
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_VsUpdates@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180114010 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_VsUpdates@@@details@wil@@QEAAX_NW4Reporti.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetMultitaskingViewState@MultitaskingViewGestureHandler@@AEBAJPEAUMultitaskingViewState@1@@Z @ 0x180230BFA (-GetMultitaskingViewState@MultitaskingViewGestureHandler@@AEBAJPEAUMultitaskingViewState@1@@Z.c)
 *     ?GetTimestampForPointerInput@MultitaskingViewGestureHandler@@AEBA_KI@Z @ 0x180230CBC (-GetTimestampForPointerInput@MultitaskingViewGestureHandler@@AEBA_KI@Z.c)
 *     ?ProcessTouchpadGestureInput@MultitaskingViewGestureHandler@@AEAAJW4GestureState@@AEBUMultitaskingViewState@1@I@Z @ 0x180230D4A (-ProcessTouchpadGestureInput@MultitaskingViewGestureHandler@@AEAAJW4GestureState@@AEBUMultitaski.c)
 *     ?ShouldProcessGestureInput@MultitaskingViewGestureHandler@@AEBA_NAEBUMultitaskingViewState@1@@Z @ 0x18049723C (-ShouldProcessGestureInput@MultitaskingViewGestureHandler@@AEBA_NAEBUMultitaskingViewState@1@@Z.c)
 *     ?UpdateDeviceDimensions@MultitaskingViewGestureHandler@@AEAAJI@Z @ 0x1804977D4 (-UpdateDeviceDimensions@MultitaskingViewGestureHandler@@AEAAJI@Z.c)
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
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rcx
  int v15; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 72) + 24LL))(*(_QWORD *)(a1 + 72), 1LL);
  *(_QWORD *)(a1 + 168) = MultitaskingViewGestureHandler::GetTimestampForPointerInput(
                            (MultitaskingViewGestureHandler *)(a1 - 8),
                            a4);
  *(_QWORD *)(a1 + 156) = a5;
  updated = MultitaskingViewGestureHandler::UpdateDeviceDimensions((MultitaskingViewGestureHandler *)(a1 - 8), a4);
  if ( updated < 0 )
  {
    v10 = 55LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewgesturehandler.cpp",
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
    v10 = 59LL;
    goto LABEL_3;
  }
  if ( MultitaskingViewGestureHandler::ShouldProcessGestureInput(
         (MultitaskingViewGestureHandler *)(a1 - 8),
         (const struct MultitaskingViewGestureHandler::MultitaskingViewState *)&a5) )
  {
    updated = MultitaskingViewGestureHandler::ProcessTouchpadGestureInput(a1 - 8, 1, (__int64)&a5, a4);
    if ( updated < 0 )
    {
      v10 = 63LL;
      goto LABEL_3;
    }
  }
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_VsUpdates>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_VsUpdates>::GetImpl'::`2'::impl,
    1u,
    v12,
    v13);
  v14 = *(_QWORD *)(a1 + 40);
  if ( v14 )
  {
    v15 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v14 + 32LL))(v14);
    if ( v15 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x46,
        (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewgesturehandler.cpp",
        (const char *)(unsigned int)v15);
  }
  return 0LL;
}
