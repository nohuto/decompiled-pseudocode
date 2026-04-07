/*
 * XREFs of ?GetAccentColor@CDesktopManager@@QEAA_N_NPEAK@Z @ 0x1800B087C
 * Callers:
 *     ?AdjustWindowColorization@CGlassColorizationParameters@@QEAAXPEBTGpCC@@MU?$TMILFlagsEnum@W4FlagsEnum@ColorizationFlags@@@@@Z @ 0x18002D380 (-AdjustWindowColorization@CGlassColorizationParameters@@QEAAXPEBTGpCC@@MU-$TMILFlagsEnum@W4Flags.c)
 * Callees:
 *     ?EnsureAccentColorSettingsLoaded@CDesktopManager@@QEAAXXZ @ 0x180035610 (-EnsureAccentColorSettingsLoaded@CDesktopManager@@QEAAXXZ.c)
 */

bool __fastcall CDesktopManager::GetAccentColor(CDesktopManager *this, char a2, unsigned int *a3)
{
  bool result; // al
  unsigned int v7; // ecx

  CDesktopManager::EnsureAccentColorSettingsLoaded(this);
  if ( a2 )
  {
    result = *((_BYTE *)this + 617);
    v7 = *((_DWORD *)this + 156);
  }
  else
  {
    result = *((_BYTE *)this + 618);
    v7 = *((_DWORD *)this + 157);
  }
  if ( result )
    *a3 = v7;
  return result;
}
