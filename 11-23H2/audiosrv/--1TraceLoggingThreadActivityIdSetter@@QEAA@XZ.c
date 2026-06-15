/*
 * XREFs of ??1TraceLoggingThreadActivityIdSetter@@QEAA@XZ @ 0x1800D15A0
 * Callers:
 *     AudioServerCreateStream @ 0x180011CB0 (AudioServerCreateStream.c)
 *     AudioServerStartStream @ 0x180011E90 (AudioServerStartStream.c)
 *     AudioServerStopStream @ 0x1800127E0 (AudioServerStopStream.c)
 *     ?AudioServerInitialize_Internal@@YAJPEAXPEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PEBU_GUID@@PEAUVadServerSettings@@PEAPEAGPEAUIProcessSubmixProxy@@PEAPEAX@Z @ 0x18003D84C (-AudioServerInitialize_Internal@@YAJPEAXPEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PEBU_GUID@.c)
 *     AudioServerSetAllVolumes @ 0x180050AB0 (AudioServerSetAllVolumes.c)
 *     _CSharedStreamGroupProxy::UpdateAuxiliaryStreamState_::_1_::dtor$4 @ 0x180079392 (_CSharedStreamGroupProxy--UpdateAuxiliaryStreamState_--_1_--dtor$4.c)
 *     _AudioServerInitialize_Internal_::_1_::dtor$0 @ 0x18007BFFA (_AudioServerInitialize_Internal_--_1_--dtor$0.c)
 *     asm_AudioServerInitializeStream @ 0x1800D38B0 (asm_AudioServerInitializeStream.c)
 *     ?RebuildAndPublishFullEffectsListFromApos@AudioEffectsWatcher@@AEAAJXZ @ 0x1800D629C (-RebuildAndPublishFullEffectsListFromApos@AudioEffectsWatcher@@AEAAJXZ.c)
 *     _AudioEffectsWatcher::RebuildAndPublishFullEffectsListFromApos_::_1_::dtor$4 @ 0x1800D65F0 (_AudioEffectsWatcher--RebuildAndPublishFullEffectsListFromApos_--_1_--dtor$4.c)
 *     ?RuntimeClassInitialize@AudioEffectsWatcher@@QEAAJPEBGKHW4DiscoverySettings@@@Z @ 0x1800D6A40 (-RuntimeClassInitialize@AudioEffectsWatcher@@QEAAJPEBGKHW4DiscoverySettings@@@Z.c)
 *     _AudioEffectsWatcher::RuntimeClassInitialize_::_1_::dtor$0 @ 0x1800D6F14 (_AudioEffectsWatcher--RuntimeClassInitialize_--_1_--dtor$0.c)
 *     ?ConfigureAuxiliaryInputStreamForStreamGroup@CAudioResourceManager@@QEAAJAEAV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@PEBG@Z @ 0x1800D8CE4 (-ConfigureAuxiliaryInputStreamForStreamGroup@CAudioResourceManager@@QEAAJAEAV-$ComPtr@UIStreamGr.c)
 *     _CAudioResourceManager::ConfigureAuxiliaryInputStreamForStreamGroup_::_1_::dtor$0 @ 0x1800D90C2 (_CAudioResourceManager--ConfigureAuxiliaryInputStreamForStreamGroup_--_1_--dtor$0.c)
 *     PolicyConfigSetDeviceSpatialSettings @ 0x180118660 (PolicyConfigSetDeviceSpatialSettings.c)
 *     ?GetAudioEffectsChangedWnfStateName@CVADServer@@QEAAJPEA_K@Z @ 0x18011D558 (-GetAudioEffectsChangedWnfStateName@CVADServer@@QEAAJPEA_K@Z.c)
 *     _CVADServer::GetAudioEffectsChangedWnfStateName_::_1_::dtor$0 @ 0x18011D75B (_CVADServer--GetAudioEffectsChangedWnfStateName_--_1_--dtor$0.c)
 *     ?SetAudioEffect@CVADServer@@QEAAJU_GUID@@H@Z @ 0x18011F478 (-SetAudioEffect@CVADServer@@QEAAJU_GUID@@H@Z.c)
 *     _CVADServer::SetAudioEffect_::_1_::dtor$0 @ 0x18011F681 (_CVADServer--SetAudioEffect_--_1_--dtor$0.c)
 *     AudioServerGetAudioEffectsChangedWnfStateName @ 0x180120920 (AudioServerGetAudioEffectsChangedWnfStateName.c)
 *     AudioServerGetAudioStreamInfo @ 0x180120B30 (AudioServerGetAudioStreamInfo.c)
 *     AudioServerGetCurrentSharedModeEnginePeriod @ 0x180121070 (AudioServerGetCurrentSharedModeEnginePeriod.c)
 *     AudioServerGetDevicePeriod @ 0x180121A80 (AudioServerGetDevicePeriod.c)
 *     AudioServerGetSharedModeEnginePeriod @ 0x180122990 (AudioServerGetSharedModeEnginePeriod.c)
 *     AudioServerGetStreamVpoContext$dtor$0 @ 0x180123776 (AudioServerGetStreamVpoContext$dtor$0.c)
 *     AudioServerIsFormatSupported @ 0x180123830 (AudioServerIsFormatSupported.c)
 *     AudioServerPopulateAudioHistoryForStream @ 0x180124840 (AudioServerPopulateAudioHistoryForStream.c)
 *     AudioServerPreStartStream @ 0x1801248F0 (AudioServerPreStartStream.c)
 *     AudioServerSetAllInitialVolumesWithRamp @ 0x180124CB0 (AudioServerSetAllInitialVolumesWithRamp.c)
 *     AudioServerSetAudioEffect @ 0x180124FB0 (AudioServerSetAudioEffect.c)
 *     AudioServerSetChannelVolume @ 0x180125100 (AudioServerSetChannelVolume.c)
 *     AudioServerSetDuckingOptionsForCurrentStream @ 0x180125210 (AudioServerSetDuckingOptionsForCurrentStream.c)
 *     AudioServerSetEchoCancellationRenderEndpoint @ 0x180125320 (AudioServerSetEchoCancellationRenderEndpoint.c)
 *     AudioServerStartStreamAborted @ 0x1801256C0 (AudioServerStartStreamAborted.c)
 * Callees:
 *     <none>
 */

void __fastcall TraceLoggingThreadActivityIdSetter::~TraceLoggingThreadActivityIdSetter(
        TraceLoggingThreadActivityIdSetter *this)
{
  EtwEventActivityIdControl(4LL, (char *)this + 16);
}
