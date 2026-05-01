/*
 * XREFs of ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_CortanaOnSV@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18004CB14
 * Callers:
 *     ?TryGetLaunchPosition@DefaultLaunchPositionOverride@@UEAAJPEAUIApplicationView@@PEAV?$optional@UtagRECT@@@std@@@Z @ 0x18004CA70 (-TryGetLaunchPosition@DefaultLaunchPositionOverride@@UEAAJPEAUIApplicationView@@PEAV-$optional@U.c)
 *     ?SupportsSuspendOnClose@CortanaStoreAppExperienceManager@@UEAAJPEBGPEAH@Z @ 0x18004CAB0 (-SupportsSuspendOnClose@CortanaStoreAppExperienceManager@@UEAAJPEBGPEAH@Z.c)
 *     ?CreateAppViewOperationToUpdateView@VoiceAssistantPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplicationViewOperation@@@Z @ 0x1805AB9B8 (-CreateAppViewOperationToUpdateView@VoiceAssistantPositioner@@AEAAJPEAUIApplicationView@@PEAPEAU.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_CortanaOnSV@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18004CB98 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_CortanaOnSV@@@details@wi.c)
 *     ?ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1800D1C80 (-ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGG.c)
 */

__int64 __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_CortanaOnSV>::ReportUsage(
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
  if ( (*a1 & 4) == 0 )
  {
    v4 = *(_QWORD *)wil::details::FeatureImpl<__WilFeatureTraits_Feature_CortanaOnSV>::GetCachedFeatureEnabledState(
                      a1,
                      v8);
    v11 = v4;
  }
  v9 = 0;
  v10 = 3;
  return wil::details::ReportUsageToService(
           a1 + 2,
           33269642LL,
           ((unsigned int)v4 >> 10) & 1,
           ((unsigned int)v4 >> 11) & 1,
           &v9,
           v6,
           3);
}
