/*
 * XREFs of ?GetCurrentUserSidString@Actions@CreativeFramework@@YAJPEAPEA_W@Z @ 0x1800CFABC
 * Callers:
 *     ??0SetLockScreenHotspotsService@Actions@CreativeFramework@@QEAA@PEB_W000@Z @ 0x1800CF26C (--0SetLockScreenHotspotsService@Actions@CreativeFramework@@QEAA@PEB_W000@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180021DB0 (__security_check_cookie.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044570 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x180045F44 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x180063830 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     ?StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z @ 0x180066620 (-StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CreativeFramework::Actions::GetCurrentUserSidString(CreativeFramework::Actions *this, wchar_t **a2)
{
  unsigned int v3; // eax
  unsigned int v4; // ebx
  HKEY v5; // rcx
  int v6; // eax
  unsigned int ValueW; // eax
  unsigned __int64 v8; // rdi
  unsigned __int64 v9; // rsi
  char *v10; // rax
  HKEY hKey; // [rsp+48h] [rbp-C0h] BYREF
  DWORD pcbData; // [rsp+50h] [rbp-B8h] BYREF
  WCHAR SubKey[8]; // [rsp+58h] [rbp-B0h] BYREF
  unsigned __int16 pvData[192]; // [rsp+68h] [rbp-A0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+210h] [rbp+108h]

  *(_QWORD *)this = 0LL;
  hKey = 0LL;
  v3 = RegOpenKeyExW(
         HKEY_LOCAL_MACHINE,
         L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Authentication\\LogonUI\\SessionData",
         0,
         9u,
         &hKey);
  if ( v3 )
  {
    v4 = wil::details::in1diag3::Return_Win32(
           retaddr,
           40LL,
           (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\setlockscreenhotspots.cpp",
           (const char *)v3);
    v5 = hKey;
    if ( hKey )
      goto LABEL_20;
    return v4;
  }
  v6 = StringCchPrintfW(SubKey, 8LL, L"%d", NtCurrentPeb()->SessionId);
  v4 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2A,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\setlockscreenhotspots.cpp",
      (const char *)(unsigned int)v6);
    v5 = hKey;
    if ( hKey )
      goto LABEL_20;
    return v4;
  }
  pcbData = 185;
  ValueW = RegGetValueW(hKey, SubKey, L"LoggedOnUserSID", 2u, 0LL, pvData, &pcbData);
  if ( ValueW )
  {
    v4 = wil::details::in1diag3::Return_Win32(
           retaddr,
           46LL,
           (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\setlockscreenhotspots.cpp",
           (const char *)ValueW);
    v5 = hKey;
    if ( hKey )
      goto LABEL_20;
    return v4;
  }
  v8 = -1LL;
  do
    ++v8;
  while ( pvData[v8] );
  *(_QWORD *)this = 0LL;
  v9 = v8 + 1;
  if ( v8 + 1 >= v8 && is_mul_ok(v9, 2uLL) )
  {
    v10 = (char *)CoTaskMemAlloc(2 * v9);
    *(_QWORD *)this = v10;
    if ( v10 )
    {
      v4 = 0;
      StringCchCopyNExW(v10, v8 + 1, pvData, v8);
      goto LABEL_19;
    }
    v4 = -2147024882;
  }
  else
  {
    v4 = -2147024362;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x2F,
    (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\setlockscreenhotspots.cpp",
    (const char *)v4);
LABEL_19:
  v5 = hKey;
  if ( hKey )
LABEL_20:
    RegCloseKey(v5);
  return v4;
}
