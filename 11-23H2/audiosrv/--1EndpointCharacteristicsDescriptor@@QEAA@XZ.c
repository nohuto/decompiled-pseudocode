/*
 * XREFs of ??1EndpointCharacteristicsDescriptor@@QEAA@XZ @ 0x18000CB5C
 * Callers:
 *     ?CreateStream@CVADServer@@UEAAJPEAUIAudioProcess@@W4SYSTEM_AUDIO_STREAM_TYPE@@_J2PEBGPEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x18000F420 (-CreateStream@CVADServer@@UEAAJPEAUIAudioProcess@@W4SYSTEM_AUDIO_STREAM_TYPE@@_J2PEBGPEAUSYSTEM_.c)
 *     ?GetDeviceFormatHelper@CPolicyConfig@@AEAAJPEBGW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@HPEAPEAUtWAVEFORMATEX@@PEAPEAUSpatialAudioSettings@@PEAIPEAPEAUSpatialAudioEncoderDescriptor@@@Z @ 0x18002023C (-GetDeviceFormatHelper@CPolicyConfig@@AEAAJPEBGW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000.c)
 *     ?RuntimeClassInitialize@CVADServer@@QEAAJPEAUIAudioProcess@@PEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PEBU_GUID@@PEAUVadServerSettings@@PEAPEAGPEAUIProcessSubmixProxy@@@Z @ 0x18003E018 (-RuntimeClassInitialize@CVADServer@@QEAAJPEAUIAudioProcess@@PEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVE.c)
 *     _lambda_cbc41e859029890b22757779477c9c18_::operator() @ 0x180064288 (_lambda_cbc41e859029890b22757779477c9c18_--operator().c)
 *     _CPolicyConfig::GetDeviceFormatHelper_::_1_::dtor$0 @ 0x180079C92 (_CPolicyConfig--GetDeviceFormatHelper_--_1_--dtor$0.c)
 *     _CVADServer::RuntimeClassInitialize_::_1_::dtor$1 @ 0x18007C066 (_CVADServer--RuntimeClassInitialize_--_1_--dtor$1.c)
 *     ?ReloadApos@AudioEffectsWatcher@@AEAAJXZ @ 0x1800D67CC (-ReloadApos@AudioEffectsWatcher@@AEAAJXZ.c)
 *     _AudioEffectsWatcher::ReloadApos_::_1_::dtor$0 @ 0x1800D6A2B (_AudioEffectsWatcher--ReloadApos_--_1_--dtor$0.c)
 *     ?RuntimeClassInitialize@AudioEffectsWatcher@@QEAAJPEBGKHW4DiscoverySettings@@@Z @ 0x1800D6A40 (-RuntimeClassInitialize@AudioEffectsWatcher@@QEAAJPEBGKHW4DiscoverySettings@@@Z.c)
 *     _AudioEffectsWatcher::RuntimeClassInitialize_::_1_::dtor$2 @ 0x1800D6F2C (_AudioEffectsWatcher--RuntimeClassInitialize_--_1_--dtor$2.c)
 *     ?CreateInternalLoopbackStream@CAudioResourceManager@@IEAAJPEBG_JPEAUIStreamGroupProxy@@PEAUIBridgeStreamInstanceProxy@@PEAUSystemAudioStream@@@Z @ 0x1800D9228 (-CreateInternalLoopbackStream@CAudioResourceManager@@IEAAJPEBG_JPEAUIStreamGroupProxy@@PEAUIBrid.c)
 *     _CAudioResourceManager::CreateInternalLoopbackStream_::_1_::dtor$0 @ 0x1800DA84E (_CAudioResourceManager--CreateInternalLoopbackStream_--_1_--dtor$0.c)
 *     _CAudioResourceManager::ReevaluateSaDeviceSettings_::_1_::dtor$0 @ 0x1800DC446 (_CAudioResourceManager--ReevaluateSaDeviceSettings_--_1_--dtor$0.c)
 *     ?UpdateAuxiliaryInputForStreamGroup@CAudioResourceManager@@QEAAXAEBVWeakRef@WRL@Microsoft@@_N1@Z @ 0x1800DD34C (-UpdateAuxiliaryInputForStreamGroup@CAudioResourceManager@@QEAAXAEBVWeakRef@WRL@Microsoft@@_N1@Z.c)
 *     _CAudioResourceManager::UpdateAuxiliaryInputForStreamGroup_::_1_::dtor$3 @ 0x1800DD818 (_CAudioResourceManager--UpdateAuxiliaryInputForStreamGroup_--_1_--dtor$3.c)
 *     ?SetAudioEffect@CAudioStream@@QEAAJU_GUID@@H@Z @ 0x1800ED534 (-SetAudioEffect@CAudioStream@@QEAAJU_GUID@@H@Z.c)
 *     _CAudioStream::SetAudioEffect_::_1_::dtor$0 @ 0x1800ED8D1 (_CAudioStream--SetAudioEffect_--_1_--dtor$0.c)
 *     _CAudioStream::SetEchoCancellationRenderEndpoint_::_1_::dtor$3 @ 0x1800EDD1E (_CAudioStream--SetEchoCancellationRenderEndpoint_--_1_--dtor$3.c)
 *     ?CreateSecondaryProfileRenderSaDeviceWithDefaultParameters@CBtAudioResourceManagerBase@@IEAAJPEAPEAUISaDeviceProxy@@@Z @ 0x1800F7000 (-CreateSecondaryProfileRenderSaDeviceWithDefaultParameters@CBtAudioResourceManagerBase@@IEAAJPEA.c)
 *     _CBtAudioResourceManagerBase::CreateSecondaryProfileRenderSaDeviceWithDefaultParameters_::_1_::dtor$0 @ 0x1800F71DB (_CBtAudioResourceManagerBase--CreateSecondaryProfileRenderSaDeviceWithDefaultParameters_--_1_--d.c)
 *     ?RestoreDisplacedPrimaryProfileStreamGroups@CBtAudioResourceManagerBase@@IEAAJXZ @ 0x1800F9E24 (-RestoreDisplacedPrimaryProfileStreamGroups@CBtAudioResourceManagerBase@@IEAAJXZ.c)
 *     _CBtAudioResourceManagerBase::RestoreDisplacedPrimaryProfileStreamGroups_::_1_::dtor$8 @ 0x1800FA777 (_CBtAudioResourceManagerBase--RestoreDisplacedPrimaryProfileStreamGroups_--_1_--dtor$8.c)
 *     _CBtLeAudioResourceManager::RefreshStreamsOnDevice_::_1_::dtor$2 @ 0x1800FC948 (_CBtLeAudioResourceManager--RefreshStreamsOnDevice_--_1_--dtor$2.c)
 *     _CBtLeAudioResourceManager::RefreshStreamsOnDevice_::_1_::dtor$7 @ 0x1800FC978 (_CBtLeAudioResourceManager--RefreshStreamsOnDevice_--_1_--dtor$7.c)
 *     ?GetCustomDeviceFormatsSupportedOnEndpoint@CPolicyConfig@@UEAAJPEBGPEAIPEAPEAPEAUtWAVEFORMATEX@@PEAPEAPEAG@Z @ 0x180115AB0 (-GetCustomDeviceFormatsSupportedOnEndpoint@CPolicyConfig@@UEAAJPEBGPEAIPEAPEAPEAUtWAVEFORMATEX@@.c)
 *     _CPolicyConfig::GetCustomDeviceFormatsSupportedOnEndpoint_::_1_::dtor$0 @ 0x180115B72 (_CPolicyConfig--GetCustomDeviceFormatsSupportedOnEndpoint_--_1_--dtor$0.c)
 *     ?HasThirdPartySystemEffects@CPolicyConfig@@UEAAHPEBG@Z @ 0x1801162D0 (-HasThirdPartySystemEffects@CPolicyConfig@@UEAAHPEBG@Z.c)
 *     _CPolicyConfig::HasThirdPartySystemEffects_::_1_::dtor$0 @ 0x180116365 (_CPolicyConfig--HasThirdPartySystemEffects_--_1_--dtor$0.c)
 *     ?RefreshConnectorFormats@CPolicyConfig@@SAJPEBG@Z @ 0x18011668C (-RefreshConnectorFormats@CPolicyConfig@@SAJPEBG@Z.c)
 *     _CPolicyConfig::RefreshConnectorFormats_::_1_::dtor$1 @ 0x180116814 (_CPolicyConfig--RefreshConnectorFormats_--_1_--dtor$1.c)
 *     ?SetDeviceFormatCommon@CPolicyConfig@@QEAAJPEBGPEBUtWAVEFORMATEX@@PEBUSpatialAudioSettings@@@Z @ 0x180116BA0 (-SetDeviceFormatCommon@CPolicyConfig@@QEAAJPEBGPEBUtWAVEFORMATEX@@PEBUSpatialAudioSettings@@@Z.c)
 *     _CPolicyConfig::SetDeviceFormatCommon_::_1_::dtor$0 @ 0x180116C6E (_CPolicyConfig--SetDeviceFormatCommon_--_1_--dtor$0.c)
 *     AudioServerGetCurrentSharedModeEnginePeriod @ 0x180121070 (AudioServerGetCurrentSharedModeEnginePeriod.c)
 *     AudioServerGetDevicePeriod @ 0x180121A80 (AudioServerGetDevicePeriod.c)
 *     AudioServerGetSharedModeEnginePeriod @ 0x180122990 (AudioServerGetSharedModeEnginePeriod.c)
 *     AudioServerIsFormatSupported @ 0x180123830 (AudioServerIsFormatSupported.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180030368 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

void __fastcall EndpointCharacteristicsDescriptor::~EndpointCharacteristicsDescriptor(
        EndpointCharacteristicsDescriptor *this)
{
  std::_Ref_count_base *v2; // rcx

  v2 = (std::_Ref_count_base *)*((_QWORD *)this + 2);
  if ( v2 )
    std::_Ref_count_base::_Decref(v2);
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)this);
}
