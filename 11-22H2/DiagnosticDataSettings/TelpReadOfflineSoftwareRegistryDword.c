/*
 * XREFs of TelpReadOfflineSoftwareRegistryDword @ 0x180003328
 * Callers:
 *     TelGetWerTelemetryModeWinRE @ 0x180003110 (TelGetWerTelemetryModeWinRE.c)
 *     TelpReadOfflineOsPolicySetting @ 0x18000318C (TelpReadOfflineOsPolicySetting.c)
 * Callees:
 *     TelpReadRegistryString @ 0x18000152C (TelpReadRegistryString.c)
 *     ?StringCchCatW@@YAJPEAG_KPEBG@Z @ 0x1800036A0 (-StringCchCatW@@YAJPEAG_KPEBG@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004A4C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180004F10 (__security_check_cookie.c)
 *     memset_0 @ 0x1800059BA (memset_0.c)
 */

__int64 __fastcall TelpReadOfflineSoftwareRegistryDword(LPCWSTR lpSubKey, LPCWSTR lpValue, _DWORD *pvData)
{
  signed int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // rcx
  int v9; // eax
  unsigned __int64 v10; // rdx
  unsigned int v11; // r8d
  LSTATUS KeyW; // eax
  LSTATUS ValueW; // eax
  int pdwType; // [rsp+20h] [rbp-278h]
  DWORD v16; // [rsp+40h] [rbp-258h] BYREF
  DWORD pcbData[3]; // [rsp+44h] [rbp-254h] BYREF
  WCHAR File[264]; // [rsp+50h] [rbp-248h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+298h] [rbp+0h]

  if ( !lpSubKey )
  {
    v6 = -2147024809;
    v7 = 2075LL;
LABEL_18:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (unsigned int)pvData,
      (const char *)(unsigned int)v6,
      pdwType);
    return (unsigned int)v6;
  }
  if ( !lpValue )
  {
    v6 = -2147024809;
    v7 = 2076LL;
    goto LABEL_18;
  }
  if ( !pvData )
  {
    v6 = -2147024809;
    v7 = 2077LL;
    goto LABEL_18;
  }
  memset_0(File, 0, 0x208uLL);
  *pvData = 0;
  v16 = 260;
  pcbData[0] = 4;
  v9 = TelpReadRegistryString(v8, L"Software\\Microsoft\\RecoveryEnvironment", L"TargetOS", File, &v16);
  v6 = v9;
  if ( v9 < 0 )
  {
    wil::details::in1diag3::Return_Hr(retaddr, (void *)0x807, v11, (const char *)(unsigned int)v9, pdwType);
    v7 = 2087LL;
    goto LABEL_18;
  }
  v6 = StringCchCatW(File, v10, L"\\System32\\config\\SOFTWARE");
  if ( v6 < 0 )
  {
    v7 = 2090LL;
    goto LABEL_18;
  }
  KeyW = RegLoadKeyW(HKEY_LOCAL_MACHINE, L"OFFLINE_AUTH", File);
  v6 = (unsigned __int16)KeyW | 0x80070000;
  if ( KeyW <= 0 )
    v6 = KeyW;
  if ( v6 >= 0 )
  {
    ValueW = RegGetValueW(HKEY_LOCAL_MACHINE, lpSubKey, lpValue, 0x10010u, 0LL, pvData, pcbData);
    v6 = (unsigned __int16)ValueW | 0x80070000;
    if ( ValueW <= 0 )
      v6 = ValueW;
  }
  RegUnLoadKeyW(HKEY_LOCAL_MACHINE, L"OFFLINE_AUTH");
  if ( v6 < 0 )
  {
    v7 = 2113LL;
    goto LABEL_18;
  }
  return (unsigned int)v6;
}
