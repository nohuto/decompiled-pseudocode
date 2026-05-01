/*
 * XREFs of _anonymous_namespace_::IsInternalDevUnlocked @ 0x18023F27C
 * Callers:
 *     _anonymous_namespace_::FindDashboardAppExtension @ 0x18023A414 (_anonymous_namespace_--FindDashboardAppExtension.c)
 *     _anonymous_namespace_::GetDashboardPackageFamilyName @ 0x18023C07C (_anonymous_namespace_--GetDashboardPackageFamilyName.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x1800C4F5C (--1-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@@YAJ0@ZU-$integral.c)
 *     ??1?$out_param_t@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@details@wil@@QEAA@XZ @ 0x18050C18C (--1-$out_param_t@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1.c)
 */

bool anonymous_namespace_::IsInternalDevUnlocked()
{
  bool v0; // di
  bool v1; // bl
  HKEY *p_hKey; // [rsp+30h] [rbp-20h] BYREF
  HKEY phkResult; // [rsp+38h] [rbp-18h] BYREF
  char v5; // [rsp+40h] [rbp-10h]
  DWORD cbData; // [rsp+70h] [rbp+20h] BYREF
  int Data; // [rsp+78h] [rbp+28h] BYREF
  HKEY hKey; // [rsp+80h] [rbp+30h] BYREF

  v5 = 1;
  p_hKey = &hKey;
  v0 = 0;
  hKey = 0LL;
  phkResult = 0LL;
  v1 = RegOpenKeyExW(HKEY_LOCAL_MACHINE, L"SOFTWARE\\Microsoft\\SecurityManager", 0, 0x20019u, &phkResult) == 0;
  wil::details::out_param_t<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>>>::~out_param_t<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>>>(&p_hKey);
  if ( v1 )
  {
    cbData = 4;
    if ( !RegQueryValueExW(hKey, L"InternalDevUnlock", 0LL, 0LL, (LPBYTE)&Data, &cbData) )
      v0 = Data == 1;
  }
  wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>(&hKey);
  return v0;
}
