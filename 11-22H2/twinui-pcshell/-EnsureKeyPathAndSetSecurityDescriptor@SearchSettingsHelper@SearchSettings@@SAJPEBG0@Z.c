/*
 * XREFs of ?EnsureKeyPathAndSetSecurityDescriptor@SearchSettingsHelper@SearchSettings@@SAJPEBG0@Z @ 0x1801EB018
 * Callers:
 *     ?CreateKeyAndSetSecurityDescriptorRecursively@SearchSettingsHelper@SearchSettings@@SAJPEBG@Z @ 0x1801EA9FC (-CreateKeyAndSetSecurityDescriptorRecursively@SearchSettingsHelper@SearchSettings@@SAJPEBG@Z.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800C43CC (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUHKEY__@@@Z @ 0x1800C4F00 (-reset@-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@@YAJ0@ZU-$inte.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x1800C4F5C (--1-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@@YAJ0@ZU-$integral.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1801322B8 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6APEAXPEAX@Z$1?LocalFree@@YAPEAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1801B84A0 (-reset@-$unique_storage@U-$resource_policy@PEAXP6APEAXPEAX@Z$1-LocalFree@@YAPEAX0@ZU-$integral_c.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6APEAXPEAX@Z$1?LocalFree@@YAPEAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1801BAD2C (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6APEAXPEAX@Z$1-LocalFree@@YAPEAX0@ZU.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ??$GetSecurityInfoSafe@UGetSecurityInfoSafeDefaultLogger@SecurityHelper@@@SecurityHelper@@YAKPEAXW4_SE_OBJECT_TYPE@@KPEAPEAX2PEAPEAU_ACL@@32@Z @ 0x1801E5F6C (--$GetSecurityInfoSafe@UGetSecurityInfoSafeDefaultLogger@SecurityHelper@@@SecurityHelper@@YAKPEA.c)
 *     ??1?$out_param_ptr_t@PEAPEAU_ACL@@V?$unique_ptr@U_ACL@@U?$function_deleter@P6APEAXPEAX@Z$1?LocalFree@@YAPEAX0@Z@wil@@@wistd@@@details@wil@@QEAA@XZ @ 0x1801E89E0 (--1-$out_param_ptr_t@PEAPEAU_ACL@@V-$unique_ptr@U_ACL@@U-$function_deleter@P6APEAXPEAX@Z$1-Local.c)
 *     ??1?$out_param_ptr_t@PEAPEAXV?$unique_ptr@U_SID@@U?$function_deleter@P6APEAXPEAX@Z$1?LocalFree@@YAPEAX0@Z@wil@@@wistd@@@details@wil@@QEAA@XZ @ 0x1801E8A04 (--1-$out_param_ptr_t@PEAPEAXV-$unique_ptr@U_SID@@U-$function_deleter@P6APEAXPEAX@Z$1-LocalFree@@.c)
 *     ?reset@?$unique_ptr@U_ACL@@U?$function_deleter@P6APEAXPEAX@Z$1?LocalFree@@YAPEAX0@Z@wil@@@wistd@@QEAAXPEAU_ACL@@@Z @ 0x1801F142C (-reset@-$unique_ptr@U_ACL@@U-$function_deleter@P6APEAXPEAX@Z$1-LocalFree@@YAPEAX0@Z@wil@@@wistd@.c)
 *     ?reset@?$unique_ptr@U_SID@@U?$function_deleter@P6APEAXPEAX@Z$1?LocalFree@@YAPEAX0@Z@wil@@@wistd@@QEAAXPEAU_SID@@@Z @ 0x1801F1458 (-reset@-$unique_ptr@U_SID@@U-$function_deleter@P6APEAXPEAX@Z$1-LocalFree@@YAPEAX0@Z@wil@@@wistd@.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x180393038 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall SearchSettings::SearchSettingsHelper::EnsureKeyPathAndSetSecurityDescriptor(
        const unsigned __int16 *a1,
        const unsigned __int16 *a2)
{
  unsigned int LastError; // edi
  unsigned int v3; // eax
  unsigned __int64 v4; // r9
  BOOL v5; // ebx
  const char *v6; // r9
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  DWORD SecurityInfoSafeDefault; // eax
  DWORD v11; // ebx
  const char *v12; // r9
  __int64 v13; // rdx
  DWORD v14; // eax
  unsigned int phkResult; // [rsp+20h] [rbp-79h]
  unsigned int phkResulta; // [rsp+20h] [rbp-79h]
  int lpSecurityAttributes; // [rsp+30h] [rbp-69h]
  HKEY v19; // [rsp+50h] [rbp-49h] BYREF
  PACL pDacl; // [rsp+58h] [rbp-41h] BYREF
  PSECURITY_DESCRIPTOR v21; // [rsp+60h] [rbp-39h] BYREF
  PSID pSid; // [rsp+68h] [rbp-31h] BYREF
  void *p_pSid; // [rsp+70h] [rbp-29h] BYREF
  PSID Sid; // [rsp+78h] [rbp-21h] BYREF
  char v25; // [rsp+80h] [rbp-19h]
  PACL OldAcl; // [rsp+88h] [rbp-11h] BYREF
  _EXPLICIT_ACCESS_W pListOfExplicitEntries; // [rsp+90h] [rbp-9h] BYREF
  __int64 v28; // [rsp+C0h] [rbp+27h] BYREF
  __m128i si128; // [rsp+D0h] [rbp+37h]
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+5Fh]

  LastError = 0;
  v28 = 0LL;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  v19 = 0LL;
  wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::reset(
    &v19,
    0LL);
  v3 = RegOpenKeyExW(HKEY_CURRENT_USER, L"Software\\Microsoft\\Windows\\CurrentVersion\\Search", 0, 0x3001Fu, &v19);
  v4 = v3;
  if ( v3 - 2 <= 1 || v3 == 1168 )
  {
    wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::reset(
      &v19,
      0LL);
    v4 = (unsigned int)RegCreateKeyExW(
                         HKEY_CURRENT_USER,
                         L"Software\\Microsoft\\Windows\\CurrentVersion\\Search",
                         0,
                         0LL,
                         0,
                         0x60000u,
                         0LL,
                         &v19,
                         0LL);
  }
  if ( !(_DWORD)v4 )
  {
    pSid = 0LL;
    p_pSid = &pSid;
    Sid = 0LL;
    v25 = 1;
    v5 = ConvertStringSidToSidW(
           L"S-1-15-3-1024-1086922356-207614091-3724853071-841836187-4018695103-34218837-3164163255-155871754",
           &Sid);
    wil::details::out_param_ptr_t<void * *,wistd::unique_ptr<_SID,wil::function_deleter<void * (*)(void *),&void * LocalFree(void *)>>>::~out_param_ptr_t<void * *,wistd::unique_ptr<_SID,wil::function_deleter<void * (*)(void *),&void * LocalFree(void *)>>>((__int64)&p_pSid);
    if ( !v5 )
    {
      LastError = wil::details::in1diag3::Return_GetLastError(
                    retaddr,
                    (void *)0x95,
                    (int)"shellcommon\\internal\\shell\\inc\\Search\\SearchSettingsHelper.h",
                    v6);
LABEL_17:
      wistd::unique_ptr<_SID,wil::function_deleter<void * (*)(void *),&void * LocalFree(void *)>>::reset(&pSid, 0LL);
      goto LABEL_18;
    }
    memset(&pListOfExplicitEntries.grfInheritance + 1, 0, 36);
    pListOfExplicitEntries.grfAccessPermissions = 196639;
    pListOfExplicitEntries.grfAccessMode = GRANT_ACCESS;
    pListOfExplicitEntries.grfInheritance = 2;
    BuildTrusteeWithSidW(&pListOfExplicitEntries.Trustee, pSid);
    v21 = 0LL;
    OldAcl = 0LL;
    wil::details::unique_storage<wil::details::resource_policy<void *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::reset(
      &v21,
      0LL);
    SecurityInfoSafeDefault = SecurityHelper::GetSecurityInfoSafe<SecurityHelper::GetSecurityInfoSafeDefaultLogger>(
                                v19,
                                v7,
                                v8,
                                v9,
                                phkResult,
                                &OldAcl,
                                lpSecurityAttributes,
                                &v21);
    if ( SecurityInfoSafeDefault )
    {
      LastError = wil::details::in1diag3::Return_Win32(
                    retaddr,
                    (void *)0x9F,
                    (unsigned int)"shellcommon\\internal\\shell\\inc\\Search\\SearchSettingsHelper.h",
                    (const char *)SecurityInfoSafeDefault,
                    phkResulta);
LABEL_16:
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>(&v21);
      goto LABEL_17;
    }
    pDacl = 0LL;
    p_pSid = &pDacl;
    Sid = 0LL;
    v25 = 1;
    v11 = SetEntriesInAclW(1u, &pListOfExplicitEntries, OldAcl, (PACL *)&Sid);
    wil::details::out_param_ptr_t<_ACL * *,wistd::unique_ptr<_ACL,wil::function_deleter<void * (*)(void *),&void * LocalFree(void *)>>>::~out_param_ptr_t<_ACL * *,wistd::unique_ptr<_ACL,wil::function_deleter<void * (*)(void *),&void * LocalFree(void *)>>>((__int64)&p_pSid);
    if ( v11 )
    {
      v12 = (const char *)v11;
      v13 = 164LL;
    }
    else
    {
      v14 = SetSecurityInfo(v19, SE_REGISTRY_KEY, 4u, 0LL, 0LL, pDacl, 0LL);
      if ( !v14 )
      {
LABEL_15:
        wistd::unique_ptr<_ACL,wil::function_deleter<void * (*)(void *),&void * LocalFree(void *)>>::reset(&pDacl, 0LL);
        goto LABEL_16;
      }
      v12 = (const char *)v14;
      v13 = 167LL;
    }
    LastError = wil::details::in1diag3::Return_Win32(
                  retaddr,
                  (void *)v13,
                  (unsigned int)"shellcommon\\internal\\shell\\inc\\Search\\SearchSettingsHelper.h",
                  v12,
                  phkResulta);
    goto LABEL_15;
  }
  LastError = wil::details::in1diag3::Return_Win32(
                retaddr,
                (void *)0x91,
                (unsigned int)"shellcommon\\internal\\shell\\inc\\Search\\SearchSettingsHelper.h",
                (const char *)v4,
                phkResult);
LABEL_18:
  wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>(&v19);
  std::wstring::_Tidy_deallocate((__int64)&v28);
  return LastError;
}
