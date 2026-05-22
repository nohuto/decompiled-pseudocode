/*
 * XREFs of ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_NI_EssentialsBundle_D@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180076B20
 * Callers:
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_NI_EssentialsBundle_D@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x18007703C (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_NI_EssentialsBundle_D@@@details@w.c)
 * Callees:
 *     ?ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18003DE10 (-ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGG.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_NI_EssentialsBundle_D@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180076628 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_NI_EssentialsBundle_D@@@.c)
 */

void __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_NI_EssentialsBundle_D>::ReportUsage(
        __int64 a1,
        unsigned __int8 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // r8
  unsigned int v6; // edi
  signed __int32 v7[6]; // [rsp+40h] [rbp-18h] BYREF
  int v8; // [rsp+60h] [rbp+8h] BYREF
  char v9; // [rsp+64h] [rbp+Ch]
  __int64 v10; // [rsp+78h] [rbp+20h]

  v10 = a4;
  LODWORD(v4) = *(_DWORD *)a1;
  v6 = a2;
  if ( (*(_DWORD *)a1 & 4) == 0 )
  {
    v4 = *(_QWORD *)wil::details::FeatureImpl<__WilFeatureTraits_Feature_NI_EssentialsBundle_D>::GetCachedFeatureEnabledState(
                      (volatile signed __int32 *)a1,
                      v7);
    v10 = v4;
  }
  v9 = 1;
  v8 = 0;
  wil::details::ReportUsageToService(
    (struct wil_details_FeatureReportingCache *)(a1 + 8),
    0x33752B3u,
    ((unsigned int)v4 >> 10) & 1,
    ((unsigned int)v4 >> 11) & 1,
    (__int64)&v8,
    v6,
    0);
}
