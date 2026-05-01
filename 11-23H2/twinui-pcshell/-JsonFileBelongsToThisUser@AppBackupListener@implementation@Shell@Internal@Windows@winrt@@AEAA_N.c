/*
 * XREFs of ?JsonFileBelongsToThisUser@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAA_NPEBG@Z @ 0x18025AA60
 * Callers:
 *     ?BackupAppCompatInfoOnStart@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x1806F121C (-BackupAppCompatInfoOnStart@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAX.c)
 *     ?CompatFolderChangeCallback@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBW4FolderChangeEvent@wil@@PEBG@Z @ 0x1806F24EC (-CompatFolderChangeCallback@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAX.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180098C40 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800C43CC (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??$get_token_information_nothrow@U_TOKEN_USER@@$0A@@wil@@YAJAEAV?$unique_ptr@U_TOKEN_USER@@U?$default_delete@U_TOKEN_USER@@@wistd@@@wistd@@PEAX@Z @ 0x1800ECBCC (--$get_token_information_nothrow@U_TOKEN_USER@@$0A@@wil@@YAJAEAV-$unique_ptr@U_TOKEN_USER@@U-$de.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6APEAXPEAX@Z$1?LocalFree@@YAPEAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x1801ABC4C (-reset@-$unique_storage@U-$resource_policy@PEAGP6APEAXPEAX@Z$1-LocalFree@@YAPEAX0@ZU-$integral_c.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6APEAXPEAX@Z$1?LocalFree@@YAPEAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1801BAD2C (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6APEAXPEAX@Z$1-LocalFree@@YAPEAX0@ZU.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     ?_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1801D9368 (-_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?GetCompatJsonFileNameForThisUser@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@XZ @ 0x180259E80 (-GetCompatJsonFileNameForThisUser@AppBackupListener@implementation@Shell@Internal@Windows@winrt@.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_CommercialCloudAppBackup_AppCompatBackupOnStartFix@@@details@wil@@QEAA_NXZ @ 0x18025C100 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_CommercialCloudAppBackup_AppCompa.c)
 *     ??$?HGU?$char_traits@G@std@@V?$allocator@G@1@@std@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@AEBV10@QEBG@Z @ 0x18051DA28 (--$-HGU-$char_traits@G@std@@V-$allocator@G@1@@std@@YA-AV-$basic_string@GU-$char_tra_ea_18051DA28.c)
 */

// Hidden C++ exception states: #wind=4
bool __fastcall winrt::Windows::Internal::Shell::implementation::AppBackupListener::JsonFileBelongsToThisUser(
        winrt::Windows::Internal::Shell::implementation::AppBackupListener *this,
        const unsigned __int16 *a2)
{
  const WCHAR *CompatJsonFileNameForThisUser; // rax
  bool v5; // bl
  int token_information; // eax
  void *v8; // rbx
  const char *v9; // r9
  __int64 v10; // rax
  bool v11; // di
  BOOL bIgnoreCase; // [rsp+20h] [rbp-19h]
  LPWSTR StringSid; // [rsp+30h] [rbp-9h] BYREF
  int v14; // [rsp+38h] [rbp-1h]
  void *v15; // [rsp+40h] [rbp+7h] BYREF
  _QWORD v16[4]; // [rsp+48h] [rbp+Fh] BYREF
  _BYTE v17[32]; // [rsp+68h] [rbp+2Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+5Fh]

  v14 = 0;
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_CommercialCloudAppBackup_AppCompatBackupOnStartFix>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_CommercialCloudAppBackup_AppCompatBackupOnStartFix>::GetImpl'::`2'::impl) )
  {
    CompatJsonFileNameForThisUser = (const WCHAR *)winrt::Windows::Internal::Shell::implementation::AppBackupListener::GetCompatJsonFileNameForThisUser(
                                                     (__int64)this,
                                                     v16);
    if ( *((_QWORD *)CompatJsonFileNameForThisUser + 3) >= 8uLL )
      CompatJsonFileNameForThisUser = *(const WCHAR **)CompatJsonFileNameForThisUser;
    v5 = CompareStringOrdinal(CompatJsonFileNameForThisUser, -1, a2, -1, 1) == 2;
    std::wstring::_Tidy_deallocate((__int64)v16);
    return v5;
  }
  else
  {
    v15 = 0LL;
    v14 = 4;
    token_information = wil::get_token_information_nothrow<_TOKEN_USER,0>(&v15, 0LL);
    if ( token_information < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x1815,
        (int)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\result_macros.h",
        (const char *)(unsigned int)token_information,
        bIgnoreCase);
    StringSid = 0LL;
    wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
      (void **)&StringSid,
      0LL);
    v8 = v15;
    if ( !ConvertSidToStringSidW(*(PSID *)v15, &StringSid) )
      wil::details::in1diag3::_Throw_GetLastError(
        retaddr,
        (void *)0x2D0,
        (int)"pcshell\\twinui\\appbackuplistener\\lib\\appbackuplistener.cpp",
        v9);
    std::wstring::wstring(v16, StringSid);
    v10 = std::operator+<unsigned short>(v17);
    if ( *(_QWORD *)(v10 + 24) >= 8uLL )
      v10 = *(_QWORD *)v10;
    v11 = CompareStringOrdinal((LPCWCH)v10, -1, a2, -1, 1) == 2;
    std::wstring::_Tidy_deallocate((__int64)v17);
    std::wstring::_Tidy_deallocate((__int64)v16);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>((void **)&StringSid);
    operator delete(v8);
    return v11;
  }
}
