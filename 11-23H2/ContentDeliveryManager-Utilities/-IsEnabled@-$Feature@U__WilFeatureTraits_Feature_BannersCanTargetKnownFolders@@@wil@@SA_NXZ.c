/*
 * XREFs of ?IsEnabled@?$Feature@U__WilFeatureTraits_Feature_BannersCanTargetKnownFolders@@@wil@@SA_NXZ @ 0x180059F20
 * Callers:
 *     <none>
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_BannersCanTargetKnownFolders@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18005CD6C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_BannersCanTargetKnownFolders@@@details@wi.c)
 */

char __fastcall wil::Feature<__WilFeatureTraits_Feature_BannersCanTargetKnownFolders>::IsEnabled(
        __int64 a1,
        __int64 a2)
{
  LOBYTE(a2) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_BannersCanTargetKnownFolders>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_BannersCanTargetKnownFolders>::GetImpl'::`2'::impl,
    a2);
  return 1;
}
