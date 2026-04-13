/*
 * XREFs of ?PeekLockScreenRegistryKeys@LockScreenCreativeConfigHelpers@CreativeFramework@@YAJPEBGPEAPEAG11PEA_N@Z @ 0x180061304
 * Callers:
 *     ?PeekLockScreenRegistryKeys@ContentManagementService@ContentManagement@@UEAAJPEAPEAUHSTRING__@@00PEAE@Z @ 0x180061120 (-PeekLockScreenRegistryKeys@ContentManagementService@ContentManagement@@UEAAJPEAPEAUHSTRING__@@0.c)
 * Callees:
 *     __security_check_cookie @ 0x180021DB0 (__security_check_cookie.c)
 *     ?InitializeFormat@?$NativeString@V?$CoTaskMemPolicy@_W@Internal@Windows@@@Internal@Windows@@QEAAJPEB_WZZ @ 0x180039F6C (-InitializeFormat@-$NativeString@V-$CoTaskMemPolicy@_W@Internal@Windows@@@Internal@Windows@@QEAA.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044570 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z @ 0x180054154 (--$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z.c)
 *     ?GetCurrentUserSidString@LockScreenCreativeConfigHelpers@CreativeFramework@@YAJPEAPEAG@Z @ 0x18005D624 (-GetCurrentUserSidString@LockScreenCreativeConfigHelpers@CreativeFramework@@YAJPEAPEAG@Z.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x180063830 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 */

