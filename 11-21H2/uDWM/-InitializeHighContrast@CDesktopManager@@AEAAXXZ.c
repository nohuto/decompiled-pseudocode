/*
 * XREFs of ?InitializeHighContrast@CDesktopManager@@AEAAXXZ @ 0x180050F60
 * Callers:
 *     ?UpdateSettings@CDesktopManager@@QEAAJK@Z @ 0x180016690 (-UpdateSettings@CDesktopManager@@QEAAJK@Z.c)
 *     ?LoadTheme@CDesktopManager@@AEAAJXZ @ 0x18004F63C (-LoadTheme@CDesktopManager@@AEAAJXZ.c)
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_CacheHighContrastStateInDwm@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800169E8 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_CacheHighContrastStateInDwm@@@details@wil.c)
 */

void __fastcall CDesktopManager::InitializeHighContrast(CDesktopManager *this, __int64 a2, __int64 a3, __int64 a4)
{
  char IsImmersiveColorUsingHighContrast; // al
  DWORD SysColor; // ecx

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_CacheHighContrastStateInDwm>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_CacheHighContrastStateInDwm>::GetImpl'::`2'::impl,
    1u,
    a3,
    a4);
  IsImmersiveColorUsingHighContrast = GetIsImmersiveColorUsingHighContrast(1LL);
  SysColor = 0;
  *((_BYTE *)this + 26) = IsImmersiveColorUsingHighContrast;
  if ( IsImmersiveColorUsingHighContrast )
  {
    *((_DWORD *)this + 124) = GetSysColor(2);
    SysColor = GetSysColor(3);
  }
  else
  {
    *((_DWORD *)this + 124) = 0;
  }
  *((_DWORD *)this + 125) = SysColor;
}
