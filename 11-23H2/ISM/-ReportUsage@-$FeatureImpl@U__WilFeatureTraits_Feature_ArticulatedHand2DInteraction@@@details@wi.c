/*
 * XREFs of ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_ArticulatedHand2DInteraction@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800C00A0
 * Callers:
 *     ?SupportsTouch@MPCHandProcessor@@UEAA_NXZ @ 0x1800C04E0 (-SupportsTouch@MPCHandProcessor@@UEAA_NXZ.c)
 * Callees:
 *     ?ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x180035174 (-ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGG.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_ArticulatedHand2DInteraction@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1800BE834 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_ArticulatedHand2DInterac.c)
 */

void __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_ArticulatedHand2DInteraction>::ReportUsage(
        volatile signed __int32 *a1,
        unsigned __int8 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // r8
  int v6; // edi
  unsigned __int8 v7; // [rsp+38h] [rbp-20h]
  signed __int32 v8[6]; // [rsp+40h] [rbp-18h] BYREF
  int v9; // [rsp+60h] [rbp+8h] BYREF
  char v10; // [rsp+64h] [rbp+Ch]
  __int64 v11; // [rsp+78h] [rbp+20h]

  v11 = a4;
  LODWORD(v4) = *a1;
  v6 = a2;
  if ( (*a1 & 2) == 0 )
  {
    v4 = *(_QWORD *)wil::details::FeatureImpl<__WilFeatureTraits_Feature_ArticulatedHand2DInteraction>::GetCachedFeatureEnabledState(
                      a1,
                      v8);
    v11 = v4;
  }
  v9 = 0;
  v10 = 3;
  wil::details::ReportUsageToService(
    a1 + 2,
    0x1149A5Eu,
    ((unsigned int)v4 >> 8) & 1,
    ((unsigned int)v4 >> 9) & 1,
    (__int64)&v9,
    v6,
    3,
    v7);
}
