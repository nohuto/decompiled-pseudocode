/*
 * XREFs of ?GetStoreVersion@AssignedAccessConfigStoreHelper@AssignedAccess@Internal@Windows@@AEAAKXZ @ 0x180046928
 * Callers:
 *     ?Initialize@AssignedAccessConfigStoreHelper@AssignedAccess@Internal@Windows@@AEAA_NXZ @ 0x18000F588 (-Initialize@AssignedAccessConfigStoreHelper@AssignedAccess@Internal@Windows@@AEAA_NXZ.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUHKEY__@@@Z @ 0x180015898 (-reset@-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@@YAJ0@ZU-$inte.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180015E94 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@@Y.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::AssignedAccess::AssignedAccessConfigStoreHelper::GetStoreVersion(LPCWSTR *this)
{
  unsigned int v2; // ebx
  unsigned int Data; // [rsp+50h] [rbp+18h] BYREF
  DWORD cbData; // [rsp+58h] [rbp+20h] BYREF
  DWORD Type; // [rsp+60h] [rbp+28h] BYREF
  HKEY hKey; // [rsp+68h] [rbp+30h] BYREF

  hKey = 0LL;
  wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::reset(
    &hKey,
    0LL);
  if ( RegOpenKeyExW(HKEY_LOCAL_MACHINE, *this, 0, 0x20019u, &hKey)
    || (Data = 0, cbData = 4, RegQueryValueExW(hKey, L"Version", 0LL, &Type, (LPBYTE)&Data, &cbData))
    || Type != 4 )
  {
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>>(&hKey);
    return 0LL;
  }
  else
  {
    v2 = Data;
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>>(&hKey);
    return v2;
  }
}
