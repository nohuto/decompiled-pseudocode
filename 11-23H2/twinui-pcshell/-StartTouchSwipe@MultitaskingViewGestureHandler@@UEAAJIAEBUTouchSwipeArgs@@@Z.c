/*
 * XREFs of ?StartTouchSwipe@MultitaskingViewGestureHandler@@UEAAJIAEBUTouchSwipeArgs@@@Z @ 0x180550220
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1801322B8 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_InputDrivenGTGAnimations@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18019A7C8 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_InputDrivenGTGAnimations@@@details@wil@@Q.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?DetermineGestureDirection@MultitaskingViewGestureHandlerHelpers@@YA?AW4GestureDirection@1@HH@Z @ 0x1802DF22A (-DetermineGestureDirection@MultitaskingViewGestureHandlerHelpers@@YA-AW4GestureDirection@1@HH@Z.c)
 *     ?GetMultitaskingViewState@MultitaskingViewGestureHandler@@AEBAJPEAUMultitaskingViewState@1@@Z @ 0x1802DF2DC (-GetMultitaskingViewState@MultitaskingViewGestureHandler@@AEBAJPEAUMultitaskingViewState@1@@Z.c)
 *     ?GetTimestampForPointerInput@MultitaskingViewGestureHandler@@AEBA_KI@Z @ 0x1802DF3E2 (-GetTimestampForPointerInput@MultitaskingViewGestureHandler@@AEBA_KI@Z.c)
 *     ??$SwipeGestureState@II_N@MultitaskingViewTelemetry@@SAX$$QEAI0$$QEA_N@Z @ 0x18054B5D4 (--$SwipeGestureState@II_N@MultitaskingViewTelemetry@@SAX$$QEAI0$$QEA_N@Z.c)
 *     ?CreateAndOpenAppThumbnailWindows@MultitaskingViewGestureHandler@@AEAAJXZ @ 0x18054DCC0 (-CreateAndOpenAppThumbnailWindows@MultitaskingViewGestureHandler@@AEAAJXZ.c)
 *     ?DetermineTouchGestureAction@MultitaskingViewGestureHandlerHelpers@@YA?AW4GestureAction@1@W4GestureDirection@1@_NW4MULTITASKING_VIEW_TYPES@@@Z @ 0x18054E204 (-DetermineTouchGestureAction@MultitaskingViewGestureHandlerHelpers@@YA-AW4GestureAction@1@W4Gest.c)
 *     ?ProcessTouchGestureInput@MultitaskingViewGestureHandler@@AEAAJW4GestureState@@AEBUMultitaskingViewState@1@@Z @ 0x18054F674 (-ProcessTouchGestureInput@MultitaskingViewGestureHandler@@AEAAJW4GestureState@@AEBUMultitaskingV.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_3FingerAnimationSwitchApps@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18054FD14 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_3FingerAnimationSwitchApps@@@details@wil@.c)
 *     ?UpdateDeviceDimensions@MultitaskingViewGestureHandler@@AEAAJI@Z @ 0x180550644 (-UpdateDeviceDimensions@MultitaskingViewGestureHandler@@AEAAJI@Z.c)
 */

