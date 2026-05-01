/*
 * XREFs of ?get_ShouldPostSearchVisibility@CCortanaShownEventArgs@@UEAAJPEAE@Z @ 0x18046CB90
 * Callers:
 *     <none>
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_SearchBoxOnTaskbar@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1801AB2A8 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_SearchBoxOnTaskbar@@@details@wil@@QEAAX_N.c)
 */

__int64 __fastcall CCortanaShownEventArgs::get_ShouldPostSearchVisibility(
        CCortanaShownEventArgs *this,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4)
{
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_SearchBoxOnTaskbar>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_SearchBoxOnTaskbar>::GetImpl'::`2'::impl,
    1u,
    a3,
    a4);
  *a2 = *((_BYTE *)this + 48);
  return 0LL;
}
