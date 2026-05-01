/*
 * XREFs of ?RuntimeClassInitialize@VirtualDesktopRegistryHelpers@@QEAAJXZ @ 0x180191F28
 * Callers:
 *     ??$MakeAndInitialize@VVirtualDesktopRegistryHelpers@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVVirtualDesktopRegistryHelpers@@@Z @ 0x180191E3C (--$MakeAndInitialize@VVirtualDesktopRegistryHelpers@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVVir.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x1801DBA20 (-_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z.c)
 */

__int64 __fastcall VirtualDesktopRegistryHelpers::RuntimeClassInitialize(VirtualDesktopRegistryHelpers *this)
{
  HKEY *phkResult; // rdi
  HKEY v3; // rsi
  unsigned int Key; // eax
  int v5; // eax
  HKEY *v6; // rdi
  HKEY v7; // rsi
  HKEY v8; // rcx
  unsigned int v9; // eax
  DWORD LastError; // ebx
  DWORD v12; // ebx
  DWORD dwOptions; // [rsp+20h] [rbp-38h]
  DWORD dwOptionsa; // [rsp+20h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  HKEY hKey; // [rsp+60h] [rbp+8h] BYREF

  phkResult = (HKEY *)((char *)this + 24);
  v3 = (HKEY)*((_QWORD *)this + 3);
  if ( v3 )
  {
    LastError = GetLastError();
    RegCloseKey(v3);
    SetLastError(LastError);
  }
  *phkResult = 0LL;
  Key = RegCreateKeyExW(
          HKEY_CURRENT_USER,
          L"Software\\Microsoft\\Windows\\CurrentVersion\\Explorer\\VirtualDesktops",
          0,
          0LL,
          0,
          3u,
          0LL,
          phkResult,
          0LL);
  if ( Key )
    wil::details::in1diag3::_Log_Win32(
      retaddr,
      (void *)0xC1,
      (unsigned int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopregistryhelpers.cpp",
      (const char *)Key,
      dwOptions);
  hKey = 0LL;
  v5 = SHCreateSessionKey(4LL, &hKey);
  if ( v5 < 0 )
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xC4,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopregistryhelpers.cpp",
      (const char *)(unsigned int)v5);
  }
  else
  {
    v6 = (HKEY *)((char *)this + 16);
    v7 = (HKEY)*((_QWORD *)this + 2);
    if ( v7 )
    {
      v12 = GetLastError();
      RegCloseKey(v7);
      SetLastError(v12);
    }
    v8 = hKey;
    *v6 = 0LL;
    v9 = RegCreateKeyExW(v8, L"VirtualDesktops", 0, 0LL, 1u, 3u, 0LL, v6, 0LL);
    if ( v9 )
      wil::details::in1diag3::_Log_Win32(
        retaddr,
        (void *)0xC6,
        (unsigned int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopregistryhelpers.cpp",
        (const char *)v9,
        dwOptionsa);
  }
  if ( hKey )
    RegCloseKey(hKey);
  return 0LL;
}
