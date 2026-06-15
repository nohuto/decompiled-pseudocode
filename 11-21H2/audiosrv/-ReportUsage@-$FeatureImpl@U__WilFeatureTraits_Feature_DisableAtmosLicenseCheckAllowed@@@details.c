/*
 * XREFs of ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_DisableAtmosLicenseCheckAllowed@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180040A08
 * Callers:
 *     ?PerformLicenseCheck@AtmosCheck@@QEAAJ_N@Z @ 0x180040818 (-PerformLicenseCheck@AtmosCheck@@QEAAJ_N@Z.c)
 *     ?RegistryGates@CSpatialAudioTechnologies@@SAXXZ @ 0x18005439C (-RegistryGates@CSpatialAudioTechnologies@@SAXXZ.c)
 *     ?EnumerateSpatialEncoders@CSpatialProperties@@AEAAIAEBUSpatialAudioSettings@@IPEBUSpatialAudioEncoderDescriptor@@W4SpatialRendererSelectionMode@@PEBUtWAVEFORMATEX@@3W4SpatialAudioPolicyFlags@@KPEAU3@PEAUTechIndexes@@@Z @ 0x1800543B0 (-EnumerateSpatialEncoders@CSpatialProperties@@AEAAIAEBUSpatialAudioSettings@@IPEBUSpatialAudioEn.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_DisableAtmosLicenseCheckAllowed@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180056228 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_DisableAtmosLicenseCheck.c)
 *     ?ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1800626F8 (-ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGG.c)
 */

__int64 __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_DisableAtmosLicenseCheckAllowed>::ReportUsage(
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
    v4 = *(_QWORD *)wil::details::FeatureImpl<__WilFeatureTraits_Feature_DisableAtmosLicenseCheckAllowed>::GetCachedFeatureEnabledState(
                      a1,
                      v8);
    v11 = v4;
  }
  v9 = 0;
  v10 = 0;
  return wil::details::ReportUsageToService(
           a1 + 2,
           10011581LL,
           ((unsigned int)v4 >> 8) & 1,
           ((unsigned int)v4 >> 9) & 1,
           &v9,
           v6,
           3);
}
