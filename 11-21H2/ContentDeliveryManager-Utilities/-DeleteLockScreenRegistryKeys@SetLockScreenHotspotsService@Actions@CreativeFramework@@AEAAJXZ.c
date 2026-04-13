/*
 * XREFs of ?DeleteLockScreenRegistryKeys@SetLockScreenHotspotsService@Actions@CreativeFramework@@AEAAJXZ @ 0x1800CF6AC
 * Callers:
 *     ?Unstage@SetLockScreenHotspotsService@Actions@CreativeFramework@@UEAAXXZ @ 0x1800D0740 (-Unstage@SetLockScreenHotspotsService@Actions@CreativeFramework@@UEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x180021DB0 (__security_check_cookie.c)
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x180045F44 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048430 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@QEAA@XZ @ 0x180057EB4 (--1-$vector@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$allocator@V-$basic_.c)
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z @ 0x1800A42B8 (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z.c)
 *     ?_Throw_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x1800C26A0 (-_Throw_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z.c)
 *     ?push_back@?$vector@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$allocator@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@@std@@QEAAX$$QEAV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@2@@Z @ 0x1800D0878 (-push_back@-$vector@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@V-$allocato.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CreativeFramework::Actions::SetLockScreenHotspotsService::DeleteLockScreenRegistryKeys(
        CreativeFramework::Actions::SetLockScreenHotspotsService *this)
{
  int v2; // eax
  unsigned int v3; // eax
  unsigned int v4; // eax
  DWORD i; // ebx
  unsigned int v6; // eax
  unsigned int ValueW; // eax
  const WCHAR *v8; // r8
  unsigned __int64 v9; // r8
  LPCWSTR v10; // rbx
  const char *v11; // r9
  __int64 result; // rax
  const WCHAR *v13; // rdx
  unsigned int v14; // eax
  unsigned int v15; // eax
  PHKEY phkResult; // [rsp+20h] [rbp-6C8h]
  unsigned int phkResulta; // [rsp+20h] [rbp-6C8h]
  unsigned int phkResultb; // [rsp+20h] [rbp-6C8h]
  unsigned int phkResultc; // [rsp+20h] [rbp-6C8h]
  unsigned int phkResultd; // [rsp+20h] [rbp-6C8h]
  unsigned int phkResulte; // [rsp+20h] [rbp-6C8h]
  DWORD pcbData; // [rsp+60h] [rbp-688h] BYREF
  HKEY hKey; // [rsp+68h] [rbp-680h] BYREF
  DWORD cSubKeys; // [rsp+70h] [rbp-678h] BYREF
  DWORD cchName; // [rsp+74h] [rbp-674h] BYREF
  LPCWSTR lpSubKey[2]; // [rsp+78h] [rbp-670h] BYREF
  __int64 v27; // [rsp+88h] [rbp-660h]
  void *v28[3]; // [rsp+90h] [rbp-658h] BYREF
  unsigned __int64 v29; // [rsp+A8h] [rbp-640h]
  WCHAR Name[256]; // [rsp+B0h] [rbp-638h] BYREF
  WCHAR SubKey[264]; // [rsp+2B0h] [rbp-438h] BYREF
  WCHAR pvData[264]; // [rsp+4C0h] [rbp-228h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+6E8h] [rbp+0h]

  phkResult = (PHKEY)*((_QWORD *)this + 2);
  v2 = StringCchPrintfW(
         SubKey,
         260LL,
         L"%s\\%s",
         L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Authentication\\LogonUI\\Creative");
  try
  {
    if ( v2 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        148LL,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\setlockscreenhotspots.cpp",
        (const char *)(unsigned int)v2,
        (int)phkResult);
    hKey = 0LL;
    v3 = RegOpenKeyExW(HKEY_LOCAL_MACHINE, SubKey, 0, 0xFu, &hKey);
    if ( v3 )
      wil::details::in1diag3::_Throw_Win32(
        retaddr,
        150LL,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\setlockscreenhotspots.cpp",
        (const char *)v3,
        phkResulta);
    *(_OWORD *)lpSubKey = 0LL;
    v27 = 0LL;
    v4 = RegQueryInfoKeyW(hKey, 0LL, 0LL, 0LL, &cSubKeys, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL);
    if ( v4 )
      wil::details::in1diag3::_Throw_Win32(
        retaddr,
        155LL,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\setlockscreenhotspots.cpp",
        (const char *)v4,
        phkResultb);
    for ( i = 0; i < cSubKeys; ++i )
    {
      cchName = 256;
      pcbData = 261;
      v6 = RegEnumKeyExW(hKey, i, Name, &cchName, 0LL, 0LL, 0LL, 0LL);
      if ( v6 )
        wil::details::in1diag3::_Throw_Win32(
          retaddr,
          162LL,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\setlockscreenhotspots.cpp",
          (const char *)v6,
          phkResultc);
      ValueW = RegGetValueW(hKey, Name, L"contentId", 2u, 0LL, pvData, &pcbData);
      if ( ValueW )
        wil::details::in1diag3::_Throw_Win32(
          retaddr,
          163LL,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\setlockscreenhotspots.cpp",
          (const char *)ValueW,
          phkResultd);
      v8 = (const WCHAR *)((char *)this + 24);
      if ( *((_QWORD *)this + 6) >= 8uLL )
        v8 = *(const WCHAR **)v8;
      if ( CompareStringOrdinal(pvData, -1, v8, -1, 0) == 2 )
      {
        v29 = 7LL;
        v28[2] = 0LL;
        LOWORD(v28[0]) = 0;
        if ( Name[0] )
        {
          v9 = -1LL;
          do
            ++v9;
          while ( Name[v9] );
        }
        else
        {
          v9 = 0LL;
        }
        std::wstring::assign((unsigned __int64 *)v28, (char *)Name, v9);
        std::vector<std::wstring>::push_back(lpSubKey, v28);
        if ( v29 >= 8 )
          operator delete(v28[0]);
      }
    }
    v10 = lpSubKey[0];
    if ( lpSubKey[0] == lpSubKey[1] )
    {
      *((_BYTE *)this + 124) = 0;
    }
    else
    {
      *((_BYTE *)this + 124) = 1;
      while ( v10 != lpSubKey[1] )
      {
        if ( *((_QWORD *)v10 + 3) < 8uLL )
          v13 = v10;
        else
          v13 = *(const WCHAR **)v10;
        v14 = RegDeleteKeyExW(hKey, v13, 0, 0);
        if ( v14 )
          wil::details::in1diag3::_Throw_Win32(
            retaddr,
            181LL,
            (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\setlockscreenhotspots.cpp",
            (const char *)v14,
            phkResultb);
        v10 += 16;
      }
      pcbData = 1;
      v15 = RegSetKeyValueW(hKey, 0LL, L"LockImageFlags", 4u, &pcbData, 4u);
      if ( v15 )
        wil::details::in1diag3::_Throw_Win32(
          retaddr,
          186LL,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\setlockscreenhotspots.cpp",
          (const char *)v15,
          phkResulte);
    }
    std::vector<std::wstring>::~vector<std::wstring>((__int64 *)lpSubKey);
    if ( hKey )
      RegCloseKey(hKey);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xBF,
                           (int)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\setlockscreenhotspots.cpp",
                           v11);
  }
  return result;
}
