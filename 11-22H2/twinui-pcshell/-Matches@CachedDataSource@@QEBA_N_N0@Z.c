/*
 * XREFs of ?Matches@CachedDataSource@@QEBA_N_N0@Z @ 0x180763F98
 * Callers:
 *     ?RuntimeClassInitialize@XamlAltTabViewHost@@QEAAJAEBUXamlViewHostInitializeArgs@@@Z @ 0x18076488C (-RuntimeClassInitialize@XamlAltTabViewHost@@QEAAJAEBUXamlViewHostInitializeArgs@@@Z.c)
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_SnapGroupsInSwitchers@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180117E20 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_SnapGroupsInSwitchers@@@details@wil@@QEAA.c)
 */

char __fastcall CachedDataSource::Matches(CachedDataSource *this, char a2, char a3, __int64 a4)
{
  char v7; // di

  v7 = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_SnapGroupsInSwitchers>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_SnapGroupsInSwitchers>::GetImpl'::`2'::impl,
    1u,
    3u,
    a4);
  if ( a2 != *((_BYTE *)this + 8) || a3 != *((_BYTE *)this + 9) )
    return 0;
  return v7;
}
