/*
 * XREFs of ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_FixForCoToplevelWindow3DUafCrash@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800631AC
 * Callers:
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_FixForCoToplevelWindow3DUafCrash@@@details@wil@@QEAA_NXZ @ 0x180063230 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_FixForCoToplevelWindow3.c)
 * Callees:
 *     ?ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1800626A0 (-ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGG.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_FixForCoToplevelWindow3DUafCrash@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180063014 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_FixForCoToplev.c)
 */

void __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_FixForCoToplevelWindow3DUafCrash>::ReportUsage(
        wil::details *a1,
        unsigned __int8 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // r8
  int v6; // edi
  signed __int32 v7[6]; // [rsp+40h] [rbp-18h] BYREF
  int v8; // [rsp+60h] [rbp+8h] BYREF
  char v9; // [rsp+64h] [rbp+Ch]
  __int64 v10; // [rsp+78h] [rbp+20h]

  v10 = a4;
  LODWORD(v4) = *(_DWORD *)a1;
  v6 = a2;
  if ( (*(_DWORD *)a1 & 2) == 0 )
  {
    v4 = *(_QWORD *)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_FixForCoToplevelWindow3DUafCrash>::GetCachedFeatureEnabledState(
                      a1,
                      v7);
    v10 = v4;
  }
  v8 = 0;
  v9 = 2;
  wil::details::ReportUsageToService(
    (__int64)a1 + 8,
    0x25B3380u,
    ((unsigned int)v4 >> 8) & 1,
    ((unsigned int)v4 >> 9) & 1,
    (const struct FEATURE_LOGGED_TRAITS *)&v8,
    v6,
    3);
}
