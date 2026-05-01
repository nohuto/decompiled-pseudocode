/*
 * XREFs of ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_RemoveExpansionExperience@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18015F744
 * Callers:
 *     ?IsFeature_RemoveExpansionExperienceDisabled@@YA_NXZ @ 0x18015F720 (-IsFeature_RemoveExpansionExperienceDisabled@@YA_NXZ.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_RemoveExpansionExperience@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18015F7D8 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_RemoveExpansionExperienc.c)
 *     ?ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18018FE30 (-ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGG.c)
 */

__int64 __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_RemoveExpansionExperience>::ReportUsage(
        unsigned int *a1,
        unsigned __int8 a2,
        unsigned __int8 a3,
        __int64 a4)
{
  int v4; // edi
  unsigned int v6; // r8d
  int v7; // esi
  __int64 v9; // [rsp+40h] [rbp-18h] BYREF
  int v10; // [rsp+60h] [rbp+8h] BYREF
  char v11; // [rsp+64h] [rbp+Ch]
  __int64 v12; // [rsp+78h] [rbp+20h]

  v12 = a4;
  v4 = a3;
  v6 = *a1;
  v7 = a2;
  if ( (*a1 & 2) == 0 )
  {
    v12 = *(_QWORD *)wil::details::FeatureImpl<__WilFeatureTraits_Feature_RemoveExpansionExperience>::GetCachedFeatureEnabledState(
                       a1,
                       &v9);
    v6 = v12;
  }
  v10 = 1;
  v11 = 2;
  return wil::details::ReportUsageToService(a1 + 2, 25449285LL, (v6 >> 8) & 1, (v6 >> 9) & 1, &v10, v7, v4);
}
