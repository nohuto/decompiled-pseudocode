/*
 * XREFs of ?PeekLockScreenRegistryKeys@LockScreenCreativeConfigHelpers@CreativeFramework@@YAJPEBGPEAPEAG11PEA_N@Z @ 0x18005B374
 * Callers:
 *     ?PeekLockScreenRegistryKeys@ContentManagementService@ContentManagement@@UEAAJPEAPEAUHSTRING__@@00PEAE@Z @ 0x18005B1D0 (-PeekLockScreenRegistryKeys@ContentManagementService@ContentManagement@@UEAAJPEAPEAUHSTRING__@@0.c)
 * Callees:
 *     __security_check_cookie @ 0x1800224C0 (__security_check_cookie.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18002C1E8 (--1-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@@YAJ0@ZU-$integral.c)
 *     ?InitializeFormat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEBGZZ @ 0x1800379DC (-InitializeFormat@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003F248 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x180042C64 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ??$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z @ 0x18004F4CC (--$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z.c)
 *     ?GetLockScreenRegistryKeyRoot@LockScreenCreativeConfigHelpers@CreativeFramework@@YAJPEBGPEAPEAUHKEY__@@@Z @ 0x180059158 (-GetLockScreenRegistryKeyRoot@LockScreenCreativeConfigHelpers@CreativeFramework@@YAJPEBGPEAPEAUH.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x18005D71C (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CreativeFramework::LockScreenCreativeConfigHelpers::PeekLockScreenRegistryKeys(
        CreativeFramework::LockScreenCreativeConfigHelpers *this,
        unsigned __int16 **a2,
        HKEY *a3,
        unsigned __int16 **a4,
        unsigned __int16 **a5)
{
  unsigned __int16 **v5; // r12
  unsigned __int16 **v6; // r14
  int LockScreenRegistryKeyRoot; // ebx
  HKEY v8; // rbx
  unsigned int v9; // eax
  __int64 v10; // rdx
  unsigned __int64 v11; // rdi
  DWORD i; // esi
  unsigned __int64 v13; // rax
  int v14; // edi
  __int64 v15; // rdx
  unsigned __int64 v16; // r15
  LSTATUS ValueW; // eax
  unsigned __int64 v18; // r9
  LSTATUS v19; // eax
  __int64 v20; // rdx
  unsigned __int64 v21; // r9
  unsigned __int16 **v22; // r14
  LSTATUS v23; // eax
  __int64 v24; // rdx
  LSTATUS v25; // eax
  unsigned int lpcSubKeys; // [rsp+20h] [rbp-E0h]
  LPDWORD lpcSubKeysa; // [rsp+20h] [rbp-E0h]
  LPDWORD lpcSubKeysb; // [rsp+20h] [rbp-E0h]
  LPDWORD lpcSubKeysc; // [rsp+20h] [rbp-E0h]
  int v31; // [rsp+60h] [rbp-A0h] BYREF
  LPCWSTR lpSubKey[3]; // [rsp+68h] [rbp-98h] BYREF
  DWORD cSubKeys; // [rsp+80h] [rbp-80h] BYREF
  DWORD cchName; // [rsp+84h] [rbp-7Ch] BYREF
  DWORD pcbData; // [rsp+88h] [rbp-78h] BYREF
  DWORD v36; // [rsp+8Ch] [rbp-74h] BYREF
  DWORD v37; // [rsp+90h] [rbp-70h] BYREF
  DWORD v38[2]; // [rsp+98h] [rbp-68h] BYREF
  HKEY hKey[2]; // [rsp+A0h] [rbp-60h] BYREF
  unsigned __int16 pvData[264]; // [rsp+B0h] [rbp-50h] BYREF
  unsigned __int16 v41[264]; // [rsp+2C0h] [rbp+1C0h] BYREF
  unsigned __int16 v42[264]; // [rsp+4D0h] [rbp+3D0h] BYREF
  WCHAR Name[256]; // [rsp+6E0h] [rbp+5E0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+928h] [rbp+828h]

  *(_QWORD *)v38 = a4;
  v5 = (unsigned __int16 **)a3;
  v6 = a2;
  if ( a2 )
    *a2 = 0LL;
  if ( a3 )
    *a3 = 0LL;
  if ( a4 )
    *a4 = 0LL;
  if ( a5 )
    *(_BYTE *)a5 = 0;
  hKey[0] = 0LL;
  LockScreenRegistryKeyRoot = CreativeFramework::LockScreenCreativeConfigHelpers::GetLockScreenRegistryKeyRoot(
                                this,
                                (unsigned __int16 *)hKey,
                                a3);
  if ( LockScreenRegistryKeyRoot < 0 )
    goto LABEL_62;
  v8 = hKey[0];
  v9 = RegQueryInfoKeyW(hKey[0], 0LL, 0LL, 0LL, &cSubKeys, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL);
  if ( !v9 )
  {
    v11 = 0LL;
    for ( i = 0; i < cSubKeys; ++i )
    {
      cchName = 256;
      v9 = RegEnumKeyExW(v8, i, Name, &cchName, 0LL, 0LL, 0LL, 0LL);
      if ( v9 )
      {
        v10 = 447LL;
        goto LABEL_12;
      }
      v13 = _wcstoui64(Name, 0LL, 10);
      if ( v13 > v11 )
        v11 = v13;
    }
    if ( !v11 )
    {
      LockScreenRegistryKeyRoot = -2147024894;
      goto LABEL_62;
    }
    memset(lpSubKey, 0, sizeof(lpSubKey));
    v14 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::InitializeFormat(
            (__int64)lpSubKey,
            L"%llu",
            v11);
    if ( v14 < 0 )
    {
      v15 = 459LL;
LABEL_24:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v15,
        (__int64)"onecoreuap\\internal\\shell\\inc\\LockScreenCreativeConfigHelpers.h",
        (const char *)(unsigned int)v14);
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)lpSubKey);
      LockScreenRegistryKeyRoot = v14;
      goto LABEL_62;
    }
    v16 = -1LL;
    if ( v6 )
    {
      pcbData = 522;
      ValueW = RegGetValueW(v8, lpSubKey[0], L"contentId", 0x20000002u, 0LL, pvData, &pcbData);
      v14 = ValueW;
      if ( ValueW > 0 )
        v14 = (unsigned __int16)ValueW | 0x80070000;
      if ( (int)(v14 + 0x80000000) >= 0 && v14 != -2147024894 )
      {
        v15 = 465LL;
        goto LABEL_24;
      }
      v18 = -1LL;
      do
        ++v18;
      while ( pvData[v18] );
      v14 = _AllocStringWorker<CTCoAllocPolicy>(0LL, 0x80000000LL, pvData, v18, (__int64)lpcSubKeysa, v6);
      v6 = 0LL;
      if ( v14 < 0 )
      {
        v15 = 466LL;
        goto LABEL_24;
      }
    }
    if ( v5 )
    {
      v36 = 522;
      v19 = RegGetValueW(v8, lpSubKey[0], L"landscapeImage", 0x20000002u, (LPDWORD)v6, v41, &v36);
      v14 = v19;
      if ( v19 > 0 )
        v14 = (unsigned __int16)v19 | 0x80070000;
      if ( (int)(v14 + 0x80000000) >= 0 && v14 != -2147024894 )
      {
        v15 = 473LL;
        goto LABEL_24;
      }
      v21 = -1LL;
      do
        ++v21;
      while ( v41[v21] != (_WORD)v6 );
      v14 = _AllocStringWorker<CTCoAllocPolicy>(0x80000000uLL, v20, v41, v21, (__int64)lpcSubKeysb, v5);
      v5 = 0LL;
      if ( v14 < 0 )
      {
        v15 = 474LL;
        goto LABEL_24;
      }
    }
    v22 = *(unsigned __int16 ***)v38;
    if ( *(_QWORD *)v38 )
    {
      v37 = 522;
      v23 = RegGetValueW(v8, lpSubKey[0], L"portraitImage", 0x20000002u, (LPDWORD)v5, v42, &v37);
      v14 = v23;
      if ( v23 > 0 )
        v14 = (unsigned __int16)v23 | 0x80070000;
      if ( (int)(v14 + 0x80000000) >= 0 && v14 != -2147024894 )
      {
        v15 = 481LL;
        goto LABEL_24;
      }
      do
        ++v16;
      while ( v42[v16] != (_WORD)v5 );
      v14 = _AllocStringWorker<CTCoAllocPolicy>(0x80000000uLL, v24, v42, v16, (__int64)lpcSubKeysc, v22);
      if ( v14 < 0 )
      {
        v15 = 482LL;
        goto LABEL_24;
      }
    }
    if ( a5 )
    {
      v31 = (int)v5;
      v38[0] = 4;
      v25 = RegGetValueW(v8, lpSubKey[0], L"showImageOnSecureLock", 0x20000010u, (LPDWORD)v5, &v31, v38);
      LockScreenRegistryKeyRoot = v25;
      if ( v25 > 0 )
        LockScreenRegistryKeyRoot = (unsigned __int16)v25 | 0x80070000;
      if ( (int)(LockScreenRegistryKeyRoot + 0x80000000) >= 0 && LockScreenRegistryKeyRoot != -2147024894 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x1E9,
          (__int64)"onecoreuap\\internal\\shell\\inc\\LockScreenCreativeConfigHelpers.h",
          (const char *)(unsigned int)LockScreenRegistryKeyRoot);
        Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)lpSubKey);
        goto LABEL_62;
      }
      *(_BYTE *)a5 = v31 != (_DWORD)v5;
    }
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)lpSubKey);
    LockScreenRegistryKeyRoot = (int)v5;
    goto LABEL_62;
  }
  v10 = 441LL;
LABEL_12:
  LockScreenRegistryKeyRoot = wil::details::in1diag3::Return_Win32(
                                retaddr,
                                (void *)v10,
                                (unsigned int)"onecoreuap\\internal\\shell\\inc\\LockScreenCreativeConfigHelpers.h",
                                (const char *)v9,
                                lpcSubKeys);
LABEL_62:
  wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>(hKey);
  return (unsigned int)LockScreenRegistryKeyRoot;
}
