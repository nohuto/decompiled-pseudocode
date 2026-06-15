/*
 * XREFs of ??1?$shared_ptr@VEffectPack@@@std@@QEAA@XZ @ 0x1800CBDA8
 * Callers:
 *     ?DestroyStream@CVADServer@@UEAAJ_K@Z @ 0x180013400 (-DestroyStream@CVADServer@@UEAAJ_K@Z.c)
 *     ?CreateDriverEffectPackInstance@EffectPack@@SAJPEAUIPropertyStore@@0PEAVCEndpointCharacteristics@@PEBU_tlgProvider_t@@AEAV?$shared_ptr@VEffectPack@@@std@@@Z @ 0x180024FF0 (-CreateDriverEffectPackInstance@EffectPack@@SAJPEAUIPropertyStore@@0PEAVCEndpointCharacteristics.c)
 *     ?Resolve@SystemEffectChainDescriptor@@IEAAJPEAVSystemEffectDescriptor@@@Z @ 0x180042160 (-Resolve@SystemEffectChainDescriptor@@IEAAJPEAVSystemEffectDescriptor@@@Z.c)
 *     _CSaDeviceProxy::_CSaDeviceProxy_::_1_::dtor$6 @ 0x180079150 (_CSaDeviceProxy--_CSaDeviceProxy_--_1_--dtor$6.c)
 *     _SystemEffectChainDescriptor::Resolve_::_1_::dtor$0 @ 0x18007A13E (_SystemEffectChainDescriptor--Resolve_--_1_--dtor$0.c)
 *     _EffectPack::EffectPack_::_1_::dtor$16 @ 0x18007A229 (_EffectPack--EffectPack_--_1_--dtor$16.c)
 *     _EffectPackConfiguration::CreateDriverEffectPackConfiguration_::_1_::dtor$0 @ 0x18007A3D9 (_EffectPackConfiguration--CreateDriverEffectPackConfiguration_--_1_--dtor$0.c)
 *     _SystemEffectDescriptor::CreateOverridingChain_::_1_::dtor$7 @ 0x18007AE55 (_SystemEffectDescriptor--CreateOverridingChain_--_1_--dtor$7.c)
 *     _SystemEffectDescriptor::GetOverridingChainDescriptorIndex_::_1_::dtor$1 @ 0x18007AF34 (_SystemEffectDescriptor--GetOverridingChainDescriptorIndex_--_1_--dtor$1.c)
 *     _CPolicyConfig::ProcessPropertyChange_::_1_::dtor$2 @ 0x18007B390 (_CPolicyConfig--ProcessPropertyChange_--_1_--dtor$2.c)
 *     _CPdcActivationClient::AcquirePdcTimerActivation_::_1_::dtor$0 @ 0x18007BA40 (_CPdcActivationClient--AcquirePdcTimerActivation_--_1_--dtor$0.c)
 *     _CPowerReferenceManager::AcquirePowerReferenceForStream_::_1_::dtor$0 @ 0x18007BABF (_CPowerReferenceManager--AcquirePowerReferenceForStream_--_1_--dtor$0.c)
 *     _CPowerReferenceManager::AcquirePowerReferenceForStream_::_1_::dtor$2 @ 0x18007BAEC (_CPowerReferenceManager--AcquirePowerReferenceForStream_--_1_--dtor$2.c)
 *     _CPowerReferenceManager::AcquirePowerReferenceForStream_::_1_::dtor$11 @ 0x18007BAFE (_CPowerReferenceManager--AcquirePowerReferenceForStream_--_1_--dtor$11.c)
 *     _CPlaybackNotifier::AcquireReference_::_1_::dtor$0 @ 0x18007BBAE (_CPlaybackNotifier--AcquireReference_--_1_--dtor$0.c)
 *     _CSebNotifier::AcquireSebReference_::_1_::dtor$0 @ 0x18007BC15 (_CSebNotifier--AcquireSebReference_--_1_--dtor$0.c)
 *     _CStreamConnectionManagerImpl::GetInstance_::_1_::dtor$2 @ 0x18007CFBD (_CStreamConnectionManagerImpl--GetInstance_--_1_--dtor$2.c)
 *     _CSharedStreamGroupProxy::DeleteAuxiliaryInputForStreamGroupInternal_::_1_::dtor$2 @ 0x180106A34 (_CSharedStreamGroupProxy--DeleteAuxiliaryInputForStreamGroupInternal_--_1_--dtor$2.c)
 *     ?AddEffectPackConfigurationToEndpoints@EffectPackConfigurationManager@@AEAAJU_GUID@@@Z @ 0x18010DA64 (-AddEffectPackConfigurationToEndpoints@EffectPackConfigurationManager@@AEAAJU_GUID@@@Z.c)
 *     _EffectPackConfigurationManager::AddEffectPackConfigurationToEndpoints_::_1_::dtor$0 @ 0x18010DC00 (_EffectPackConfigurationManager--AddEffectPackConfigurationToEndpoints_--_1_--dtor$0.c)
 *     _EffectPackConfigurationManager::AddEffectPackConfigurationToList_::_1_::dtor$0 @ 0x18010DE3A (_EffectPackConfigurationManager--AddEffectPackConfigurationToList_--_1_--dtor$0.c)
 *     _CXvmPowerReferenceManager::AcquirePowerReference_::_1_::dtor$0 @ 0x18011A15E (_CXvmPowerReferenceManager--AcquirePowerReference_--_1_--dtor$0.c)
 *     _CXvmPowerReferenceManager::AcquirePowerReference_::_1_::dtor$1 @ 0x18011A188 (_CXvmPowerReferenceManager--AcquirePowerReference_--_1_--dtor$1.c)
 *     _CCaptureNotifier::AcquireReference_::_1_::dtor$0 @ 0x18011A31D (_CCaptureNotifier--AcquireReference_--_1_--dtor$0.c)
 *     _CCaptureNotifier::AcquireReference_::_1_::dtor$1 @ 0x18011A347 (_CCaptureNotifier--AcquireReference_--_1_--dtor$1.c)
 *     _CWorkFifo::GetWorkItem_::_1_::dtor$0 @ 0x180134A3B (_CWorkFifo--GetWorkItem_--_1_--dtor$0.c)
 *     _CWorkFifo::ProcessWorkItem_::_1_::dtor$0 @ 0x18013584D (_CWorkFifo--ProcessWorkItem_--_1_--dtor$0.c)
 *     _CWorkFifo::ScheduleWorkItem_::_1_::dtor$2 @ 0x1801367A2 (_CWorkFifo--ScheduleWorkItem_--_1_--dtor$2.c)
 *     _CEndpointCharacteristics::AddEffectPackConfigurationIfApplicable_::_1_::dtor$0 @ 0x18014AEEE (_CEndpointCharacteristics--AddEffectPackConfigurationIfApplicable_--_1_--dtor$0.c)
 *     _CEndpointCharacteristics::RemoveEffectPack_::_1_::dtor$1 @ 0x18014EEC4 (_CEndpointCharacteristics--RemoveEffectPack_--_1_--dtor$1.c)
 *     _CEndpointCharacteristics::SetCurrentEffectPackInternal_::_1_::dtor$1 @ 0x18014F575 (_CEndpointCharacteristics--SetCurrentEffectPackInternal_--_1_--dtor$1.c)
 *     _EffectPackConfiguration::CreateGlobalEffectPackConfiguration_::_1_::dtor$5 @ 0x180154D96 (_EffectPackConfiguration--CreateGlobalEffectPackConfiguration_--_1_--dtor$5.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180030368 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

void __fastcall std::shared_ptr<EffectPack>::~shared_ptr<EffectPack>(__int64 a1)
{
  std::_Ref_count_base *v1; // rcx

  v1 = *(std::_Ref_count_base **)(a1 + 8);
  if ( v1 )
    std::_Ref_count_base::_Decref(v1);
}
