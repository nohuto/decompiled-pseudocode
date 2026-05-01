/*
 * XREFs of ?get_IsFindInStartView@UndockedSearchAppExperienceManager@@UEAAJPEAE@Z @ 0x180054BA0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_SearchBoxOnTaskbar@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1801AB2A8 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_SearchBoxOnTaskbar@@@details@wil@@QEAAX_N.c)
 */

__int64 __fastcall UndockedSearchAppExperienceManager::get_IsFindInStartView(
        UndockedSearchAppExperienceManager *this,
        unsigned __int8 *a2)
{
  unsigned __int8 *v2; // rdi

  v2 = a2;
  LOBYTE(a2) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_SearchBoxOnTaskbar>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_SearchBoxOnTaskbar>::GetImpl'::`2'::impl,
    a2);
  *v2 = *((_BYTE *)this + 872);
  return 0LL;
}