__int64 __fastcall MultitaskingViewGestureHandler::StartTouchSwipe(
        MultitaskingViewGestureHandler *this,
        unsigned int a2,
        const struct TouchSwipeArgs *a3,
        __int64 a4)
{
  const char *v8; // r9
  int updated; // esi
  __int64 v10; // rdx
  __int64 v11; // rax
  int v12; // eax
  char v13; // r15
  char v14; // r12
  int v15; // esi
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // r9
  bool v19; // al
  bool v20; // si
  __int64 v21; // r8
  __int64 v22; // r9
  float v23; // edx
  bool v24; // zf
  float v25; // [rsp+20h] [rbp-10h] BYREF
  int v26[3]; // [rsp+24h] [rbp-Ch] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+28h]
  __int64 v28; // [rsp+78h] [rbp+48h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_InputDrivenGTGAnimations>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_InputDrivenGTGAnimations>::GetImpl'::`2'::impl,
    1u,
    3u,
    a4);
  if ( *((_BYTE *)this + 216) )
    return 0LL;
  if ( ((*(_DWORD *)a3 - 1) & 0xFFFFFFFC) == 0 && *(_DWORD *)a3 != 3 )
  {
    *((_DWORD *)this + 48) = a2;
    if ( !(unsigned int)GetPointerType(a2, (char *)this + 204) )
      return wil::details::in1diag3::Return_GetLastError(
               retaddr,
               (void *)0xB9,
               (int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewgesturehandler.cpp",
               v8);
    (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 8) + 24LL))(*((_QWORD *)this + 8), 1LL);
    *((_QWORD *)this + 20) = MultitaskingViewGestureHandler::GetTimestampForPointerInput(
                               (MultitaskingViewGestureHandler *)((char *)this - 16),
                               a2);
    updated = MultitaskingViewGestureHandler::UpdateDeviceDimensions(
                (MultitaskingViewGestureHandler *)((char *)this - 16),
                a2);
    if ( updated >= 0 )
    {
      LODWORD(v28) = (int)*((float *)a3 + 2);
      HIDWORD(v28) = (int)*((float *)a3 + 3);
      v11 = v28;
      HIDWORD(v28) = 0;
      *((_QWORD *)this + 14) = v11;
      LOBYTE(v28) = 0;
      updated = MultitaskingViewGestureHandler::GetMultitaskingViewState(
                  (MultitaskingViewGestureHandler *)((char *)this - 16),
                  (struct MultitaskingViewGestureHandler::MultitaskingViewState *)&v28);
      if ( updated >= 0 )
      {
        v12 = MultitaskingViewGestureHandlerHelpers::DetermineGestureDirection(
                *((_DWORD *)this + 28),
                *((_DWORD *)this + 29));
        v13 = v28;
        v14 = BYTE4(v28);
        v15 = MultitaskingViewGestureHandlerHelpers::DetermineTouchGestureAction(v12, v28, SBYTE4(v28));
        wil::details::FeatureImpl<__WilFeatureTraits_Feature_3FingerAnimationSwitchApps>::ReportUsage(
          `wil::Feature<__WilFeatureTraits_Feature_3FingerAnimationSwitchApps>::GetImpl'::`2'::impl,
          1u,
          v16,
          v17);
        v19 = *((_BYTE *)a3 + 24) && v15 == 1 && *((_DWORD *)a3 + 1) == 3;
        *((_BYTE *)this + 196) = v19;
        *((_DWORD *)this + 50) = v19 ? v15 : 0;
        v20 = *((_QWORD *)this + 10) == *((_QWORD *)this + 11) && !v13 && (v14 & 1) == 0;
        wil::details::FeatureImpl<__WilFeatureTraits_Feature_InputDrivenGTGAnimations>::ReportUsage(
          `wil::Feature<__WilFeatureTraits_Feature_InputDrivenGTGAnimations>::GetImpl'::`2'::impl,
          1u,
          3u,
          v18);
        wil::details::FeatureImpl<__WilFeatureTraits_Feature_3FingerAnimationSwitchApps>::ReportUsage(
          `wil::Feature<__WilFeatureTraits_Feature_3FingerAnimationSwitchApps>::GetImpl'::`2'::impl,
          1u,
          v21,
          v22);
        if ( !v20
          || (updated = MultitaskingViewGestureHandler::CreateAndOpenAppThumbnailWindows((CAppThumbnailWindow ***)this - 2),
              updated >= 0) )
        {
          v23 = *(float *)a3;
          if ( *(_DWORD *)a3 != 1 )
          {
            updated = MultitaskingViewGestureHandler::ProcessTouchGestureInput((__int64)this - 16, 1u);
            if ( updated < 0 )
            {
              v10 = 237LL;
              goto LABEL_9;
            }
            v23 = *(float *)a3;
          }
          v24 = *((_QWORD *)this + 10) == *((_QWORD *)this + 11);
          v25 = v23;
          LOBYTE(v28) = !v24;
          v26[0] = 1;
          MultitaskingViewTelemetry::SwipeGestureState<unsigned int,unsigned int,bool>(v26, (int *)&v25, (char *)&v28);
          return 0LL;
        }
        v10 = 232LL;
      }
      else
      {
        v10 = 193LL;
      }
    }
    else
    {
      v10 = 189LL;
    }
LABEL_9:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewgesturehandler.cpp",
      (const char *)(unsigned int)updated);
    return (unsigned int)updated;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xB1,
    (int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewgesturehandler.cpp",
    (const char *)0x80070057LL);
  return 2147942487LL;
}
