/*
 * XREFs of ?RuntimeClassInitialize@VirtualDesktopRegistryHelpers@@QEAAJXZ @ 0x18015ABEC
 * Callers:
 *     ??$MakeAndInitialize@VVirtualDesktopRegistryHelpers@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVVirtualDesktopRegistryHelpers@@@Z @ 0x18015AB64 (--$MakeAndInitialize@VVirtualDesktopRegistryHelpers@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVVir.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18008EA60 (--1-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@@YAJ0@ZU-$integral.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x1800E2CB4 (-_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall VirtualDesktopRegistryHelpers::RuntimeClassInitialize(VirtualDesktopRegistryHelpers *this)
{
  HKEY *phkResult; // rsi
  HKEY v3; // rdi
  unsigned int Key; // eax
  int v5; // eax
  HKEY *v6; // rdi
  HKEY v7; // rsi
  unsigned int v8; // eax
  DWORD LastError; // ebx
  DWORD v11; // ebx
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
      (void *)0xC0,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopregistryhelpers.cpp",
      (const char *)Key);
  hKey = 0LL;
  v5 = SHCreateSessionKey(4LL, &hKey);
  if ( v5 < 0 )
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xC3,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopregistryhelpers.cpp",
      (const char *)(unsigned int)v5);
  }
  else
  {
    v6 = (HKEY *)((char *)this + 16);
    v7 = (HKEY)*((_QWORD *)this + 2);
    if ( v7 )
    {
      v11 = GetLastError();
      RegCloseKey(v7);
      SetLastError(v11);
    }
    *v6 = 0LL;
    v8 = RegCreateKeyExW(hKey, L"VirtualDesktops", 0, 0LL, 1u, 3u, 0LL, v6, 0LL);
    if ( v8 )
      wil::details::in1diag3::_Log_Win32(
        retaddr,
        (void *)0xC5,
        (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopregistryhelpers.cpp",
        (const char *)v8);
  }
  wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>(&hKey);
  return 0LL;
}
