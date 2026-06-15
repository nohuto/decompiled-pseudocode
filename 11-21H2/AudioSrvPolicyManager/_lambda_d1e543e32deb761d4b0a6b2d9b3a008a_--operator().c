/*
 * XREFs of _lambda_d1e543e32deb761d4b0a6b2d9b3a008a_::operator() @ 0x180043C14
 * Callers:
 *     ?DoesProfileExistInStore@AssignedAccessConfigStoreV1@AssignedAccess@Internal@Windows@@EEAA_NPEBG@Z @ 0x180043F60 (-DoesProfileExistInStore@AssignedAccessConfigStoreV1@AssignedAccess@Internal@Windows@@EEAA_NPEBG.c)
 * Callees:
 *     ??$__invoke@P6AJPEAUHKEY__@@@ZAEAPEAU1@@wistd@@YAJ$$QEAP6AJPEAUHKEY__@@@ZAEAPEAU1@@Z @ 0x18000834C (--$__invoke@P6AJPEAUHKEY__@@@ZAEAPEAU1@@wistd@@YAJ$$QEAP6AJPEAUHKEY__@@@ZAEAPEAU1@@Z.c)
 *     ?InitializeFormat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEBGZZ @ 0x180044118 (-InitializeFormat@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_d1e543e32deb761d4b0a6b2d9b3a008a_::operator()(__int64 a1)
{
  unsigned int v2; // ebx
  DWORD LastError; // ebx
  void *v5; // rdi
  LSTATUS v6; // eax
  LSTATUS v7; // eax
  LPVOID pv[5]; // [rsp+30h] [rbp-28h] BYREF
  HKEY hKey; // [rsp+80h] [rbp+28h] BYREF
  HKEY phkResult; // [rsp+88h] [rbp+30h] BYREF
  HKEY v11; // [rsp+90h] [rbp+38h] BYREF
  LSTATUS (__stdcall *v12)(HKEY); // [rsp+98h] [rbp+40h] BYREF

  hKey = 0LL;
  memset(pv, 0, 24);
  v2 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::InitializeFormat(
         pv,
         L"%s\\%s",
         *(_QWORD *)(*(_QWORD *)a1 + 8LL),
         L"Configs");
  if ( (v2 & 0x80000000) != 0 )
  {
    if ( pv[0] )
      CoTaskMemFree(pv[0]);
    if ( hKey )
    {
      v11 = hKey;
      v12 = RegCloseKey;
      wistd::__invoke<long (*)(HKEY__ *),HKEY__ * &>((__int64 (__fastcall **)(_QWORD))&v12, &v11);
    }
    return v2;
  }
  if ( hKey )
  {
    v11 = hKey;
    LastError = GetLastError();
    v12 = RegCloseKey;
    wistd::__invoke<long (*)(HKEY__ *),HKEY__ * &>((__int64 (__fastcall **)(_QWORD))&v12, &v11);
    SetLastError(LastError);
  }
  v5 = pv[0];
  v6 = RegOpenKeyExW(HKEY_LOCAL_MACHINE, (LPCWSTR)pv[0], 0, 0x20019u, &hKey);
  v2 = v6;
  if ( v6 )
  {
    if ( v6 > 0 )
      v2 = (unsigned __int16)v6 | 0x80070000;
    if ( v5 )
      CoTaskMemFree(v5);
    if ( hKey )
    {
      v11 = hKey;
      v12 = RegCloseKey;
      wistd::__invoke<long (*)(HKEY__ *),HKEY__ * &>((__int64 (__fastcall **)(_QWORD))&v12, &v11);
    }
    return v2;
  }
  phkResult = 0LL;
  v7 = RegOpenKeyExW(hKey, **(LPCWSTR **)(a1 + 8), 0, 0x20019u, &phkResult);
  v2 = v7;
  if ( v7 )
  {
    if ( v7 > 0 )
      v2 = (unsigned __int16)v7 | 0x80070000;
    if ( phkResult )
    {
      v11 = phkResult;
      v12 = RegCloseKey;
      wistd::__invoke<long (*)(HKEY__ *),HKEY__ * &>((__int64 (__fastcall **)(_QWORD))&v12, &v11);
    }
    if ( v5 )
      CoTaskMemFree(v5);
    if ( hKey )
    {
      v11 = hKey;
      v12 = RegCloseKey;
      wistd::__invoke<long (*)(HKEY__ *),HKEY__ * &>((__int64 (__fastcall **)(_QWORD))&v12, &v11);
    }
    return v2;
  }
  **(_BYTE **)(a1 + 16) = 1;
  if ( phkResult )
  {
    v11 = phkResult;
    v12 = RegCloseKey;
    wistd::__invoke<long (*)(HKEY__ *),HKEY__ * &>((__int64 (__fastcall **)(_QWORD))&v12, &v11);
  }
  if ( v5 )
    CoTaskMemFree(v5);
  if ( hKey )
  {
    v11 = hKey;
    v12 = RegCloseKey;
    wistd::__invoke<long (*)(HKEY__ *),HKEY__ * &>((__int64 (__fastcall **)(_QWORD))&v12, &v11);
  }
  return 0LL;
}
