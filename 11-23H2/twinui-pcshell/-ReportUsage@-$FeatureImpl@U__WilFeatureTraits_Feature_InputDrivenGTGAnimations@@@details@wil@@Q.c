/*
 * XREFs of ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_InputDrivenGTGAnimations@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18019A7C8
 * Callers:
 *     ?RuntimeClassInitialize@MultitaskingViewGestureHandler@@QEAAJPEAUIMultitaskingViewTaskScheduler@@PEAUIMultitaskingViewVisibilityService@@@Z @ 0x1800A2440 (-RuntimeClassInitialize@MultitaskingViewGestureHandler@@QEAAJPEAUIMultitaskingViewTaskScheduler@.c)
 *     ?ContinueTouchSwipe@MultitaskingViewGestureHandler@@UEAAJAEBUTouchSwipeArgs@@@Z @ 0x18054DA70 (-ContinueTouchSwipe@MultitaskingViewGestureHandler@@UEAAJAEBUTouchSwipeArgs@@@Z.c)
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_3FingerAnimationSwitchApps@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x18054E830 (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_3FingerAnimationSwitchA.c)
 *     ?ProcessTouchGestureInput@MultitaskingViewGestureHandler@@AEAAJW4GestureState@@AEBUMultitaskingViewState@1@@Z @ 0x18054F674 (-ProcessTouchGestureInput@MultitaskingViewGestureHandler@@AEAAJW4GestureState@@AEBUMultitaskingV.c)
 *     ?StartTouchSwipe@MultitaskingViewGestureHandler@@UEAAJIAEBUTouchSwipeArgs@@@Z @ 0x180550220 (-StartTouchSwipe@MultitaskingViewGestureHandler@@UEAAJIAEBUTouchSwipeArgs@@@Z.c)
 *     ?Close@CAppThumbnailWindow@@QEAAJAEBW4AnimationType@1@@Z @ 0x1805555C8 (-Close@CAppThumbnailWindow@@QEAAJAEBW4AnimationType@1@@Z.c)
 *     ?CreateAppThumbnail@CAppThumbnailWindow@@IEAAJXZ @ 0x18055597C (-CreateAppThumbnail@CAppThumbnailWindow@@IEAAJXZ.c)
 *     ?Open@CAppThumbnailWindow@@QEAAJXZ @ 0x18055992C (-Open@CAppThumbnailWindow@@QEAAJXZ.c)
 * Callees:
 *     ?ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1800D1C80 (-ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGG.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_InputDrivenGTGAnimations@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18019A858 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_InputDrivenGTGAnimations.c)
 */

void __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_InputDrivenGTGAnimations>::ReportUsage(
        unsigned int *a1,
        unsigned __int8 a2,
        unsigned __int8 a3,
        __int64 a4)
{
  int v4; // edi
  unsigned int v6; // r8d
  unsigned int v7; // esi
  int v8; // [rsp+30h] [rbp-28h]
  __int64 v9; // [rsp+40h] [rbp-18h] BYREF
  int v10; // [rsp+60h] [rbp+8h] BYREF
  char v11; // [rsp+64h] [rbp+Ch]
  __int64 v12; // [rsp+78h] [rbp+20h]

  v12 = a4;
  v4 = a3;
  v6 = *a1;
  v7 = a2;
  if ( (*a1 & 4) == 0 )
  {
    v12 = *(_QWORD *)wil::details::FeatureImpl<__WilFeatureTraits_Feature_InputDrivenGTGAnimations>::GetCachedFeatureEnabledState(
                       a1,
                       &v9);
    v6 = v12;
  }
  v8 = v4;
  v10 = 0;
  v11 = 3;
  wil::details::ReportUsageToService(
    (__int64)(a1 + 2),
    0x201BCE0u,
    (v6 >> 10) & 1,
    (v6 >> 11) & 1,
    (__int64)&v10,
    v7,
    v8);
}
