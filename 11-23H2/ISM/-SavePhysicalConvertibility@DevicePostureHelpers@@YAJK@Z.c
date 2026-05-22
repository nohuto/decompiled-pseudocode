/*
 * XREFs of ?SavePhysicalConvertibility@DevicePostureHelpers@@YAJK@Z @ 0x18005D3E8
 * Callers:
 *     ?IsDeviceConvertible@DevicePostureHelpers@@YA_NXZ @ 0x18005D010 (-IsDeviceConvertible@DevicePostureHelpers@@YA_NXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C9C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x180033928 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     __security_check_cookie @ 0x180056730 (__security_check_cookie.c)
 *     ??$get_token_information_nothrow@U_TOKEN_USER@@$0A@@wil@@YAJAEAV?$unique_ptr@U_TOKEN_USER@@U?$default_delete@U_TOKEN_USER@@@wistd@@@wistd@@PEAX@Z @ 0x18005C214 (--$get_token_information_nothrow@U_TOKEN_USER@@$0A@@wil@@YAJAEAV-$unique_ptr@U_TOKEN_USER@@U-$de.c)
 *     ??1?$out_param_t@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?DestroyPrivateObjectSecurity@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@@wil@@@details@wil@@QEAA@XZ @ 0x18005C4A0 (--1-$out_param_t@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@_E$1-DestroyP.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?DestroyPrivateObjectSecurity@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18005C544 (--1-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@_E$1-DestroyPrivateObjectSecurity@details@wi.c)
 *     ?reset@?$unique_ptr@U_TOKEN_USER@@U?$default_delete@U_TOKEN_USER@@@wistd@@@wistd@@QEAAXPEAU_TOKEN_USER@@@Z @ 0x18005D868 (-reset@-$unique_ptr@U_TOKEN_USER@@U-$default_delete@U_TOKEN_USER@@@wistd@@@wistd@@QEAAXPEAU_TOKE.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18009509C (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6APEAXPEAX@Z$1?LocalFree@@YAPEAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1800B98F8 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6APEAXPEAX@Z$1-LocalFree@@YAPEAX0@ZU.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x1800DAE94 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18011DD10 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@@Y.c)
 */

__int64 __fastcall DevicePostureHelpers::SavePhysicalConvertibility(DevicePostureHelpers *this, __int64 a2)
{
  int token_information; // eax
  unsigned int LastError; // ebx
  const char *v4; // r9
  int v5; // eax
  BOOL v6; // ebx
  const char *v7; // r9
  unsigned int v8; // eax
  __int64 v9; // rdx
  unsigned int lpData; // [rsp+20h] [rbp-E0h]
  LPWSTR StringSid; // [rsp+50h] [rbp-B0h] BYREF
  PSECURITY_DESCRIPTOR v13; // [rsp+58h] [rbp-A8h] BYREF
  HKEY hKey; // [rsp+60h] [rbp-A0h] BYREF
  DWORD dwDisposition; // [rsp+68h] [rbp-98h] BYREF
  BYTE Data[8]; // [rsp+70h] [rbp-90h] BYREF
  PSID *v17; // [rsp+78h] [rbp-88h] BYREF
  void **v18; // [rsp+80h] [rbp-80h] BYREF
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+88h] [rbp-78h] BYREF
  char v20; // [rsp+90h] [rbp-70h]
  struct _SECURITY_ATTRIBUTES SecurityAttributes; // [rsp+98h] [rbp-68h] BYREF
  WCHAR StringSecurityDescriptor[1024]; // [rsp+B0h] [rbp-50h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+8C8h] [rbp+7C8h]

  v17 = 0LL;
  *(_DWORD *)Data = (_DWORD)this;
  token_information = wil::get_token_information_nothrow<_TOKEN_USER,0>((__int64)&v17, a2);
  LastError = token_information;
  if ( token_information >= 0 )
  {
    StringSid = 0LL;
    if ( ConvertSidToStringSidW(*v17, &StringSid) )
    {
      v5 = StringCchPrintfW(
             StringSecurityDescriptor,
             1024LL,
             L"D:AI(A;CIIO;GR;;;AC)(A;CI;KR;;;AC)(A;CI;KR;;;S-1-15-3-1024-1065365936-1281604716-3511738428-1654721687-4327"
              "34479-3232135806-4053264122-3456934681)(A;OICIID;KR;;;RC)(A;OICIID;KA;;;%s)(A;OICIID;KA;;;SY)(A;OICIID;KA;;;BA)",
             StringSid);
      LastError = v5;
      if ( v5 >= 0 )
      {
        v13 = 0LL;
        SecurityDescriptor = 0LL;
        v18 = &v13;
        v20 = 1;
        v6 = ConvertStringSecurityDescriptorToSecurityDescriptorW(
               StringSecurityDescriptor,
               1u,
               &SecurityDescriptor,
               0LL);
        __1__out_param_t_V__unique_any_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_DestroyPrivateObjectSecurity_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil___wil___details_wil__QEAA_XZ(&v18);
        if ( v6 )
        {
          SecurityAttributes.bInheritHandle = 0;
          dwDisposition = 0;
          hKey = 0LL;
          SecurityAttributes.lpSecurityDescriptor = v13;
          SecurityAttributes.nLength = 24;
          v8 = RegCreateKeyExW(
                 HKEY_CURRENT_USER,
                 L"SOFTWARE\\Microsoft\\TabletTip\\ConvertibleChassis",
                 0,
                 0LL,
                 0,
                 0xF003Fu,
                 &SecurityAttributes,
                 &hKey,
                 &dwDisposition);
          if ( v8 )
          {
            v9 = 149LL;
          }
          else
          {
            v8 = RegSetValueExW(hKey, L"ConvertibleChassis", 0, 4u, Data, 4u);
            if ( !v8 )
            {
              wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>>(&hKey);
              __1__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_DestroyPrivateObjectSecurity_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__IEAA_XZ(&v13);
              wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>(&StringSid);
              LastError = 0;
              goto LABEL_17;
            }
            v9 = 156LL;
          }
          LastError = wil::details::in1diag3::Return_Win32(
                        retaddr,
                        (void *)v9,
                        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\InputHost\\Components\\DevicePosture\\li"
                                      "b\\DevicePostureHelpers.h",
                        (const char *)v8,
                        lpData);
          wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>>(&hKey);
        }
        else
        {
          LastError = wil::details::in1diag3::Return_GetLastError(
                        retaddr,
                        (void *)0x83,
                        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\InputHost\\Components\\DevicePosture\\li"
                                      "b\\DevicePostureHelpers.h",
                        v7);
        }
        __1__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_DestroyPrivateObjectSecurity_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__IEAA_XZ(&v13);
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x7F,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\InputHost\\Components\\DevicePosture\\lib\\DevicePostureHelpers.h",
          (const char *)(unsigned int)v5);
      }
    }
    else
    {
      LastError = wil::details::in1diag3::Return_GetLastError(
                    retaddr,
                    (void *)0x76,
                    (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\InputHost\\Components\\DevicePosture\\lib\\D"
                                  "evicePostureHelpers.h",
                    v4);
    }
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>(&StringSid);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x74,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\InputHost\\Components\\DevicePosture\\lib\\DevicePostureHelpers.h",
      (const char *)(unsigned int)token_information);
  }
LABEL_17:
  wistd::unique_ptr<_TOKEN_USER,wistd::default_delete<_TOKEN_USER>>::reset(&v17, 0LL);
  return LastError;
}
