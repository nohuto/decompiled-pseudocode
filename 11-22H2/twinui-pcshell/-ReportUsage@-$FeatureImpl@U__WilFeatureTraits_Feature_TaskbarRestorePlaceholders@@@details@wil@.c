/*
 * XREFs of ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_TaskbarRestorePlaceholders@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18075ADF8
 * Callers:
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_TaskbarRestorePlaceholders@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x18075EE5C (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_TaskbarRestorePlaceholders@@@deta.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_TaskbarRestorePlaceholders@@@details@wil@@QEAA_NXZ @ 0x18075EE9C (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_TaskbarRestorePlaceh_ea_18075EE9C.c)
 * Callees:
 *     ?ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1800D1C80 (-ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGG.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_TaskbarRestorePlaceholders@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180754E30 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_TaskbarRestorePlaceholde.c)
 */

void __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_TaskbarRestorePlaceholders>::ReportUsage(
        volatile signed __int32 *a1,
        unsigned __int8 a2,
        unsigned __int8 a3)
{
  int v3; // edi
  __int64 v5; // r8
  unsigned int v6; // esi
  int v7; // [rsp+30h] [rbp-38h]
  __int64 v8; // [rsp+40h] [rbp-28h] BYREF
  int v9; // [rsp+48h] [rbp-20h] BYREF
  char v10; // [rsp+4Ch] [rbp-1Ch]

  v3 = a3;
  LODWORD(v5) = *a1;
  v6 = a2;
  if ( (*a1 & 4) == 0 )
  {
    v5 = *(_QWORD *)wil::details::FeatureImpl<__WilFeatureTraits_Feature_TaskbarRestorePlaceholders>::GetCachedFeatureEnabledState(
                      a1,
                      (signed __int32 *)&v8);
    v8 = v5;
  }
  v7 = v3;
  v9 = 0;
  v10 = 2;
  wil::details::ReportUsageToService(
    (__int64)(a1 + 2),
    0x29927ECu,
    ((unsigned int)v5 >> 10) & 1,
    ((unsigned int)v5 >> 11) & 1,
    (__int64)&v9,
    v6,
    v7);
}
