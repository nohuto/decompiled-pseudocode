/*
 * XREFs of ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_AccountAndRegionalPolicyEnforcement@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18003E7B4
 * Callers:
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_AccountAndRegionalPolicyEnforcement@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x180043560 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_AccountAndRegionalPolicyEnforceme.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_AccountAndRegionalPolicyEnforcement@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180033384 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_AccountAndRegionalPolicy.c)
 *     ?ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18003EB5C (-ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGG.c)
 */

__int64 __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_AccountAndRegionalPolicyEnforcement>::ReportUsage(
        volatile signed __int32 *a1,
        unsigned __int8 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // r8
  int v6; // edi
  signed __int32 v8[6]; // [rsp+40h] [rbp-18h] BYREF
  int v9; // [rsp+60h] [rbp+8h] BYREF
  char v10; // [rsp+64h] [rbp+Ch]
  __int64 v11; // [rsp+78h] [rbp+20h]

  v11 = a4;
  LODWORD(v4) = *a1;
  v6 = a2;
  if ( (*a1 & 4) == 0 )
  {
    v4 = *(_QWORD *)wil::details::FeatureImpl<__WilFeatureTraits_Feature_AccountAndRegionalPolicyEnforcement>::GetCachedFeatureEnabledState(
                      a1,
                      v8);
    v11 = v4;
  }
  v10 = 1;
  v9 = 0;
  return wil::details::ReportUsageToService(
           a1 + 2,
           47557358LL,
           ((unsigned int)v4 >> 10) & 1,
           ((unsigned int)v4 >> 11) & 1,
           &v9,
           v6,
           0);
}
