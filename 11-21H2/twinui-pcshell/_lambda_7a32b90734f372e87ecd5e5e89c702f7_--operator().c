/*
 * XREFs of _lambda_7a32b90734f372e87ecd5e5e89c702f7_::operator() @ 0x1800914F0
 * Callers:
 *     ?DoesGroupConfigExistInStore@AssignedAccessConfigStoreV1@AssignedAccess@Internal@Windows@@EEAA_NXZ @ 0x180091620 (-DoesGroupConfigExistInStore@AssignedAccessConfigStoreV1@AssignedAccess@Internal@Windows@@EEAA_N.c)
 * Callees:
 *     ?InitializeFormat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEBGZZ @ 0x18008CF70 (-InitializeFormat@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJ.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18008EA60 (--1-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@@YAJ0@ZU-$integral.c)
 *     ??$__invoke@P6AJPEAUHKEY__@@@ZAEAPEAU1@@wistd@@YAJ$$QEAP6AJPEAUHKEY__@@@ZAEAPEAU1@@Z @ 0x180156290 (--$__invoke@P6AJPEAUHKEY__@@@ZAEAPEAU1@@wistd@@YAJ$$QEAP6AJPEAUHKEY__@@@ZAEAPEAU1@@Z.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall lambda_7a32b90734f372e87ecd5e5e89c702f7_::operator()(_BYTE **a1)
{
  int v2; // ebx
  LSTATUS v3; // eax
  bool v4; // cc
  DWORD LastError; // ebx
  LPCWSTR lpSubKey[8]; // [rsp+60h] [rbp+17h] BYREF
  DWORD cSubKeys; // [rsp+B0h] [rbp+67h] BYREF
  HKEY hKey; // [rsp+B8h] [rbp+6Fh] BYREF
  HKEY v10; // [rsp+C0h] [rbp+77h] BYREF
  LSTATUS (__stdcall *v11)(HKEY); // [rsp+C8h] [rbp+7Fh] BYREF

  hKey = 0LL;
  memset(lpSubKey, 0, 24);
  v2 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::InitializeFormat(
         (__int64)lpSubKey,
         L"%s\\%s",
         *((_QWORD *)*a1 + 1),
         L"GroupConfigs");
  if ( v2 >= 0 )
  {
    if ( hKey )
    {
      v10 = hKey;
      LastError = GetLastError();
      v11 = RegCloseKey;
      wistd::__invoke<long (*)(HKEY__ *),HKEY__ * &>(&v11, &v10);
      SetLastError(LastError);
    }
    v3 = RegOpenKeyExW(HKEY_LOCAL_MACHINE, lpSubKey[0], 0, 0x20019u, &hKey);
    v2 = v3;
    v4 = v3 <= 0;
    if ( v3
      || (cSubKeys = 0,
          v3 = RegQueryInfoKeyW(hKey, 0LL, 0LL, 0LL, &cSubKeys, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL),
          v2 = v3,
          v4 = v3 <= 0,
          v3) )
    {
      if ( !v4 )
        v2 = (unsigned __int16)v3 | 0x80070000;
    }
    else
    {
      *a1[1] = cSubKeys != 0;
      v2 = 0;
    }
  }
  if ( lpSubKey[0] )
    CoTaskMemFree((LPVOID)lpSubKey[0]);
  wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>(&hKey);
  return (unsigned int)v2;
}
