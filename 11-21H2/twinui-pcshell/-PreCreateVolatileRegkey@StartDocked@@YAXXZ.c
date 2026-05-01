/*
 * XREFs of ?PreCreateVolatileRegkey@StartDocked@@YAXXZ @ 0x1800657CC
 * Callers:
 *     ??0XamlLauncher@@QEAA@XZ @ 0x1800650F8 (--0XamlLauncher@@QEAA@XZ.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAGP6APEAXPEAX@Z$1?LocalFree@@YAPEAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x180065868 (--1-$unique_storage@U-$resource_policy@PEAGP6APEAXPEAX@Z$1-LocalFree@@YAPEAX0@ZU-$integral_const.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18008EA60 (--1-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@@YAJ0@ZU-$integral.c)
 *     CapabilityHelper::CreateSecurityAttributesForUWPCapability @ 0x1800E57D0 (CapabilityHelper--CreateSecurityAttributesForUWPCapability.c)
 *     ?_Throw_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x1803B14F0 (-_Throw_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall StartDocked::PreCreateVolatileRegkey(StartDocked *this)
{
  unsigned int v1; // eax
  DWORD dwOptions; // [rsp+20h] [rbp-58h]
  _BYTE v3[8]; // [rsp+50h] [rbp-28h] BYREF
  struct _SECURITY_ATTRIBUTES SecurityAttributes; // [rsp+58h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  HKEY phkResult; // [rsp+80h] [rbp+8h] BYREF

  CapabilityHelper::CreateSecurityAttributesForUWPCapability(v3);
  phkResult = 0LL;
  v1 = RegCreateKeyExW(
         HKEY_CURRENT_USER,
         L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Explorer\\Advanced\\StartMode",
         0,
         0LL,
         1u,
         0xF003Fu,
         &SecurityAttributes,
         &phkResult,
         0LL);
  if ( v1 )
    wil::details::in1diag3::_Throw_Win32(
      retaddr,
      (void *)0x1C,
      (unsigned int)"internal\\shellcommonshell\\private\\inc\\StartDockedHelpers.h",
      (const char *)v1,
      dwOptions);
  wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>(&phkResult);
  wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<unsigned short *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>(v3);
}
