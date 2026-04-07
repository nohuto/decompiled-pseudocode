/*
 * XREFs of ?InitializeHighContrast@CDesktopManager@@AEAAXXZ @ 0x180055858
 * Callers:
 *     ?UpdateSettings@CDesktopManager@@QEAAJPEAK@Z @ 0x18003A654 (-UpdateSettings@CDesktopManager@@QEAAJPEAK@Z.c)
 *     ?LoadTheme@CDesktopManager@@AEAAJXZ @ 0x180055510 (-LoadTheme@CDesktopManager@@AEAAJXZ.c)
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_CacheHighContrastStateInDwm@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18003A9F4 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_CacheHighContrastStateInDwm@@@details@wil.c)
 */

void __fastcall CDesktopManager::InitializeHighContrast(CDesktopManager *this, __int64 a2, __int64 a3, __int64 a4)
{
  char IsImmersiveColorUsingHighContrast; // al
  DWORD SysColor; // ecx

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_CacheHighContrastStateInDwm>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_CacheHighContrastStateInDwm>::GetImpl'::`2'::impl,
    1u,
    a3,
    a4);
  IsImmersiveColorUsingHighContrast = GetIsImmersiveColorUsingHighContrast(1LL);
  SysColor = 0;
  *((_BYTE *)this + 26) = IsImmersiveColorUsingHighContrast;
  if ( IsImmersiveColorUsingHighContrast )
  {
    *((_DWORD *)this + 128) = GetSysColor(2);
    SysColor = GetSysColor(3);
  }
  else
  {
    *((_DWORD *)this + 128) = 0;
  }
  *((_DWORD *)this + 129) = SysColor;
}
