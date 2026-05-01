/*
 * XREFs of ?AddAceToKeyRecursively@SearchSettingsHelper@SearchSettings@@CAJPEBG0PEAU_EXPLICIT_ACCESS_W@@@Z @ 0x1801E9FAC
 * Callers:
 *     ?CreateKeyAndSetSecurityDescriptorRecursively@SearchSettingsHelper@SearchSettings@@SAJPEBG@Z @ 0x1801EA9FC (-CreateKeyAndSetSecurityDescriptorRecursively@SearchSettingsHelper@SearchSettings@@SAJPEBG@Z.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800C43CC (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUHKEY__@@@Z @ 0x1800C4F00 (-reset@-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@@YAJ0@ZU-$inte.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x1800C4F5C (--1-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@@YAJ0@ZU-$integral.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6APEAXPEAX@Z$1?LocalFree@@YAPEAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1801B84A0 (-reset@-$unique_storage@U-$resource_policy@PEAXP6APEAXPEAX@Z$1-LocalFree@@YAPEAX0@ZU-$integral_c.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6APEAXPEAX@Z$1?LocalFree@@YAPEAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1801BAD2C (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6APEAXPEAX@Z$1-LocalFree@@YAPEAX0@ZU.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ??$GetSecurityInfoSafe@UGetSecurityInfoSafeDefaultLogger@SecurityHelper@@@SecurityHelper@@YAKPEAXW4_SE_OBJECT_TYPE@@KPEAPEAX2PEAPEAU_ACL@@32@Z @ 0x1801E5F6C (--$GetSecurityInfoSafe@UGetSecurityInfoSafeDefaultLogger@SecurityHelper@@@SecurityHelper@@YAKPEA.c)
 *     ??1?$out_param_ptr_t@PEAPEAU_ACL@@V?$unique_ptr@U_ACL@@U?$function_deleter@P6APEAXPEAX@Z$1?LocalFree@@YAPEAX0@Z@wil@@@wistd@@@details@wil@@QEAA@XZ @ 0x1801E89E0 (--1-$out_param_ptr_t@PEAPEAU_ACL@@V-$unique_ptr@U_ACL@@U-$function_deleter@P6APEAXPEAX@Z$1-Local.c)
 *     ?ReplaceDescendantPermissionsWithInherited@SearchSettingsHelper@SearchSettings@@CAJPEAUHKEY__@@@Z @ 0x1801EE6A8 (-ReplaceDescendantPermissionsWithInherited@SearchSettingsHelper@SearchSettings@@CAJPEAUHKEY__@@@.c)
 *     ?reset@?$unique_ptr@U_ACL@@U?$function_deleter@P6APEAXPEAX@Z$1?LocalFree@@YAPEAX0@Z@wil@@@wistd@@QEAAXPEAU_ACL@@@Z @ 0x1801F142C (-reset@-$unique_ptr@U_ACL@@U-$function_deleter@P6APEAXPEAX@Z$1-LocalFree@@YAPEAX0@Z@wil@@@wistd@.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x180393038 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall SearchSettings::SearchSettingsHelper::AddAceToKeyRecursively(
        LPCWSTR lpSubKey,
        const unsigned __int16 *a2,
        struct _EXPLICIT_ACCESS_W *a3)
{
  unsigned int v5; // eax
  unsigned int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  DWORD SecurityInfoSafeDefault; // eax
  DWORD v11; // ebx
  const char *v12; // r9
  __int64 v13; // rdx
  DWORD v14; // eax
  int v15; // eax
  unsigned int phkResult; // [rsp+20h] [rbp-49h]
  unsigned int phkResulta; // [rsp+20h] [rbp-49h]
  int lpSecurityAttributes; // [rsp+30h] [rbp-39h]
  HKEY v20; // [rsp+50h] [rbp-19h] BYREF
  PACL pDacl; // [rsp+58h] [rbp-11h] BYREF
  PSECURITY_DESCRIPTOR v22; // [rsp+60h] [rbp-9h] BYREF
  PACL OldAcl; // [rsp+68h] [rbp-1h] BYREF
  PACL *p_pDacl; // [rsp+70h] [rbp+7h] BYREF
  PACL NewAcl; // [rsp+78h] [rbp+Fh] BYREF
  char v26; // [rsp+80h] [rbp+17h]
  __int64 v27; // [rsp+88h] [rbp+1Fh] BYREF
  __m128i si128; // [rsp+98h] [rbp+2Fh]
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]

  v27 = 0LL;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  v20 = 0LL;
  wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::reset(
    &v20,
    0LL);
  v5 = RegOpenKeyExW(HKEY_CURRENT_USER, lpSubKey, 0, 0x3001Fu, &v20);
  if ( v5 - 2 <= 1 || v5 == 1168 )
  {
    wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::reset(
      &v20,
      0LL);
    v5 = RegCreateKeyExW(HKEY_CURRENT_USER, lpSubKey, 0, 0LL, 0, 0x60000u, 0LL, &v20, 0LL);
  }
  if ( !v5 )
  {
    v22 = 0LL;
    OldAcl = 0LL;
    wil::details::unique_storage<wil::details::resource_policy<void *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::reset(
      &v22,
      0LL);
    SecurityInfoSafeDefault = SecurityHelper::GetSecurityInfoSafe<SecurityHelper::GetSecurityInfoSafeDefaultLogger>(
                                v20,
                                v7,
                                v8,
                                v9,
                                phkResult,
                                &OldAcl,
                                lpSecurityAttributes,
                                &v22);
    if ( SecurityInfoSafeDefault )
    {
      v6 = wil::details::in1diag3::Return_Win32(
             retaddr,
             (void *)0x360,
             (unsigned int)"shellcommon\\internal\\shell\\inc\\Search\\SearchSettingsHelper.h",
             (const char *)SecurityInfoSafeDefault,
             phkResulta);
LABEL_17:
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>(&v22);
      goto LABEL_18;
    }
    pDacl = 0LL;
    p_pDacl = &pDacl;
    NewAcl = 0LL;
    v26 = 1;
    v11 = SetEntriesInAclW(1u, a3, OldAcl, &NewAcl);
    wil::details::out_param_ptr_t<_ACL * *,wistd::unique_ptr<_ACL,wil::function_deleter<void * (*)(void *),&void * LocalFree(void *)>>>::~out_param_ptr_t<_ACL * *,wistd::unique_ptr<_ACL,wil::function_deleter<void * (*)(void *),&void * LocalFree(void *)>>>((__int64)&p_pDacl);
    if ( v11 )
    {
      v12 = (const char *)v11;
      v13 = 869LL;
    }
    else
    {
      v14 = SetSecurityInfo(v20, SE_REGISTRY_KEY, 4u, 0LL, 0LL, pDacl, 0LL);
      if ( !v14 )
      {
        v15 = SearchSettings::SearchSettingsHelper::ReplaceDescendantPermissionsWithInherited(v20);
        v6 = v15;
        if ( v15 >= 0 )
          v6 = 0;
        else
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x36D,
            (int)"shellcommon\\internal\\shell\\inc\\Search\\SearchSettingsHelper.h",
            (const char *)(unsigned int)v15);
        goto LABEL_16;
      }
      v12 = (const char *)v14;
      v13 = 872LL;
    }
    v6 = wil::details::in1diag3::Return_Win32(
           retaddr,
           (void *)v13,
           (unsigned int)"shellcommon\\internal\\shell\\inc\\Search\\SearchSettingsHelper.h",
           v12,
           phkResulta);
LABEL_16:
    wistd::unique_ptr<_ACL,wil::function_deleter<void * (*)(void *),&void * LocalFree(void *)>>::reset(&pDacl, 0LL);
    goto LABEL_17;
  }
  v6 = wil::details::in1diag3::Return_Win32(
         retaddr,
         (void *)0x35B,
         (unsigned int)"shellcommon\\internal\\shell\\inc\\Search\\SearchSettingsHelper.h",
         (const char *)v5,
         phkResult);
LABEL_18:
  wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>(&v20);
  std::wstring::_Tidy_deallocate((__int64)&v27);
  return v6;
}
