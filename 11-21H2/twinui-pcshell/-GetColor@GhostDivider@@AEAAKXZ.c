/*
 * XREFs of ?GetColor@GhostDivider@@AEAAKXZ @ 0x18052BE1C
 * Callers:
 *     ?RuntimeClassInitialize@GhostDivider@@QEAAJPEAUIPriviledgedPositioner@@PEAUIApplicationView@@W4GhostDividerPlacement@@W4GhostDividerSize@@@Z @ 0x18052C2A8 (-RuntimeClassInitialize@GhostDivider@@QEAAJPEAUIPriviledgedPositioner@@PEAUIApplicationView@@W4G.c)
 * Callees:
 *     ?GetColor@CImmersiveColor@@SAKW4IMMERSIVE_COLOR_TYPE@@@Z @ 0x1804B84AC (-GetColor@CImmersiveColor@@SAKW4IMMERSIVE_COLOR_TYPE@@@Z.c)
 *     ?IsColorizationEnabled@GhostDivider@@AEAA_NXZ @ 0x18052C0C8 (-IsColorizationEnabled@GhostDivider@@AEAA_NXZ.c)
 *     ?IsLightTheme@CImmersiveColor@@SA_NXZ @ 0x18052C114 (-IsLightTheme@CImmersiveColor@@SA_NXZ.c)
 *     ?IsTransparencyEnabled@GhostDivider@@AEAA_NXZ @ 0x18052C14C (-IsTransparencyEnabled@GhostDivider@@AEAA_NXZ.c)
 */

DWORD __fastcall GhostDivider::GetColor(GhostDivider *this)
{
  GhostDivider *v1; // rcx
  DWORD result; // eax
  bool IsTransparencyEnabled; // bl
  GhostDivider *v4; // rcx
  unsigned int v5; // ecx

  if ( (unsigned __int8)GetIsImmersiveColorUsingHighContrast(0LL) )
    return GetSysColor(5);
  IsTransparencyEnabled = GhostDivider::IsTransparencyEnabled(v1);
  if ( GhostDivider::IsColorizationEnabled(v4) )
  {
    if ( CImmersiveColor::IsLightTheme() )
      v5 = 2;
    else
      v5 = 6;
    result = CImmersiveColor::GetColor(v5);
    if ( IsTransparencyEnabled )
      return result & 0xFFFFFF | 0xCC000000;
  }
  else if ( CImmersiveColor::IsLightTheme() )
  {
    return IsTransparencyEnabled ? 15987699 : -789517;
  }
  else
  {
    return IsTransparencyEnabled ? 2105376 : -14671840;
  }
  return result;
}
