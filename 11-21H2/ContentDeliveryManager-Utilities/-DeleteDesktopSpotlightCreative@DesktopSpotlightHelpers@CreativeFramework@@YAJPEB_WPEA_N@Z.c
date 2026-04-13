/*
 * XREFs of ?DeleteDesktopSpotlightCreative@DesktopSpotlightHelpers@CreativeFramework@@YAJPEB_WPEA_N@Z @ 0x1800D0BFC
 * Callers:
 *     ?NotifyForDesktopSpotlightUpdates@SetDesktopWallpaperService@Actions@CreativeFramework@@AEAAJXZ @ 0x1800D15B0 (-NotifyForDesktopSpotlightUpdates@SetDesktopWallpaperService@Actions@CreativeFramework@@AEAAJXZ.c)
 *     ?Unstage@SetDesktopWallpaperService@Actions@CreativeFramework@@UEAAXXZ @ 0x1800D1EB0 (-Unstage@SetDesktopWallpaperService@Actions@CreativeFramework@@UEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x180021DB0 (__security_check_cookie.c)
 *     ??1?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@QEAA@XZ @ 0x180057EB4 (--1-$vector@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$allocator@V-$basic_.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x180063830 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z @ 0x1800A42B8 (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z.c)
 *     ?push_back@?$vector@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$allocator@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@@std@@QEAAX$$QEAV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@2@@Z @ 0x1800D0878 (-push_back@-$vector@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@V-$allocato.c)
 */

// Hidden C++ exception states: #wind=5 #try_helpers=1
__int64 __fastcall CreativeFramework::DesktopSpotlightHelpers::DeleteDesktopSpotlightCreative(
        LPCWCH lpString2,
        wchar_t *a2,
        bool *a3)
{
  unsigned int v5; // eax
  unsigned int v6; // ebx
  unsigned int v8; // eax
  unsigned int v9; // ebx
  DWORD i; // ebx
  unsigned int v11; // eax
  unsigned int v12; // ebx
  unsigned int ValueW; // eax
  unsigned int v14; // ebx
  unsigned __int64 v15; // r8
  LPCWSTR v16; // rbx
  const WCHAR *v17; // rdx
  unsigned int v18; // eax
  unsigned int v19; // ebx
  HKEY hKey; // [rsp+60h] [rbp-488h] BYREF
  DWORD pcbData; // [rsp+68h] [rbp-480h] BYREF
  DWORD cSubKeys; // [rsp+6Ch] [rbp-47Ch] BYREF
  DWORD cchName; // [rsp+70h] [rbp-478h] BYREF
  LPCWSTR lpSubKey[2]; // [rsp+78h] [rbp-470h] BYREF
  __int64 v25; // [rsp+88h] [rbp-460h]
  void *v26[3]; // [rsp+90h] [rbp-458h] BYREF
  unsigned __int64 v27; // [rsp+A8h] [rbp-440h]
  WCHAR Name[264]; // [rsp+B0h] [rbp-438h] BYREF
  WCHAR pvData[256]; // [rsp+2C0h] [rbp-228h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+4E8h] [rbp+0h]

  if ( a2 )
    *(_BYTE *)a2 = 0;
  hKey = 0LL;
  v5 = RegOpenKeyExW(
         HKEY_CURRENT_USER,
         L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Themes\\Spotlight",
         0,
         0xF003Fu,
         &hKey);
  if ( v5 )
  {
    v6 = wil::details::in1diag3::Return_Win32(
           retaddr,
           100LL,
           (__int64)"internal\\shellcommondesktopbase\\inc\\ContentDeliveryManager\\DesktopSpotlightHelpers.h",
           (const char *)v5);
    if ( hKey )
      RegCloseKey(hKey);
    return v6;
  }
  else
  {
    *(_OWORD *)lpSubKey = 0LL;
    v25 = 0LL;
    v8 = RegQueryInfoKeyW(hKey, 0LL, 0LL, 0LL, &cSubKeys, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL);
    if ( v8 )
    {
      v9 = wil::details::in1diag3::Return_Win32(
             retaddr,
             105LL,
             (__int64)"internal\\shellcommondesktopbase\\inc\\ContentDeliveryManager\\DesktopSpotlightHelpers.h",
             (const char *)v8);
      std::vector<std::wstring>::~vector<std::wstring>((__int64 *)lpSubKey);
      if ( hKey )
        RegCloseKey(hKey);
      return v9;
    }
    else
    {
      for ( i = 0; i < cSubKeys; ++i )
      {
        cchName = 261;
        pcbData = 256;
        v11 = RegEnumKeyExW(hKey, i, Name, &cchName, 0LL, 0LL, 0LL, 0LL);
        if ( v11 )
        {
          v12 = wil::details::in1diag3::Return_Win32(
                  retaddr,
                  112LL,
                  (__int64)"internal\\shellcommondesktopbase\\inc\\ContentDeliveryManager\\DesktopSpotlightHelpers.h",
                  (const char *)v11);
          std::vector<std::wstring>::~vector<std::wstring>((__int64 *)lpSubKey);
          if ( hKey )
            RegCloseKey(hKey);
          return v12;
        }
        ValueW = RegGetValueW(hKey, Name, L"contentId", 2u, 0LL, pvData, &pcbData);
        if ( ValueW )
        {
          v14 = wil::details::in1diag3::Return_Win32(
                  retaddr,
                  113LL,
                  (__int64)"internal\\shellcommondesktopbase\\inc\\ContentDeliveryManager\\DesktopSpotlightHelpers.h",
                  (const char *)ValueW);
          std::vector<std::wstring>::~vector<std::wstring>((__int64 *)lpSubKey);
          if ( hKey )
            RegCloseKey(hKey);
          return v14;
        }
        if ( CompareStringOrdinal(pvData, -1, lpString2, -1, 0) == 2 )
        {
          v27 = 7LL;
          v26[2] = 0LL;
          LOWORD(v26[0]) = 0;
          if ( Name[0] )
          {
            v15 = -1LL;
            do
              ++v15;
            while ( Name[v15] );
          }
          else
          {
            v15 = 0LL;
          }
          std::wstring::assign((unsigned __int64 *)v26, (char *)Name, v15);
          std::vector<std::wstring>::push_back((__int64)lpSubKey, v26);
          if ( v27 >= 8 )
            operator delete(v26[0]);
        }
      }
      v16 = lpSubKey[0];
      if ( lpSubKey[0] != lpSubKey[1] )
      {
        if ( a2 )
          *(_BYTE *)a2 = 1;
        while ( v16 != lpSubKey[1] )
        {
          if ( *((_QWORD *)v16 + 3) < 8uLL )
            v17 = v16;
          else
            v17 = *(const WCHAR **)v16;
          v18 = RegDeleteKeyExW(hKey, v17, 0, 0);
          if ( v18 )
          {
            v19 = wil::details::in1diag3::Return_Win32(
                    retaddr,
                    130LL,
                    (__int64)"internal\\shellcommondesktopbase\\inc\\ContentDeliveryManager\\DesktopSpotlightHelpers.h",
                    (const char *)v18);
            std::vector<std::wstring>::~vector<std::wstring>((__int64 *)lpSubKey);
            if ( hKey )
              RegCloseKey(hKey);
            return v19;
          }
          v16 += 16;
        }
      }
      std::vector<std::wstring>::~vector<std::wstring>((__int64 *)lpSubKey);
      if ( hKey )
        RegCloseKey(hKey);
      return 0LL;
    }
  }
}
