/*
 * XREFs of ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAXP6APEAXPEAX@Z$1?LocalFree@@YAPEAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1801BAD18
 * Callers:
 *     ?RuntimeClassInitialize@UndockedSearchAppExperienceManager@@QEAAJPEAUIServiceProvider@@AEBV?$ComPtr@VIMiniSearch@@@WRL@Microsoft@@AEBUViewCoordinator@Shell@UI@WindowsUdk@winrt@@V?$unique_ptr@VIUndockedSearchAppExperienceManagerConfig@@U?$default_delete@VIUndockedSearchAppExperienceManagerConfig@@@wistd@@@wistd@@V?$unique_ptr@VISearchAppPositioner@@U?$default_delete@VISearchAppPositioner@@@wistd@@@wistd@@4V?$unique_ptr@VISearchAppActivator@@U?$default_delete@VISearchAppActivator@@@wistd@@@wistd@@@Z @ 0x1801716F8 (-RuntimeClassInitialize@UndockedSearchAppExperienceManager@@QEAAJPEAUIServiceProvider@@AEBV-$Com.c)
 *     _SearchSettings::SearchSettingsHelper::AddAceToKeyRecursively_::_1_::dtor$5 @ 0x1801EA20F (_SearchSettings--SearchSettingsHelper--AddAceToKeyRecursively_--_1_--dtor$5.c)
 *     _CapabilityHelper::CreateSecurityAttributesForUWPCapability_::_1_::dtor$8 @ 0x1802BB55D (_CapabilityHelper--CreateSecurityAttributesForUWPCapability_--_1_--dtor$8.c)
 *     _StartDocked::PrecreateStartMenuConfigRegKey_::_1_::dtor$0 @ 0x1802C683B (_StartDocked--PrecreateStartMenuConfigRegKey_--_1_--dtor$0.c)
 *     _CapabilityHelper::CreateSecurityAttributesForUWPCapability_::_1_::dtor$8_0 @ 0x180710D0A (_CapabilityHelper--CreateSecurityAttributesForUWPCapability_--_1_--dtor$8_0.c)
 *     _winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel::SetIsImmersiveRemoteSession_::_1_::dtor$1 @ 0x180718B99 (_winrt--Windows--Internal--Shell--factory_implementation--RemoteSystemDataModel--Se_ea_180718B99.c)
 * Callees:
 *     <none>
 */

HLOCAL __fastcall wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<void *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<void *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>>(
        void **a1)
{
  void *v1; // rcx
  HLOCAL result; // rax

  v1 = *a1;
  if ( v1 )
    return LocalFree(v1);
  return result;
}
