/*
 * XREFs of ?CanTransitionFromStart@UndockedSearchAppExperienceManager@@UEAAJPEAE@Z @ 0x18038E940
 * Callers:
 *     <none>
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_FindInStart@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18019759C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_FindInStart@@@details@wil@@QEAAX_NW4Repor.c)
 */

__int64 __fastcall UndockedSearchAppExperienceManager::CanTransitionFromStart(
        UndockedSearchAppExperienceManager *this,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4)
{
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_FindInStart>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_FindInStart>::GetImpl'::`2'::impl,
    0,
    a3,
    a4);
  *a2 = 0;
  return 0LL;
}
