/*
 * XREFs of ?Destroy@GhostDivider@@UEAAXXZ @ 0x18052BC20
 * Callers:
 *     <none>
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_JRITest@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18052A514 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_JRITest@@@details@wil@@QEAAX_NW4Reporting.c)
 */

void __fastcall GhostDivider::Destroy(GhostDivider *this, __int64 a2, __int64 a3, __int64 a4)
{
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_JRITest>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_JRITest>::GetImpl'::`2'::impl,
    1u,
    a3,
    a4);
  GhostDivider::ChangeDividerVisibility(this, 0);
}
