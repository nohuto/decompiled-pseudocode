/*
 * XREFs of _lambda_715f26a8cf03ec1bdf3d6747fabae5e9_::operator() @ 0x1800437AC
 * Callers:
 *     ?IsGlobalProfileConfiguredInStore@AssignedAccessConfigStoreV2@AssignedAccess@Internal@Windows@@EEAA_NXZ @ 0x180044240 (-IsGlobalProfileConfiguredInStore@AssignedAccessConfigStoreV2@AssignedAccess@Internal@Windows@@E.c)
 * Callees:
 *     ??$__invoke@P6AJPEAUHKEY__@@@ZAEAPEAU1@@wistd@@YAJ$$QEAP6AJPEAUHKEY__@@@ZAEAPEAU1@@Z @ 0x18000834C (--$__invoke@P6AJPEAUHKEY__@@@ZAEAPEAU1@@wistd@@YAJ$$QEAP6AJPEAUHKEY__@@@ZAEAPEAU1@@Z.c)
 *     ?InitializeFormat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEBGZZ @ 0x180044118 (-InitializeFormat@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_715f26a8cf03ec1bdf3d6747fabae5e9_::operator()(_BYTE **a1)
{
  int v2; // ebx
  DWORD LastError; // ebx
  void *v5; // rbx
  LSTATUS v6; // eax
  unsigned int v7; // edi
  LSTATUS v8; // eax
  LSTATUS (__stdcall *v9)(HKEY); // [rsp+30h] [rbp-28h] BYREF
  LPVOID pv[4]; // [rsp+38h] [rbp-20h] BYREF
  DWORD cbData; // [rsp+80h] [rbp+28h] BYREF
  DWORD Type; // [rsp+88h] [rbp+30h] BYREF
  HKEY hKey; // [rsp+90h] [rbp+38h] BYREF
  HKEY v14; // [rsp+98h] [rbp+40h] BYREF

  hKey = 0LL;
  memset(pv, 0, 24);
  v2 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::InitializeFormat(
         pv,
         L"%s\\%s",
         *((_QWORD *)*a1 + 1),
         L"Configs");
  if ( v2 < 0 )
  {
    if ( pv[0] )
      CoTaskMemFree(pv[0]);
    if ( hKey )
    {
      v14 = hKey;
      v9 = RegCloseKey;
      wistd::__invoke<long (*)(HKEY__ *),HKEY__ * &>((__int64 (__fastcall **)(_QWORD))&v9, &v14);
    }
    return (unsigned int)v2;
  }
  if ( hKey )
  {
    v14 = hKey;
    LastError = GetLastError();
    v9 = RegCloseKey;
    wistd::__invoke<long (*)(HKEY__ *),HKEY__ * &>((__int64 (__fastcall **)(_QWORD))&v9, &v14);
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
      v14 = hKey;
      v9 = RegCloseKey;
      wistd::__invoke<long (*)(HKEY__ *),HKEY__ * &>((__int64 (__fastcall **)(_QWORD))&v9, &v14);
    }
    return v7;
  }
  v8 = RegQueryValueExW(hKey, L"GlobalProfileId", 0LL, &Type, 0LL, &cbData);
  v7 = v8;
  if ( v8 )
  {
    if ( v8 > 0 )
      v7 = (unsigned __int16)v8 | 0x80070000;
    if ( v5 )
      CoTaskMemFree(v5);
    if ( hKey )
    {
      v14 = hKey;
      v9 = RegCloseKey;
      wistd::__invoke<long (*)(HKEY__ *),HKEY__ * &>((__int64 (__fastcall **)(_QWORD))&v9, &v14);
    }
    return v7;
  }
  *a1[1] = 1;
  if ( v5 )
    CoTaskMemFree(v5);
  if ( hKey )
  {
    v14 = hKey;
    v9 = RegCloseKey;
    wistd::__invoke<long (*)(HKEY__ *),HKEY__ * &>((__int64 (__fastcall **)(_QWORD))&v9, &v14);
  }
  return 0LL;
}
