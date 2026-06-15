/*
 * XREFs of ??1SyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x180084444
 * Callers:
 *     ?RefreshSpatialAudioLicenseModelState@AtmosCheck@@AEAAJPEA_N@Z @ 0x180036E40 (-RefreshSpatialAudioLicenseModelState@AtmosCheck@@AEAAJPEA_N@Z.c)
 *     ?PerformLicenseCheckInternalLegacy@AtmosCheck@@AEAAJPEA_N@Z @ 0x180038870 (-PerformLicenseCheckInternalLegacy@AtmosCheck@@AEAAJPEA_N@Z.c)
 *     ?OnStreamConnectedToSaDevice@CSpatialAudioResourceManager@Sarm@@UEAAJPEAUIAudioStreamInfo@@KPEBU_GUID@@PEBUSPATIAL_STREAM_PROPERTIES@@@Z @ 0x1800441C0 (-OnStreamConnectedToSaDevice@CSpatialAudioResourceManager@Sarm@@UEAAJPEAUIAudioStreamInfo@@KPEBU.c)
 *     ?OnStreamDisconnectedFromSaDevice@CSpatialAudioResourceManager@Sarm@@UEAAXPEAUIAudioStreamInfo@@@Z @ 0x180048A50 (-OnStreamDisconnectedFromSaDevice@CSpatialAudioResourceManager@Sarm@@UEAAXPEAUIAudioStreamInfo@@.c)
 *     _CSpatialProperties::EnsureSpatialSettingsAreInitialized_::_1_::dtor$0 @ 0x180078130 (_CSpatialProperties--EnsureSpatialSettingsAreInitialized_--_1_--dtor$0.c)
 *     _AtmosCheck::AddArrayToLicenseMap_::_1_::dtor$1 @ 0x180079D89 (_AtmosCheck--AddArrayToLicenseMap_--_1_--dtor$1.c)
 *     _CSpatialAudioTechnologies::CreateTopologyList_::_1_::dtor$0 @ 0x180079DBF (_CSpatialAudioTechnologies--CreateTopologyList_--_1_--dtor$0.c)
 *     _CSpatialProperties::ProcessPropertyChange_::_1_::dtor$2 @ 0x18007ACCA (_CSpatialProperties--ProcessPropertyChange_--_1_--dtor$2.c)
 *     _CSpatialProperties::SetSpatialAudioSettingsInternal_::_1_::dtor$2 @ 0x18007AE1F (_CSpatialProperties--SetSpatialAudioSettingsInternal_--_1_--dtor$2.c)
 *     _AtmosCheck::QueryLicenseForSpatialSubtypeAndEndpoint_::_1_::dtor$0 @ 0x18007B2B0 (_AtmosCheck--QueryLicenseForSpatialSubtypeAndEndpoint_--_1_--dtor$0.c)
 *     _AtmosCheck::RegisterAppDeploymentNotifications_::_1_::dtor$2 @ 0x18007B4B0 (_AtmosCheck--RegisterAppDeploymentNotifications_--_1_--dtor$2.c)
 *     _AtmosCheck::PerformLicenseCheckInternalLegacy_::_1_::dtor$24 @ 0x18007B930 (_AtmosCheck--PerformLicenseCheckInternalLegacy_--_1_--dtor$24.c)
 *     _AtmosCheck::PerformLicenseCheckInternalLegacy_::_1_::dtor$108 @ 0x18007B9D0 (_AtmosCheck--PerformLicenseCheckInternalLegacy_--_1_--dtor$108.c)
 *     _CSpatialProperties::ClearSpatialAudioSettings_::_1_::dtor$0 @ 0x18007C3F8 (_CSpatialProperties--ClearSpatialAudioSettings_--_1_--dtor$0.c)
 *     _CSpatialAudioTech::GetAtmosCheck_::_1_::dtor$0 @ 0x18007D40C (_CSpatialAudioTech--GetAtmosCheck_--_1_--dtor$0.c)
 *     _CSpatialProperties::GetSpatialFormatForAudioFormat_::_1_::dtor$1 @ 0x18007D972 (_CSpatialProperties--GetSpatialFormatForAudioFormat_--_1_--dtor$1.c)
 *     _Sarm::CSpatialAudioResourceManager::HandleAppVolumePolicyChange_::_1_::dtor$0 @ 0x180134B6C (_Sarm--CSpatialAudioResourceManager--HandleAppVolumePolicyChange_--_1_--dtor$0.c)
 *     _Sarm::CSpatialAudioResourceManager::HandleRedistributeObjects_::_1_::dtor$0 @ 0x180134C10 (_Sarm--CSpatialAudioResourceManager--HandleRedistributeObjects_--_1_--dtor$0.c)
 *     ?HandleRequestForDynamicObjects@CSpatialAudioResourceManager@Sarm@@AEAAX_JII@Z @ 0x180134C24 (-HandleRequestForDynamicObjects@CSpatialAudioResourceManager@Sarm@@AEAAX_JII@Z.c)
 *     _Sarm::CSpatialAudioResourceManager::HandleRequestForDynamicObjects_::_1_::dtor$0 @ 0x180134D40 (_Sarm--CSpatialAudioResourceManager--HandleRequestForDynamicObjects_--_1_--dtor$0.c)
 *     ?HandleRevocationCompletion@CSpatialAudioResourceManager@Sarm@@AEAAX_J@Z @ 0x180134D54 (-HandleRevocationCompletion@CSpatialAudioResourceManager@Sarm@@AEAAX_J@Z.c)
 *     ?OnRequestDynamicObjects@CSpatialAudioResourceManager@Sarm@@UEAAJ_JII@Z @ 0x180135480 (-OnRequestDynamicObjects@CSpatialAudioResourceManager@Sarm@@UEAAJ_JII@Z.c)
 *     _std::_Func_impl_no_alloc__lambda_aa3efb362c26672f3bb90355f03c35d6__void_::_Do_call_::_1_::dtor$0 @ 0x180137181 (_std--_Func_impl_no_alloc__lambda_aa3efb362c26672f3bb90355f03c35d6__void_--_Do_call_--_1_--dtor$.c)
 *     _CExclusiveModeListener::OnExclusiveModeChange_::_1_::dtor$0 @ 0x18013A75D (_CExclusiveModeListener--OnExclusiveModeChange_--_1_--dtor$0.c)
 *     _CExclusiveModeListener::OnHmdAdded_::_1_::dtor$0 @ 0x18013A98C (_CExclusiveModeListener--OnHmdAdded_--_1_--dtor$0.c)
 *     _CExclusiveModeListener::OnHmdRemoved_::_1_::dtor$0 @ 0x18013ACCB (_CExclusiveModeListener--OnHmdRemoved_--_1_--dtor$0.c)
 *     _CExclusiveModeListener::OnHoloshellStateChange_::_1_::dtor$0 @ 0x18013AEB5 (_CExclusiveModeListener--OnHoloshellStateChange_--_1_--dtor$0.c)
 *     ?AddRule@DynamicAudioEndpointManager@@QEAAJPEAUIAudioProcess@@PEAU_DynamicRoutingRule@@PEA_J@Z @ 0x18013E68C (-AddRule@DynamicAudioEndpointManager@@QEAAJPEAUIAudioProcess@@PEAU_DynamicRoutingRule@@PEA_J@Z.c)
 *     _DynamicAudioEndpointManager::AddRule_::_1_::dtor$0 @ 0x18013EC96 (_DynamicAudioEndpointManager--AddRule_--_1_--dtor$0.c)
 *     ?GetRule@DynamicAudioEndpointManager@@QEAAJPEAX_JPEAU_DynamicRoutingRule@@@Z @ 0x18013F44C (-GetRule@DynamicAudioEndpointManager@@QEAAJPEAX_JPEAU_DynamicRoutingRule@@@Z.c)
 *     _DynamicAudioEndpointManager::GetRule_::_1_::dtor$3 @ 0x18013F661 (_DynamicAudioEndpointManager--GetRule_--_1_--dtor$3.c)
 *     ?RemoveRule@DynamicAudioEndpointManager@@AEAAJPEAUIAudioProcess@@PEAUIUnknown@@_NQEAY08_N@Z @ 0x18013FE5C (-RemoveRule@DynamicAudioEndpointManager@@AEAAJPEAUIAudioProcess@@PEAUIUnknown@@_NQEAY08_N@Z.c)
 *     _DynamicAudioEndpointManager::RemoveRule_::_1_::dtor$0 @ 0x180140110 (_DynamicAudioEndpointManager--RemoveRule_--_1_--dtor$0.c)
 *     _DynamicAudioEndpointManager::RemoveRule_::_1_::dtor$1_0 @ 0x180140280 (_DynamicAudioEndpointManager--RemoveRule_--_1_--dtor$1_0.c)
 *     _DynamicAudioEndpointManager::SetDefaultAudioEndpoint_::_1_::dtor$0 @ 0x180140518 (_DynamicAudioEndpointManager--SetDefaultAudioEndpoint_--_1_--dtor$0.c)
 *     ?UpdateRule@DynamicAudioEndpointManager@@QEAAJPEAUIAudioProcess@@_JPEAU_DynamicRoutingRule@@@Z @ 0x180140588 (-UpdateRule@DynamicAudioEndpointManager@@QEAAJPEAUIAudioProcess@@_JPEAU_DynamicRoutingRule@@@Z.c)
 *     _DynamicAudioEndpointManager::UpdateRule_::_1_::dtor$0 @ 0x1801408D6 (_DynamicAudioEndpointManager--UpdateRule_--_1_--dtor$0.c)
 *     _SpatialAudioDeviceStateWriter::ResetState_::_1_::dtor$0 @ 0x180145032 (_SpatialAudioDeviceStateWriter--ResetState_--_1_--dtor$0.c)
 *     _SpatialAudioDeviceStateWriter::SetActiveSpatialAudioEncoderId_::_1_::dtor$0 @ 0x1801450E4 (_SpatialAudioDeviceStateWriter--SetActiveSpatialAudioEncoderId_--_1_--dtor$0.c)
 *     _SpatialAudioDeviceStateWriter::SetSpatialRendererSelectionMode_::_1_::dtor$0 @ 0x180145194 (_SpatialAudioDeviceStateWriter--SetSpatialRendererSelectionMode_--_1_--dtor$0.c)
 *     _SpatialAudioDeviceStateWriter::SetSpatialVssSelectionMode_::_1_::dtor$0 @ 0x18014523D (_SpatialAudioDeviceStateWriter--SetSpatialVssSelectionMode_--_1_--dtor$0.c)
 *     _CSpatialProperties::GetAudioFormatForSpatialFormat_::_1_::dtor$1 @ 0x180153CB5 (_CSpatialProperties--GetAudioFormatForSpatialFormat_--_1_--dtor$1.c)
 *     ?GetAt@CHybridPropertyStore@@UEAAJKPEAU_tagpropertykey@@@Z @ 0x180155820 (-GetAt@CHybridPropertyStore@@UEAAJKPEAU_tagpropertykey@@@Z.c)
 *     ?GetCount@CHybridPropertyStore@@UEAAJPEAK@Z @ 0x180155930 (-GetCount@CHybridPropertyStore@@UEAAJPEAK@Z.c)
 *     ?GetValue@CHybridPropertyStore@@UEAAJAEBU_tagpropertykey@@PEAUtagPROPVARIANT@@@Z @ 0x180155A20 (-GetValue@CHybridPropertyStore@@UEAAJAEBU_tagpropertykey@@PEAUtagPROPVARIANT@@@Z.c)
 *     _AtmosCheck::EnableAllSpatialCapabilities_::_1_::dtor$0 @ 0x18015AE22 (_AtmosCheck--EnableAllSpatialCapabilities_--_1_--dtor$0.c)
 *     _AtmosCheck::GetCurrentEndpointsUnderLock_::_1_::dtor$0 @ 0x18015B1E1 (_AtmosCheck--GetCurrentEndpointsUnderLock_--_1_--dtor$0.c)
 *     ?InitializeAppServiceMode@AtmosCheck@@AEAAJXZ @ 0x18015BC9C (-InitializeAppServiceMode@AtmosCheck@@AEAAJXZ.c)
 *     _AtmosCheck::InitializeAppServiceMode_::_1_::dtor$0 @ 0x18015BD68 (_AtmosCheck--InitializeAppServiceMode_--_1_--dtor$0.c)
 *     ?IsLogLicenseResult@AtmosCheck@@AEAA_NPEAUSpatialLicenseResult@@@Z @ 0x18015C01C (-IsLogLicenseResult@AtmosCheck@@AEAA_NPEAUSpatialLicenseResult@@@Z.c)
 *     _AtmosCheck::IsLogLicenseResult_::_1_::dtor$0 @ 0x18015C161 (_AtmosCheck--IsLogLicenseResult_--_1_--dtor$0.c)
 *     ?ScheduleGracePeriodTimer@AtmosCheck@@AEAAXXZ @ 0x18015D5A0 (-ScheduleGracePeriodTimer@AtmosCheck@@AEAAXXZ.c)
 *     _AtmosCheck::UninitializeAppServiceMode_::_1_::dtor$0 @ 0x18015DE58 (_AtmosCheck--UninitializeAppServiceMode_--_1_--dtor$0.c)
 *     _AtmosCheck::UnregisterAppDeploymentNotifications_::_1_::dtor$0 @ 0x18015DF8A (_AtmosCheck--UnregisterAppDeploymentNotifications_--_1_--dtor$0.c)
 *     ?UpdateEndpointUnderLock@AtmosCheck@@AEAAJPEBGHPEBUEndpointSpecificSpatialTechInfo@1@@Z @ 0x18015E0AC (-UpdateEndpointUnderLock@AtmosCheck@@AEAAJPEBGHPEBUEndpointSpecificSpatialTechInfo@1@@Z.c)
 *     _AtmosCheck::UpdateEndpointUnderLock_::_1_::dtor$0 @ 0x18015E1E4 (_AtmosCheck--UpdateEndpointUnderLock_--_1_--dtor$0.c)
 *     _AtmosCheck::UpdateLicenseMapForAllEndpoints_::_1_::dtor$0 @ 0x18015E543 (_AtmosCheck--UpdateLicenseMapForAllEndpoints_--_1_--dtor$0.c)
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
