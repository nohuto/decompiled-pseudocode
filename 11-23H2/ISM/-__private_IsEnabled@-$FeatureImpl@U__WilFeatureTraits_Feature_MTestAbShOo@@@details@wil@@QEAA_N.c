/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_MTestAbShOo@@@details@wil@@QEAA_NXZ @ 0x18006481C
 * Callers:
 *     ?OnHitTest@ShellHandwritingProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProcessorInitialState@@@Z @ 0x180064390 (-OnHitTest@ShellHandwritingProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProc.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_MTestAbShOo@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180064074 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_MTestAbShOo@@@details@wi.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_MTestAbShOo@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800646BC (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_MTestAbShOo@@@details@wil@@QEAAX_NW4Repor.c)
 */

unsigned __int8 __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_MTestAbShOo>::__private_IsEnabled(
        volatile signed __int32 *a1)
{
  unsigned __int8 v2; // bl
  __int64 v3; // r8
  __int64 v4; // r9
  signed __int32 v6; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_MTestAbShOo>::GetCachedFeatureEnabledState(a1, &v6);
  v2 = (v6 & 8) != 0;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_MTestAbShOo>::ReportUsage(a1, v2, v3, v4);
  return v2;
}
