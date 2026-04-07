/*
 * XREFs of ?OnSettingsUpdated@CTopLevelWindow@@QEAAXK@Z @ 0x18001DAC4
 * Callers:
 *     ?SettingsChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYSETTINGSCHANGE@@@Z @ 0x18001D898 (-SettingsChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYSETTINGSCHANGE@@@Z.c)
 *     ?DPIChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180031990 (-DPIChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x18001DB80 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     IsOpenThemeDataPresent @ 0x180061548 (IsOpenThemeDataPresent.c)
 */

void __fastcall CTopLevelWindow::OnSettingsUpdated(CTopLevelWindow *this, char a2)
{
  int v2; // ebx
  bool v4; // bp
  int v5; // edi
  unsigned int v6; // edx
  unsigned int v7; // r14d

  v2 = a2 & 9;
  v4 = (a2 & 4) != 0 || (a2 & 9) != 0;
  v5 = a2 & 0x40;
  if ( (unsigned __int8)IsOpenThemeDataPresent() )
  {
    v6 = 2101248;
    v7 = 16781312;
  }
  else
  {
    v6 = 0x200000;
    v7 = 0x1000000;
  }
  if ( v4 )
    CVisual::SetDirtyFlags(this, v6);
  if ( v2 )
  {
    CVisual::SetDirtyFlags(this, 0x40000u);
    CVisual::SetDirtyFlags(this, 0x4000000u);
  }
  if ( v5 )
    CVisual::SetDirtyFlags(this, v7);
}
