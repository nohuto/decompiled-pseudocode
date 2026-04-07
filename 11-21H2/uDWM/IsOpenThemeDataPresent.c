/*
 * XREFs of IsOpenThemeDataPresent @ 0x180061548
 * Callers:
 *     ?HasRenderedBorder@CTopLevelWindow@@SA_NI@Z @ 0x180003768 (-HasRenderedBorder@CTopLevelWindow@@SA_NI@Z.c)
 *     ?UpdateIcon@CTopLevelWindow@@AEAAJXZ @ 0x18001B3F8 (-UpdateIcon@CTopLevelWindow@@AEAAJXZ.c)
 *     ?OnSettingsUpdated@CTopLevelWindow@@QEAAXK@Z @ 0x18001DAC4 (-OnSettingsUpdated@CTopLevelWindow@@QEAAXK@Z.c)
 *     ??0CWindowData@@QEAA@XZ @ 0x180023D44 (--0CWindowData@@QEAA@XZ.c)
 *     ?UpdateNCAreaGeometry@CTopLevelWindow@@AEAAJXZ @ 0x180028C20 (-UpdateNCAreaGeometry@CTopLevelWindow@@AEAAJXZ.c)
 *     ?ValidateVisual@CTopLevelWindow@@UEAAJXZ @ 0x18002B020 (-ValidateVisual@CTopLevelWindow@@UEAAJXZ.c)
 *     ?UpdateColorizationColor@CTopLevelWindow@@AEAAJXZ @ 0x18002CD50 (-UpdateColorizationColor@CTopLevelWindow@@AEAAJXZ.c)
 *     ?UpdateMarginsDependentOnStyle@CTopLevelWindow@@AEAA_NXZ @ 0x18002DB10 (-UpdateMarginsDependentOnStyle@CTopLevelWindow@@AEAA_NXZ.c)
 *     ?UpdatePinnedParts@CTopLevelWindow@@AEAAJXZ @ 0x180032960 (-UpdatePinnedParts@CTopLevelWindow@@AEAAJXZ.c)
 *     ?UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ @ 0x180033080 (-UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ.c)
 *     ?GetEffectiveCornerStyle@CTopLevelWindow@@AEAA?AW4CORNER_STYLE@@XZ @ 0x180034A88 (-GetEffectiveCornerStyle@CTopLevelWindow@@AEAA-AW4CORNER_STYLE@@XZ.c)
 *     ?GetWindowColorizationColor@CTopLevelWindow@@AEBAKU?$TMILFlagsEnum@W4FlagsEnum@ColorizationFlags@@@@@Z @ 0x1800353A4 (-GetWindowColorizationColor@CTopLevelWindow@@AEBAKU-$TMILFlagsEnum@W4FlagsEnum@ColorizationFlags.c)
 *     ?OnWindowStyleUpdated@CWindowIconic@@QEAAJ_N@Z @ 0x18004B2A0 (-OnWindowStyleUpdated@CWindowIconic@@QEAAJ_N@Z.c)
 *     ?LoadTheme@CDesktopManager@@AEAAJXZ @ 0x18004F63C (-LoadTheme@CDesktopManager@@AEAAJXZ.c)
 *     ?UnloadTheme@CDesktopManager@@AEAAXXZ @ 0x18005B7E0 (-UnloadTheme@CDesktopManager@@AEAAXXZ.c)
 * Callees:
 *     ApiSetQueryApiSetPresence_0 @ 0x180061D90 (ApiSetQueryApiSetPresence_0.c)
 */

char IsOpenThemeDataPresent()
{
  char result; // al
  char v1; // [rsp+30h] [rbp+8h] BYREF

  if ( dword_180142AB8 == 1 )
    return 1;
  if ( dword_180142AB8 == 2 )
    return 0;
  v1 = 0;
  if ( (int)ApiSetQueryApiSetPresence_0(L"@B", &v1) < 0 )
    return 0;
  result = v1;
  dword_180142AB8 = 2 - (v1 != 0);
  return result;
}
