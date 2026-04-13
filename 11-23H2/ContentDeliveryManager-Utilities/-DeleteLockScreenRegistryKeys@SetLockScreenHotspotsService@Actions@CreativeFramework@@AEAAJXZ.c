/*
 * XREFs of ?DeleteLockScreenRegistryKeys@SetLockScreenHotspotsService@Actions@CreativeFramework@@AEAAJXZ @ 0x1800BAF7C
 * Callers:
 *     ?Unstage@SetLockScreenHotspotsService@Actions@CreativeFramework@@UEAAXXZ @ 0x1800BBC00 (-Unstage@SetLockScreenHotspotsService@Actions@CreativeFramework@@UEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1800224C0 (__security_check_cookie.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18002C1E8 (--1-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@@YAJ0@ZU-$integral.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180043300 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Tidy@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAX_N_K@Z @ 0x180062764 (-_Tidy@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAX_N_K@Z.c)
 *     ??0?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAA@PEB_W@Z @ 0x18008F74C (--0-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAA@PEB_W@Z.c)
 *     ?_Destroy@?$vector@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$allocator@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@@std@@IEAAXPEAV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@2@0@Z @ 0x18009F998 (-_Destroy@-$vector@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@V-$allocator.c)
 *     ?StringCchPrintfW@@YAJPEA_W_KPEB_WZZ @ 0x1800A7C08 (-StringCchPrintfW@@YAJPEA_W_KPEB_WZZ.c)
 *     ?_Throw_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x1800B01C0 (-_Throw_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z.c)
 *     ?push_back@?$vector@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$allocator@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@@std@@QEAAX$$QEAV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@2@@Z @ 0x1800BBD7C (-push_back@-$vector@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@V-$allocato.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CreativeFramework::Actions::SetLockScreenHotspotsService::DeleteLockScreenRegistryKeys(
        CreativeFramework::Actions::SetLockScreenHotspotsService *this)
{
  int v2; // eax
  unsigned int v3; // eax
  unsigned int v4; // eax
  wil::details::in1diag3 *v5; // rcx
  DWORD i; // edi
  unsigned int v7; // eax
  unsigned int ValueW; // eax
  const WCHAR *v9; // r8
  WCHAR *v10; // rdi
  const char *v11; // r9
  __int64 result; // rax
  WCHAR *j; // rbx
  const WCHAR *v14; // rdx
  unsigned int v15; // eax
  unsigned int v16; // eax
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
  __int64 v28; // [rsp+88h] [rbp-660h]
  _QWORD v29[4]; // [rsp+90h] [rbp-658h] BYREF
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
        (void *)0x94,
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
    v28 = 0LL;
    v4 = RegQueryInfoKeyW(hKey, 0LL, 0LL, 0LL, &cSubKeys, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL);
    v5 = retaddr;
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
      v7 = RegEnumKeyExW(hKey, i, Name, &cchName, 0LL, 0LL, 0LL, 0LL);
      if ( v7 )
        wil::details::in1diag3::_Throw_Win32(
          retaddr,
          162LL,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\setlockscreenhotspots.cpp",
          (const char *)v7,
          phkResultc);
      ValueW = RegGetValueW(hKey, Name, L"contentId", 2u, 0LL, pvData, &pcbData);
      if ( ValueW )
        wil::details::in1diag3::_Throw_Win32(
          retaddr,
          163LL,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\setlockscreenhotspots.cpp",
          (const char *)ValueW,
          phkResultd);
      v9 = (const WCHAR *)((char *)this + 24);
      if ( *((_QWORD *)this + 6) >= 8uLL )
        v9 = *(const WCHAR **)v9;
      if ( CompareStringOrdinal(pvData, -1, v9, -1, 0) == 2 )
      {
        std::wstring::wstring((__int64)v29);
        std::vector<std::wstring>::push_back(lpSubKey, v29);
        std::wstring::_Tidy(v29, 1, 0LL);
      }
    }
    v10 = (WCHAR *)lpSubKey[0];
    if ( lpSubKey[0] == lpSubKey[1] )
    {
      *((_BYTE *)this + 124) = 0;
    }
    else
    {
      *((_BYTE *)this + 124) = 1;
      for ( j = v10; j != lpSubKey[1]; j += 16 )
      {
        if ( *((_QWORD *)j + 3) < 8uLL )
          v14 = j;
        else
          v14 = *(const WCHAR **)j;
        v15 = RegDeleteKeyExW(hKey, v14, 0, 0);
        if ( v15 )
          wil::details::in1diag3::_Throw_Win32(
            retaddr,
            181LL,
            (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\setlockscreenhotspots.cpp",
            (const char *)v15,
            phkResultb);
      }
      pcbData = 1;
      v16 = RegSetKeyValueW(hKey, 0LL, L"LockImageFlags", 4u, &pcbData, 4u);
      v5 = retaddr;
      if ( v16 )
        wil::details::in1diag3::_Throw_Win32(
          retaddr,
          186LL,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\setlockscreenhotspots.cpp",
          (const char *)v16,
          phkResulte);
    }
    if ( v10 )
    {
      std::vector<std::wstring>::_Destroy((__int64)v5, v10, (_QWORD *)lpSubKey[1]);
      operator delete(v10);
    }
    wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>(&hKey);
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
