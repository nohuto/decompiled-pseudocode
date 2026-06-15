/*
 * XREFs of ?GetStoreVersion@AssignedAccessConfigStoreHelper@AssignedAccess@Internal@Windows@@AEAAKXZ @ 0x180042BC4
 * Callers:
 *     ?Initialize@AssignedAccessConfigStoreHelper@AssignedAccess@Internal@Windows@@AEAA_NXZ @ 0x180042D30 (-Initialize@AssignedAccessConfigStoreHelper@AssignedAccess@Internal@Windows@@AEAA_NXZ.c)
 * Callees:
 *     ??$__invoke@P6AJPEAUHKEY__@@@ZAEAPEAU1@@wistd@@YAJ$$QEAP6AJPEAUHKEY__@@@ZAEAPEAU1@@Z @ 0x18000834C (--$__invoke@P6AJPEAUHKEY__@@@ZAEAPEAU1@@wistd@@YAJ$$QEAP6AJPEAUHKEY__@@@ZAEAPEAU1@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::AssignedAccess::AssignedAccessConfigStoreHelper::GetStoreVersion(LPCWSTR *this)
{
  unsigned int v1; // ebx
  LSTATUS (__stdcall *v3)(HKEY); // [rsp+30h] [rbp-10h] BYREF
  HKEY v4; // [rsp+38h] [rbp-8h] BYREF
  unsigned int Data; // [rsp+60h] [rbp+20h] BYREF
  DWORD cbData; // [rsp+68h] [rbp+28h] BYREF
  DWORD Type; // [rsp+70h] [rbp+30h] BYREF
  HKEY hKey; // [rsp+78h] [rbp+38h] BYREF

  hKey = 0LL;
  if ( RegOpenKeyExW(HKEY_LOCAL_MACHINE, *this, 0, 0x20019u, &hKey)
    || (Data = 0, cbData = 4, RegQueryValueExW(hKey, L"Version", 0LL, &Type, (LPBYTE)&Data, &cbData))
    || Type != 4 )
  {
    if ( hKey )
    {
      v4 = hKey;
      v3 = RegCloseKey;
      wistd::__invoke<long (*)(HKEY__ *),HKEY__ * &>((__int64 (__fastcall **)(_QWORD))&v3, &v4);
    }
    return 0LL;
  }
  else
  {
    v1 = Data;
    if ( hKey )
    {
      v4 = hKey;
      v3 = RegCloseKey;
      wistd::__invoke<long (*)(HKEY__ *),HKEY__ * &>((__int64 (__fastcall **)(_QWORD))&v3, &v4);
    }
    return v1;
  }
}
