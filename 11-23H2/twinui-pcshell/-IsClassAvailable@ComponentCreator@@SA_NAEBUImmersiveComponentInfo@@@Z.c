/*
 * XREFs of ?IsClassAvailable@ComponentCreator@@SA_NAEBUImmersiveComponentInfo@@@Z @ 0x1801C1138
 * Callers:
 *     ??$ForEachKey@V_lambda_57cfb88a9168c5b81c3cd8194129e25c_@@@@YAXPEAUHKEY__@@$$QEAV_lambda_57cfb88a9168c5b81c3cd8194129e25c_@@@Z @ 0x1804893EC (--$ForEachKey@V_lambda_57cfb88a9168c5b81c3cd8194129e25c_@@@@YAXPEAUHKEY__@@$$QEAV_lambda_57cfb88.c)
 *     ??R_lambda_10825b8ae890a1dc19d83ed8e1513741_@@QEBA@PEAUHKEY__@@PEBG@Z @ 0x18048A1A4 (--R_lambda_10825b8ae890a1dc19d83ed8e1513741_@@QEBA@PEAUHKEY__@@PEBG@Z.c)
 * Callees:
 *     ?put@?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAPEAPEAUHKEY__@@XZ @ 0x1800C4EC4 (-put@-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@.c)
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x18012FE34 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

char __fastcall ComponentCreator::IsClassAvailable(const struct ImmersiveComponentInfo *a1)
{
  unsigned int v2; // eax
  unsigned __int8 (*v3)(void); // rax
  HKEY *phkResult; // rax
  bool v5; // bl
  HKEY hKey; // [rsp+30h] [rbp-178h] BYREF
  OLECHAR sz[40]; // [rsp+40h] [rbp-168h] BYREF
  WCHAR SubKey[128]; // [rsp+90h] [rbp-118h] BYREF

  v2 = *((_DWORD *)a1 + 3);
  if ( *((_QWORD *)a1 + 2) )
    v2 = (*((__int64 (__fastcall **)(_QWORD))a1 + 2))(v2);
  if ( (v2 & s_exclusionsInEffect) != 0 )
    return 0;
  v3 = (unsigned __int8 (*)(void))*((_QWORD *)a1 + 3);
  if ( v3 )
  {
    if ( !v3() )
      return 0;
  }
  if ( (*((_BYTE *)a1 + 8) & 1) == 0 )
    return 1;
  StringFromGUID2(*(const GUID *const *)a1, sz, 39);
  StringCchPrintfW(SubKey, 0x80uLL, (size_t *)L"SOFTWARE\\Classes\\CLSID\\%s", sz);
  hKey = 0LL;
  phkResult = wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>>::put(&hKey);
  v5 = RegOpenKeyExW(HKEY_LOCAL_MACHINE, SubKey, 0, 1u, phkResult) == 0;
  if ( hKey )
    RegCloseKey(hKey);
  return v5;
}
