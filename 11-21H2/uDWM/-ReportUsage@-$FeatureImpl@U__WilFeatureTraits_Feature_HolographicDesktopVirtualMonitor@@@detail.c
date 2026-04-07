/*
 * XREFs of ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_HolographicDesktopVirtualMonitor@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18009DB20
 * Callers:
 *     ?OnHolographicDisplayCalibrationDriverDetected@CAnalogCompositorManager@@AEAAXXZ @ 0x18009D580 (-OnHolographicDisplayCalibrationDriverDetected@CAnalogCompositorManager@@AEAAXXZ.c)
 * Callees:
 *     ?ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1800626A0 (-ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGG.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_HolographicDesktopVirtualMonitor@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18009CBA0 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_HolographicDesktopVirtua.c)
 */

void __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_HolographicDesktopVirtualMonitor>::ReportUsage(
        volatile signed __int32 *a1,
        unsigned __int8 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // r8
  int v6; // edi
  signed __int32 v7[6]; // [rsp+40h] [rbp-18h] BYREF
  int v8; // [rsp+60h] [rbp+8h] BYREF
  char v9; // [rsp+64h] [rbp+Ch]
  __int64 v10; // [rsp+78h] [rbp+20h]

  v10 = a4;
  LODWORD(v4) = *a1;
  v6 = a2;
  if ( (*a1 & 2) == 0 )
  {
    v4 = *(_QWORD *)wil::details::FeatureImpl<__WilFeatureTraits_Feature_HolographicDesktopVirtualMonitor>::GetCachedFeatureEnabledState(
                      a1,
                      v7);
    v10 = v4;
  }
  v8 = 0;
  v9 = 3;
  wil::details::ReportUsageToService(
    (__int64)(a1 + 2),
    0x181A09Du,
    ((unsigned int)v4 >> 8) & 1,
    ((unsigned int)v4 >> 9) & 1,
    (const struct FEATURE_LOGGED_TRAITS *)&v8,
    v6,
    3);
}
