/*
 * XREFs of ??1?$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18002B484
 * Callers:
 *     ?CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHH_JPEAVCEndpointCharacteristics@@KW4_AUDCLNT_SHAREMODE@@PEAUIAudioGraphCallback@@PEAUtWAVEFORMATEX@@22PEBU_GUID@@77KPEBGKPEBUSPATIAL_STREAM_PROPERTIES@@PEAUIProcessSubmixProxy@@PEAUSystemAudioStream@@@Z @ 0x180028DE0 (-CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHH_JPEAV.c)
 *     _lambda_9f1ed336c6f1042f8318a1cd576b00ef_::operator() @ 0x180065930 (_lambda_9f1ed336c6f1042f8318a1cd576b00ef_--operator().c)
 *     __lambda_9f1ed336c6f1042f8318a1cd576b00ef_::operator()_::_1_::dtor$2 @ 0x180065BFE (__lambda_9f1ed336c6f1042f8318a1cd576b00ef_--operator()_--_1_--dtor$2.c)
 *     _PublishApoTelemetry_::_1_::dtor$0 @ 0x18006D3D2 (_PublishApoTelemetry_--_1_--dtor$0.c)
 *     _CVADServer::InitializePolicy_::_1_::dtor$2 @ 0x18006D980 (_CVADServer--InitializePolicy_--_1_--dtor$2.c)
 *     _CEndpointStoreCache::GetEndpointStore_::_1_::dtor$2 @ 0x18006DB90 (_CEndpointStoreCache--GetEndpointStore_--_1_--dtor$2.c)
 *     _CAudioResourceManager::GetSaDeviceForSharedStream_::_1_::dtor$0 @ 0x18006FA32 (_CAudioResourceManager--GetSaDeviceForSharedStream_--_1_--dtor$0.c)
 *     _CAudioResourceManager::GetSaDeviceForSharedStream_::_1_::dtor$2 @ 0x18006FA56 (_CAudioResourceManager--GetSaDeviceForSharedStream_--_1_--dtor$2.c)
 *     _CAudioResourceManager::DestroyStream_::_1_::dtor$5 @ 0x180071C00 (_CAudioResourceManager--DestroyStream_--_1_--dtor$5.c)
 *     _CAudioSrv::ProcessDeviceInternal_::_1_::dtor$0 @ 0x1800C47FD (_CAudioSrv--ProcessDeviceInternal_--_1_--dtor$0.c)
 *     _AudioEffectsWatcherFactory::GetWatcher_::_1_::dtor$0 @ 0x1800D3473 (_AudioEffectsWatcherFactory--GetWatcher_--_1_--dtor$0.c)
 *     _CAudioSessionManager::Disconnect_::_1_::dtor$1 @ 0x1800E0359 (_CAudioSessionManager--Disconnect_--_1_--dtor$1.c)
 *     _CPolicyConfig::DisconnectHelper_::_1_::dtor$0 @ 0x1800E9790 (_CPolicyConfig--DisconnectHelper_--_1_--dtor$0.c)
 *     AudioServerGetEndpointVpoContext$dtor$1 @ 0x1800F25AD (AudioServerGetEndpointVpoContext$dtor$1.c)
 *     AudioServerGetStreamVpoContext$dtor$8 @ 0x1800F3454 (AudioServerGetStreamVpoContext$dtor$8.c)
 *     _CAudioResourceManager::ConfigureAuxiliaryInputStreamForStreamGroup_::_1_::dtor$1 @ 0x1800FEAAD (_CAudioResourceManager--ConfigureAuxiliaryInputStreamForStreamGroup_--_1_--dtor$1.c)
 *     ?CreateInternalLoopbackStream@CAudioResourceManager@@IEAAJPEBG_JPEAUIStreamGroupProxy@@PEAUSystemAudioStream@@@Z @ 0x1800FEAD8 (-CreateInternalLoopbackStream@CAudioResourceManager@@IEAAJPEBG_JPEAUIStreamGroupProxy@@PEAUSyste.c)
 *     _CAudioResourceManager::CreateInternalLoopbackStream_::_1_::dtor$12 @ 0x1800FFFBF (_CAudioResourceManager--CreateInternalLoopbackStream_--_1_--dtor$12.c)
 *     _CAudioResourceManager::UpdateAuxiliaryInputForStreamGroup_::_1_::dtor$2 @ 0x1801024C9 (_CAudioResourceManager--UpdateAuxiliaryInputForStreamGroup_--_1_--dtor$2.c)
 *     ?AllowOffloadStreamCreation@CBtAudioResourceManager@@UEAA_NXZ @ 0x180113A70 (-AllowOffloadStreamCreation@CBtAudioResourceManager@@UEAA_NXZ.c)
 *     _CBtAudioResourceManager::CreateExclusiveSaDeviceOnRenderEndpoint_::_1_::dtor$1 @ 0x18011407A (_CBtAudioResourceManager--CreateExclusiveSaDeviceOnRenderEndpoint_--_1_--dtor$1.c)
 *     _CBtAudioResourceManager::CreateExclusiveSaDeviceOnRenderEndpoint_::_1_::dtor$3 @ 0x180114086 (_CBtAudioResourceManager--CreateExclusiveSaDeviceOnRenderEndpoint_--_1_--dtor$3.c)
 *     _CBtAudioResourceManager::CreateSaDeviceOnHfpMicrophoneEndpoint_::_1_::dtor$0 @ 0x1801145B5 (_CBtAudioResourceManager--CreateSaDeviceOnHfpMicrophoneEndpoint_--_1_--dtor$0.c)
 *     _CBtAudioResourceManager::CreateSaDeviceOnRenderEndpoint_::_1_::dtor$1 @ 0x180114DF1 (_CBtAudioResourceManager--CreateSaDeviceOnRenderEndpoint_--_1_--dtor$1.c)
 *     _CBtAudioResourceManager::CreateSaDeviceOnRenderEndpoint_::_1_::dtor$3 @ 0x180114DFD (_CBtAudioResourceManager--CreateSaDeviceOnRenderEndpoint_--_1_--dtor$3.c)
 *     _CBtAudioResourceManager::GetSaDeviceForOffloadStream_::_1_::dtor$1 @ 0x180116723 (_CBtAudioResourceManager--GetSaDeviceForOffloadStream_--_1_--dtor$1.c)
 *     _CBtAudioResourceManager::GetSaDeviceForOffloadStream_::_1_::dtor$3 @ 0x18011672F (_CBtAudioResourceManager--GetSaDeviceForOffloadStream_--_1_--dtor$3.c)
 *     ?RestoreDisplacedA2dpStreamGroups@CBtAudioResourceManager@@AEAAJXZ @ 0x180116D54 (-RestoreDisplacedA2dpStreamGroups@CBtAudioResourceManager@@AEAAJXZ.c)
 *     _CBtAudioResourceManager::RestoreDisplacedA2dpStreamGroups_::_1_::dtor$0 @ 0x1801174A9 (_CBtAudioResourceManager--RestoreDisplacedA2dpStreamGroups_--_1_--dtor$0.c)
 *     _CBtAudioResourceManager::RestoreDisplacedA2dpStreamGroupsIfAppropriate_::_1_::dtor$2 @ 0x180117708 (_CBtAudioResourceManager--RestoreDisplacedA2dpStreamGroupsIfAppropriate_--_1_--dtor$2.c)
 *     _CBtAudioResourceManager::RestoreDisplacedA2dpStreamGroupsIfAppropriate_::_1_::dtor$4 @ 0x180117714 (_CBtAudioResourceManager--RestoreDisplacedA2dpStreamGroupsIfAppropriate_--_1_--dtor$4.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18002B4B0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 */

__int64 __fastcall wil::com_ptr_t<CEndpointStore,wil::err_returncode_policy>::~com_ptr_t<CEndpointStore,wil::err_returncode_policy>(
        __int64 *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v1);
  return result;
}
