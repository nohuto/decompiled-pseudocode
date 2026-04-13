/*
 * XREFs of ?GetDesktopSpotlightCreative@DesktopSpotlightHelpers@CreativeFramework@@YAJPEAPEA_W00@Z @ 0x1800D1018
 * Callers:
 *     ?NotifyForDesktopSpotlightUpdates@SetDesktopWallpaperService@Actions@CreativeFramework@@AEAAJXZ @ 0x1800D15B0 (-NotifyForDesktopSpotlightUpdates@SetDesktopWallpaperService@Actions@CreativeFramework@@AEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x180021DB0 (__security_check_cookie.c)
 *     ?InitializeFormat@?$NativeString@V?$CoTaskMemPolicy@_W@Internal@Windows@@@Internal@Windows@@QEAAJPEB_WZZ @ 0x180039F6C (-InitializeFormat@-$NativeString@V-$CoTaskMemPolicy@_W@Internal@Windows@@@Internal@Windows@@QEAA.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044570 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x180063830 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_DesktopSpotlight@@@details@wil@@QEAA_NXZ @ 0x180069864 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_DesktopSpotlight@@@details@wil@@Q.c)
 *     ?SHRegAllocString@@YAJPEAUHKEY__@@PEB_W1PEAPEA_W@Z @ 0x1800D18DC (-SHRegAllocString@@YAJPEAUHKEY__@@PEB_W1PEAPEA_W@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CreativeFramework::DesktopSpotlightHelpers::GetDesktopSpotlightCreative(
        wchar_t **this,
        wchar_t **a2,
        wchar_t **a3,
        wchar_t **a4)
{
  unsigned int v7; // eax
  unsigned int v8; // ebx
  HKEY v9; // rcx
  unsigned __int64 v11; // rbx
  unsigned int v12; // eax
  DWORD v13; // r15d
  unsigned int v14; // eax
  unsigned __int64 v15; // rax
  int v16; // eax
  void *v17; // rbx
  int v18; // eax
  unsigned int v19; // r14d
  int v20; // eax
  unsigned int v21; // edi
  HKEY v22; // rcx
  int v23; // eax
  HKEY hKey; // [rsp+60h] [rbp-A0h] BYREF
  DWORD cSubKeys; // [rsp+68h] [rbp-98h] BYREF
  DWORD cchName; // [rsp+6Ch] [rbp-94h] BYREF
  LPVOID pv[4]; // [rsp+70h] [rbp-90h] BYREF
  WCHAR Name[264]; // [rsp+90h] [rbp-70h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+2E8h] [rbp+1E8h]

  if ( this )
    *this = 0LL;
  if ( a2 )
    *a2 = 0LL;
  if ( a3 )
    *a3 = 0LL;
  if ( !wil::details::FeatureImpl<__WilFeatureTraits_Feature_DesktopSpotlight>::__private_IsEnabled(`wil::Feature<__WilFeatureTraits_Feature_DesktopSpotlight>::GetImpl'::`2'::impl) )
    return 0LL;
  hKey = 0LL;
  v7 = RegOpenKeyExW(
         HKEY_CURRENT_USER,
         L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Themes\\Spotlight",
         0,
         0x20019u,
         &hKey);
  if ( v7 )
  {
    v8 = wil::details::in1diag3::Return_Win32(
           retaddr,
           34LL,
           (__int64)"internal\\shellcommondesktopbase\\inc\\ContentDeliveryManager\\DesktopSpotlightHelpers.h",
           (const char *)v7);
    v9 = hKey;
    if ( hKey )
      goto LABEL_10;
    return v8;
  }
  v11 = 0LL;
  v12 = RegQueryInfoKeyW(hKey, 0LL, 0LL, 0LL, &cSubKeys, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL);
  if ( v12 )
  {
    v8 = wil::details::in1diag3::Return_Win32(
           retaddr,
           37LL,
           (__int64)"internal\\shellcommondesktopbase\\inc\\ContentDeliveryManager\\DesktopSpotlightHelpers.h",
           (const char *)v12);
    v9 = hKey;
    if ( hKey )
      goto LABEL_10;
    return v8;
  }
  v13 = 0;
  if ( !cSubKeys )
  {
LABEL_48:
    if ( hKey )
      RegCloseKey(hKey);
    return 0LL;
  }
  do
  {
    cchName = 261;
    v14 = RegEnumKeyExW(hKey, v13, Name, &cchName, 0LL, 0LL, 0LL, 0LL);
    if ( v14 )
    {
      v8 = wil::details::in1diag3::Return_Win32(
             retaddr,
             42LL,
             (__int64)"internal\\shellcommondesktopbase\\inc\\ContentDeliveryManager\\DesktopSpotlightHelpers.h",
             (const char *)v14);
      v9 = hKey;
      if ( hKey )
        goto LABEL_10;
      return v8;
    }
    v15 = _wcstoui64(Name, 0LL, 10);
    if ( v15 > v11 )
      v11 = v15;
    ++v13;
  }
  while ( v13 < cSubKeys );
  if ( !v11 )
    goto LABEL_48;
  memset(pv, 0, 24);
  v16 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<wchar_t>>::InitializeFormat(
          (__int64)pv,
          L"%llu",
          v11);
  v8 = v16;
  if ( v16 >= 0 )
  {
    v17 = pv[0];
    if ( this )
    {
      v18 = SHRegAllocString(hKey, (const wchar_t *)pv[0], L"contentId", this);
      v19 = v18;
      if ( v18 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x3A,
          (__int64)"internal\\shellcommondesktopbase\\inc\\ContentDeliveryManager\\DesktopSpotlightHelpers.h",
          (const char *)(unsigned int)v18);
        if ( v17 )
          CoTaskMemFree(v17);
        if ( hKey )
          RegCloseKey(hKey);
        return v19;
      }
    }
    if ( a2 )
    {
      v20 = SHRegAllocString(hKey, (const wchar_t *)v17, L"landscapeImage", a2);
      v21 = v20;
      if ( v20 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x3E,
          (__int64)"internal\\shellcommondesktopbase\\inc\\ContentDeliveryManager\\DesktopSpotlightHelpers.h",
          (const char *)(unsigned int)v20);
        if ( v17 )
          CoTaskMemFree(v17);
        v22 = hKey;
        if ( !hKey )
          return v21;
        goto LABEL_38;
      }
    }
    if ( a3 )
    {
      v23 = SHRegAllocString(hKey, (const wchar_t *)v17, L"portraitImage", a3);
      v21 = v23;
      if ( v23 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x42,
          (__int64)"internal\\shellcommondesktopbase\\inc\\ContentDeliveryManager\\DesktopSpotlightHelpers.h",
          (const char *)(unsigned int)v23);
        if ( v17 )
          CoTaskMemFree(v17);
        v22 = hKey;
        if ( !hKey )
          return v21;
LABEL_38:
        RegCloseKey(v22);
        return v21;
      }
    }
    if ( v17 )
      CoTaskMemFree(v17);
    goto LABEL_48;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x36,
    (__int64)"internal\\shellcommondesktopbase\\inc\\ContentDeliveryManager\\DesktopSpotlightHelpers.h",
    (const char *)(unsigned int)v16);
  if ( pv[0] )
    CoTaskMemFree(pv[0]);
  v9 = hKey;
  if ( hKey )
LABEL_10:
    RegCloseKey(v9);
  return v8;
}
