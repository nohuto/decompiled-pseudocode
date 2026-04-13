/*
 * XREFs of TelpReadOfflineOsPolicySetting @ 0x18000318C
 * Callers:
 *     TelIsTelemetryTypeAllowedWinRE @ 0x180003090 (TelIsTelemetryTypeAllowedWinRE.c)
 *     TelGetWerTelemetryModeWinRE @ 0x180003110 (TelGetWerTelemetryModeWinRE.c)
 * Callees:
 *     TelpReadOfflineSoftwareRegistryDword @ 0x180003328 (TelpReadOfflineSoftwareRegistryDword.c)
 *     TelpReadOfflineSoftwareRegistryString @ 0x1800034E4 (TelpReadOfflineSoftwareRegistryString.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004A4C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180004F10 (__security_check_cookie.c)
 */

__int64 __fastcall TelpReadOfflineOsPolicySetting(int *a1, __int64 a2, unsigned int a3)
{
  int v3; // edi
  signed int v5; // ebx
  __int64 v6; // rdx
  int v7; // esi
  LSTATUS v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  int v11; // eax
  int v12; // ecx
  int phkResult; // [rsp+20h] [rbp-40h]
  int pvData; // [rsp+30h] [rbp-30h] BYREF
  HKEY hKey; // [rsp+38h] [rbp-28h] BYREF
  __int128 v17; // [rsp+40h] [rbp-20h] BYREF
  int v18; // [rsp+50h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]

  v3 = 0;
  if ( !a1 )
  {
    v5 = -2147024809;
    v6 = 1901LL;
LABEL_28:
    wil::details::in1diag3::Return_Hr(retaddr, (void *)v6, a3, (const char *)(unsigned int)v5, phkResult);
    return (unsigned int)v5;
  }
  pvData = 0;
  hKey = 0LL;
  v7 = 0;
  v8 = RegOpenKeyExW(HKEY_LOCAL_MACHINE, L"Software\\Microsoft\\RecoveryEnvironment", 0, 0x20019u, &hKey);
  v5 = (unsigned __int16)v8 | 0x80070000;
  if ( v8 <= 0 )
    v5 = v8;
  if ( v5 < 0 )
  {
    if ( (unsigned int)(v5 + 2147024894) <= 1 )
      v5 = -2147024809;
    *a1 = 0;
    goto LABEL_27;
  }
  RegCloseKey(hKey);
  v5 = TelpReadOfflineSoftwareRegistryDword(
         L"OFFLINE_AUTH\\Microsoft\\Windows\\CurrentVersion\\Diagnostics\\DiagTrack",
         L"DiagTrackAuthorization",
         &pvData);
  if ( v5 >= 0 )
  {
    if ( (pvData & 8) != 0 )
    {
      v7 = 3;
    }
    else if ( (pvData & 4) != 0 )
    {
      v7 = 1;
    }
    if ( (pvData & 0x1000) == 0 )
      goto LABEL_19;
  }
  if ( !v7 )
  {
LABEL_22:
    *a1 = v7;
    if ( v5 >= 0 )
      return (unsigned int)v5;
LABEL_27:
    v6 = 1984LL;
    goto LABEL_28;
  }
  LODWORD(hKey) = 10;
  v18 = 0;
  v17 = 0LL;
  v11 = TelpReadOfflineSoftwareRegistryString(v10, v9, &v17, &hKey);
  v5 = v11;
  if ( v11 < 0 )
  {
    if ( (unsigned int)(v11 + 2147024894) <= 1 )
      v5 = 0;
    goto LABEL_22;
  }
  v12 = (unsigned __int16)v17 - 122;
  if ( (unsigned __int16)v17 == 122 )
  {
    v12 = WORD1(v17) - 104;
    if ( WORD1(v17) == 104 )
      v12 = WORD2(v17);
  }
  if ( v12 )
    v3 = v7;
LABEL_19:
  *a1 = v3;
  return (unsigned int)v5;
}
