/*
 * XREFs of ?CreateKeyAndSetSecurityDescriptorRecursively@SearchSettingsHelper@SearchSettings@@SAJPEBG@Z @ 0x1801EA9FC
 * Callers:
 *     ?AuditWebSearchExtensions@UndockedSearchAppExperienceManager@@CAXXZ @ 0x1801EA284 (-AuditWebSearchExtensions@UndockedSearchAppExperienceManager@@CAXXZ.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1801322B8 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ??1?$out_param_ptr_t@PEAPEAXV?$unique_ptr@U_SID@@U?$function_deleter@P6APEAXPEAX@Z$1?LocalFree@@YAPEAX0@Z@wil@@@wistd@@@details@wil@@QEAA@XZ @ 0x1801E8A04 (--1-$out_param_ptr_t@PEAPEAXV-$unique_ptr@U_SID@@U-$function_deleter@P6APEAXPEAX@Z$1-LocalFree@@.c)
 *     ?AddAceToKeyRecursively@SearchSettingsHelper@SearchSettings@@CAJPEBG0PEAU_EXPLICIT_ACCESS_W@@@Z @ 0x1801E9FAC (-AddAceToKeyRecursively@SearchSettingsHelper@SearchSettings@@CAJPEBG0PEAU_EXPLICIT_ACCESS_W@@@Z.c)
 *     ?EnsureKeyPathAndSetSecurityDescriptor@SearchSettingsHelper@SearchSettings@@SAJPEBG0@Z @ 0x1801EB018 (-EnsureKeyPathAndSetSecurityDescriptor@SearchSettingsHelper@SearchSettings@@SAJPEBG0@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_40979072@@@details@wil@@QEAA_NXZ @ 0x1801F03DC (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_40979072@@@details@wil@@QEAA_NXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_55370801@@@details@wil@@QEAA_NXZ @ 0x1801F0554 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_55370801@@@details@wil@@QEAA_NXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_56097011@@@details@wil@@QEAA_NXZ @ 0x1801F0590 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_56097011@@@details@wil@@QEAA_NXZ.c)
 *     ?reset@?$unique_ptr@U_SID@@U?$function_deleter@P6APEAXPEAX@Z$1?LocalFree@@YAPEAX0@Z@wil@@@wistd@@QEAAXPEAU_SID@@@Z @ 0x1801F1458 (-reset@-$unique_ptr@U_SID@@U-$function_deleter@P6APEAXPEAX@Z$1-LocalFree@@YAPEAX0@Z@wil@@@wistd@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SearchSettings::SearchSettingsHelper::CreateKeyAndSetSecurityDescriptorRecursively(
        const unsigned __int16 *a1)
{
  BOOL v1; // ebx
  const char *v2; // r9
  unsigned int LastError; // ebx
  const unsigned __int16 *v4; // rdx
  int v5; // eax
  const unsigned __int16 *v6; // rdx
  __int64 v7; // rdx
  const unsigned __int16 *v8; // rdx
  const unsigned __int16 *v9; // rdx
  const unsigned __int16 *v10; // rdx
  const unsigned __int16 *v11; // rdx
  const unsigned __int16 *v12; // rcx
  int v13; // eax
  PSID *p_pSid; // [rsp+20h] [rbp-50h] BYREF
  PSID Sid; // [rsp+28h] [rbp-48h] BYREF
  char v17; // [rsp+30h] [rbp-40h]
  struct _EXPLICIT_ACCESS_W v18; // [rsp+38h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+8h]
  PSID pSid; // [rsp+80h] [rbp+10h] BYREF

  pSid = 0LL;
  p_pSid = &pSid;
  Sid = 0LL;
  v17 = 1;
  v1 = ConvertStringSidToSidW(
         L"S-1-15-3-1024-1086922356-207614091-3724853071-841836187-4018695103-34218837-3164163255-155871754",
         &Sid);
  wil::details::out_param_ptr_t<void * *,wistd::unique_ptr<_SID,wil::function_deleter<void * (*)(void *),&void * LocalFree(void *)>>>::~out_param_ptr_t<void * *,wistd::unique_ptr<_SID,wil::function_deleter<void * (*)(void *),&void * LocalFree(void *)>>>((__int64)&p_pSid);
  if ( !v1 )
  {
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0x5F,
                  (int)"shellcommon\\internal\\shell\\inc\\Search\\SearchSettingsHelper.h",
                  v2);
    goto LABEL_22;
  }
  memset(&v18.grfInheritance + 1, 0, 36);
  v18.grfAccessPermissions = 196639;
  v18.grfAccessMode = GRANT_ACCESS;
  v18.grfInheritance = 2;
  BuildTrusteeWithSidW(&v18.Trustee, pSid);
  v5 = SearchSettings::SearchSettingsHelper::AddAceToKeyRecursively(
         L"Software\\Microsoft\\Windows\\CurrentVersion\\SearchSettings",
         v4,
         &v18);
  LastError = v5;
  if ( v5 < 0 )
  {
    v7 = 103LL;
LABEL_18:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (int)"shellcommon\\internal\\shell\\inc\\Search\\SearchSettingsHelper.h",
      (const char *)(unsigned int)v5);
    goto LABEL_22;
  }
  v5 = SearchSettings::SearchSettingsHelper::AddAceToKeyRecursively(
         L"Software\\Microsoft\\Windows\\CurrentVersion\\SearchSettings\\Dynamic",
         v6,
         &v18);
  LastError = v5;
  if ( v5 < 0 )
  {
    v7 = 104LL;
    goto LABEL_18;
  }
  v5 = SearchSettings::SearchSettingsHelper::AddAceToKeyRecursively(
         L"Software\\Microsoft\\Windows\\CurrentVersion\\SearchSettings\\Dynamic\\Current",
         v8,
         &v18);
  LastError = v5;
  if ( v5 < 0 )
  {
    v7 = 105LL;
    goto LABEL_18;
  }
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_40979072>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_40979072>::GetImpl'::`2'::impl) )
  {
    v5 = SearchSettings::SearchSettingsHelper::AddAceToKeyRecursively(
           L"Software\\Microsoft\\Windows\\CurrentVersion\\SearchSettings\\WebSearchProviders",
           v9,
           &v18);
    LastError = v5;
    if ( v5 < 0 )
    {
      v7 = 108LL;
      goto LABEL_18;
    }
  }
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_55370801>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_55370801>::GetImpl'::`2'::impl) )
  {
    v5 = SearchSettings::SearchSettingsHelper::AddAceToKeyRecursively(
           L"Software\\Microsoft\\Windows\\CurrentVersion\\SearchSettings\\WebSearchProviders\\InstalledDates",
           v10,
           &v18);
    LastError = v5;
    if ( v5 < 0 )
    {
      v7 = 113LL;
      goto LABEL_18;
    }
  }
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_56097011>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_56097011>::GetImpl'::`2'::impl) )
  {
    v5 = SearchSettings::SearchSettingsHelper::AddAceToKeyRecursively(
           L"Software\\Microsoft\\Windows\\CurrentVersion\\SearchSettings\\WebSearchProviders\\Index",
           v11,
           &v18);
    LastError = v5;
    if ( v5 < 0 )
    {
      v7 = 118LL;
      goto LABEL_18;
    }
  }
  v13 = SearchSettings::SearchSettingsHelper::EnsureKeyPathAndSetSecurityDescriptor(v12, v11);
  if ( v13 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x79,
      (int)"shellcommon\\internal\\shell\\inc\\Search\\SearchSettingsHelper.h",
      (const char *)(unsigned int)v13);
  LastError = 0;
LABEL_22:
  wistd::unique_ptr<_SID,wil::function_deleter<void * (*)(void *),&void * LocalFree(void *)>>::reset(&pSid, 0LL);
  return LastError;
}
