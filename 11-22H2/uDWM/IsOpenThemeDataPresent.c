/*
 * XREFs of IsOpenThemeDataPresent @ 0x18005D948
 * Callers:
 *     ?HasRenderedBorder@CTopLevelWindow@@SA_NI@Z @ 0x18001C860 (-HasRenderedBorder@CTopLevelWindow@@SA_NI@Z.c)
 *     ?GetEffectiveCornerStyle@CTopLevelWindow@@AEAA?AW4CORNER_STYLE@@XZ @ 0x180023214 (-GetEffectiveCornerStyle@CTopLevelWindow@@AEAA-AW4CORNER_STYLE@@XZ.c)
 *     ?CalculateBackgroundType@CTopLevelWindow@@AEBA?AW4BackgroundType@1@XZ @ 0x180023CC0 (-CalculateBackgroundType@CTopLevelWindow@@AEBA-AW4BackgroundType@1@XZ.c)
 *     ?UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ @ 0x180026220 (-UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ.c)
 *     ?ValidateVisual@CTopLevelWindow@@UEAAJXZ @ 0x180026780 (-ValidateVisual@CTopLevelWindow@@UEAAJXZ.c)
 *     ?UpdateColorizationColor@CTopLevelWindow@@AEAAJXZ @ 0x1800284A0 (-UpdateColorizationColor@CTopLevelWindow@@AEAAJXZ.c)
 *     ?UpdateMarginsDependentOnStyle@CTopLevelWindow@@AEAA_NXZ @ 0x180029B70 (-UpdateMarginsDependentOnStyle@CTopLevelWindow@@AEAA_NXZ.c)
 *     ?UpdatePinnedParts@CTopLevelWindow@@AEAAJXZ @ 0x18002DD30 (-UpdatePinnedParts@CTopLevelWindow@@AEAAJXZ.c)
 *     ??0CWindowData@@QEAA@XZ @ 0x1800308C8 (--0CWindowData@@QEAA@XZ.c)
 *     ?ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z @ 0x1800321C0 (-ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z.c)
 *     ?UpdateIcon@CTopLevelWindow@@AEAAJXZ @ 0x180039630 (-UpdateIcon@CTopLevelWindow@@AEAAJXZ.c)
 *     ?OnSettingsUpdated@CTopLevelWindow@@QEAAXK@Z @ 0x180039B9C (-OnSettingsUpdated@CTopLevelWindow@@QEAAXK@Z.c)
 *     ?CreateMonitorRenderTargets@CDesktopManager@@AEAAJXZ @ 0x18003BBE8 (-CreateMonitorRenderTargets@CDesktopManager@@AEAAJXZ.c)
 *     ?s_ChooseWindowFrameFromStyle@CTopLevelWindow@@CAPEAUWindowFrame@1@I_N0@Z @ 0x180051944 (-s_ChooseWindowFrameFromStyle@CTopLevelWindow@@CAPEAUWindowFrame@1@I_N0@Z.c)
 *     ?UnloadTheme@CDesktopManager@@AEAAXXZ @ 0x180054DE8 (-UnloadTheme@CDesktopManager@@AEAAXXZ.c)
 *     ?LoadTheme@CDesktopManager@@AEAAJXZ @ 0x180055510 (-LoadTheme@CDesktopManager@@AEAAJXZ.c)
 *     ?OnWindowStyleUpdated@CWindowIconic@@QEAAJ_N@Z @ 0x1801073E8 (-OnWindowStyleUpdated@CWindowIconic@@QEAAJ_N@Z.c)
 * Callees:
 *     ApiSetQueryApiSetPresence_0 @ 0x18005DEB0 (ApiSetQueryApiSetPresence_0.c)
 */

char IsOpenThemeDataPresent()
{
  char result; // al
  char v1; // [rsp+30h] [rbp+8h] BYREF

  if ( dword_180148230 == 1 )
    return 1;
  if ( dword_180148230 == 2 )
    return 0;
  v1 = 0;
  if ( (int)ApiSetQueryApiSetPresence_0(L"@B", &v1) < 0 )
    return 0;
  result = v1;
  dword_180148230 = 2 - (v1 != 0);
  return result;
}
