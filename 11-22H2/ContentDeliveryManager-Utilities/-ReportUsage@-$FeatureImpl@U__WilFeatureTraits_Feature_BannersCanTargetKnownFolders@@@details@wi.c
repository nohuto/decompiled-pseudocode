/*
 * XREFs of ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_BannersCanTargetKnownFolders@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18005CDBC
 * Callers:
 *     ?IsEnabled@?$Feature@U__WilFeatureTraits_Feature_BannersCanTargetKnownFolders@@@wil@@SA_NXZ @ 0x180059F70 (-IsEnabled@-$Feature@U__WilFeatureTraits_Feature_BannersCanTargetKnownFolders@@@wil@@SA_NXZ.c)
 * Callees:
 *     ?ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18003EB5C (-ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGG.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_BannersCanTargetKnownFolders@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180056BCC (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_BannersCanTargetKnownFol.c)
 */

_UNKNOWN **__fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_BannersCanTargetKnownFolders>::ReportUsage(
        volatile signed __int32 *a1,
        unsigned __int8 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // r8
  unsigned int v5; // edi
  signed __int32 v8[6]; // [rsp+40h] [rbp-18h] BYREF
  int v9; // [rsp+60h] [rbp+8h] BYREF
  char v10; // [rsp+64h] [rbp+Ch]
  __int64 v11; // [rsp+78h] [rbp+20h]

  v11 = a4;
  LODWORD(v4) = *a1;
  v5 = a2;
  if ( (*a1 & 4) == 0 )
  {
    v4 = *(_QWORD *)wil::details::FeatureImpl<__WilFeatureTraits_Feature_BannersCanTargetKnownFolders>::GetCachedFeatureEnabledState(
                      a1,
                      v8);
    v11 = v4;
  }
  v9 = 4;
  v10 = 3;
  return wil::details::ReportUsageToService(
           (__int64)(a1 + 2),
           0x1067B86u,
           ((unsigned int)v4 >> 10) & 1,
           ((unsigned int)v4 >> 11) & 1,
           (__int64)&v9,
           v5,
           3u);
}
