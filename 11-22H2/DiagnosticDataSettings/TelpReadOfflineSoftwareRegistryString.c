/*
 * XREFs of TelpReadOfflineSoftwareRegistryString @ 0x1800034E4
 * Callers:
 *     TelpReadOfflineOsPolicySetting @ 0x18000318C (TelpReadOfflineOsPolicySetting.c)
 * Callees:
 *     TelpReadRegistryString @ 0x18000152C (TelpReadRegistryString.c)
 *     ?StringCchCatW@@YAJPEAG_KPEBG@Z @ 0x1800036A0 (-StringCchCatW@@YAJPEAG_KPEBG@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004A4C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180004F10 (__security_check_cookie.c)
 *     memset_0 @ 0x1800059BA (memset_0.c)
 */

__int64 __fastcall TelpReadOfflineSoftwareRegistryString(__int64 a1, __int64 a2, void *a3, DWORD *a4)
{
  signed int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // rcx
  int RegistryString; // eax
  unsigned __int64 v10; // rdx
  unsigned int v11; // r8d
  LSTATUS KeyW; // eax
  LSTATUS ValueW; // eax
  int pdwType; // [rsp+20h] [rbp-268h]
  DWORD pcbData; // [rsp+40h] [rbp-248h] BYREF
  DWORD v17[3]; // [rsp+44h] [rbp-244h] BYREF
  WCHAR File[264]; // [rsp+50h] [rbp-238h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+288h] [rbp+0h]

  if ( !a3 )
  {
    v6 = -2147024809;
    v7 = 2137LL;
LABEL_16:
    wil::details::in1diag3::Return_Hr(retaddr, (void *)v7, (unsigned int)a3, (const char *)(unsigned int)v6, pdwType);
    return (unsigned int)v6;
  }
  if ( !a4 )
  {
    v6 = -2147024809;
    v7 = 2138LL;
    goto LABEL_16;
  }
  memset_0(File, 0, 0x208uLL);
  v17[0] = 260;
  RegistryString = TelpReadRegistryString(v8, L"Software\\Microsoft\\RecoveryEnvironment", L"TargetOS", File, v17);
  v6 = RegistryString;
  if ( RegistryString < 0 )
  {
    wil::details::in1diag3::Return_Hr(retaddr, (void *)0x807, v11, (const char *)(unsigned int)RegistryString, pdwType);
    v7 = 2144LL;
    goto LABEL_16;
  }
  v6 = StringCchCatW(File, v10, L"\\System32\\config\\SOFTWARE");
  if ( v6 < 0 )
  {
    v7 = 2147LL;
    goto LABEL_16;
  }
  KeyW = RegLoadKeyW(HKEY_LOCAL_MACHINE, L"OFFLINE_AUTH", File);
  v6 = (unsigned __int16)KeyW | 0x80070000;
  if ( KeyW <= 0 )
    v6 = KeyW;
  if ( v6 >= 0 )
  {
    pcbData = 2 * *a4;
    ValueW = RegGetValueW(
               HKEY_LOCAL_MACHINE,
               L"OFFLINE_AUTH\\Microsoft\\Windows\\CurrentVersion\\DeviceAccess",
               L"ActivePolicyCode",
               0x10002u,
               0LL,
               a3,
               &pcbData);
    v6 = (unsigned __int16)ValueW | 0x80070000;
    *a4 = pcbData >> 1;
    if ( ValueW <= 0 )
      v6 = ValueW;
  }
  RegUnLoadKeyW(HKEY_LOCAL_MACHINE, L"OFFLINE_AUTH");
  if ( v6 < 0 )
  {
    v7 = 2177LL;
    goto LABEL_16;
  }
  return (unsigned int)v6;
}
