/*
 * XREFs of ?get_ShouldPostSearchVisibility@CCortanaShownEventArgs@@UEAAJPEAE@Z @ 0x1801A2D90
 * Callers:
 *     <none>
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_FindInStart@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18019759C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_FindInStart@@@details@wil@@QEAAX_NW4Repor.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_SearchBoxOnTaskbar@@@details@wil@@QEAA_NXZ @ 0x1801A2354 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_SearchBoxOnTaskbar@@_ea_1801A2354.c)
 */

__int64 __fastcall CCortanaShownEventArgs::get_ShouldPostSearchVisibility(
        CCortanaShownEventArgs *this,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4)
{
  unsigned __int8 IsEnabled; // al
  unsigned __int8 v7; // r8

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_FindInStart>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_FindInStart>::GetImpl'::`2'::impl,
    0,
    a3,
    a4);
  IsEnabled = wil::details::FeatureImpl<__WilFeatureTraits_Feature_SearchBoxOnTaskbar>::__private_IsEnabled(`wil::Feature<__WilFeatureTraits_Feature_SearchBoxOnTaskbar>::GetImpl'::`2'::impl);
  v7 = 0;
  if ( IsEnabled )
    v7 = *((_BYTE *)this + 48);
  *a2 = v7;
  return 0LL;
}
