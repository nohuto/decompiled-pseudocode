/*
 * XREFs of ?SetDesktopSpotlightCreative@DesktopSpotlightHelpers@CreativeFramework@@YAJPEB_W00@Z @ 0x1800D1A68
 * Callers:
 *     ?Stage@SetDesktopWallpaperService@Actions@CreativeFramework@@UEAAXXZ @ 0x1800D1E40 (-Stage@SetDesktopWallpaperService@Actions@CreativeFramework@@UEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x180021DB0 (__security_check_cookie.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044570 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x180045F44 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x180063830 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CreativeFramework::DesktopSpotlightHelpers::SetDesktopSpotlightCreative(
        CreativeFramework::DesktopSpotlightHelpers *this,
        const wchar_t *a2,
        const wchar_t *a3,
        const wchar_t *a4)
{
  unsigned __int64 v7; // rbx
  unsigned int v8; // eax
  unsigned int v9; // ebx
  HKEY v10; // rcx
  int v12; // eax
  unsigned int v13; // eax
  HKEY v14; // rcx
  __int64 v15; // rbx
  __int64 v16; // rax
  unsigned int v17; // eax
  __int64 v18; // rax
  unsigned int v19; // eax
  unsigned int v20; // eax
  HKEY phkResult; // [rsp+50h] [rbp-B0h] BYREF
  HKEY hKey; // [rsp+58h] [rbp-A8h] BYREF
  struct _FILETIME SystemTimeAsFileTime; // [rsp+60h] [rbp-A0h] BYREF
  WCHAR SubKey[256]; // [rsp+70h] [rbp-90h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+2A8h] [rbp+1A8h]

  GetSystemTimeAsFileTime(&SystemTimeAsFileTime);
  v7 = SystemTimeAsFileTime.dwLowDateTime + (HIDWORD(*(unsigned __int64 *)&SystemTimeAsFileTime) << 32);
  hKey = 0LL;
  v8 = RegCreateKeyExW(
         HKEY_CURRENT_USER,
         L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Themes\\Spotlight",
         0,
         0LL,
         0,
         0xF003Fu,
         0LL,
         &hKey,
         0LL);
  if ( v8 )
  {
    v9 = wil::details::in1diag3::Return_Win32(
           retaddr,
           79LL,
           (__int64)"internal\\shellcommondesktopbase\\inc\\ContentDeliveryManager\\DesktopSpotlightHelpers.h",
           (const char *)v8);
    v10 = hKey;
    if ( !hKey )
      return v9;
LABEL_3:
    RegCloseKey(v10);
    return v9;
  }
  v12 = StringCchPrintfW(SubKey, 255LL, L"%llu", v7);
  v9 = v12;
  if ( v12 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x52,
      (__int64)"internal\\shellcommondesktopbase\\inc\\ContentDeliveryManager\\DesktopSpotlightHelpers.h",
      (const char *)(unsigned int)v12);
    v10 = hKey;
    if ( !hKey )
      return v9;
    goto LABEL_3;
  }
  phkResult = 0LL;
  v13 = RegCreateKeyExW(hKey, SubKey, 0, 0LL, 0, 0xF003Fu, 0LL, &phkResult, 0LL);
  if ( v13 )
  {
    v9 = wil::details::in1diag3::Return_Win32(
           retaddr,
           84LL,
           (__int64)"internal\\shellcommondesktopbase\\inc\\ContentDeliveryManager\\DesktopSpotlightHelpers.h",
           (const char *)v13);
    if ( phkResult )
      RegCloseKey(phkResult);
    v14 = hKey;
    if ( !hKey )
      return v9;
    goto LABEL_32;
  }
  v15 = -1LL;
  v16 = -1LL;
  do
    ++v16;
  while ( *((_WORD *)this + v16) );
  v17 = RegSetKeyValueW(phkResult, 0LL, L"contentId", 1u, this, 2 * v16);
  if ( v17 )
  {
    v9 = wil::details::in1diag3::Return_Win32(
           retaddr,
           85LL,
           (__int64)"internal\\shellcommondesktopbase\\inc\\ContentDeliveryManager\\DesktopSpotlightHelpers.h",
           (const char *)v17);
    if ( phkResult )
      RegCloseKey(phkResult);
    v14 = hKey;
    if ( !hKey )
      return v9;
    goto LABEL_32;
  }
  v18 = -1LL;
  do
    ++v18;
  while ( a2[v18] );
  v19 = RegSetKeyValueW(phkResult, 0LL, L"landscapeImage", 1u, a2, 2 * v18);
  if ( v19 )
  {
    v9 = wil::details::in1diag3::Return_Win32(
           retaddr,
           86LL,
           (__int64)"internal\\shellcommondesktopbase\\inc\\ContentDeliveryManager\\DesktopSpotlightHelpers.h",
           (const char *)v19);
    if ( phkResult )
      RegCloseKey(phkResult);
    v14 = hKey;
    if ( !hKey )
      return v9;
    goto LABEL_32;
  }
  do
    ++v15;
  while ( a3[v15] );
  v20 = RegSetKeyValueW(phkResult, 0LL, L"portraitImage", 1u, a3, 2 * v15);
  if ( v20 )
  {
    v9 = wil::details::in1diag3::Return_Win32(
           retaddr,
           87LL,
           (__int64)"internal\\shellcommondesktopbase\\inc\\ContentDeliveryManager\\DesktopSpotlightHelpers.h",
           (const char *)v20);
    if ( phkResult )
      RegCloseKey(phkResult);
    v14 = hKey;
    if ( !hKey )
      return v9;
LABEL_32:
    RegCloseKey(v14);
    return v9;
  }
  if ( phkResult )
    RegCloseKey(phkResult);
  if ( hKey )
    RegCloseKey(hKey);
  return 0LL;
}
