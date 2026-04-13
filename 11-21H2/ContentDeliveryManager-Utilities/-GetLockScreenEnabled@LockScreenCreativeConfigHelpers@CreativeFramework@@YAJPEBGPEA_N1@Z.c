/*
 * XREFs of ?GetLockScreenEnabled@LockScreenCreativeConfigHelpers@CreativeFramework@@YAJPEBGPEA_N1@Z @ 0x18005E8FC
 * Callers:
 *     ?IsLockScreenEnabled@ContentManagementService@ContentManagement@@UEAAJPEAE0@Z @ 0x180060040 (-IsLockScreenEnabled@ContentManagementService@ContentManagement@@UEAAJPEAE0@Z.c)
 * Callees:
 *     ?InitializeFormat@?$NativeString@V?$CoTaskMemPolicy@_W@Internal@Windows@@@Internal@Windows@@QEAAJPEB_WZZ @ 0x180039F6C (-InitializeFormat@-$NativeString@V-$CoTaskMemPolicy@_W@Internal@Windows@@@Internal@Windows@@QEAA.c)
 *     ?ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x180043DD8 (-ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGG.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044570 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_WindowsSpotlightV3@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18005CDBC (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_WindowsSpotlightV3@@@det.c)
 *     ?GetCurrentUserSidString@LockScreenCreativeConfigHelpers@CreativeFramework@@YAJPEAPEAG@Z @ 0x18005D624 (-GetCurrentUserSidString@LockScreenCreativeConfigHelpers@CreativeFramework@@YAJPEAPEAG@Z.c)
 *     ?GetSettingValue@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEAUHKEY__@@PEBG1_NPEAKK@Z @ 0x18005F34C (-GetSettingValue@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEAUHKEY__@@PEBG1_NPEAKK@Z.c)
 *     ?IsAnyMicrosoftDomainAccount@Policy@CreativeFramework@@YA_NXZ @ 0x18005F6C4 (-IsAnyMicrosoftDomainAccount@Policy@CreativeFramework@@YA_NXZ.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CreativeFramework::LockScreenCreativeConfigHelpers::GetLockScreenEnabled(
        CreativeFramework::LockScreenCreativeConfigHelpers *this,
        unsigned __int16 *a2,
        bool *a3,
        bool *a4)
{
  int SettingValue; // eax
  unsigned int v7; // r8d
  int v8; // r14d
  unsigned __int16 **v9; // rdx
  CreativeFramework::Policy *v10; // rcx
  int CurrentUserSidString; // eax
  unsigned int v12; // ebx
  bool v14; // al
  void *v15; // rbx
  int v16; // eax
  unsigned int v17; // edi
  void *v18; // rsi
  LSTATUS v19; // eax
  bool v20; // sf
  int v21; // eax
  HKEY v22; // r13
  DWORD LastError; // edi
  WCHAR *v24; // r13
  LSTATUS v25; // eax
  LSTATUS ValueW; // eax
  LSTATUS v27; // eax
  unsigned int *pvData; // [rsp+28h] [rbp-51h]
  unsigned int pcbData; // [rsp+30h] [rbp-49h]
  DWORD v30; // [rsp+40h] [rbp-39h] BYREF
  HKEY hKey; // [rsp+48h] [rbp-31h] BYREF
  __int64 v32; // [rsp+50h] [rbp-29h]
  signed __int32 v33; // [rsp+58h] [rbp-21h] BYREF
  LPVOID pv[3]; // [rsp+60h] [rbp-19h] BYREF
  LPCWSTR lpSubKey[11]; // [rsp+78h] [rbp-1h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+5Fh]
  LPVOID pdwValue; // [rsp+E0h] [rbp+67h] BYREF
  int v38; // [rsp+E8h] [rbp+6Fh] BYREF
  int v39; // [rsp+F0h] [rbp+77h] BYREF
  DWORD v40; // [rsp+F8h] [rbp+7Fh] BYREF

  pdwValue = this;
  if ( a2 )
    *(_BYTE *)a2 = 0;
  if ( a3 )
    *a3 = 0;
  SettingValue = CreativeFramework::ContentDeliveryManagerSettings::GetSettingValue(
                   (CreativeFramework::ContentDeliveryManagerSettings *)0xFFFFFFFF80000002LL,
                   (HKEY)&CreativeFramework::ContentDeliveryManagerDebugSettings::c_regKeyDebugSettings,
                   L"ContentDeliveryAllowedOverride",
                   (const unsigned __int16 *)a4,
                   (bool)&pdwValue,
                   pvData,
                   pcbData);
  if ( SettingValue >= 0 )
  {
    if ( (_DWORD)pdwValue )
    {
      v14 = (_DWORD)pdwValue == 1;
      if ( a2 )
        *(_BYTE *)a2 = v14;
      if ( a3 )
        *a3 = v14;
      return 0LL;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1B1,
      (__int64)"onecoreuap\\internal\\shell\\inc\\ContentDeliveryManagerSettings.h",
      (const char *)(unsigned int)SettingValue);
  }
  v7 = `wil::Feature<__WilFeatureTraits_Feature_WindowsSpotlightV3>::GetImpl'::`2'::impl;
  if ( (`wil::Feature<__WilFeatureTraits_Feature_WindowsSpotlightV3>::GetImpl'::`2'::impl & 2) == 0 )
  {
    v32 = *(_QWORD *)wil::details::FeatureImpl<__WilFeatureTraits_Feature_WindowsSpotlightV3>::GetCachedFeatureEnabledState(
                       &`wil::Feature<__WilFeatureTraits_Feature_WindowsSpotlightV3>::GetImpl'::`2'::impl,
                       &v33);
    v7 = v32;
  }
  LODWORD(pdwValue) = 4;
  BYTE4(pdwValue) = 3;
  v8 = 1;
  wil::details::ReportUsageToService(
    (__int64)&unk_1801AF210,
    0xA836A7u,
    (v7 >> 8) & 1,
    (v7 >> 9) & 1,
    (const struct FEATURE_LOGGED_TRAITS *)&pdwValue,
    1,
    3);
  LODWORD(pdwValue) = 0;
  SLGetWindowsInformationDWORD(L"ContentDeliveryManager-License-ContentDeliveryAllowed", (DWORD *)&pdwValue);
  if ( !(_DWORD)pdwValue && !CreativeFramework::Policy::IsAnyMicrosoftDomainAccount(v10) )
    return 0LL;
  pdwValue = 0LL;
  CurrentUserSidString = CreativeFramework::LockScreenCreativeConfigHelpers::GetCurrentUserSidString(
                           (CreativeFramework::LockScreenCreativeConfigHelpers *)&pdwValue,
                           v9);
  v12 = CurrentUserSidString;
  if ( CurrentUserSidString >= 0 )
  {
    memset(pv, 0, sizeof(pv));
    v15 = pdwValue;
    v16 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<wchar_t>>::InitializeFormat(
            (__int64)pv,
            L"%s\\%s",
            pdwValue,
            L"Software\\Microsoft\\Windows\\CurrentVersion\\ContentDeliveryManager");
    v17 = v16;
    if ( v16 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x12D,
        (__int64)"onecoreuap\\internal\\shell\\inc\\LockScreenCreativeConfigHelpers.h",
        (const char *)(unsigned int)v16);
      if ( pv[0] )
        CoTaskMemFree(pv[0]);
      if ( v15 )
        CoTaskMemFree(v15);
      return v17;
    }
    hKey = 0LL;
    v18 = pv[0];
    v19 = RegOpenKeyExW(HKEY_USERS, (LPCWSTR)pv[0], 0, 9u, &hKey);
    v20 = v19 < 0;
    if ( v19 > 0 )
      v20 = 1;
    if ( v20 )
    {
      v8 = 0;
      memset(lpSubKey, 0, 24);
      v21 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<wchar_t>>::InitializeFormat(
              (__int64)lpSubKey,
              L"%s\\%s",
              L"Software\\Microsoft\\Windows\\CurrentVersion\\Authentication\\LogonUI\\Creative",
              v15);
      v17 = v21;
      if ( v21 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x13C,
          (__int64)"onecoreuap\\internal\\shell\\inc\\LockScreenCreativeConfigHelpers.h",
          (const char *)(unsigned int)v21);
        if ( lpSubKey[0] )
          CoTaskMemFree((LPVOID)lpSubKey[0]);
        if ( hKey )
          RegCloseKey(hKey);
        if ( v18 )
          CoTaskMemFree(v18);
        if ( !v15 )
          return v17;
        goto LABEL_65;
      }
      v22 = hKey;
      if ( hKey )
      {
        LastError = GetLastError();
        RegCloseKey(v22);
        SetLastError(LastError);
      }
      hKey = 0LL;
      v24 = (WCHAR *)lpSubKey[0];
      v25 = RegOpenKeyExW(HKEY_LOCAL_MACHINE, lpSubKey[0], 0, 9u, &hKey);
      v17 = v25;
      if ( v25 > 0 )
        v17 = (unsigned __int16)v25 | 0x80070000;
      if ( v24 )
        CoTaskMemFree(v24);
      if ( (v17 & 0x80000000) != 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x13F,
          (__int64)"onecoreuap\\internal\\shell\\inc\\LockScreenCreativeConfigHelpers.h",
          (const char *)v17);
        if ( hKey )
          RegCloseKey(hKey);
        if ( v18 )
          CoTaskMemFree(v18);
        if ( !v15 )
          return v17;
        goto LABEL_65;
      }
    }
    v40 = 4;
    ValueW = RegGetValueW(hKey, 0LL, L"RotatingLockScreenEnabled", 0x10u, 0LL, &v39, &v40);
    v17 = ValueW;
    if ( ValueW > 0 )
      v17 = (unsigned __int16)ValueW | 0x80070000;
    if ( v17 == -2147024894 )
    {
      v39 = v8;
    }
    else if ( (v17 & 0x80000000) != 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x14B,
        (__int64)"onecoreuap\\internal\\shell\\inc\\LockScreenCreativeConfigHelpers.h",
        (const char *)v17);
      if ( hKey )
        RegCloseKey(hKey);
      if ( v18 )
        CoTaskMemFree(v18);
      if ( !v15 )
        return v17;
LABEL_65:
      CoTaskMemFree(v15);
      return v17;
    }
    v30 = 4;
    v27 = RegGetValueW(hKey, 0LL, L"RotatingLockScreenOverlayEnabled", 0x10u, 0LL, &v38, &v30);
    v17 = v27;
    if ( v27 > 0 )
      v17 = (unsigned __int16)v27 | 0x80070000;
    if ( v17 == -2147024894 )
    {
      v38 = v8;
    }
    else
    {
      if ( (v17 & 0x80000000) != 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x158,
          (__int64)"onecoreuap\\internal\\shell\\inc\\LockScreenCreativeConfigHelpers.h",
          (const char *)v17);
        if ( hKey )
          RegCloseKey(hKey);
        if ( v18 )
          CoTaskMemFree(v18);
        if ( v15 )
          CoTaskMemFree(v15);
        return v17;
      }
      v8 = v38;
    }
    if ( a2 )
      *(_BYTE *)a2 = v39 != 0;
    if ( a3 )
      *a3 = v8 != 0;
    if ( hKey )
      RegCloseKey(hKey);
    if ( v18 )
      CoTaskMemFree(v18);
    if ( v15 )
      CoTaskMemFree(v15);
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x129,
    (__int64)"onecoreuap\\internal\\shell\\inc\\LockScreenCreativeConfigHelpers.h",
    (const char *)(unsigned int)CurrentUserSidString);
  if ( pdwValue )
    CoTaskMemFree(pdwValue);
  return v12;
}
