/*
 * XREFs of ?GetEffectiveCornerStyle@CTopLevelWindow@@AEAA?AW4CORNER_STYLE@@XZ @ 0x180023214
 * Callers:
 *     ?UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ @ 0x180026220 (-UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ.c)
 *     ?GetShadowStyle@CTopLevelWindow@@AEAA?AW4ShadowStyle@CWindowBorder@@XZ @ 0x180051B54 (-GetShadowStyle@CTopLevelWindow@@AEAA-AW4ShadowStyle@CWindowBorder@@XZ.c)
 *     ?GetRadiusFromCornerStyle@CTopLevelWindow@@AEAAMXZ @ 0x1800E6008 (-GetRadiusFromCornerStyle@CTopLevelWindow@@AEAAMXZ.c)
 * Callees:
 *     IsOpenThemeDataPresent @ 0x18005D948 (IsOpenThemeDataPresent.c)
 */

__int64 __fastcall CTopLevelWindow::GetEffectiveCornerStyle(__int64 a1)
{
  __int64 result; // rax
  int v2; // ebx

  if ( *((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 27)
    && !*((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 29)
    || *((int *)CDesktopManager::s_pDesktopManagerInstance + 8) >= 2 )
  {
    return 1LL;
  }
  result = *(unsigned int *)(*(_QWORD *)(a1 + 752) + 184LL);
  if ( !(_DWORD)result )
  {
    v2 = *(_DWORD *)(a1 + 624);
    if ( (v2 & 2) != 0 )
      return 3LL;
    if ( !(unsigned __int8)IsOpenThemeDataPresent() )
      return 1LL;
    result = 2LL;
    if ( (v2 & 6) == 0 )
      return 1LL;
  }
  return result;
}
