/*
 * XREFs of ?GetRadiusFromCornerStyle@CTopLevelWindow@@AEAAMXZ @ 0x1800067AC
 * Callers:
 *     ?GetDpiAdjustedFloatCornerRadius@CTopLevelWindow@@QEAAMXZ @ 0x180006770 (-GetDpiAdjustedFloatCornerRadius@CTopLevelWindow@@QEAAMXZ.c)
 * Callees:
 *     ?GetCachedVariantState@?$FeatureImpl@U__WilFeatureTraits_Feature_VTFrame@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18000E838 (-GetCachedVariantState@-$FeatureImpl@U__WilFeatureTraits_Feature_VTFrame@@@details@wil@@AEAA-ATw.c)
 *     ?GetEffectiveCornerStyle@CTopLevelWindow@@AEAA?AW4CORNER_STYLE@@XZ @ 0x180034A88 (-GetEffectiveCornerStyle@CTopLevelWindow@@AEAA-AW4CORNER_STYLE@@XZ.c)
 */

float __fastcall CTopLevelWindow::GetRadiusFromCornerStyle(CTopLevelWindow *this)
{
  float v1; // xmm6_4
  int v2; // eax
  int v4; // eax
  char v5; // [rsp+48h] [rbp+10h] BYREF
  int v6; // [rsp+4Ch] [rbp+14h]

  v1 = 0.0;
  v2 = CTopLevelWindow::GetEffectiveCornerStyle(this) - 2;
  if ( v2 )
  {
    v4 = v2 - 1;
    if ( !v4 )
    {
      wil::details::FeatureImpl<__WilFeatureTraits_Feature_VTFrame>::GetCachedVariantState(
        &`wil::Feature<__WilFeatureTraits_Feature_VTFrame>::GetImpl'::`2'::impl,
        &v5);
      return (float)v6 * 0.5;
    }
    if ( v4 != 1 )
      return v1;
  }
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_VTFrame>::GetCachedVariantState(
    &`wil::Feature<__WilFeatureTraits_Feature_VTFrame>::GetImpl'::`2'::impl,
    &v5);
  return (float)v6;
}
