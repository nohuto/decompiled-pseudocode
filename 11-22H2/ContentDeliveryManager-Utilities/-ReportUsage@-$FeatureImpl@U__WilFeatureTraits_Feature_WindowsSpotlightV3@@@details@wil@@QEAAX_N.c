/*
 * XREFs of ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_WindowsSpotlightV3@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18005D2E4
 * Callers:
 *     ?GetLockScreenEnabled@LockScreenCreativeConfigHelpers@CreativeFramework@@YAJPEBGPEA_N1@Z @ 0x180058E18 (-GetLockScreenEnabled@LockScreenCreativeConfigHelpers@CreativeFramework@@YAJPEBGPEA_N1@Z.c)
 *     ?IsEnabled@?$Feature@U__WilFeatureTraits_Feature_WindowsSpotlightV3@@@wil@@SA_NXZ @ 0x18005A060 (-IsEnabled@-$Feature@U__WilFeatureTraits_Feature_WindowsSpotlightV3@@@wil@@SA_NXZ.c)
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_CortanaOnSpotlight@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x1800A8784 (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_CortanaOnSpotlight@@@de.c)
 * Callees:
 *     ?ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18003EB5C (-ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGG.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_WindowsSpotlightV3@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180057400 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_WindowsSpotlightV3@@@det.c)
 */

_UNKNOWN **__fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_WindowsSpotlightV3>::ReportUsage(
        volatile signed __int32 *a1,
        unsigned __int8 a2,
        unsigned __int8 a3,
        __int64 a4)
{
  unsigned int v4; // edi
  volatile unsigned __int32 v5; // r8d
  unsigned int v7; // esi
  signed __int32 v9[10]; // [rsp+40h] [rbp-28h] BYREF
  int v10; // [rsp+70h] [rbp+8h] BYREF
  char v11; // [rsp+74h] [rbp+Ch]
  __int64 v12; // [rsp+88h] [rbp+20h]

  v12 = a4;
  v4 = a3;
  v5 = *a1;
  v7 = a2;
  if ( (*a1 & 4) == 0 )
  {
    v12 = *(_QWORD *)wil::details::FeatureImpl<__WilFeatureTraits_Feature_WindowsSpotlightV3>::GetCachedFeatureEnabledState(
                       a1,
                       v9);
    v5 = v12;
  }
  v10 = 4;
  v11 = 3;
  return wil::details::ReportUsageToService(
           (__int64)(a1 + 2),
           0xA836A7u,
           (v5 >> 10) & 1,
           (v5 >> 11) & 1,
           (__int64)&v10,
           v7,
           v4);
}
