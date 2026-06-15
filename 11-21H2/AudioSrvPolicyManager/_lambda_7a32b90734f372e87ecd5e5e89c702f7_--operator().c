/*
 * XREFs of _lambda_7a32b90734f372e87ecd5e5e89c702f7_::operator() @ 0x1800439CC
 * Callers:
 *     ?DoesGroupConfigExistInStore@AssignedAccessConfigStoreV1@AssignedAccess@Internal@Windows@@EEAA_NXZ @ 0x180043ED0 (-DoesGroupConfigExistInStore@AssignedAccessConfigStoreV1@AssignedAccess@Internal@Windows@@EEAA_N.c)
 * Callees:
 *     ??$__invoke@P6AJPEAUHKEY__@@@ZAEAPEAU1@@wistd@@YAJ$$QEAP6AJPEAUHKEY__@@@ZAEAPEAU1@@Z @ 0x18000834C (--$__invoke@P6AJPEAUHKEY__@@@ZAEAPEAU1@@wistd@@YAJ$$QEAP6AJPEAUHKEY__@@@ZAEAPEAU1@@Z.c)
 *     ?InitializeFormat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEBGZZ @ 0x180044118 (-InitializeFormat@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_7a32b90734f372e87ecd5e5e89c702f7_::operator()(_BYTE **a1)
{
  int v2; // ebx
  DWORD LastError; // ebx
  void *v5; // rbx
  LSTATUS v6; // eax
  unsigned int v7; // edi
  LSTATUS v8; // eax
  LPVOID pv[4]; // [rsp+60h] [rbp-20h] BYREF
  DWORD cSubKeys; // [rsp+B0h] [rbp+30h] BYREF
  HKEY hKey; // [rsp+B8h] [rbp+38h] BYREF
  HKEY v12; // [rsp+C0h] [rbp+40h] BYREF
  LSTATUS (__stdcall *v13)(HKEY); // [rsp+C8h] [rbp+48h] BYREF

  hKey = 0LL;
  memset(pv, 0, 24);
  v2 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::InitializeFormat(
         pv,
         L"%s\\%s",
         *((_QWORD *)*a1 + 1),
         L"GroupConfigs");
  if ( v2 < 0 )
  {
    if ( pv[0] )
      CoTaskMemFree(pv[0]);
    if ( hKey )
    {
      v12 = hKey;
      v13 = RegCloseKey;
      wistd::__invoke<long (*)(HKEY__ *),HKEY__ * &>((__int64 (__fastcall **)(_QWORD))&v13, &v12);
    }
    return (unsigned int)v2;
  }
  if ( hKey )
  {
    v12 = hKey;
    LastError = GetLastError();
    v13 = RegCloseKey;
    wistd::__invoke<long (*)(HKEY__ *),HKEY__ * &>((__int64 (__fastcall **)(_QWORD))&v13, &v12);
    SetLastError(LastError);
  }
  v5 = pv[0];
  v6 = RegOpenKeyExW(HKEY_LOCAL_MACHINE, (LPCWSTR)pv[0], 0, 0x20019u, &hKey);
  v7 = v6;
  if ( v6 )
  {
    if ( v6 > 0 )
      v7 = (unsigned __int16)v6 | 0x80070000;
    if ( v5 )
      CoTaskMemFree(v5);
    if ( hKey )
    {
      v12 = hKey;
      v13 = RegCloseKey;
      wistd::__invoke<long (*)(HKEY__ *),HKEY__ * &>((__int64 (__fastcall **)(_QWORD))&v13, &v12);
    }
    return v7;
  }
  cSubKeys = 0;
  v8 = RegQueryInfoKeyW(hKey, 0LL, 0LL, 0LL, &cSubKeys, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL);
  v7 = v8;
  if ( v8 )
  {
    if ( v8 > 0 )
      v7 = (unsigned __int16)v8 | 0x80070000;
    if ( v5 )
      CoTaskMemFree(v5);
    if ( hKey )
    {
      v12 = hKey;
      v13 = RegCloseKey;
      wistd::__invoke<long (*)(HKEY__ *),HKEY__ * &>((__int64 (__fastcall **)(_QWORD))&v13, &v12);
    }
    return v7;
  }
  *a1[1] = cSubKeys != 0;
  if ( v5 )
    CoTaskMemFree(v5);
  if ( hKey )
  {
    v12 = hKey;
    v13 = RegCloseKey;
    wistd::__invoke<long (*)(HKEY__ *),HKEY__ * &>((__int64 (__fastcall **)(_QWORD))&v13, &v12);
  }
  return 0LL;
}
