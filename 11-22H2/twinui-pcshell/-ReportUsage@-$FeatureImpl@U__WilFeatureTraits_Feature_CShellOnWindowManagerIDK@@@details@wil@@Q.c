/*
 * XREFs of ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_CShellOnWindowManagerIDK@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18016FD7C
 * Callers:
 *     _lambda_2a8f8fa06f2e0b1768a49123f6915af2_::operator() @ 0x1800A3798 (_lambda_2a8f8fa06f2e0b1768a49123f6915af2_--operator().c)
 *     ?ShouldMoveUWLMIntoShellProcess@UwpWindowLifecycleManagement@Shell@Internal@Windows@@YA_NXZ @ 0x18016F88C (-ShouldMoveUWLMIntoShellProcess@UwpWindowLifecycleManagement@Shell@Internal@Windows@@YA_NXZ.c)
 * Callees:
 *     ?ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1800D1C80 (-ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGG.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_CShellOnWindowManagerIDK@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18016FE00 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_CShellOnWindowManagerIDK.c)
 */

void __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_CShellOnWindowManagerIDK>::ReportUsage(
        _DWORD *a1,
        unsigned __int8 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // r8
  unsigned int v6; // edi
  int v7; // [rsp+30h] [rbp-28h]
  _BYTE v8[24]; // [rsp+40h] [rbp-18h] BYREF
  int v9; // [rsp+60h] [rbp+8h] BYREF
  char v10; // [rsp+64h] [rbp+Ch]
  __int64 v11; // [rsp+78h] [rbp+20h]

  v11 = a4;
  LODWORD(v4) = *a1;
  v6 = a2;
  if ( (*a1 & 4) == 0 )
  {
    v4 = *(_QWORD *)wil::details::FeatureImpl<__WilFeatureTraits_Feature_CShellOnWindowManagerIDK>::GetCachedFeatureEnabledState(
                      a1,
                      v8);
    v11 = v4;
  }
  v7 = 3;
  v9 = 0;
  v10 = 3;
  wil::details::ReportUsageToService(
    (__int64)(a1 + 2),
    0x15CBDE5u,
    ((unsigned int)v4 >> 10) & 1,
    ((unsigned int)v4 >> 11) & 1,
    (__int64)&v9,
    v6,
    v7);
}
