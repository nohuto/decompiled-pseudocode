/*
 * XREFs of _lambda_715f26a8cf03ec1bdf3d6747fabae5e9_::operator() @ 0x180096818
 * Callers:
 *     ?IsGlobalProfileConfiguredInStore@AssignedAccessConfigStoreV2@AssignedAccess@Internal@Windows@@EEAA_NXZ @ 0x1800965D0 (-IsGlobalProfileConfiguredInStore@AssignedAccessConfigStoreV2@AssignedAccess@Internal@Windows@@E.c)
 * Callees:
 *     ?InitializeFormat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEBGZZ @ 0x1800C55FC (-InitializeFormat@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJ.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18016270C (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall lambda_715f26a8cf03ec1bdf3d6747fabae5e9_::operator()(_BYTE **a1)
{
  signed int v2; // ebx
  HKEY v3; // rdi
  LSTATUS v4; // eax
  bool v5; // cc
  DWORD LastError; // ebx
  LPCWSTR lpSubKey[4]; // [rsp+30h] [rbp-20h] BYREF
  DWORD cbData; // [rsp+70h] [rbp+20h] BYREF
  DWORD Type; // [rsp+78h] [rbp+28h] BYREF
  HKEY hKey; // [rsp+80h] [rbp+30h] BYREF

  hKey = 0LL;
  memset(lpSubKey, 0, 24);
  v2 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::InitializeFormat(
         lpSubKey,
         L"%s\\%s",
         *((_QWORD *)*a1 + 1),
         L"Configs");
  if ( v2 >= 0 )
  {
    v3 = hKey;
    if ( hKey )
    {
      LastError = GetLastError();
      RegCloseKey(v3);
      SetLastError(LastError);
    }
    v4 = RegOpenKeyExW(HKEY_LOCAL_MACHINE, lpSubKey[0], 0, 0x20019u, &hKey);
    v2 = v4;
    v5 = v4 <= 0;
    if ( v4 || (v4 = RegQueryValueExW(hKey, L"GlobalProfileId", 0LL, &Type, 0LL, &cbData), v2 = v4, v5 = v4 <= 0, v4) )
    {
      if ( !v5 )
        v2 = (unsigned __int16)v4 | 0x80070000;
    }
    else
    {
      *a1[1] = 1;
      v2 = 0;
    }
  }
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(lpSubKey);
  if ( hKey )
    RegCloseKey(hKey);
  return (unsigned int)v2;
}
