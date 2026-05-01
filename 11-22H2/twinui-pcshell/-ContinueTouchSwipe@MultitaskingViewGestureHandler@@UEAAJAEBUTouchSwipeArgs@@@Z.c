/*
 * XREFs of ?ContinueTouchSwipe@MultitaskingViewGestureHandler@@UEAAJAEBUTouchSwipeArgs@@@Z @ 0x18054DA70
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_InputDrivenGTGAnimations@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18019A7C8 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_InputDrivenGTGAnimations@@@details@wil@@Q.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?DetermineGestureDirection@MultitaskingViewGestureHandlerHelpers@@YA?AW4GestureDirection@1@HH@Z @ 0x1802DF22A (-DetermineGestureDirection@MultitaskingViewGestureHandlerHelpers@@YA-AW4GestureDirection@1@HH@Z.c)
 *     ?GetMultitaskingViewState@MultitaskingViewGestureHandler@@AEBAJPEAUMultitaskingViewState@1@@Z @ 0x1802DF2DC (-GetMultitaskingViewState@MultitaskingViewGestureHandler@@AEBAJPEAUMultitaskingViewState@1@@Z.c)
 *     ??$SwipeGestureState@II_N@MultitaskingViewTelemetry@@SAX$$QEAI0$$QEA_N@Z @ 0x18054B5D4 (--$SwipeGestureState@II_N@MultitaskingViewTelemetry@@SAX$$QEAI0$$QEA_N@Z.c)
 *     ?DetermineTouchGestureAction@MultitaskingViewGestureHandlerHelpers@@YA?AW4GestureAction@1@W4GestureDirection@1@_NW4MULTITASKING_VIEW_TYPES@@@Z @ 0x18054E204 (-DetermineTouchGestureAction@MultitaskingViewGestureHandlerHelpers@@YA-AW4GestureAction@1@W4Gest.c)
 *     ?ProcessTouchGestureInput@MultitaskingViewGestureHandler@@AEAAJW4GestureState@@AEBUMultitaskingViewState@1@@Z @ 0x18054F674 (-ProcessTouchGestureInput@MultitaskingViewGestureHandler@@AEAAJW4GestureState@@AEBUMultitaskingV.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_3FingerAnimationSwitchApps@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18054FD14 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_3FingerAnimationSwitchApps@@@details@wil@.c)
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
  int v10; // esi
  __int64 v11; // r9
  __int64 v12; // rdx
  __int64 v13; // r9
  bool v14; // cl
  float v15; // edx
  bool v16; // zf
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+28h]
  bool v18; // [rsp+58h] [rbp+38h] BYREF
  unsigned int v19; // [rsp+5Ch] [rbp+3Ch]
  float v20; // [rsp+60h] [rbp+40h] BYREF
  int v21; // [rsp+68h] [rbp+48h] BYREF

  if ( ((*(_DWORD *)a2 - 1) & 0xFFFFFFFC) != 0 || *(_DWORD *)a2 == 3 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x131,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewgesturehandler.cpp",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
  else
  {
    (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 8) + 24LL))(*((_QWORD *)this + 8), 2LL);
    v4 = (int)*((float *)a2 + 2);
    v19 = 0;
    v18 = 0;
    *((_DWORD *)this + 28) += v4;
    *((_DWORD *)this + 29) += (int)*((float *)a2 + 3);
    MultitaskingViewState = MultitaskingViewGestureHandler::GetMultitaskingViewState(
                              (MultitaskingViewGestureHandler *)((char *)this - 16),
                              (struct MultitaskingViewGestureHandler::MultitaskingViewState *)&v18);
    if ( MultitaskingViewState < 0 )
    {
      v6 = 314LL;
LABEL_5:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v6,
        (int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewgesturehandler.cpp",
        (const char *)(unsigned int)MultitaskingViewState);
      return (unsigned int)MultitaskingViewState;
    }
    v8 = MultitaskingViewGestureHandlerHelpers::DetermineGestureDirection(
           *((_DWORD *)this + 28),
           *((_DWORD *)this + 29));
    LOBYTE(v9) = v18;
    v10 = MultitaskingViewGestureHandlerHelpers::DetermineTouchGestureAction(v8, v9, v19);
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_InputDrivenGTGAnimations>::ReportUsage(
      `wil::Feature<__WilFeatureTraits_Feature_InputDrivenGTGAnimations>::GetImpl'::`2'::impl,
      1u,
      3u,
      v11);
    if ( v10 != 3 )
    {
      LOBYTE(v12) = 1;
      wil::details::FeatureImpl<__WilFeatureTraits_Feature_3FingerAnimationSwitchApps>::ReportUsage(
        &`wil::Feature<__WilFeatureTraits_Feature_3FingerAnimationSwitchApps>::GetImpl'::`2'::impl,
        v12);
      if ( v10 != 8 )
      {
        wil::details::FeatureImpl<__WilFeatureTraits_Feature_InputDrivenGTGAnimations>::ReportUsage(
          `wil::Feature<__WilFeatureTraits_Feature_InputDrivenGTGAnimations>::GetImpl'::`2'::impl,
          1u,
          3u,
          v13);
        if ( !*((_BYTE *)this + 216) )
        {
          v14 = *((_BYTE *)a2 + 24) && v10 == 1 && *((_DWORD *)a2 + 1) == 3;
          *((_BYTE *)this + 196) = v14;
          *((_DWORD *)this + 50) = v14 ? v10 : 0;
          v15 = *(float *)a2;
          if ( *(_DWORD *)a2 != 1 && !v14 )
          {
            MultitaskingViewState = MultitaskingViewGestureHandler::ProcessTouchGestureInput(
                                      (char *)this - 16,
                                      2LL,
                                      &v18);
            if ( MultitaskingViewState < 0 )
            {
              v6 = 340LL;
              goto LABEL_5;
            }
            v15 = *(float *)a2;
          }
          v16 = *((_QWORD *)this + 10) == *((_QWORD *)this + 11);
          v20 = v15;
          v18 = !v16;
          v21 = 2;
          MultitaskingViewTelemetry::SwipeGestureState<unsigned int,unsigned int,bool>(&v21, (int *)&v20, (char *)&v18);
        }
      }
    }
    return 0LL;
  }
}
