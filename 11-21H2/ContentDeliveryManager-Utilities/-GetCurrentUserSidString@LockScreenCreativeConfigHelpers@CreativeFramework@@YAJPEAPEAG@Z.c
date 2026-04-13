/*
 * XREFs of ?GetCurrentUserSidString@LockScreenCreativeConfigHelpers@CreativeFramework@@YAJPEAPEAG@Z @ 0x18005D624
 * Callers:
 *     ?GetLockScreenEnabled@LockScreenCreativeConfigHelpers@CreativeFramework@@YAJPEBGPEA_N1@Z @ 0x18005E8FC (-GetLockScreenEnabled@LockScreenCreativeConfigHelpers@CreativeFramework@@YAJPEBGPEA_N1@Z.c)
 *     ?PeekLockScreenRegistryKeys@LockScreenCreativeConfigHelpers@CreativeFramework@@YAJPEBGPEAPEAG11PEA_N@Z @ 0x180061304 (-PeekLockScreenRegistryKeys@LockScreenCreativeConfigHelpers@CreativeFramework@@YAJPEBGPEAPEAG11P.c)
 * Callees:
 *     __security_check_cookie @ 0x180021DB0 (__security_check_cookie.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044570 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x180045F44 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x180063830 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     ?_InitializeFromRegistry@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEAUHKEY__@@PEBG_N@Z @ 0x180068F88 (-_InitializeFromRegistry@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CreativeFramework::LockScreenCreativeConfigHelpers::GetCurrentUserSidString(
        CreativeFramework::LockScreenCreativeConfigHelpers *this,
        unsigned __int16 **a2)
{
  unsigned int v3; // eax
  unsigned int v4; // ebx
  HKEY v5; // rcx
  int v7; // eax
  unsigned int v8; // eax
  HKEY v9; // rcx
  int v10; // eax
  unsigned int phkResult; // [rsp+20h] [rbp-50h]
  unsigned int phkResulta; // [rsp+20h] [rbp-50h]
  HKEY hKey; // [rsp+30h] [rbp-40h] BYREF
  HKEY v14; // [rsp+38h] [rbp-38h] BYREF
  LPVOID pv[3]; // [rsp+40h] [rbp-30h] BYREF
  WCHAR SubKey[8]; // [rsp+58h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+8h]

  *(_QWORD *)this = 0LL;
  hKey = 0LL;
  v14 = 0LL;
  v3 = RegOpenKeyExW(
         HKEY_LOCAL_MACHINE,
         L"Software\\Microsoft\\Windows\\CurrentVersion\\Authentication\\LogonUI\\SessionData",
         0,
         9u,
         &v14);
  if ( v3 )
  {
    v4 = wil::details::in1diag3::Return_Win32(
           retaddr,
           (void *)0x60,
           (unsigned int)"onecoreuap\\internal\\shell\\inc\\LockScreenCreativeConfigHelpers.h",
           (const char *)v3,
           phkResult);
    v5 = v14;
    if ( !v14 )
      return v4;
LABEL_3:
    RegCloseKey(v5);
    return v4;
  }
  v7 = StringCchPrintfW(SubKey, 8LL, L"%d", NtCurrentPeb()->SessionId);
  v4 = v7;
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x63,
      (__int64)"onecoreuap\\internal\\shell\\inc\\LockScreenCreativeConfigHelpers.h",
      (const char *)(unsigned int)v7);
    v5 = v14;
    if ( !v14 )
      return v4;
    goto LABEL_3;
  }
  v8 = RegOpenKeyExW(v14, SubKey, 0, 1u, &hKey);
  if ( v8 )
  {
    v4 = wil::details::in1diag3::Return_Win32(
           retaddr,
           (void *)0x64,
           (unsigned int)"onecoreuap\\internal\\shell\\inc\\LockScreenCreativeConfigHelpers.h",
           (const char *)v8,
           phkResulta);
    if ( hKey )
      RegCloseKey(hKey);
    v9 = v14;
    if ( !v14 )
      return v4;
    goto LABEL_24;
  }
  memset(pv, 0, sizeof(pv));
  v10 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_InitializeFromRegistry(
          pv,
          hKey);
  v4 = v10;
  if ( v10 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x67,
      (__int64)"onecoreuap\\internal\\shell\\inc\\LockScreenCreativeConfigHelpers.h",
      (const char *)(unsigned int)v10);
    if ( pv[0] )
      CoTaskMemFree(pv[0]);
    if ( hKey )
      RegCloseKey(hKey);
    v9 = v14;
    if ( !v14 )
      return v4;
    goto LABEL_24;
  }
  if ( !pv[0] )
  {
    v4 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x68,
      (__int64)"onecoreuap\\internal\\shell\\inc\\LockScreenCreativeConfigHelpers.h",
      (const char *)0x8007000ELL);
    if ( hKey )
      RegCloseKey(hKey);
    v9 = v14;
    if ( !v14 )
      return v4;
LABEL_24:
    RegCloseKey(v9);
    return v4;
  }
  *(LPVOID *)this = pv[0];
  if ( hKey )
    RegCloseKey(hKey);
  if ( v14 )
    RegCloseKey(v14);
  return 0LL;
}
