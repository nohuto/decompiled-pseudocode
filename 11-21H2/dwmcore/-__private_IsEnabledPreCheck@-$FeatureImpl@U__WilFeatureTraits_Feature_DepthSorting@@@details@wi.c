/*
 * XREFs of ?__private_IsEnabledPreCheck@?$FeatureImpl@U__WilFeatureTraits_Feature_DepthSorting@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x180100030
 * Callers:
 *     _dynamic_initializer_for__CPreComputeContext::s_depthSortingEnabled__ @ 0x180001350 (_dynamic_initializer_for__CPreComputeContext--s_depthSortingEnabled__.c)
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_DepthSorting@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180045EC0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_DepthSorting@@@details@wil@@QEAAX_NW4Repo.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_DepthSorting>::__private_IsEnabledPreCheck(
        volatile signed __int32 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_DepthSorting>::ReportUsage(a1, 0, 0, a4);
  return 1;
}
