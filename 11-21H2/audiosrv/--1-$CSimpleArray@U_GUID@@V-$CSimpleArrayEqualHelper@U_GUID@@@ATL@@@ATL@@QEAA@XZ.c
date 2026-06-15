/*
 * XREFs of ??1?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAA@XZ @ 0x180010520
 * Callers:
 *     ?AddSpatialAudioProcessingSupportForConnector@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180051094 (-AddSpatialAudioProcessingSupportForConnector@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf.c)
 *     __lambda_7ba40230144b56f0afba59e141973f96_::operator()_::_1_::dtor$1 @ 0x180068C36 (__lambda_7ba40230144b56f0afba59e141973f96_--operator()_--_1_--dtor$1.c)
 *     __lambda_e6f097a164894528a3d2285fefe0cca7_::operator()_::_1_::dtor$1 @ 0x1800699F0 (__lambda_e6f097a164894528a3d2285fefe0cca7_--operator()_--_1_--dtor$1.c)
 *     _SystemEffectDescriptor::CreateOverridingChain_::_1_::dtor$1 @ 0x18006CEF8 (_SystemEffectDescriptor--CreateOverridingChain_--_1_--dtor$1.c)
 *     _SystemEffectDescriptor::UpdateEffectsInOverridingChain_::_1_::dtor$2 @ 0x18006F0C7 (_SystemEffectDescriptor--UpdateEffectsInOverridingChain_--_1_--dtor$2.c)
 *     _SystemEffectDescriptor::UpdateEffectsInOverridingChain_::_1_::dtor$3 @ 0x18006F0D9 (_SystemEffectDescriptor--UpdateEffectsInOverridingChain_--_1_--dtor$3.c)
 *     _SystemEffectDescriptor::CreateOverridingChain_::_1_::dtor$1_0 @ 0x18006F216 (_SystemEffectDescriptor--CreateOverridingChain_--_1_--dtor$1_0.c)
 *     _SystemEffectDescriptor::UpdateEffectsInOverridingChain_::_1_::dtor$0 @ 0x18006F228 (_SystemEffectDescriptor--UpdateEffectsInOverridingChain_--_1_--dtor$0.c)
 *     _SystemEffectDescriptor::UpdateEffectsInOverridingChain_::_1_::dtor$1 @ 0x18006F23A (_SystemEffectDescriptor--UpdateEffectsInOverridingChain_--_1_--dtor$1.c)
 *     _CEndpointCharacteristics::FixupProcessingModeSupport_::_1_::dtor$2 @ 0x18006F282 (_CEndpointCharacteristics--FixupProcessingModeSupport_--_1_--dtor$2.c)
 *     _CEndpointCharacteristics::FixupProcessingModeSupport_::_1_::dtor$3 @ 0x18006F294 (_CEndpointCharacteristics--FixupProcessingModeSupport_--_1_--dtor$3.c)
 *     _CEndpointCharacteristics::FixupProcessingModeSupport_::_1_::dtor$4 @ 0x18006F2B0 (_CEndpointCharacteristics--FixupProcessingModeSupport_--_1_--dtor$4.c)
 *     _CEndpointCharacteristics::FixupProcessingModeSupport_::_1_::dtor$5 @ 0x18006F2C2 (_CEndpointCharacteristics--FixupProcessingModeSupport_--_1_--dtor$5.c)
 *     _CEndpointCharacteristics::DiscoverProcessingModeCapabilities_::_1_::dtor$15 @ 0x18006F3A8 (_CEndpointCharacteristics--DiscoverProcessingModeCapabilities_--_1_--dtor$15.c)
 *     _InitializeStreamAndModeDescriptors_::_1_::dtor$147 @ 0x180070860 (_InitializeStreamAndModeDescriptors_--_1_--dtor$147.c)
 *     _CreateSaDevice_::_1_::dtor$31 @ 0x180070C80 (_CreateSaDevice_--_1_--dtor$31.c)
 *     _CreateSaDevice_::_1_::dtor$83 @ 0x180070DE0 (_CreateSaDevice_--_1_--dtor$83.c)
 *     _CreateSaDevice_::_1_::dtor$228 @ 0x180071220 (_CreateSaDevice_--_1_--dtor$228.c)
 *     _CEndpointCharacteristics::CEndpointCharacteristics_::_1_::dtor$6 @ 0x18007198A (_CEndpointCharacteristics--CEndpointCharacteristics_--_1_--dtor$6.c)
 *     _CEndpointCharacteristics::CanBuildProcessingModesOnRawConnector_::_1_::dtor$0 @ 0x1801456C4 (_CEndpointCharacteristics--CanBuildProcessingModesOnRawConnector_--_1_--dtor$0.c)
 *     _CEndpointCharacteristics::DeriveAndCacheMixFormatsForConnector_::_1_::dtor$8 @ 0x18014636F (_CEndpointCharacteristics--DeriveAndCacheMixFormatsForConnector_--_1_--dtor$8.c)
 *     _CEndpointCharacteristics::DiscoverConnectorProcessingModeCharacteristics_::_1_::dtor$1 @ 0x1801477D7 (_CEndpointCharacteristics--DiscoverConnectorProcessingModeCharacteristics_--_1_--dtor$1.c)
 *     _CEndpointCharacteristics::InitializeAPOInfo_::_1_::dtor$0 @ 0x18014A311 (_CEndpointCharacteristics--InitializeAPOInfo_--_1_--dtor$0.c)
 *     _CEndpointCharacteristics::InitializeAPOInfo_::_1_::dtor$2 @ 0x18014A329 (_CEndpointCharacteristics--InitializeAPOInfo_--_1_--dtor$2.c)
 *     _EffectPolicy::GetAECInsertionPolicy_::_1_::dtor$0 @ 0x180150169 (_EffectPolicy--GetAECInsertionPolicy_--_1_--dtor$0.c)
 *     _EffectPolicy::GetDelayedAECInsertionPolicy_::_1_::dtor$4 @ 0x1801504EC (_EffectPolicy--GetDelayedAECInsertionPolicy_--_1_--dtor$4.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::~CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>(
        void *a1)
{
  ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll(a1);
}
