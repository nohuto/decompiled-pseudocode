/*
 * XREFs of ??1SyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x180125CD8
 * Callers:
 *     ?UpdateEndpointUnderLock@AtmosCheck@@AEAAJPEBGAEAV?$unique_ptr@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@U?$default_delete@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@@wistd@@@wistd@@@Z @ 0x1800414A0 (-UpdateEndpointUnderLock@AtmosCheck@@AEAAJPEBGAEAV-$unique_ptr@$$BY0A@UEndpointSpecificSpatialTe.c)
 *     _CSpatialProperties::SetSpatialAudioSettings_::_1_::dtor$1 @ 0x1800681F2 (_CSpatialProperties--SetSpatialAudioSettings_--_1_--dtor$1.c)
 *     _DynamicAudioEndpointManager::GetDefaultAudioEndpoint_::_1_::dtor$0 @ 0x18006E280 (_DynamicAudioEndpointManager--GetDefaultAudioEndpoint_--_1_--dtor$0.c)
 *     _CSpatialProperties::Initialize_::_1_::dtor$0 @ 0x180071442 (_CSpatialProperties--Initialize_--_1_--dtor$0.c)
 *     _CSpatialAudioTechnologies::CreateTopologyList_::_1_::dtor$0 @ 0x180071454 (_CSpatialAudioTechnologies--CreateTopologyList_--_1_--dtor$0.c)
 *     _CSpatialProperties::ProcessPropertyChange_::_1_::dtor$2 @ 0x1800716BA (_CSpatialProperties--ProcessPropertyChange_--_1_--dtor$2.c)
 *     _CSpatialProperties::SetSpatialAudioSettingsInternal_::_1_::dtor$2 @ 0x1800717B1 (_CSpatialProperties--SetSpatialAudioSettingsInternal_--_1_--dtor$2.c)
 *     _AtmosCheck::UpdateEndpointUnderLock_::_1_::dtor$0 @ 0x180071B80 (_AtmosCheck--UpdateEndpointUnderLock_--_1_--dtor$0.c)
 *     _AtmosCheck::RegisterAppDeploymentNotifications_::_1_::dtor$2 @ 0x180071BB6 (_AtmosCheck--RegisterAppDeploymentNotifications_--_1_--dtor$2.c)
 *     _AtmosCheck::RefreshSpatialAudioLicenseModelState_::_1_::dtor$0 @ 0x180071CB0 (_AtmosCheck--RefreshSpatialAudioLicenseModelState_--_1_--dtor$0.c)
 *     _AtmosCheck::PerformLicenseCheckInternalLegacy_::_1_::dtor$24 @ 0x180071F46 (_AtmosCheck--PerformLicenseCheckInternalLegacy_--_1_--dtor$24.c)
 *     _AtmosCheck::AddArrayToLicenseMap_::_1_::dtor$1 @ 0x18007202A (_AtmosCheck--AddArrayToLicenseMap_--_1_--dtor$1.c)
 *     _CSpatialProperties::EnsureSpatialSettingsAreInitialized_::_1_::dtor$0 @ 0x180072614 (_CSpatialProperties--EnsureSpatialSettingsAreInitialized_--_1_--dtor$0.c)
 *     _Sarm::CSpatialAudioResourceManager::HandleAppVolumePolicyChange_::_1_::dtor$0 @ 0x1801270FC (_Sarm--CSpatialAudioResourceManager--HandleAppVolumePolicyChange_--_1_--dtor$0.c)
 *     _Sarm::CSpatialAudioResourceManager::HandleRedistributeObjects_::_1_::dtor$0 @ 0x1801271A0 (_Sarm--CSpatialAudioResourceManager--HandleRedistributeObjects_--_1_--dtor$0.c)
 *     _Sarm::CSpatialAudioResourceManager::HandleRequestForDynamicObjects_::_1_::dtor$0 @ 0x1801272C2 (_Sarm--CSpatialAudioResourceManager--HandleRequestForDynamicObjects_--_1_--dtor$0.c)
 *     _std::_Func_impl_no_alloc__lambda_aa3efb362c26672f3bb90355f03c35d6__void_::_Do_call_::_1_::dtor$0 @ 0x180129711 (_std--_Func_impl_no_alloc__lambda_aa3efb362c26672f3bb90355f03c35d6__void_--_Do_call_--_1_--dtor$.c)
 *     _CExclusiveModeListener::OnExclusiveModeChange_::_1_::dtor$0 @ 0x18012CECD (_CExclusiveModeListener--OnExclusiveModeChange_--_1_--dtor$0.c)
 *     _CExclusiveModeListener::OnHmdAdded_::_1_::dtor$0 @ 0x18012D0FC (_CExclusiveModeListener--OnHmdAdded_--_1_--dtor$0.c)
 *     _CExclusiveModeListener::OnHmdRemoved_::_1_::dtor$0 @ 0x18012D43B (_CExclusiveModeListener--OnHmdRemoved_--_1_--dtor$0.c)
 *     _CExclusiveModeListener::OnHoloshellStateChange_::_1_::dtor$0 @ 0x18012D625 (_CExclusiveModeListener--OnHoloshellStateChange_--_1_--dtor$0.c)
 *     _DynamicAudioEndpointManager::AddRule_::_1_::dtor$0 @ 0x180131773 (_DynamicAudioEndpointManager--AddRule_--_1_--dtor$0.c)
 *     _DynamicAudioEndpointManager::GetRule_::_1_::dtor$3 @ 0x18013214A (_DynamicAudioEndpointManager--GetRule_--_1_--dtor$3.c)
 *     _DynamicAudioEndpointManager::OnRuleOperation_::_1_::dtor$0 @ 0x180132765 (_DynamicAudioEndpointManager--OnRuleOperation_--_1_--dtor$0.c)
 *     _DynamicAudioEndpointManager::RemoveRule_::_1_::dtor$0 @ 0x180133030 (_DynamicAudioEndpointManager--RemoveRule_--_1_--dtor$0.c)
 *     _DynamicAudioEndpointManager::RemoveRule_::_1_::dtor$1_0 @ 0x1801331A0 (_DynamicAudioEndpointManager--RemoveRule_--_1_--dtor$1_0.c)
 *     _DynamicAudioEndpointManager::SetDefaultAudioEndpoint_::_1_::dtor$0 @ 0x180133438 (_DynamicAudioEndpointManager--SetDefaultAudioEndpoint_--_1_--dtor$0.c)
 *     _DynamicAudioEndpointManager::UpdateRule_::_1_::dtor$0 @ 0x1801337AB (_DynamicAudioEndpointManager--UpdateRule_--_1_--dtor$0.c)
 *     _SpatialAudioDeviceStateWriter::ResetState_::_1_::dtor$0 @ 0x180138232 (_SpatialAudioDeviceStateWriter--ResetState_--_1_--dtor$0.c)
 *     _SpatialAudioDeviceStateWriter::SetActiveSpatialAudioEncoderId_::_1_::dtor$0 @ 0x1801382E4 (_SpatialAudioDeviceStateWriter--SetActiveSpatialAudioEncoderId_--_1_--dtor$0.c)
 *     _SpatialAudioDeviceStateWriter::SetSpatialRendererSelectionMode_::_1_::dtor$0 @ 0x180138394 (_SpatialAudioDeviceStateWriter--SetSpatialRendererSelectionMode_--_1_--dtor$0.c)
 *     _SpatialAudioDeviceStateWriter::SetSpatialVssSelectionMode_::_1_::dtor$0 @ 0x18013843D (_SpatialAudioDeviceStateWriter--SetSpatialVssSelectionMode_--_1_--dtor$0.c)
 *     _CSpatialProperties::ClearSpatialAudioSettings_::_1_::dtor$0 @ 0x18013D75D (_CSpatialProperties--ClearSpatialAudioSettings_--_1_--dtor$0.c)
 *     _CSpatialProperties::GetAudioFormatForSpatialFormat_::_1_::dtor$1 @ 0x18013E255 (_CSpatialProperties--GetAudioFormatForSpatialFormat_--_1_--dtor$1.c)
 *     _CSpatialProperties::GetSpatialFormatForAudioFormat_::_1_::dtor$1 @ 0x18013F2A1 (_CSpatialProperties--GetSpatialFormatForAudioFormat_--_1_--dtor$1.c)
 *     _AtmosCheck::EnableAllSpatialCapabilities_::_1_::dtor$0 @ 0x180153CA7 (_AtmosCheck--EnableAllSpatialCapabilities_--_1_--dtor$0.c)
 *     _AtmosCheck::GetCurrentEndpointsUnderLock_::_1_::dtor$0 @ 0x18015412E (_AtmosCheck--GetCurrentEndpointsUnderLock_--_1_--dtor$0.c)
 *     _AtmosCheck::InitializeAppServiceMode_::_1_::dtor$0 @ 0x180154C92 (_AtmosCheck--InitializeAppServiceMode_--_1_--dtor$0.c)
 *     _AtmosCheck::IsLogLicenseResult_::_1_::dtor$0 @ 0x1801550FC (_AtmosCheck--IsLogLicenseResult_--_1_--dtor$0.c)
 *     _AtmosCheck::UninitializeAppServiceMode_::_1_::dtor$0 @ 0x180156C40 (_AtmosCheck--UninitializeAppServiceMode_--_1_--dtor$0.c)
 *     _AtmosCheck::UnregisterAppDeploymentNotifications_::_1_::dtor$0 @ 0x180156D72 (_AtmosCheck--UnregisterAppDeploymentNotifications_--_1_--dtor$0.c)
 *     _AtmosCheck::UpdateEndpointUnderLock_::_1_::dtor$0_0 @ 0x180156F23 (_AtmosCheck--UpdateEndpointUnderLock_--_1_--dtor$0_0.c)
 *     _AtmosCheck::UpdateLicenseMapForAllEndpoints_::_1_::dtor$0 @ 0x180157247 (_AtmosCheck--UpdateLicenseMapForAllEndpoints_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection::~SyncLockCriticalSection(
        struct _RTL_CRITICAL_SECTION **this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rcx

  v2 = *this;
  if ( v2 )
  {
    LeaveCriticalSection(v2);
    *this = 0LL;
  }
}
