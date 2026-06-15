/*
 * XREFs of ??1?$shared_ptr@VEffectPack@@@std@@QEAA@XZ @ 0x1800CBDF0
 * Callers:
 *     ?DestroyStream@CVADServer@@UEAAJ_K@Z @ 0x180013400 (-DestroyStream@CVADServer@@UEAAJ_K@Z.c)
 *     ?CreateDriverEffectPackInstance@EffectPack@@SAJPEAUIPropertyStore@@0PEAVCEndpointCharacteristics@@PEBU_tlgProvider_t@@AEAV?$shared_ptr@VEffectPack@@@std@@@Z @ 0x180024FF0 (-CreateDriverEffectPackInstance@EffectPack@@SAJPEAUIPropertyStore@@0PEAVCEndpointCharacteristics.c)
 *     ?Resolve@SystemEffectChainDescriptor@@IEAAJPEAVSystemEffectDescriptor@@@Z @ 0x180042160 (-Resolve@SystemEffectChainDescriptor@@IEAAJPEAVSystemEffectDescriptor@@@Z.c)
 *     _CSaDeviceProxy::_CSaDeviceProxy_::_1_::dtor$6 @ 0x180079180 (_CSaDeviceProxy--_CSaDeviceProxy_--_1_--dtor$6.c)
 *     _SystemEffectChainDescriptor::Resolve_::_1_::dtor$0 @ 0x18007A16E (_SystemEffectChainDescriptor--Resolve_--_1_--dtor$0.c)
 *     _EffectPack::EffectPack_::_1_::dtor$16 @ 0x18007A259 (_EffectPack--EffectPack_--_1_--dtor$16.c)
 *     _EffectPackConfiguration::CreateDriverEffectPackConfiguration_::_1_::dtor$0 @ 0x18007A409 (_EffectPackConfiguration--CreateDriverEffectPackConfiguration_--_1_--dtor$0.c)
 *     _SystemEffectDescriptor::CreateOverridingChain_::_1_::dtor$7 @ 0x18007AE85 (_SystemEffectDescriptor--CreateOverridingChain_--_1_--dtor$7.c)
 *     _SystemEffectDescriptor::GetOverridingChainDescriptorIndex_::_1_::dtor$1 @ 0x18007AF64 (_SystemEffectDescriptor--GetOverridingChainDescriptorIndex_--_1_--dtor$1.c)
 *     _CPolicyConfig::ProcessPropertyChange_::_1_::dtor$2 @ 0x18007B3C0 (_CPolicyConfig--ProcessPropertyChange_--_1_--dtor$2.c)
 *     _CPdcActivationClient::AcquirePdcTimerActivation_::_1_::dtor$0 @ 0x18007BA70 (_CPdcActivationClient--AcquirePdcTimerActivation_--_1_--dtor$0.c)
 *     _CPowerReferenceManager::AcquirePowerReferenceForStream_::_1_::dtor$0 @ 0x18007BAEF (_CPowerReferenceManager--AcquirePowerReferenceForStream_--_1_--dtor$0.c)
 *     _CPowerReferenceManager::AcquirePowerReferenceForStream_::_1_::dtor$2 @ 0x18007BB1C (_CPowerReferenceManager--AcquirePowerReferenceForStream_--_1_--dtor$2.c)
 *     _CPowerReferenceManager::AcquirePowerReferenceForStream_::_1_::dtor$11 @ 0x18007BB2E (_CPowerReferenceManager--AcquirePowerReferenceForStream_--_1_--dtor$11.c)
 *     _CPlaybackNotifier::AcquireReference_::_1_::dtor$0 @ 0x18007BBDE (_CPlaybackNotifier--AcquireReference_--_1_--dtor$0.c)
 *     _CSebNotifier::AcquireSebReference_::_1_::dtor$0 @ 0x18007BC45 (_CSebNotifier--AcquireSebReference_--_1_--dtor$0.c)
 *     _CStreamConnectionManagerImpl::GetInstance_::_1_::dtor$2 @ 0x18007CFED (_CStreamConnectionManagerImpl--GetInstance_--_1_--dtor$2.c)
 *     _CSharedStreamGroupProxy::DeleteAuxiliaryInputForStreamGroupInternal_::_1_::dtor$2 @ 0x180106A84 (_CSharedStreamGroupProxy--DeleteAuxiliaryInputForStreamGroupInternal_--_1_--dtor$2.c)
 *     ?AddEffectPackConfigurationToEndpoints@EffectPackConfigurationManager@@AEAAJU_GUID@@@Z @ 0x18010DAB4 (-AddEffectPackConfigurationToEndpoints@EffectPackConfigurationManager@@AEAAJU_GUID@@@Z.c)
 *     _EffectPackConfigurationManager::AddEffectPackConfigurationToEndpoints_::_1_::dtor$0 @ 0x18010DC50 (_EffectPackConfigurationManager--AddEffectPackConfigurationToEndpoints_--_1_--dtor$0.c)
 *     _EffectPackConfigurationManager::AddEffectPackConfigurationToList_::_1_::dtor$0 @ 0x18010DE8A (_EffectPackConfigurationManager--AddEffectPackConfigurationToList_--_1_--dtor$0.c)
 *     _CXvmPowerReferenceManager::AcquirePowerReference_::_1_::dtor$0 @ 0x18011A1AE (_CXvmPowerReferenceManager--AcquirePowerReference_--_1_--dtor$0.c)
 *     _CXvmPowerReferenceManager::AcquirePowerReference_::_1_::dtor$1 @ 0x18011A1D8 (_CXvmPowerReferenceManager--AcquirePowerReference_--_1_--dtor$1.c)
 *     _CCaptureNotifier::AcquireReference_::_1_::dtor$0 @ 0x18011A36D (_CCaptureNotifier--AcquireReference_--_1_--dtor$0.c)
 *     _CCaptureNotifier::AcquireReference_::_1_::dtor$1 @ 0x18011A397 (_CCaptureNotifier--AcquireReference_--_1_--dtor$1.c)
 *     _CWorkFifo::GetWorkItem_::_1_::dtor$0 @ 0x180134A8B (_CWorkFifo--GetWorkItem_--_1_--dtor$0.c)
 *     _CWorkFifo::ProcessWorkItem_::_1_::dtor$0 @ 0x18013589D (_CWorkFifo--ProcessWorkItem_--_1_--dtor$0.c)
 *     _CWorkFifo::ScheduleWorkItem_::_1_::dtor$2 @ 0x1801367F2 (_CWorkFifo--ScheduleWorkItem_--_1_--dtor$2.c)
 *     _CEndpointCharacteristics::AddEffectPackConfigurationIfApplicable_::_1_::dtor$0 @ 0x18014AF3E (_CEndpointCharacteristics--AddEffectPackConfigurationIfApplicable_--_1_--dtor$0.c)
 *     _CEndpointCharacteristics::RemoveEffectPack_::_1_::dtor$1 @ 0x18014EF14 (_CEndpointCharacteristics--RemoveEffectPack_--_1_--dtor$1.c)
 *     _CEndpointCharacteristics::SetCurrentEffectPackInternal_::_1_::dtor$1 @ 0x18014F5C5 (_CEndpointCharacteristics--SetCurrentEffectPackInternal_--_1_--dtor$1.c)
 *     _EffectPackConfiguration::CreateGlobalEffectPackConfiguration_::_1_::dtor$5 @ 0x180154DE6 (_EffectPackConfiguration--CreateGlobalEffectPackConfiguration_--_1_--dtor$5.c)
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
