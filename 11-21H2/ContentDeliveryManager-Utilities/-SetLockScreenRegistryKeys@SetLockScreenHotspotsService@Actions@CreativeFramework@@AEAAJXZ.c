/*
 * XREFs of ?SetLockScreenRegistryKeys@SetLockScreenHotspotsService@Actions@CreativeFramework@@AEAAJXZ @ 0x1800D0198
 * Callers:
 *     ?Stage@SetLockScreenHotspotsService@Actions@CreativeFramework@@UEAAXXZ @ 0x1800D0700 (-Stage@SetLockScreenHotspotsService@Actions@CreativeFramework@@UEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x180021DB0 (__security_check_cookie.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044570 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x180045F44 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x180063830 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CreativeFramework::Actions::SetLockScreenHotspotsService::SetLockScreenRegistryKeys(
        CreativeFramework::Actions::SetLockScreenHotspotsService *this)
{
  unsigned __int64 v2; // rsi
  int v3; // eax
  unsigned int v4; // edi
  unsigned int v6; // eax
  unsigned int v7; // ebx
  int v8; // eax
  unsigned int v9; // eax
  HKEY v10; // rcx
  _QWORD *v11; // rax
  unsigned int v12; // eax
  _QWORD *v13; // rax
  unsigned int v14; // eax
  _QWORD *v15; // rax
  unsigned int v16; // eax
  unsigned int v17; // eax
  unsigned int v18; // eax
  HKEY phkResult; // [rsp+58h] [rbp-B0h] BYREF
  HKEY hKey; // [rsp+60h] [rbp-A8h] BYREF
  __int64 Data; // [rsp+68h] [rbp-A0h] BYREF
  struct _FILETIME SystemTimeAsFileTime; // [rsp+70h] [rbp-98h] BYREF
  WCHAR SubKey[264]; // [rsp+78h] [rbp-90h] BYREF
  WCHAR v24[264]; // [rsp+288h] [rbp+180h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+4B0h] [rbp+3A8h]

  GetSystemTimeAsFileTime(&SystemTimeAsFileTime);
  v2 = SystemTimeAsFileTime.dwLowDateTime + (HIDWORD(*(unsigned __int64 *)&SystemTimeAsFileTime) << 32);
  v3 = StringCchPrintfW(
         SubKey,
         260LL,
         L"%s\\%s",
         L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Authentication\\LogonUI\\Creative",
         *((_QWORD *)this + 2));
  v4 = v3;
  if ( v3 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x69,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\setlockscreenhotspots.cpp",
      (const char *)(unsigned int)v3);
    return v4;
  }
  hKey = 0LL;
  v6 = RegCreateKeyExW(HKEY_LOCAL_MACHINE, SubKey, 0, 0LL, 0, 0xF003Fu, 0LL, &hKey, 0LL);
  if ( v6 )
  {
    v7 = wil::details::in1diag3::Return_Win32(
           retaddr,
           107LL,
           (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\setlockscreenhotspots.cpp",
           (const char *)v6);
    if ( hKey )
      RegCloseKey(hKey);
    return v7;
  }
  v8 = StringCchPrintfW(v24, 260LL, L"%llu", v2);
  v4 = v8;
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x6D,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\setlockscreenhotspots.cpp",
      (const char *)(unsigned int)v8);
    if ( hKey )
      RegCloseKey(hKey);
    return v4;
  }
  phkResult = 0LL;
  v9 = RegCreateKeyExW(hKey, v24, 0, 0LL, 0, 0xF003Fu, 0LL, &phkResult, 0LL);
  if ( v9 )
  {
    v7 = wil::details::in1diag3::Return_Win32(
           retaddr,
           112LL,
           (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\setlockscreenhotspots.cpp",
           (const char *)v9);
    if ( phkResult )
      RegCloseKey(phkResult);
    v10 = hKey;
    if ( !hKey )
      return v7;
    goto LABEL_49;
  }
  v11 = (_QWORD *)((char *)this + 24);
  if ( *((_QWORD *)this + 6) >= 8uLL )
    v11 = (_QWORD *)*v11;
  v12 = RegSetKeyValueW(phkResult, 0LL, L"contentId", 1u, v11, 2 * *((_DWORD *)this + 10));
  if ( v12 )
  {
    v7 = wil::details::in1diag3::Return_Win32(
           retaddr,
           114LL,
           (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\setlockscreenhotspots.cpp",
           (const char *)v12);
    if ( phkResult )
      RegCloseKey(phkResult);
    v10 = hKey;
    if ( !hKey )
      return v7;
    goto LABEL_49;
  }
  if ( *((_QWORD *)this + 9) )
  {
    v13 = (_QWORD *)((char *)this + 56);
    if ( *((_QWORD *)this + 10) >= 8uLL )
      v13 = (_QWORD *)*v13;
    v14 = RegSetKeyValueW(phkResult, 0LL, L"landscapeImage", 1u, v13, 2 * *((_DWORD *)this + 18));
    if ( v14 )
    {
      v7 = wil::details::in1diag3::Return_Win32(
             retaddr,
             117LL,
             (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\setlockscreenhotspots.cpp",
             (const char *)v14);
      if ( phkResult )
        RegCloseKey(phkResult);
      v10 = hKey;
      if ( !hKey )
        return v7;
      goto LABEL_49;
    }
  }
  if ( *((_QWORD *)this + 13) )
  {
    v15 = (_QWORD *)((char *)this + 88);
    if ( *((_QWORD *)this + 14) >= 8uLL )
      v15 = (_QWORD *)*v15;
    v16 = RegSetKeyValueW(phkResult, 0LL, L"portraitImage", 1u, v15, 2 * *((_DWORD *)this + 26));
    if ( v16 )
    {
      v7 = wil::details::in1diag3::Return_Win32(
             retaddr,
             121LL,
             (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\setlockscreenhotspots.cpp",
             (const char *)v16);
      if ( phkResult )
        RegCloseKey(phkResult);
      v10 = hKey;
      if ( !hKey )
        return v7;
      goto LABEL_49;
    }
  }
  if ( *((_DWORD *)this + 30) )
  {
    v17 = RegSetKeyValueW(phkResult, 0LL, L"showImageOnSecureLock", 4u, (char *)this + 120, 4u);
    if ( v17 )
    {
      v7 = wil::details::in1diag3::Return_Win32(
             retaddr,
             126LL,
             (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\setlockscreenhotspots.cpp",
             (const char *)v17);
      if ( phkResult )
        RegCloseKey(phkResult);
      v10 = hKey;
      if ( !hKey )
        return v7;
      goto LABEL_49;
    }
  }
  LODWORD(Data) = 1;
  v18 = RegSetKeyValueW(hKey, 0LL, L"LockImageFlags", 4u, &Data, 4u);
  if ( v18 )
  {
    v7 = wil::details::in1diag3::Return_Win32(
           retaddr,
           131LL,
           (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\setlockscreenhotspots.cpp",
           (const char *)v18);
    if ( phkResult )
      RegCloseKey(phkResult);
    v10 = hKey;
    if ( !hKey )
      return v7;
LABEL_49:
    RegCloseKey(v10);
    return v7;
  }
  *((_BYTE *)this + 124) = 1;
  if ( phkResult )
    RegCloseKey(phkResult);
  if ( hKey )
    RegCloseKey(hKey);
  return 0LL;
}
