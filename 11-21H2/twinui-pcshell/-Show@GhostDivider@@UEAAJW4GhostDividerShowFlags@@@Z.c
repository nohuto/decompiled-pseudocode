/*
 * XREFs of ?Show@GhostDivider@@UEAAJW4GhostDividerShowFlags@@@Z @ 0x18052C810
 * Callers:
 *     <none>
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_JRITest@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18052A514 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_JRITest@@@details@wil@@QEAAX_NW4Reporting.c)
 *     ?GhostDividerShown@JointResizeTelemetry@@SAXXZ @ 0x18052BEF4 (-GhostDividerShown@JointResizeTelemetry@@SAXXZ.c)
 *     ?Solidify@GhostDivider@@UEAAXXZ @ 0x18052C860 (-Solidify@GhostDivider@@UEAAXXZ.c)
 */

__int64 __fastcall GhostDivider::Show(GhostDivider *a1, char a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rcx

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_JRITest>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_JRITest>::GetImpl'::`2'::impl,
    1u,
    a3,
    a4);
  JointResizeTelemetry::GhostDividerShown(v6);
  if ( (a2 & 2) != 0 )
    GhostDivider::Solidify(a1);
  return 0LL;
}
