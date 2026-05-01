/*
 * XREFs of ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6APEAXPEAX@Z$1?LocalFree@@YAPEAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1801BAD2C
 * Callers:
 *     ?AddAceToKeyRecursively@SearchSettingsHelper@SearchSettings@@CAJPEBG0PEAU_EXPLICIT_ACCESS_W@@@Z @ 0x1801E9FAC (-AddAceToKeyRecursively@SearchSettingsHelper@SearchSettings@@CAJPEBG0PEAU_EXPLICIT_ACCESS_W@@@Z.c)
 *     ?EnsureKeyPathAndSetSecurityDescriptor@SearchSettingsHelper@SearchSettings@@SAJPEBG0@Z @ 0x1801EB018 (-EnsureKeyPathAndSetSecurityDescriptor@SearchSettingsHelper@SearchSettings@@SAJPEBG0@Z.c)
 *     ??$str_vprintf_nothrow@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6APEAXPEAX@Z$1?LocalFree@@YAPEAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@details@wil@@YAJAEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6APEAXPEAX@Z$1?LocalFree@@YAPEAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@1@PEBGAEAPEAD@Z @ 0x1801FE1A4 (--$str_vprintf_nothrow@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6APEAXPEAX@Z$1-.c)
 *     ?GetShellConfigurationFromRegistry@@YAJPEBG0PEAK@Z @ 0x1801FF148 (-GetShellConfigurationFromRegistry@@YAJPEBG0PEAK@Z.c)
 *     ?GetCompatJsonFileNameForThisUser@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@XZ @ 0x180259E80 (-GetCompatJsonFileNameForThisUser@AppBackupListener@implementation@Shell@Internal@Windows@winrt@.c)
 *     _winrt::Windows::Internal::Shell::implementation::AppBackupListener::GetCompatJsonFileNameForThisUser_::_1_::dtor$2 @ 0x18025A00A (_winrt--Windows--Internal--Shell--implementation--AppBackupListener--GetCompatJsonF_ea_18025A00A.c)
 *     ?JsonFileBelongsToThisUser@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAA_NPEBG@Z @ 0x18025AA60 (-JsonFileBelongsToThisUser@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAA_N.c)
 *     _winrt::Windows::Internal::Shell::implementation::AppBackupListener::JsonFileBelongsToThisUser_::_1_::dtor$2 @ 0x18025AC3E (_winrt--Windows--Internal--Shell--implementation--AppBackupListener--JsonFileBelong_ea_18025AC3E.c)
 *     ??R_lambda_d8d5e2edaa6c10768996e24008ba8fd8_@@QEBAJPEBGPEAPEAG@Z @ 0x1802853F4 (--R_lambda_d8d5e2edaa6c10768996e24008ba8fd8_@@QEBAJPEBGPEAPEAG@Z.c)
 *     _KioskPositioner::LoadAssignedAccessConfiguration_::_1_::dtor$0 @ 0x1802BB4F1 (_KioskPositioner--LoadAssignedAccessConfiguration_--_1_--dtor$0.c)
 *     _CapabilityHelper::CreateSecurityAttributesForUWPCapability_::_1_::dtor$5 @ 0x1802BB54B (_CapabilityHelper--CreateSecurityAttributesForUWPCapability_--_1_--dtor$5.c)
 *     _KioskPositioner::GetUserSidString_::_1_::dtor$1 @ 0x1802BB5F6 (_KioskPositioner--GetUserSidString_--_1_--dtor$1.c)
 *     _wil::make_unique_string_wil::unique_any_t_wil::details::unique_storage_wil::details::resource_policy_unsigned_short___void___(__cdecl_)(void__)_&LocalFree_wistd::integral_constant_unsigned___int64_0__unsigned_short___unsigned_short___0_std::nullptr_t________::_1_::dtor$0 @ 0x180621D72 (_wil--make_unique_string_wil--unique_any_t_wil--details--unique_storage_wil--detail_ea_180621D72.c)
 *     _TryGetCertSubjectName_::_1_::dtor$4 @ 0x1806224BE (_TryGetCertSubjectName_--_1_--dtor$4.c)
 *     _CapabilityHelper::CreateSecurityAttributesForUWPCapability_::_1_::dtor$0 @ 0x180710CB6 (_CapabilityHelper--CreateSecurityAttributesForUWPCapability_--_1_--dtor$0.c)
 *     _CapabilityHelper::CreateSecurityAttributesForUWPCapability_::_1_::dtor$5_0 @ 0x180710CF2 (_CapabilityHelper--CreateSecurityAttributesForUWPCapability_--_1_--dtor$5_0.c)
 * Callees:
 *     <none>
 */

HLOCAL __fastcall wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>(
        void **a1)
{
  void *v1; // rcx
  HLOCAL result; // rax

  v1 = *a1;
  if ( v1 )
    return LocalFree(v1);
  return result;
}
