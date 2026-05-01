/*
 * XREFs of ?get_IsMultiWindowSupported@GamingOverlayExperienceManager@@UEAAJPEAE@Z @ 0x18033D370
 * Callers:
 *     <none>
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_GamingOverlayMultiWindowSupport@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18013DB40 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_GamingOverlayMultiWindowSupport@@@details.c)
 */

__int64 __fastcall GamingOverlayExperienceManager::get_IsMultiWindowSupported(
        GamingOverlayExperienceManager *this,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 result; // rax

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_GamingOverlayMultiWindowSupport>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_GamingOverlayMultiWindowSupport>::GetImpl'::`2'::impl,
    1u,
    a3,
    a4);
  result = 0LL;
  *a2 = 1;
  return result;
}