// Hidden C++ exception states: #wind=11
__int64 __fastcall CreativeFramework::LockScreenCreativeConfigHelpers::PeekLockScreenRegistryKeys(
        CreativeFramework::LockScreenCreativeConfigHelpers *this,
        unsigned __int16 **a2,
        unsigned __int16 **a3,
        unsigned __int16 **a4,
        unsigned __int16 **a5)
{
  unsigned __int16 **v5; // r13
  unsigned __int16 **v6; // r12
  HKEY v7; // rbx
  int CurrentUserSidString; // eax
  unsigned int v9; // esi
  void *v10; // rdi
  int v11; // eax
  WCHAR *v12; // r14
  LSTATUS v13; // eax
  unsigned int v15; // eax
  unsigned int v16; // edi
  unsigned __int64 v17; // rdi
  DWORD v18; // esi
  unsigned int v19; // eax
  unsigned __int64 v20; // rax
  int v21; // eax
  unsigned __int64 v22; // r15
  WCHAR *v23; // rdi
  LSTATUS ValueW; // eax
  unsigned __int64 v25; // r9
  int v26; // eax
  LSTATUS v27; // eax
  __int64 v28; // rdx
  unsigned __int64 v29; // r9
  int v30; // eax
  unsigned __int16 **v31; // r12
  LSTATUS v32; // eax
  __int64 v33; // rdx
  int v34; // eax
  _BYTE *v35; // r15
  LSTATUS v36; // eax
  unsigned int phkResult; // [rsp+20h] [rbp-E0h]
  unsigned int phkResulta; // [rsp+20h] [rbp-E0h]
  PHKEY phkResultb; // [rsp+20h] [rbp-E0h]
  PHKEY phkResultc; // [rsp+20h] [rbp-E0h]
  PHKEY phkResultd; // [rsp+20h] [rbp-E0h]
  LPVOID pv; // [rsp+60h] [rbp-A0h] BYREF
  HKEY hKey; // [rsp+68h] [rbp-98h] BYREF
  DWORD cSubKeys; // [rsp+70h] [rbp-90h] BYREF
  LPCWSTR lpSubKey; // [rsp+78h] [rbp-88h] BYREF
  __int64 v46; // [rsp+80h] [rbp-80h]
  __int64 v47; // [rsp+88h] [rbp-78h]
  HKEY v48; // [rsp+90h] [rbp-70h]
  unsigned __int16 **v49; // [rsp+98h] [rbp-68h]
  unsigned __int16 **v50; // [rsp+A0h] [rbp-60h]
  wchar_t Name[264]; // [rsp+B0h] [rbp-50h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+308h] [rbp+208h]

  v49 = a4;
  v5 = a3;
  v6 = a2;
  v50 = a5;
  if ( a2 )
    *a2 = 0LL;
  if ( a3 )
    *a3 = 0LL;
  if ( a4 )
    *a4 = 0LL;
  if ( a5 )
    *(_BYTE *)a5 = 0;
  v7 = 0LL;
  v48 = 0LL;
  pv = 0LL;
  CurrentUserSidString = CreativeFramework::LockScreenCreativeConfigHelpers::GetCurrentUserSidString(
                           (CreativeFramework::LockScreenCreativeConfigHelpers *)&pv,
                           a2);
  v9 = CurrentUserSidString;
  if ( CurrentUserSidString < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1A1,
      (__int64)"onecoreuap\\internal\\shell\\inc\\LockScreenCreativeConfigHelpers.h",
      (const char *)(unsigned int)CurrentUserSidString);
    if ( pv )
      CoTaskMemFree(pv);
    return v9;
  }
  lpSubKey = 0LL;
  v46 = 0LL;
  v47 = 0LL;
  v10 = pv;
  v11 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<wchar_t>>::InitializeFormat(
          (__int64)&lpSubKey,
          L"%s\\%s",
          L"Software\\Microsoft\\Windows\\CurrentVersion\\Authentication\\LogonUI\\Creative",
          pv);
  v9 = v11;
  if ( v11 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1A5,
      (__int64)"onecoreuap\\internal\\shell\\inc\\LockScreenCreativeConfigHelpers.h",
      (const char *)(unsigned int)v11);
    if ( lpSubKey )
      CoTaskMemFree((LPVOID)lpSubKey);
    if ( v10 )
      CoTaskMemFree(v10);
    return v9;
  }
  hKey = 0LL;
  v12 = (WCHAR *)lpSubKey;
  v13 = RegOpenKeyExW(HKEY_LOCAL_MACHINE, lpSubKey, 0, 0x2001Fu, &hKey);
  v9 = v13;
  if ( v13 )
  {
    if ( v13 > 0 )
      v9 = (unsigned __int16)v13 | 0x80070000;
    if ( hKey )
      RegCloseKey(hKey);
    if ( v12 )
      CoTaskMemFree(v12);
    if ( v10 )
      CoTaskMemFree(v10);
    if ( (v9 & 0x80000000) != 0 )
      return v9;
  }
  else
  {
    v7 = hKey;
    hKey = 0LL;
    v48 = v7;
    if ( v12 )
      CoTaskMemFree(v12);
    if ( v10 )
      CoTaskMemFree(v10);
  }
  v15 = RegQueryInfoKeyW(v7, 0LL, 0LL, 0LL, &cSubKeys, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL);
  if ( v15 )
  {
    v16 = wil::details::in1diag3::Return_Win32(
            retaddr,
            (void *)0x1B9,
            (unsigned int)"onecoreuap\\internal\\shell\\inc\\LockScreenCreativeConfigHelpers.h",
            (const char *)v15,
            phkResult);
    if ( v7 )
      goto LABEL_34;
    return v16;
  }
  v17 = 0LL;
  v18 = 0;
  if ( !cSubKeys )
  {
LABEL_111:
    if ( v7 )
      RegCloseKey(v7);
    return 2147942402LL;
  }
  do
  {
    LODWORD(pv) = 256;
    v19 = RegEnumKeyExW(v7, v18, Name, (LPDWORD)&pv, 0LL, 0LL, 0LL, 0LL);
    if ( v19 )
    {
      v16 = wil::details::in1diag3::Return_Win32(
              retaddr,
              (void *)0x1BF,
              (unsigned int)"onecoreuap\\internal\\shell\\inc\\LockScreenCreativeConfigHelpers.h",
              (const char *)v19,
              phkResulta);
      if ( v7 )
        goto LABEL_34;
      return v16;
    }
    v20 = _wcstoui64(Name, 0LL, 10);
    if ( v20 > v17 )
      v17 = v20;
    ++v18;
  }
  while ( v18 < cSubKeys );
  if ( !v17 )
    goto LABEL_111;
  lpSubKey = 0LL;
  v46 = 0LL;
  v47 = 0LL;
  v21 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<wchar_t>>::InitializeFormat(
          (__int64)&lpSubKey,
          L"%llu",
          v17);
  v16 = v21;
  if ( v21 >= 0 )
  {
    v22 = -1LL;
    v23 = (WCHAR *)lpSubKey;
    if ( v6 )
    {
      LODWORD(pv) = 522;
      ValueW = RegGetValueW(v7, lpSubKey, L"contentId", 0x20000002u, 0LL, Name, (LPDWORD)&pv);
      v9 = ValueW;
      if ( ValueW > 0 )
        v9 = (unsigned __int16)ValueW | 0x80070000;
      if ( (int)(v9 + 0x80000000) >= 0 && v9 != -2147024894 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x1D1,
          (__int64)"onecoreuap\\internal\\shell\\inc\\LockScreenCreativeConfigHelpers.h",
          (const char *)v9);
        if ( v23 )
          CoTaskMemFree(v23);
        if ( !v7 )
          return v9;
LABEL_102:
        RegCloseKey(v7);
        return v9;
      }
      v25 = -1LL;
      do
        ++v25;
      while ( Name[v25] );
      v26 = _AllocStringWorker<CTCoAllocPolicy>(0LL, 0x80000000LL, Name, v25, (__int64)phkResultb, v6);
      v9 = v26;
      v6 = 0LL;
      if ( v26 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x1D2,
          (__int64)"onecoreuap\\internal\\shell\\inc\\LockScreenCreativeConfigHelpers.h",
          (const char *)(unsigned int)v26);
        if ( v23 )
          CoTaskMemFree(v23);
        if ( !v7 )
          return v9;
        goto LABEL_102;
      }
    }
    if ( v5 )
    {
      LODWORD(pv) = 522;
      v27 = RegGetValueW(v7, v23, L"landscapeImage", 0x20000002u, (LPDWORD)v6, Name, (LPDWORD)&pv);
      v9 = v27;
      if ( v27 > 0 )
        v9 = (unsigned __int16)v27 | 0x80070000;
      if ( (int)(v9 + 0x80000000) >= 0 && v9 != -2147024894 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x1D9,
          (__int64)"onecoreuap\\internal\\shell\\inc\\LockScreenCreativeConfigHelpers.h",
          (const char *)v9);
        if ( v23 )
          CoTaskMemFree(v23);
        if ( !v7 )
          return v9;
        goto LABEL_102;
      }
      v29 = -1LL;
      do
        ++v29;
      while ( Name[v29] != (_WORD)v6 );
      v30 = _AllocStringWorker<CTCoAllocPolicy>(0x80000000LL, v28, Name, v29, (__int64)phkResultc, v5);
      v9 = v30;
      v5 = 0LL;
      if ( v30 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x1DA,
          (__int64)"onecoreuap\\internal\\shell\\inc\\LockScreenCreativeConfigHelpers.h",
          (const char *)(unsigned int)v30);
        if ( v23 )
          CoTaskMemFree(v23);
        if ( !v7 )
          return v9;
        goto LABEL_102;
      }
    }
    v31 = v49;
    if ( v49 )
    {
      LODWORD(pv) = 522;
      v32 = RegGetValueW(v7, v23, L"portraitImage", 0x20000002u, (LPDWORD)v5, Name, (LPDWORD)&pv);
      v9 = v32;
      if ( v32 > 0 )
        v9 = (unsigned __int16)v32 | 0x80070000;
      if ( (int)(v9 + 0x80000000) >= 0 && v9 != -2147024894 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x1E1,
          (__int64)"onecoreuap\\internal\\shell\\inc\\LockScreenCreativeConfigHelpers.h",
          (const char *)v9);
        if ( v23 )
          CoTaskMemFree(v23);
        if ( !v7 )
          return v9;
        goto LABEL_102;
      }
      do
        ++v22;
      while ( Name[v22] != (_WORD)v5 );
      v34 = _AllocStringWorker<CTCoAllocPolicy>(0x80000000LL, v33, Name, v22, (__int64)phkResultd, v31);
      v9 = v34;
      if ( v34 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x1E2,
          (__int64)"onecoreuap\\internal\\shell\\inc\\LockScreenCreativeConfigHelpers.h",
          (const char *)(unsigned int)v34);
        if ( v23 )
          CoTaskMemFree(v23);
        if ( !v7 )
          return v9;
        goto LABEL_102;
      }
    }
    v35 = v50;
    if ( v50 )
    {
      LODWORD(pv) = (_DWORD)v5;
      LODWORD(hKey) = 4;
      v36 = RegGetValueW(v7, v23, L"showImageOnSecureLock", 0x20000010u, (LPDWORD)v5, &pv, (LPDWORD)&hKey);
      v9 = v36;
      if ( v36 > 0 )
        v9 = (unsigned __int16)v36 | 0x80070000;
      if ( (int)(v9 + 0x80000000) >= 0 && v9 != -2147024894 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x1E9,
          (__int64)"onecoreuap\\internal\\shell\\inc\\LockScreenCreativeConfigHelpers.h",
          (const char *)v9);
        if ( v23 )
          CoTaskMemFree(v23);
        if ( !v7 )
          return v9;
        goto LABEL_102;
      }
      *v35 = (_DWORD)pv != (_DWORD)v5;
    }
    if ( v23 )
      CoTaskMemFree(v23);
    if ( v7 )
      RegCloseKey(v7);
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1CB,
    (__int64)"onecoreuap\\internal\\shell\\inc\\LockScreenCreativeConfigHelpers.h",
    (const char *)(unsigned int)v21);
  if ( lpSubKey )
    CoTaskMemFree((LPVOID)lpSubKey);
  if ( v7 )
LABEL_34:
    RegCloseKey(v7);
  return v16;
}
