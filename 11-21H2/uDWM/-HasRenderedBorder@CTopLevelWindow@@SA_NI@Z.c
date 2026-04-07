/*
 * XREFs of ?HasRenderedBorder@CTopLevelWindow@@SA_NI@Z @ 0x180003768
 * Callers:
 *     ?GetCaptionButtonBounds@CWindowList@@AEAAJPEAUHWND__@@_NPEAUtagRECT@@@Z @ 0x180002EF8 (-GetCaptionButtonBounds@CWindowList@@AEAAJPEAUHWND__@@_NPEAUtagRECT@@@Z.c)
 *     ?GetTitleBarInfo@CTopLevelWindow@@QEAAXPEAUtagTITLEBARINFOEX@@PEA_N@Z @ 0x18000315C (-GetTitleBarInfo@CTopLevelWindow@@QEAAXPEAUtagTITLEBARINFOEX@@PEA_N@Z.c)
 *     ?ComputeWindowFrameMargins@CTopLevelWindow@@AEBAXPEAU_MARGINS@@@Z @ 0x1800E4638 (-ComputeWindowFrameMargins@CTopLevelWindow@@AEBAXPEAU_MARGINS@@@Z.c)
 *     ?s_ChooseWindowFrameFromStyle@CTopLevelWindow@@CAPEAUWindowFrame@1@I_N0@Z @ 0x1800E6948 (-s_ChooseWindowFrameFromStyle@CTopLevelWindow@@CAPEAUWindowFrame@1@I_N0@Z.c)
 * Callees:
 *     IsOpenThemeDataPresent @ 0x180061548 (IsOpenThemeDataPresent.c)
 */

bool __fastcall CTopLevelWindow::HasRenderedBorder(char a1)
{
  char v2; // al
  char v3; // dl

  v2 = IsOpenThemeDataPresent();
  v3 = 0;
  if ( v2 )
    return (a1 & 6) != 0;
  return v3;
}
