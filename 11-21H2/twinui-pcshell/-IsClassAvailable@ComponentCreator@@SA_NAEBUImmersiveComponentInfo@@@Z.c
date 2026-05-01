/*
 * XREFs of ?IsClassAvailable@ComponentCreator@@SA_NAEBUImmersiveComponentInfo@@@Z @ 0x1803B0860
 * Callers:
 *     ??$ForEachKey@V_lambda_57cfb88a9168c5b81c3cd8194129e25c_@@@@YAXPEAUHKEY__@@$$QEAV_lambda_57cfb88a9168c5b81c3cd8194129e25c_@@@Z @ 0x1803AEF1C (--$ForEachKey@V_lambda_57cfb88a9168c5b81c3cd8194129e25c_@@@@YAXPEAUHKEY__@@$$QEAV_lambda_57cfb88.c)
 *     ??R_lambda_10825b8ae890a1dc19d83ed8e1513741_@@QEBAXPEAUHKEY__@@PEBG@Z @ 0x1803AFD34 (--R_lambda_10825b8ae890a1dc19d83ed8e1513741_@@QEBAXPEAUHKEY__@@PEBG@Z.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18008EA60 (--1-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@@YAJ0@ZU-$integral.c)
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1800CA828 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

char __fastcall ComponentCreator::IsClassAvailable(const struct ImmersiveComponentInfo *a1)
{
  __int64 (*v2)(void); // rax
  char result; // al
  bool v4; // bl
  HKEY phkResult[2]; // [rsp+30h] [rbp-178h] BYREF
  OLECHAR sz[40]; // [rsp+40h] [rbp-168h] BYREF
  WCHAR SubKey[128]; // [rsp+90h] [rbp-118h] BYREF

  v2 = (__int64 (*)(void))*((_QWORD *)a1 + 2);
  if ( !v2 || (result = v2()) != 0 )
  {
    if ( (*((_BYTE *)a1 + 8) & 1) != 0 )
    {
      StringFromGUID2(*(const GUID *const *)a1, sz, 39);
      StringCchPrintfW(SubKey, 128LL, L"SOFTWARE\\Classes\\CLSID\\%s", sz);
      phkResult[0] = 0LL;
      v4 = RegOpenKeyExW(HKEY_LOCAL_MACHINE, SubKey, 0, 1u, phkResult) == 0;
      wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>(phkResult);
      return v4;
    }
    else
    {
      return 1;
    }
  }
  return result;
}
