/*
 * XREFs of ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_XamlExplorerHost@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180126FE4
 * Callers:
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_XamlAllUpView@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x180126CEC (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_XamlAllUpView@@@details.c)
 * Callees:
 *     ?ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1800D1C80 (-ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGG.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_XamlExplorerHost@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18012706C (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_XamlExplorerHost@@@detai.c)
 */

void __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_XamlExplorerHost>::ReportUsage(
        unsigned int *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  unsigned int v4; // r8d
  int v6; // [rsp+30h] [rbp-28h]
  _BYTE v7[24]; // [rsp+40h] [rbp-18h] BYREF
  int v8; // [rsp+60h] [rbp+8h] BYREF
  char v9; // [rsp+64h] [rbp+Ch]
  __int64 v10; // [rsp+78h] [rbp+20h]

  v10 = a4;
  v4 = *a1;
  if ( (*a1 & 4) == 0 )
  {
    v10 = *(_QWORD *)wil::details::FeatureImpl<__WilFeatureTraits_Feature_XamlExplorerHost>::GetCachedFeatureEnabledState(
                       a1,
                       v7);
    v4 = v10;
  }
  v8 = 4;
  v6 = 0;
  v9 = 3;
  wil::details::ReportUsageToService((__int64)(a1 + 2), 0x70A74Cu, (v4 >> 10) & 1, (v4 >> 11) & 1, (__int64)&v8, 1u, v6);
}
