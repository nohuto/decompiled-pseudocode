/*
 * XREFs of RmEnableLimits @ 0x180012CD0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_ResourceManagerLimits@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800107B0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_ResourceManagerLimits@@@details@wil@@QEAA.c)
 */

__int64 __fastcall RmEnableLimits(__int64 a1, __int64 a2, char a3, __int64 a4)
{
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_ResourceManagerLimits>::ReportUsage(
    (wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_ResourceManagerLimits>::GetImpl'::`2'::impl,
    0,
    a3,
    a4);
  return 0LL;
}
