/*
 * XREFs of _lambda_d1e543e32deb761d4b0a6b2d9b3a008a_::operator() @ 0x18000F2A0
 * Callers:
 *     ?DoesProfileExistInStore@AssignedAccessConfigStoreV1@AssignedAccess@Internal@Windows@@EEAA_NPEBG@Z @ 0x180047370 (-DoesProfileExistInStore@AssignedAccessConfigStoreV1@AssignedAccess@Internal@Windows@@EEAA_NPEBG.c)
 * Callees:
 *     ?InitializeFormat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEBGZZ @ 0x180010F8C (-InitializeFormat@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJ.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x180011134 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUHKEY__@@@Z @ 0x180015898 (-reset@-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@@YAJ0@ZU-$inte.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_d1e543e32deb761d4b0a6b2d9b3a008a_::operator()(__int64 a1)
{
  int v2; // ebx
  HKEY v4; // rdi
  DWORD LastError; // ebx
  WCHAR *v6; // rdi
  LSTATUS v7; // eax
  unsigned int v8; // ebx
  LSTATUS v9; // eax
  unsigned int v10; // ebx
  LPCWSTR lpSubKey[7]; // [rsp+30h] [rbp-38h] BYREF
  HKEY hKey; // [rsp+70h] [rbp+8h] BYREF
  HKEY phkResult; // [rsp+78h] [rbp+10h] BYREF

  hKey = 0LL;
  memset(lpSubKey, 0, 24);
  v2 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::InitializeFormat(
         lpSubKey,
         L"%s\\%s",
         *(_QWORD *)(*(_QWORD *)a1 + 8LL),
         L"Configs");
  if ( v2 >= 0 )
  {
    v4 = hKey;
    if ( hKey )
    {
      LastError = GetLastError();
      RegCloseKey(v4);
      SetLastError(LastError);
    }
    v6 = (WCHAR *)lpSubKey[0];
    v7 = RegOpenKeyExW(HKEY_LOCAL_MACHINE, lpSubKey[0], 0, 0x20019u, &hKey);
    v8 = v7;
    if ( v7 )
    {
      if ( v7 > 0 )
        v8 = (unsigned __int16)v7 | 0x80070000;
      if ( v6 )
        CoTaskMemFree(v6);
      if ( hKey )
        RegCloseKey(hKey);
      return v8;
    }
    else
    {
      phkResult = 0LL;
      wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::reset(
        &phkResult,
        0LL);
      v9 = RegOpenKeyExW(hKey, **(LPCWSTR **)(a1 + 8), 0, 0x20019u, &phkResult);
      v10 = v9;
      if ( v9 )
      {
        if ( v9 > 0 )
          v10 = (unsigned __int16)v9 | 0x80070000;
        if ( phkResult )
          RegCloseKey(phkResult);
        Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(lpSubKey);
        if ( hKey )
          RegCloseKey(hKey);
        return v10;
      }
      else
      {
        **(_BYTE **)(a1 + 16) = 1;
        if ( phkResult )
          RegCloseKey(phkResult);
        Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(lpSubKey);
        if ( hKey )
          RegCloseKey(hKey);
        return 0LL;
      }
    }
  }
  else
  {
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(lpSubKey);
    if ( hKey )
      RegCloseKey(hKey);
    return (unsigned int)v2;
  }
}
