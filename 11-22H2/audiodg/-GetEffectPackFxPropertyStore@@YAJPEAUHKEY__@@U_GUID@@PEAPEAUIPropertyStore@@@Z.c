/*
 * XREFs of ?GetEffectPackFxPropertyStore@@YAJPEAUHKEY__@@U_GUID@@PEAPEAUIPropertyStore@@@Z @ 0x14002E808
 * Callers:
 *     ?GetEffectPackFxPropertyStore@@YAJU_GUID@@PEAPEAUIPropertyStore@@@Z @ 0x14002E9A8 (-GetEffectPackFxPropertyStore@@YAJU_GUID@@PEAPEAUIPropertyStore@@@Z.c)
 * Callees:
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x140014E00 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     __security_check_cookie @ 0x140027DF0 (__security_check_cookie.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14004DF14 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x14005206C (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x14005D104 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@@Y.c)
 */

__int64 __fastcall GetEffectPackFxPropertyStore(HKEY hKey, struct _GUID *a2, struct IPropertyStore **a3)
{
  HRESULT v5; // eax
  unsigned int v6; // ebx
  unsigned int v7; // eax
  HKEY v8; // rcx
  int RegistryPropertyStore2; // eax
  int phkResult; // [rsp+20h] [rbp-298h]
  unsigned int phkResulta; // [rsp+20h] [rbp-298h]
  HKEY v13[2]; // [rsp+70h] [rbp-248h] BYREF
  WCHAR SubKey[256]; // [rsp+80h] [rbp-238h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+2B8h] [rbp+0h]

  *a3 = 0LL;
  phkResult = a2->Data2;
  v5 = StringCchPrintfW(
         SubKey,
         0x100uLL,
         (size_t *)L"EffectPackRegistration\\{%08x-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x}\\FxProperties",
         a2->Data1);
  v6 = v5;
  if ( v5 >= 0 )
  {
    v13[0] = 0LL;
    v7 = RegOpenKeyExW(hKey, SubKey, 0, 0x20019u, v13);
    if ( v7 )
    {
      v6 = wil::details::in1diag3::Return_Win32(
             retaddr,
             (void *)0x46,
             (unsigned int)"avcore\\audiocore\\server\\lib\\audioengineutil\\effectpackutil.cpp",
             (const char *)v7,
             phkResulta);
    }
    else
    {
      v8 = v13[0];
      v13[0] = 0LL;
      RegistryPropertyStore2 = MMDeviceCreateRegistryPropertyStore2(v8, a3);
      v6 = RegistryPropertyStore2;
      if ( RegistryPropertyStore2 >= 0 )
        v6 = 0;
      else
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x48,
          (unsigned int)"avcore\\audiocore\\server\\lib\\audioengineutil\\effectpackutil.cpp",
          (const char *)(unsigned int)RegistryPropertyStore2,
          phkResulta);
    }
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>>(v13);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x43,
      (unsigned int)"avcore\\audiocore\\server\\lib\\audioengineutil\\effectpackutil.cpp",
      (const char *)(unsigned int)v5,
      phkResult);
  }
  return v6;
}
