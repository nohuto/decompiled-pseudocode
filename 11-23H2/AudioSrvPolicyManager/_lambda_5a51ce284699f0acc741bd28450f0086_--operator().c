/*
 * XREFs of _lambda_5a51ce284699f0acc741bd28450f0086_::operator() @ 0x1800138F0
 * Callers:
 *     ?DoesProfileExistInStore@AssignedAccessConfigStoreV0@AssignedAccess@Internal@Windows@@EEAA_NPEBG@Z @ 0x1800138A0 (-DoesProfileExistInStore@AssignedAccessConfigStoreV0@AssignedAccess@Internal@Windows@@EEAA_NPEBG.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUHKEY__@@@Z @ 0x180015898 (-reset@-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@@YAJ0@ZU-$inte.c)
 *     ?IsValidProfile@AssignedAccessConfigStoreV0@AssignedAccess@Internal@Windows@@AEAA_NPEAUHKEY__@@@Z @ 0x18004740C (-IsValidProfile@AssignedAccessConfigStoreV0@AssignedAccess@Internal@Windows@@AEAA_NPEAUHKEY__@@@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_5a51ce284699f0acc741bd28450f0086_::operator()(__int64 a1)
{
  LSTATUS v2; // eax
  unsigned int v3; // ebx
  LSTATUS v5; // eax
  Windows::Internal::AssignedAccess::AssignedAccessConfigStoreV0 *v6; // rcx
  unsigned int v7; // ebx
  HKEY hKey; // [rsp+40h] [rbp+8h] BYREF
  HKEY phkResult; // [rsp+48h] [rbp+10h] BYREF

  hKey = 0LL;
  v2 = RegOpenKeyExW(HKEY_LOCAL_MACHINE, *(LPCWSTR *)(*(_QWORD *)a1 + 8LL), 0, 0x20019u, &hKey);
  v3 = v2;
  if ( v2 )
  {
    if ( v2 > 0 )
      v3 = (unsigned __int16)v2 | 0x80070000;
    if ( hKey )
      RegCloseKey(hKey);
    return v3;
  }
  else
  {
    phkResult = 0LL;
    wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::reset(
      &phkResult,
      0LL);
    v5 = RegOpenKeyExW(hKey, **(LPCWSTR **)(a1 + 8), 0, 0x20019u, &phkResult);
    v7 = v5;
    if ( v5 )
    {
      if ( v5 > 0 )
        v7 = (unsigned __int16)v5 | 0x80070000;
      if ( phkResult )
        RegCloseKey(phkResult);
      if ( hKey )
        RegCloseKey(hKey);
      return v7;
    }
    else
    {
      **(_BYTE **)(a1 + 16) = Windows::Internal::AssignedAccess::AssignedAccessConfigStoreV0::IsValidProfile(
                                v6,
                                phkResult);
      if ( phkResult )
        RegCloseKey(phkResult);
      if ( hKey )
        RegCloseKey(hKey);
      return 0LL;
    }
  }
}
