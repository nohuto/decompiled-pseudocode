/*
 * XREFs of ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1800D8670
 * Callers:
 *     ?GetFxClsidsFromPropertyStore@@YAJPEAUIPropertyStore@@U_tagpropertykey@@1PEBGPEAIPEAPEAU_GUID@@@Z @ 0x1800235C4 (-GetFxClsidsFromPropertyStore@@YAJPEAUIPropertyStore@@U_tagpropertykey@@1PEBGPEAIPEAPEAU_GUID@@@.c)
 *     ?create@?$registry_watcher_t@V?$unique_storage@U?$resource_policy@PEAUregistry_watcher_state@details@wil@@P6AXPEAU123@@Z$1?delete_registry_watcher_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@QEAAJPEAUHKEY__@@PEBG_N$$QEAV?$function@$$A6AXW4RegistryChangeKind@wil@@@Z@wistd@@@Z @ 0x18005B8AC (-create@-$registry_watcher_t@V-$unique_storage@U-$resource_policy@PEAUregistry_watcher_state@det.c)
 *     ?ScanForInstalledEffectPacks@EffectPackConfigurationManager@@AEAAJXZ @ 0x18005C3E0 (-ScanForInstalledEffectPacks@EffectPackConfigurationManager@@AEAAJXZ.c)
 *     _wil::registry_watcher_t_wil::details::unique_storage_wil::details::resource_policy_wil::details::registry_watcher_state___void_(__cdecl_)(wil::details::registry_watcher_state__)_&wil::details::delete_registry_watcher_state_wistd::integral_constant_unsigned___int64_2__wil::details::registry_watcher_state___wil::details::registry_watcher_state___0_std::nullptr_t____wil::err_returncode_policy_::create_::_1_::dtor$0 @ 0x18007D1E0 (_wil--registry_watcher_t_wil--details--unique_storage_wil--details--resource_policy_wil--details.c)
 *     _CConstraintModel::Initialize_::_1_::dtor$5 @ 0x18007D2D8 (_CConstraintModel--Initialize_--_1_--dtor$5.c)
 *     _CConstraintModel::Initialize_::_1_::dtor$4 @ 0x18007D2FC (_CConstraintModel--Initialize_--_1_--dtor$4.c)
 *     ?GetContainerProperty@@YAJU_GUID@@AEBU_tagpropertykey@@PEAU1@@Z @ 0x1800DB1AC (-GetContainerProperty@@YAJU_GUID@@AEBU_tagpropertykey@@PEAU1@@Z.c)
 *     _GetContainerProperty_::_1_::dtor$1 @ 0x1800DB440 (_GetContainerProperty_--_1_--dtor$1.c)
 *     ?GetEffectPackFxPropertyStore@@YAJPEAUHKEY__@@U_GUID@@PEAPEAUIPropertyStore@@@Z @ 0x1801484BC (-GetEffectPackFxPropertyStore@@YAJPEAUHKEY__@@U_GUID@@PEAPEAUIPropertyStore@@@Z.c)
 *     ?GetEffectPackPropertyStore@@YAJPEAUHKEY__@@U_GUID@@PEAPEAUIPropertyStore@@@Z @ 0x180148674 (-GetEffectPackPropertyStore@@YAJPEAUHKEY__@@U_GUID@@PEAPEAUIPropertyStore@@@Z.c)
 *     ?CreateEffectPackContexts@CEndpointCharacteristics@@AEAAJPEAVEffectPack@@@Z @ 0x18014B70C (-CreateEffectPackContexts@CEndpointCharacteristics@@AEAAJPEAVEffectPack@@@Z.c)
 *     _CEndpointCharacteristics::CreateEffectPackContexts_::_1_::dtor$0 @ 0x18014BA23 (_CEndpointCharacteristics--CreateEffectPackContexts_--_1_--dtor$0.c)
 *     _EffectPackConfiguration::CreateGlobalEffectPackConfiguration_::_1_::dtor$1 @ 0x180154D66 (_EffectPackConfiguration--CreateGlobalEffectPackConfiguration_--_1_--dtor$1.c)
 *     ?OpenAudioSystemEffectsPropertyStore@EffectPack@@SAJPEAUHKEY__@@IKPEAU_GUID@@PEAPEAUIAudioSystemEffectsPropertyStore@@@Z @ 0x180154DE4 (-OpenAudioSystemEffectsPropertyStore@EffectPack@@SAJPEAUHKEY__@@IKPEAU_GUID@@PEAPEAUIAudioSystem.c)
 *     ?OpenAudioSystemEffectsPropertyStoreRegKey@EffectPack@@QEAAJIKPEAPEAUHKEY__@@@Z @ 0x180154FBC (-OpenAudioSystemEffectsPropertyStoreRegKey@EffectPack@@QEAAJIKPEAPEAUHKEY__@@@Z.c)
 * Callees:
 *     <none>
 */

LSTATUS __fastcall wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>>(
        HKEY *a1)
{
  HKEY v1; // rcx
  LSTATUS result; // eax

  v1 = *a1;
  if ( v1 )
    return RegCloseKey(v1);
  return result;
}
