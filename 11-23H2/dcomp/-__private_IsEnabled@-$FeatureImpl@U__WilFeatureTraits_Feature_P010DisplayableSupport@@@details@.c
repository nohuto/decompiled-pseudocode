/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_P010DisplayableSupport@@@details@wil@@QEAA_NXZ @ 0x1800A7B34
 * Callers:
 *     ?Initialize@CPresentationBuffer@@IEAAJPEAUIUnknown@@@Z @ 0x1801AF3A8 (-Initialize@CPresentationBuffer@@IEAAJPEAUIUnknown@@@Z.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_P010DisplayableSupport@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1800A78A4 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_P010DisplayableSupport@@.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_P010DisplayableSupport@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800A7AB0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_P010DisplayableSupport@@@details@wil@@QEA.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_P010DisplayableSupport>::__private_IsEnabled(
        wil::details *a1)
{
  char v2; // bl
  __int64 v3; // r8
  __int64 v4; // r9
  signed __int32 v6; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_P010DisplayableSupport>::GetCachedFeatureEnabledState(a1, &v6);
  v2 = v6 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_P010DisplayableSupport>::ReportUsage(a1, v6 & 1, v3, v4);
  return v2;
}
