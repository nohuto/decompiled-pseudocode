/*
 * XREFs of ??1?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAA@XZ @ 0x180005960
 * Callers:
 *     ?AddSpatialAudioProcessingSupportForConnector@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18002BDD0 (-AddSpatialAudioProcessingSupportForConnector@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineen.c)
 *     __lambda_508286948f9241bf53db8f8ecb0f45ed_::operator()_::_1_::dtor$1 @ 0x18007465F (__lambda_508286948f9241bf53db8f8ecb0f45ed_--operator()_--_1_--dtor$1.c)
 *     __lambda_abb61ebb95f9f74c760f57157f67c392_::operator()_::_1_::dtor$1 @ 0x180075103 (__lambda_abb61ebb95f9f74c760f57157f67c392_--operator()_--_1_--dtor$1.c)
 *     _EffectPackConfiguration::CreateDriverEffectPackConfiguration_::_1_::dtor$1 @ 0x180078E32 (_EffectPackConfiguration--CreateDriverEffectPackConfiguration_--_1_--dtor$1.c)
 *     _SystemEffectDescriptor::CreateOverridingChain_::_1_::dtor$1 @ 0x1800796B4 (_SystemEffectDescriptor--CreateOverridingChain_--_1_--dtor$1.c)
 *     _SystemEffectDescriptor::UpdateEffectsInOverridingChain_::_1_::dtor$2 @ 0x18007AC43 (_SystemEffectDescriptor--UpdateEffectsInOverridingChain_--_1_--dtor$2.c)
 *     _SystemEffectDescriptor::UpdateEffectsInOverridingChain_::_1_::dtor$0 @ 0x18007AC55 (_SystemEffectDescriptor--UpdateEffectsInOverridingChain_--_1_--dtor$0.c)
 *     _EffectPolicy::GetAECInsertionPolicy_::_1_::dtor$0 @ 0x18007ACEE (_EffectPolicy--GetAECInsertionPolicy_--_1_--dtor$0.c)
 *     _SystemEffectDescriptor::UpdateEffectsInOverridingChain_::_1_::dtor$3 @ 0x18007AD00 (_SystemEffectDescriptor--UpdateEffectsInOverridingChain_--_1_--dtor$3.c)
 *     _SystemEffectDescriptor::CreateOverridingChain_::_1_::dtor$1_0 @ 0x18007AE79 (_SystemEffectDescriptor--CreateOverridingChain_--_1_--dtor$1_0.c)
 *     _EffectPack::InitializeCriticalAPOMetadata_::_1_::dtor$0 @ 0x18014D2B7 (_EffectPack--InitializeCriticalAPOMetadata_--_1_--dtor$0.c)
 *     _EffectPack::InitializeCriticalAPOMetadata_::_1_::dtor$2 @ 0x18014D2CF (_EffectPack--InitializeCriticalAPOMetadata_--_1_--dtor$2.c)
 *     _EffectPolicy::GetDelayedAECInsertionPolicy_::_1_::dtor$4 @ 0x1801578D7 (_EffectPolicy--GetDelayedAECInsertionPolicy_--_1_--dtor$4.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::~CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>(
        void *a1)
{
  ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll(a1);
}
