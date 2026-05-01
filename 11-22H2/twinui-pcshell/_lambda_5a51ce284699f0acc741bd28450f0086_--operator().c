/*
 * XREFs of _lambda_5a51ce284699f0acc741bd28450f0086_::operator() @ 0x180096728
 * Callers:
 *     ?DoesProfileExistInStore@AssignedAccessConfigStoreV0@AssignedAccess@Internal@Windows@@EEAA_NPEBG@Z @ 0x180096620 (-DoesProfileExistInStore@AssignedAccessConfigStoreV0@AssignedAccess@Internal@Windows@@EEAA_NPEBG.c)
 * Callees:
 *     ?IsValidProfile@AssignedAccessConfigStoreV0@AssignedAccess@Internal@Windows@@AEAA_NPEAUHKEY__@@@Z @ 0x18074B1BC (-IsValidProfile@AssignedAccessConfigStoreV0@AssignedAccess@Internal@Windows@@AEAA_NPEAUHKEY__@@@.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall lambda_5a51ce284699f0acc741bd28450f0086_::operator()(__int64 a1)
{
  LSTATUS v2; // eax
  unsigned int v3; // ebx
  LSTATUS v4; // eax
  Windows::Internal::AssignedAccess::AssignedAccessConfigStoreV0 *v5; // rcx
  HKEY phkResult; // [rsp+40h] [rbp+8h] BYREF
  HKEY hKey; // [rsp+48h] [rbp+10h] BYREF

  hKey = 0LL;
  v2 = RegOpenKeyExW(HKEY_LOCAL_MACHINE, *(LPCWSTR *)(*(_QWORD *)a1 + 8LL), 0, 0x20019u, &hKey);
  v3 = v2;
  if ( v2 )
  {
    if ( v2 > 0 )
      v3 = (unsigned __int16)v2 | 0x80070000;
  }
  else
  {
    phkResult = 0LL;
    v4 = RegOpenKeyExW(hKey, **(LPCWSTR **)(a1 + 8), 0, 0x20019u, &phkResult);
    v3 = v4;
    if ( v4 )
    {
      if ( v4 > 0 )
        v3 = (unsigned __int16)v4 | 0x80070000;
    }
    else
    {
      **(_BYTE **)(a1 + 16) = Windows::Internal::AssignedAccess::AssignedAccessConfigStoreV0::IsValidProfile(
                                v5,
                                phkResult);
      v3 = 0;
    }
    if ( phkResult )
      RegCloseKey(phkResult);
  }
  if ( hKey )
    RegCloseKey(hKey);
  return v3;
}
