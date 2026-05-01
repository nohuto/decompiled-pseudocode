/*
 * XREFs of ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_TestNM@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180149610
 * Callers:
 *     ?Show@CActionCenterExperienceManager@@AEAAJXZ @ 0x18000AC38 (-Show@CActionCenterExperienceManager@@AEAAJXZ.c)
 *     ?OnViewUncloaking@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180024F30 (-OnViewUncloaking@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?OnViewUncloaking@CControlCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180025090 (-OnViewUncloaking@CControlCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?GetMode@NotificationCenterTelemetry@NotificationCenterUITelemetry@@SAIXZ @ 0x18002F850 (-GetMode@NotificationCenterTelemetry@NotificationCenterUITelemetry@@SAIXZ.c)
 *     ?OnViewCreated@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x18003CB40 (-OnViewCreated@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?SetWindowRegion@CActionCenterExperienceManager@@AEAAJXZ @ 0x18003DBE8 (-SetWindowRegion@CActionCenterExperienceManager@@AEAAJXZ.c)
 *     ?OnViewHidden@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180040A70 (-OnViewHidden@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?OnViewShown@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180040B20 (-OnViewShown@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?OnViewCloaking@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180040F80 (-OnViewCloaking@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?PositionView@CActionCenterExperienceManager@@AEAAJXZ @ 0x18004A334 (-PositionView@CActionCenterExperienceManager@@AEAAJXZ.c)
 *     ?OnEventQueued@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18004AAD0 (-OnEventQueued@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING_.c)
 *     ?GetViewPosition@CActionCenterExperienceManager@@AEAAJAEAUtagRECT@@@Z @ 0x18004BB38 (-GetViewPosition@CActionCenterExperienceManager@@AEAAJAEAUtagRECT@@@Z.c)
 *     ?Hide@CActionCenterExperienceManager@@AEAAJXZ @ 0x18004D9FC (-Hide@CActionCenterExperienceManager@@AEAAJXZ.c)
 *     ?OnVisibilityChanged@CActionCenterExperienceManager@@AEAAXXZ @ 0x18004DD9C (-OnVisibilityChanged@CActionCenterExperienceManager@@AEAAXXZ.c)
 *     ?CompleteHide@CActionCenterExperienceManager@@AEAAJXZ @ 0x18004F168 (-CompleteHide@CActionCenterExperienceManager@@AEAAJXZ.c)
 *     ?OnShellReady@CToastCenterExperienceManager@@AEAAJXZ @ 0x1800A6424 (-OnShellReady@CToastCenterExperienceManager@@AEAAJXZ.c)
 *     ?OnControlCenterVisibilityChanged@CToastCenterExperienceManager@@AEAAJ_N@Z @ 0x180149520 (-OnControlCenterVisibilityChanged@CToastCenterExperienceManager@@AEAAJ_N@Z.c)
 *     ?IsEnabled@?$Feature@U__WilFeatureTraits_Feature_TestNM@@@wil@@SA_NXZ @ 0x1801495F0 (-IsEnabled@-$Feature@U__WilFeatureTraits_Feature_TestNM@@@wil@@SA_NXZ.c)
 *     ?Close@CToastCenterExperienceManager@@UEAAJXZ @ 0x180168660 (-Close@CToastCenterExperienceManager@@UEAAJXZ.c)
 *     ?RaiseToastPeekRegionClickedEvent@CToastCenterExperienceManager@@AEAAJXZ @ 0x180364BEC (-RaiseToastPeekRegionClickedEvent@CToastCenterExperienceManager@@AEAAJXZ.c)
 *     ?SetZBand@CToastCenterExperienceManager@@AEAAJXZ @ 0x180365388 (-SetZBand@CToastCenterExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_TestNM@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180149698 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_TestNM@@@details@wil@@AE.c)
 *     ?ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18018FE30 (-ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGG.c)
 */

__int64 __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_TestNM>::ReportUsage(
        _DWORD *a1,
        unsigned __int8 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // r8
  int v6; // edi
  _BYTE v8[24]; // [rsp+40h] [rbp-18h] BYREF
  int v9; // [rsp+60h] [rbp+8h] BYREF
  char v10; // [rsp+64h] [rbp+Ch]
  __int64 v11; // [rsp+78h] [rbp+20h]

  v11 = a4;
  LODWORD(v4) = *a1;
  v6 = a2;
  if ( (*a1 & 2) == 0 )
  {
    v4 = *(_QWORD *)wil::details::FeatureImpl<__WilFeatureTraits_Feature_TestNM>::GetCachedFeatureEnabledState(a1, v8);
    v11 = v4;
  }
  v9 = 0;
  v10 = 3;
  return wil::details::ReportUsageToService(
           a1 + 2,
           29702941LL,
           ((unsigned int)v4 >> 8) & 1,
           ((unsigned int)v4 >> 9) & 1,
           &v9,
           v6,
           3);
}
