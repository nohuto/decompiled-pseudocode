/*
 * XREFs of _lambda_5a51ce284699f0acc741bd28450f0086_::operator() @ 0x180043538
 * Callers:
 *     ?DoesProfileExistInStore@AssignedAccessConfigStoreV0@AssignedAccess@Internal@Windows@@EEAA_NPEBG@Z @ 0x180043F10 (-DoesProfileExistInStore@AssignedAccessConfigStoreV0@AssignedAccess@Internal@Windows@@EEAA_NPEBG.c)
 * Callees:
 *     ??$__invoke@P6AJPEAUHKEY__@@@ZAEAPEAU1@@wistd@@YAJ$$QEAP6AJPEAUHKEY__@@@ZAEAPEAU1@@Z @ 0x18000834C (--$__invoke@P6AJPEAUHKEY__@@@ZAEAPEAU1@@wistd@@YAJ$$QEAP6AJPEAUHKEY__@@@ZAEAPEAU1@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_5a51ce284699f0acc741bd28450f0086_::operator()(__int64 a1)
{
  LSTATUS v2; // eax
  unsigned int v3; // ebx
  LSTATUS v5; // eax
  HKEY v6; // r14
  char v7; // di
  const wchar_t **v8; // rbx
  const wchar_t *v9; // [rsp+30h] [rbp-20h] BYREF
  int v10; // [rsp+38h] [rbp-18h]
  const wchar_t *v11; // [rsp+40h] [rbp-10h]
  int v12; // [rsp+48h] [rbp-8h]
  char vars0; // [rsp+50h] [rbp+0h] BYREF
  HKEY Type; // [rsp+80h] [rbp+30h] BYREF
  LSTATUS (__stdcall *cbData)(HKEY); // [rsp+88h] [rbp+38h] BYREF
  HKEY hKey; // [rsp+90h] [rbp+40h] BYREF
  HKEY phkResult; // [rsp+98h] [rbp+48h] BYREF

  hKey = 0LL;
  v2 = RegOpenKeyExW(HKEY_LOCAL_MACHINE, *(LPCWSTR *)(*(_QWORD *)a1 + 8LL), 0, 0x20019u, &hKey);
  v3 = v2;
  if ( v2 )
  {
    if ( v2 > 0 )
      v3 = (unsigned __int16)v2 | 0x80070000;
    if ( hKey )
    {
      Type = hKey;
      cbData = RegCloseKey;
      wistd::__invoke<long (*)(HKEY__ *),HKEY__ * &>((__int64 (__fastcall **)(_QWORD))&cbData, &Type);
    }
    return v3;
  }
  phkResult = 0LL;
  v5 = RegOpenKeyExW(hKey, **(LPCWSTR **)(a1 + 8), 0, 0x20019u, &phkResult);
  v3 = v5;
  if ( v5 )
  {
    if ( v5 > 0 )
      v3 = (unsigned __int16)v5 | 0x80070000;
    if ( phkResult )
    {
      Type = phkResult;
      cbData = RegCloseKey;
      wistd::__invoke<long (*)(HKEY__ *),HKEY__ * &>((__int64 (__fastcall **)(_QWORD))&cbData, &Type);
    }
    if ( hKey )
    {
      Type = hKey;
      cbData = RegCloseKey;
      wistd::__invoke<long (*)(HKEY__ *),HKEY__ * &>((__int64 (__fastcall **)(_QWORD))&cbData, &Type);
    }
    return v3;
  }
  v6 = phkResult;
  v9 = L"AppUserModelId";
  v7 = 1;
  v10 = 1;
  v11 = L"ConfigLevel";
  v12 = 4;
  v8 = &v9;
  while ( !RegQueryValueExW(v6, *v8, 0LL, (LPDWORD)&Type, 0LL, (LPDWORD)&cbData)
       && (_DWORD)Type == *((_DWORD *)v8 + 2)
       && (_DWORD)cbData )
  {
    v8 += 2;
    if ( v8 == (const wchar_t **)&vars0 )
      goto LABEL_22;
  }
  v7 = 0;
LABEL_22:
  **(_BYTE **)(a1 + 16) = v7;
  if ( phkResult )
  {
    Type = phkResult;
    cbData = RegCloseKey;
    wistd::__invoke<long (*)(HKEY__ *),HKEY__ * &>((__int64 (__fastcall **)(_QWORD))&cbData, &Type);
  }
  if ( hKey )
  {
    Type = hKey;
    cbData = RegCloseKey;
    wistd::__invoke<long (*)(HKEY__ *),HKEY__ * &>((__int64 (__fastcall **)(_QWORD))&cbData, &Type);
  }
  return 0LL;
}
