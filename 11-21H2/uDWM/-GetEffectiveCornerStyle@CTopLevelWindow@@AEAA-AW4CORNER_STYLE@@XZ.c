/*
 * XREFs of ?GetEffectiveCornerStyle@CTopLevelWindow@@AEAA?AW4CORNER_STYLE@@XZ @ 0x180034A88
 * Callers:
 *     ?GetRadiusFromCornerStyle@CTopLevelWindow@@AEAAMXZ @ 0x1800067AC (-GetRadiusFromCornerStyle@CTopLevelWindow@@AEAAMXZ.c)
 *     ?UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ @ 0x180033080 (-UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ.c)
 *     ?GetShadowStyle@CTopLevelWindow@@AEAA?AW4ShadowStyle@CWindowBorder@@XZ @ 0x1800356C8 (-GetShadowStyle@CTopLevelWindow@@AEAA-AW4ShadowStyle@CWindowBorder@@XZ.c)
 * Callees:
 *     ?__private_GetVariant@?$FeatureImpl@U__WilFeatureTraits_Feature_VTFrame@@@details@wil@@QEAA?AW4Variant_VTFrame@@W4VariantReportingKind@3@_N@Z @ 0x18000E7FC (-__private_GetVariant@-$FeatureImpl@U__WilFeatureTraits_Feature_VTFrame@@@details@wil@@QEAA-AW4V.c)
 *     IsOpenThemeDataPresent @ 0x180061548 (IsOpenThemeDataPresent.c)
 */

__int64 __fastcall CTopLevelWindow::GetEffectiveCornerStyle(__int64 a1)
{
  unsigned int v2; // ecx
  int v3; // ebx
  char Variant; // al

  if ( *((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 27)
    && !*((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 28)
    || *((int *)CDesktopManager::s_pDesktopManagerInstance + 8) >= 2 )
  {
    return 1;
  }
  else
  {
    v2 = *(_DWORD *)(*(_QWORD *)(a1 + 752) + 184LL);
    if ( !v2 )
    {
      v3 = *(_DWORD *)(a1 + 608);
      if ( (v3 & 2) != 0 )
      {
        return 3;
      }
      else
      {
        if ( (unsigned __int8)IsOpenThemeDataPresent() && (v3 & 6) != 0 )
          return 2;
        Variant = wil::details::FeatureImpl<__WilFeatureTraits_Feature_VTFrame>::__private_GetVariant((__int64)&`wil::Feature<__WilFeatureTraits_Feature_VTFrame>::GetImpl'::`2'::impl);
        v2 = 1;
        if ( Variant == 1 )
          return 2;
      }
    }
  }
  return v2;
}
