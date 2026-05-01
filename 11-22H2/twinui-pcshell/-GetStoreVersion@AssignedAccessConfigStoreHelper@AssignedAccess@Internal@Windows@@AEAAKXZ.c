/*
 * XREFs of ?GetStoreVersion@AssignedAccessConfigStoreHelper@AssignedAccess@Internal@Windows@@AEAAKXZ @ 0x18009666C
 * Callers:
 *     ?Initialize@AssignedAccessConfigStoreHelper@AssignedAccess@Internal@Windows@@AEAA_NXZ @ 0x1800970CC (-Initialize@AssignedAccessConfigStoreHelper@AssignedAccess@Internal@Windows@@AEAA_NXZ.c)
 * Callees:
 *     <none>
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall Windows::Internal::AssignedAccess::AssignedAccessConfigStoreHelper::GetStoreVersion(LPCWSTR *this)
{
  unsigned int v1; // ebx
  unsigned int Data; // [rsp+60h] [rbp+28h] BYREF
  DWORD cbData; // [rsp+68h] [rbp+30h] BYREF
  DWORD Type; // [rsp+70h] [rbp+38h] BYREF
  HKEY hKey; // [rsp+78h] [rbp+40h] BYREF

  hKey = 0LL;
  if ( RegOpenKeyExW(HKEY_LOCAL_MACHINE, *this, 0, 0x20019u, &hKey)
    || (Data = 0, cbData = 4, RegQueryValueExW(hKey, L"Version", 0LL, &Type, (LPBYTE)&Data, &cbData))
    || Type != 4 )
  {
    v1 = 0;
  }
  else
  {
    v1 = Data;
  }
  if ( hKey )
    RegCloseKey(hKey);
  return v1;
}
