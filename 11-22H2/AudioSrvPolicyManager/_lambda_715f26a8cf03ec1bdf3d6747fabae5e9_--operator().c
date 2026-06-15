/*
 * XREFs of _lambda_715f26a8cf03ec1bdf3d6747fabae5e9_::operator() @ 0x18000F100
 * Callers:
 *     ?IsGlobalProfileConfiguredInStore@AssignedAccessConfigStoreV2@AssignedAccess@Internal@Windows@@EEAA_NXZ @ 0x180016270 (-IsGlobalProfileConfiguredInStore@AssignedAccessConfigStoreV2@AssignedAccess@Internal@Windows@@E.c)
 * Callees:
 *     ?InitializeFormat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEBGZZ @ 0x180010FDC (-InitializeFormat@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJ.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x180011184 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_715f26a8cf03ec1bdf3d6747fabae5e9_::operator()(_BYTE **a1)
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
  DWORD cbData; // [rsp+70h] [rbp+8h] BYREF
  DWORD Type; // [rsp+78h] [rbp+10h] BYREF
  HKEY hKey; // [rsp+80h] [rbp+18h] BYREF

  hKey = 0LL;
  memset(lpSubKey, 0, 24);
  v2 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::InitializeFormat(
         lpSubKey,
         L"%s\\%s",
         *((_QWORD *)*a1 + 1),
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
      v9 = RegQueryValueExW(hKey, L"GlobalProfileId", 0LL, &Type, 0LL, &cbData);
      v10 = v9;
      if ( v9 )
      {
        if ( v9 > 0 )
          v10 = (unsigned __int16)v9 | 0x80070000;
        Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(lpSubKey);
        if ( hKey )
          RegCloseKey(hKey);
        return v10;
      }
      else
      {
        *a1[1] = 1;
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
