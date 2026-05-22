/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_DWMCrashesInBamoPrincipalImplLoop@@@details@wil@@QEAA_NXZ @ 0x1800684AC
 * Callers:
 *     ?CreateSystemInputRouter@@YAJPEAXPEAUIInputFocusListener@@PEAPEAUISystemInputRouter@@@Z @ 0x18004E820 (-CreateSystemInputRouter@@YAJPEAXPEAUIInputFocusListener@@PEAPEAUISystemInputRouter@@@Z.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_DWMCrashesInBamoPrincipalImplLoop@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180068290 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_DWMCrashesInBa.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_DWMCrashesInBamoPrincipalImplLoop@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180068428 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_DWMCrashesInBamoPrincipalImplLo.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_DWMCrashesInBamoPrincipalImplLoop>::__private_IsEnabled(
        volatile signed __int32 *a1)
{
  char v2; // bl
  __int64 v3; // r8
  __int64 v4; // r9
  signed __int32 v6; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_DWMCrashesInBamoPrincipalImplLoop>::GetCachedFeatureEnabledState(
    a1,
    &v6);
  v2 = v6 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_DWMCrashesInBamoPrincipalImplLoop>::ReportUsage(
    (__int64)a1,
    v6 & 1,
    v3,
    v4);
  return v2;
}
