/*
 * XREFs of ??1?$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18004BB14
 * Callers:
 *     ?GetSaDevice@CDeviceGraphManager@@UEAAJPEAUEndpointCharacteristicsDescriptor@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@AEAUSaDeviceResourceParams@@PEBU_GUID@@4PEAPEAUISaDeviceProxy@@@Z @ 0x18000F110 (-GetSaDevice@CDeviceGraphManager@@UEAAJPEAUEndpointCharacteristicsDescriptor@@PEAUSaDeviceParams.c)
 *     ?GetDeviceVolumeStrip@CVolumeProvider@@UEAAJPEBGPEAPEAUIVolumeStrip@@@Z @ 0x180021DC0 (-GetDeviceVolumeStrip@CVolumeProvider@@UEAAJPEBGPEAPEAUIVolumeStrip@@@Z.c)
 *     ?PublishApoTelemetry@@YAJPEBGU_GUID@@@Z @ 0x18003E70C (-PublishApoTelemetry@@YAJPEBGU_GUID@@@Z.c)
 *     ?InitializePolicy@CVADServer@@IEAAJPEAUIAudioProcess@@PEAVCEndpointCharacteristics@@PEBU_GUID@@KPEAPEAG@Z @ 0x18003E8E8 (-InitializePolicy@CVADServer@@IEAAJPEAUIAudioProcess@@PEAVCEndpointCharacteristics@@PEBU_GUID@@K.c)
 *     ?DeriveAudioProcessingModeConfiguration@@YAJKHHPEAUEndpointCharacteristicsDescriptor@@W4SYSTEM_AUDIO_STREAM_TYPE@@W4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIProcessSubmixProxy@@HHPEBUtWAVEFORMATEX@@PEAU_GUID@@6666@Z @ 0x1800450A8 (-DeriveAudioProcessingModeConfiguration@@YAJKHHPEAUEndpointCharacteristicsDescriptor@@W4SYSTEM_A.c)
 *     ?GetSaDeviceForSharedStream@CAudioResourceManager@@IEAAJPEAUEndpointCharacteristicsDescriptor@@PEAUISaDeviceResourceManager@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@AEAUSaDeviceResourceParams@@_NPEAVCAudioSessionManager@@55PEAPEAUISaDeviceProxy@@@Z @ 0x180048B18 (-GetSaDeviceForSharedStream@CAudioResourceManager@@IEAAJPEAUEndpointCharacteristicsDescriptor@@P.c)
 *     GetAudioSessionManager @ 0x1800547D0 (GetAudioSessionManager.c)
 *     _lambda_a8db97ed7e8885f811a0d2f9622ff627_::operator() @ 0x18006B764 (_lambda_a8db97ed7e8885f811a0d2f9622ff627_--operator().c)
 *     __lambda_a8db97ed7e8885f811a0d2f9622ff627_::operator()_::_1_::dtor$2 @ 0x18006BA47 (__lambda_a8db97ed7e8885f811a0d2f9622ff627_--operator()_--_1_--dtor$2.c)
 *     ?CreateMicInjectionBridgeSourceStream@CAudioResourceManager@@UEAAJPEAUEndpointCharacteristicsDescriptor@@_JPEBUtWAVEFORMATEX@@PEAUIStreamInstanceProxy@@PEAPEAUIBridgeStreamInstanceProxy@@PEAUSystemAudioStream@@@Z @ 0x18006BA80 (-CreateMicInjectionBridgeSourceStream@CAudioResourceManager@@UEAAJPEAUEndpointCharacteristicsDes.c)
 *     ?CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHHH_JPEAUEndpointCharacteristicsDescriptor@@KW4_AUDCLNT_SHAREMODE@@PEAUIAudioGraphCallback@@PEAUtWAVEFORMATEX@@22PEBU_GUID@@77KPEBGKPEBUSPATIAL_STREAM_PROPERTIES@@W4_BridgeStreamProperties@@2PEAUIProcessSubmixProxy@@U8@PEAUSystemAudioStream@@@Z @ 0x18006CFA0 (-CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHHH_JPEA.c)
 *     _CAudioSrv::ProcessDeviceInternal_::_1_::dtor$0 @ 0x1800794F0 (_CAudioSrv--ProcessDeviceInternal_--_1_--dtor$0.c)
 *     _CEndpointStoreCache::GetEndpointStore_::_1_::dtor$2 @ 0x18007A700 (_CEndpointStoreCache--GetEndpointStore_--_1_--dtor$2.c)
 *     _CAudioSessionManager::Disconnect_::_1_::dtor$1 @ 0x18007BCF0 (_CAudioSessionManager--Disconnect_--_1_--dtor$1.c)
 *     _PublishApoTelemetry_::_1_::dtor$0 @ 0x18007C09C (_PublishApoTelemetry_--_1_--dtor$0.c)
 *     _CVADServer::InitializePolicy_::_1_::dtor$2 @ 0x18007C0E4 (_CVADServer--InitializePolicy_--_1_--dtor$2.c)
 *     _DeriveAudioProcessingModeConfiguration_::_1_::dtor$4 @ 0x18007C41C (_DeriveAudioProcessingModeConfiguration_--_1_--dtor$4.c)
 *     _CAudioResourceManager::GetSaDeviceForSharedStream_::_1_::dtor$2 @ 0x18007C5C6 (_CAudioResourceManager--GetSaDeviceForSharedStream_--_1_--dtor$2.c)
 *     _CPolicyConfig::DisconnectHelper_::_1_::dtor$0 @ 0x18007DD1F (_CPolicyConfig--DisconnectHelper_--_1_--dtor$0.c)
 *     ?GetWatcher@AudioEffectsWatcherFactory@@YAJPEBGKHW4DiscoverySettings@@PEAPEAUIAudioEffectsWatcher@@@Z @ 0x1800D5CD8 (-GetWatcher@AudioEffectsWatcherFactory@@YAJPEBGKHW4DiscoverySettings@@PEAPEAUIAudioEffectsWatche.c)
 *     _AudioEffectsWatcherFactory::GetWatcher_::_1_::dtor$0 @ 0x1800D5F95 (_AudioEffectsWatcherFactory--GetWatcher_--_1_--dtor$0.c)
 *     ?ConfigureAuxiliaryInputStreamForStreamGroup@CAudioResourceManager@@QEAAJAEAV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@PEBG@Z @ 0x1800D8CE4 (-ConfigureAuxiliaryInputStreamForStreamGroup@CAudioResourceManager@@QEAAJAEAV-$ComPtr@UIStreamGr.c)
 *     _CAudioResourceManager::ConfigureAuxiliaryInputStreamForStreamGroup_::_1_::dtor$1 @ 0x1800D90CE (_CAudioResourceManager--ConfigureAuxiliaryInputStreamForStreamGroup_--_1_--dtor$1.c)
 *     ?CreateInternalLoopbackStream@CAudioResourceManager@@IEAAJPEBG_JPEAUIStreamGroupProxy@@PEAUIBridgeStreamInstanceProxy@@PEAUSystemAudioStream@@@Z @ 0x1800D9228 (-CreateInternalLoopbackStream@CAudioResourceManager@@IEAAJPEBG_JPEAUIStreamGroupProxy@@PEAUIBrid.c)
 *     _CAudioResourceManager::CreateInternalLoopbackStream_::_1_::dtor$11 @ 0x1800DA8D2 (_CAudioResourceManager--CreateInternalLoopbackStream_--_1_--dtor$11.c)
 *     ?FindAppropriateStreamGroupAndSaDeviceForStream@CAudioResourceManager@@UEAAJPEAUEndpointCharacteristicsDescriptor@@PEBGPEAUIAudioStreamInfo@@@Z @ 0x1800DAAE0 (-FindAppropriateStreamGroupAndSaDeviceForStream@CAudioResourceManager@@UEAAJPEAUEndpointCharacte.c)
 *     ?ReleaseResource@CAudioResourceManager@@UEAAJ_K@Z @ 0x1800DC5D0 (-ReleaseResource@CAudioResourceManager@@UEAAJ_K@Z.c)
 *     ?UpdateAuxiliaryInputForStreamGroup@CAudioResourceManager@@QEAAXAEBVWeakRef@WRL@Microsoft@@_N1@Z @ 0x1800DD34C (-UpdateAuxiliaryInputForStreamGroup@CAudioResourceManager@@QEAAXAEBVWeakRef@WRL@Microsoft@@_N1@Z.c)
 *     _CAudioResourceManager::UpdateAuxiliaryInputForStreamGroup_::_1_::dtor$2 @ 0x1800DD80C (_CAudioResourceManager--UpdateAuxiliaryInputForStreamGroup_--_1_--dtor$2.c)
 *     ?AllowOffloadStreamCreation@CBtAudioResourceManagerBase@@UEAA_NXZ @ 0x1800F5890 (-AllowOffloadStreamCreation@CBtAudioResourceManagerBase@@UEAA_NXZ.c)
 *     _CBtAudioResourceManagerBase::CreateExclusiveSaDeviceOnRenderEndpoint_::_1_::dtor$1 @ 0x1800F5F27 (_CBtAudioResourceManagerBase--CreateExclusiveSaDeviceOnRenderEndpoint_--_1_--dtor$1.c)
 *     _CBtAudioResourceManagerBase::CreateExclusiveSaDeviceOnRenderEndpoint_::_1_::dtor$3 @ 0x1800F5F33 (_CBtAudioResourceManagerBase--CreateExclusiveSaDeviceOnRenderEndpoint_--_1_--dtor$3.c)
 *     _CBtAudioResourceManagerBase::CreateSaDeviceOnMicrophoneEndpoint_::_1_::dtor$0 @ 0x1800F64DD (_CBtAudioResourceManagerBase--CreateSaDeviceOnMicrophoneEndpoint_--_1_--dtor$0.c)
 *     _CBtAudioResourceManagerBase::CreateSaDeviceOnRenderEndpoint_::_1_::dtor$1 @ 0x1800F6F69 (_CBtAudioResourceManagerBase--CreateSaDeviceOnRenderEndpoint_--_1_--dtor$1.c)
 *     _CBtAudioResourceManagerBase::CreateSaDeviceOnRenderEndpoint_::_1_::dtor$3 @ 0x1800F6F75 (_CBtAudioResourceManagerBase--CreateSaDeviceOnRenderEndpoint_--_1_--dtor$3.c)
 *     _CBtAudioResourceManagerBase::GetSaDeviceForOffloadStream_::_1_::dtor$1 @ 0x1800F9307 (_CBtAudioResourceManagerBase--GetSaDeviceForOffloadStream_--_1_--dtor$1.c)
 *     _CBtAudioResourceManagerBase::GetSaDeviceForOffloadStream_::_1_::dtor$3 @ 0x1800F9313 (_CBtAudioResourceManagerBase--GetSaDeviceForOffloadStream_--_1_--dtor$3.c)
 *     ?RestoreDisplacedPrimaryProfileStreamGroups@CBtAudioResourceManagerBase@@IEAAJXZ @ 0x1800F9E24 (-RestoreDisplacedPrimaryProfileStreamGroups@CBtAudioResourceManagerBase@@IEAAJXZ.c)
 *     _CBtAudioResourceManagerBase::RestoreDisplacedPrimaryProfileStreamGroups_::_1_::dtor$0 @ 0x1800FA70B (_CBtAudioResourceManagerBase--RestoreDisplacedPrimaryProfileStreamGroups_--_1_--dtor$0.c)
 *     ?RestoreDisplacedPrimaryProfileStreamGroupsIfAppropriate@CBtAudioResourceManagerBase@@IEAAJXZ @ 0x1800FA7BC (-RestoreDisplacedPrimaryProfileStreamGroupsIfAppropriate@CBtAudioResourceManagerBase@@IEAAJXZ.c)
 *     _CBtAudioResourceManagerBase::RestoreDisplacedPrimaryProfileStreamGroupsIfAppropriate_::_1_::dtor$2 @ 0x1800FAA5C (_CBtAudioResourceManagerBase--RestoreDisplacedPrimaryProfileStreamGroupsIfAppropria_ea_1800FAA5C.c)
 *     _CBtAudioResourceManagerBase::RestoreDisplacedPrimaryProfileStreamGroupsIfAppropriate_::_1_::dtor$4 @ 0x1800FAA68 (_CBtAudioResourceManagerBase--RestoreDisplacedPrimaryProfileStreamGroupsIfAppropria_ea_1800FAA68.c)
 *     _CBtLeAudioResourceManager::RefreshStreamsOnDevice_::_1_::dtor$1 @ 0x1800FC93C (_CBtLeAudioResourceManager--RefreshStreamsOnDevice_--_1_--dtor$1.c)
 *     _CBtLeAudioResourceManager::RefreshStreamsOnDevice_::_1_::dtor$6 @ 0x1800FC96C (_CBtLeAudioResourceManager--RefreshStreamsOnDevice_--_1_--dtor$6.c)
 *     _CBtLeAudioResourceManager::UpdateBtleStreamContextIfNecessary_::_1_::dtor$0 @ 0x1800FD6BF (_CBtLeAudioResourceManager--UpdateBtleStreamContextIfNecessary_--_1_--dtor$0.c)
 *     AudioServerGetCurrentSharedModeEnginePeriod @ 0x180121070 (AudioServerGetCurrentSharedModeEnginePeriod.c)
 *     AudioServerGetEndpointVpoContext$dtor$1 @ 0x18012214D (AudioServerGetEndpointVpoContext$dtor$1.c)
 *     AudioServerGetStreamVpoContext$dtor$8 @ 0x1801237CA (AudioServerGetStreamVpoContext$dtor$8.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180021F60 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 */

__int64 __fastcall wil::com_ptr_t<CEndpointStore,wil::err_returncode_policy>::~com_ptr_t<CEndpointStore,wil::err_returncode_policy>(
        volatile signed __int32 **a1)
{
  volatile signed __int32 *v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v1);
  return result;
}
