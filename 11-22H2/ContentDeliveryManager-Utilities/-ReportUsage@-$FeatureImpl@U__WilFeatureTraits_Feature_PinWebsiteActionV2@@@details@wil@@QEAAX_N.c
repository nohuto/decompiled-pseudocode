/*
 * XREFs of ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_PinWebsiteActionV2@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800BF1B0
 * Callers:
 *     ?PinWebsite@PinnedWebsiteManager@Actions@CreativeFramework@@YAXPEB_W00@Z @ 0x1800BEC58 (-PinWebsite@PinnedWebsiteManager@Actions@CreativeFramework@@YAXPEB_W00@Z.c)
 * Callees:
 *     ?ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18003EB5C (-ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGG.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_PinWebsiteActionV2@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1800BE3E4 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_PinWebsiteActionV2@@@det.c)
 */

_UNKNOWN **__fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_PinWebsiteActionV2>::ReportUsage(
        volatile signed __int32 *a1,
        unsigned __int8 a2,
        unsigned __int8 a3,
        __int64 a4)
{
  unsigned int v4; // edi
  volatile unsigned __int32 v6; // r8d
  unsigned int v7; // esi
  signed __int32 v9[6]; // [rsp+40h] [rbp-18h] BYREF
  int v10; // [rsp+60h] [rbp+8h] BYREF
  char v11; // [rsp+64h] [rbp+Ch]
  __int64 v12; // [rsp+78h] [rbp+20h]

  v12 = a4;
  v4 = a3;
  v6 = *a1;
  v7 = a2;
  if ( (*a1 & 4) == 0 )
  {
    v12 = *(_QWORD *)wil::details::FeatureImpl<__WilFeatureTraits_Feature_PinWebsiteActionV2>::GetCachedFeatureEnabledState(
                       a1,
                       v9);
    v6 = v12;
  }
  v10 = 0;
  v11 = 3;
  return wil::details::ReportUsageToService(
           (__int64)(a1 + 2),
           0xFA8C7Cu,
           (v6 >> 10) & 1,
           (v6 >> 11) & 1,
           (__int64)&v10,
           v7,
           v4);
}
