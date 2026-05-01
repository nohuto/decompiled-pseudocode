/*
 * XREFs of ?IsMobilityCenterEnabledWithOverride@@YAHH@Z @ 0x1806CDBFC
 * Callers:
 *     ?_AddLinkToCommands@CLauncherTipContextMenu@@AEAAXPEAUIShellItem2@@_NI@Z @ 0x1806CF52C (-_AddLinkToCommands@CLauncherTipContextMenu@@AEAAXPEAUIShellItem2@@_NI@Z.c)
 * Callees:
 *     ?IsLaptop@@YAHXZ @ 0x1806CDB84 (-IsLaptop@@YAHXZ.c)
 */

__int64 __fastcall IsMobilityCenterEnabledWithOverride()
{
  HKEY hKey; // [rsp+48h] [rbp+10h] BYREF

  if ( !`IsMobilityCenterEnabledWithOverride'::`2'::bChecked )
  {
    `IsMobilityCenterEnabledWithOverride'::`2'::bChecked = 1;
    if ( GetSystemMetrics(67)
      || (`IsMobilityCenterEnabledWithOverride'::`2'::bEnabled = 1, !(unsigned int)IsLaptop())
      || (`IsMobilityCenterEnabledWithOverride'::`2'::bEnabled = 1,
          (unsigned int)SHWindowsPolicy(&POLID_NoMobilityCenter))
      || (`IsMobilityCenterEnabledWithOverride'::`2'::bEnabled = 1,
          RegOpenKeyExW(
            HKEY_LOCAL_MACHINE,
            L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\explorer\\ControlPanel\\NameSpace\\{5ea4f148-308c-46d7-98a9-49041b1dd468}",
            0,
            1u,
            &hKey)) )
    {
      `IsMobilityCenterEnabledWithOverride'::`2'::bEnabled = 0;
    }
    else
    {
      RegCloseKey(hKey);
    }
  }
  return (unsigned int)`IsMobilityCenterEnabledWithOverride'::`2'::bEnabled;
}
