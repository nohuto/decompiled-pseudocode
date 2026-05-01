/*
 * XREFs of ?HampUtilQueryDesktopWindowCloseTimeout@@YAXPEAK@Z @ 0x180073248
 * Callers:
 *     ?RmpEnforcementOptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z @ 0x18000D214 (-RmpEnforcementOptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z.c)
 * Callees:
 *     ?HampSystemQueryValue@@YAJPEAUHKEY__@@PEBGPEAXPEAK@Z @ 0x18004A698 (-HampSystemQueryValue@@YAJPEAUHKEY__@@PEBGPEAXPEAK@Z.c)
 */

void __fastcall HampUtilQueryDesktopWindowCloseTimeout(unsigned int *a1)
{
  LSTATUS v2; // eax
  bool v3; // sf
  unsigned int v4; // eax
  HKEY v5; // rcx
  int v6; // [rsp+40h] [rbp+8h] BYREF
  unsigned int v7; // [rsp+48h] [rbp+10h] BYREF
  HKEY hKey; // [rsp+50h] [rbp+18h] BYREF

  hKey = 0LL;
  v6 = 30000;
  v2 = RegOpenKeyExW(
         HKEY_LOCAL_MACHINE,
         L"Software\\Microsoft\\Windows NT\\CurrentVersion\\HostActivityManager",
         0,
         1u,
         &hKey);
  v3 = v2 < 0;
  if ( v2 > 0 )
    v3 = 1;
  if ( v3 || (v7 = 4, HampSystemQueryValue(hKey, L"WmDurationMs", (BYTE *)&v6, &v7) < 0) || v7 != 4 || (v4 = v6) == 0 )
  {
    v4 = 30000;
    v6 = 30000;
  }
  v5 = hKey;
  *a1 = v4;
  if ( v5 )
    RegCloseKey(v5);
}
