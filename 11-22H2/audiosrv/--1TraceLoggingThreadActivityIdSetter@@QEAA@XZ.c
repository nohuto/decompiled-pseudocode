/*
 * XREFs of ??1TraceLoggingThreadActivityIdSetter@@QEAA@XZ @ 0x1800D15F0
 * Callers:
 *     AudioServerCreateStream @ 0x180011CB0 (AudioServerCreateStream.c)
 *     AudioServerStartStream @ 0x180011E90 (AudioServerStartStream.c)
 *     AudioServerStopStream @ 0x1800127E0 (AudioServerStopStream.c)
 *     ?AudioServerInitialize_Internal@@YAJPEAXPEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PEBU_GUID@@PEAUVadServerSettings@@PEAPEAGPEAUIProcessSubmixProxy@@PEAPEAX@Z @ 0x18003D84C (-AudioServerInitialize_Internal@@YAJPEAXPEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PEBU_GUID@.c)
 *     AudioServerSetAllVolumes @ 0x180050AB0 (AudioServerSetAllVolumes.c)
 *     _CSharedStreamGroupProxy::UpdateAuxiliaryStreamState_::_1_::dtor$4 @ 0x1800793C2 (_CSharedStreamGroupProxy--UpdateAuxiliaryStreamState_--_1_--dtor$4.c)
 *     _AudioServerInitialize_Internal_::_1_::dtor$0 @ 0x18007C02A (_AudioServerInitialize_Internal_--_1_--dtor$0.c)
 *     asm_AudioServerInitializeStream @ 0x1800D3900 (asm_AudioServerInitializeStream.c)
 *     ?RebuildAndPublishFullEffectsListFromApos@AudioEffectsWatcher@@AEAAJXZ @ 0x1800D62EC (-RebuildAndPublishFullEffectsListFromApos@AudioEffectsWatcher@@AEAAJXZ.c)
 *     _AudioEffectsWatcher::RebuildAndPublishFullEffectsListFromApos_::_1_::dtor$4 @ 0x1800D6640 (_AudioEffectsWatcher--RebuildAndPublishFullEffectsListFromApos_--_1_--dtor$4.c)
 *     ?RuntimeClassInitialize@AudioEffectsWatcher@@QEAAJPEBGKHW4DiscoverySettings@@@Z @ 0x1800D6A90 (-RuntimeClassInitialize@AudioEffectsWatcher@@QEAAJPEBGKHW4DiscoverySettings@@@Z.c)
 *     _AudioEffectsWatcher::RuntimeClassInitialize_::_1_::dtor$0 @ 0x1800D6F64 (_AudioEffectsWatcher--RuntimeClassInitialize_--_1_--dtor$0.c)
 *     ?ConfigureAuxiliaryInputStreamForStreamGroup@CAudioResourceManager@@QEAAJAEAV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@PEBG@Z @ 0x1800D8D34 (-ConfigureAuxiliaryInputStreamForStreamGroup@CAudioResourceManager@@QEAAJAEAV-$ComPtr@UIStreamGr.c)
 *     _CAudioResourceManager::ConfigureAuxiliaryInputStreamForStreamGroup_::_1_::dtor$0 @ 0x1800D9112 (_CAudioResourceManager--ConfigureAuxiliaryInputStreamForStreamGroup_--_1_--dtor$0.c)
 *     PolicyConfigSetDeviceSpatialSettings @ 0x1801186B0 (PolicyConfigSetDeviceSpatialSettings.c)
 *     ?GetAudioEffectsChangedWnfStateName@CVADServer@@QEAAJPEA_K@Z @ 0x18011D5A8 (-GetAudioEffectsChangedWnfStateName@CVADServer@@QEAAJPEA_K@Z.c)
 *     _CVADServer::GetAudioEffectsChangedWnfStateName_::_1_::dtor$0 @ 0x18011D7AB (_CVADServer--GetAudioEffectsChangedWnfStateName_--_1_--dtor$0.c)
 *     ?SetAudioEffect@CVADServer@@QEAAJU_GUID@@H@Z @ 0x18011F4C8 (-SetAudioEffect@CVADServer@@QEAAJU_GUID@@H@Z.c)
 *     _CVADServer::SetAudioEffect_::_1_::dtor$0 @ 0x18011F6D1 (_CVADServer--SetAudioEffect_--_1_--dtor$0.c)
 *     AudioServerGetAudioEffectsChangedWnfStateName @ 0x180120970 (AudioServerGetAudioEffectsChangedWnfStateName.c)
 *     AudioServerGetAudioStreamInfo @ 0x180120B80 (AudioServerGetAudioStreamInfo.c)
 *     AudioServerGetCurrentSharedModeEnginePeriod @ 0x1801210C0 (AudioServerGetCurrentSharedModeEnginePeriod.c)
 *     AudioServerGetDevicePeriod @ 0x180121AD0 (AudioServerGetDevicePeriod.c)
 *     AudioServerGetSharedModeEnginePeriod @ 0x1801229E0 (AudioServerGetSharedModeEnginePeriod.c)
 *     AudioServerGetStreamVpoContext$dtor$0 @ 0x1801237C6 (AudioServerGetStreamVpoContext$dtor$0.c)
 *     AudioServerIsFormatSupported @ 0x180123880 (AudioServerIsFormatSupported.c)
 *     AudioServerPopulateAudioHistoryForStream @ 0x180124890 (AudioServerPopulateAudioHistoryForStream.c)
 *     AudioServerPreStartStream @ 0x180124940 (AudioServerPreStartStream.c)
 *     AudioServerSetAllInitialVolumesWithRamp @ 0x180124D00 (AudioServerSetAllInitialVolumesWithRamp.c)
 *     AudioServerSetAudioEffect @ 0x180125000 (AudioServerSetAudioEffect.c)
 *     AudioServerSetChannelVolume @ 0x180125150 (AudioServerSetChannelVolume.c)
 *     AudioServerSetDuckingOptionsForCurrentStream @ 0x180125260 (AudioServerSetDuckingOptionsForCurrentStream.c)
 *     AudioServerSetEchoCancellationRenderEndpoint @ 0x180125370 (AudioServerSetEchoCancellationRenderEndpoint.c)
 *     AudioServerStartStreamAborted @ 0x180125710 (AudioServerStartStreamAborted.c)
 * Callees:
 *     <none>
 */

void __fastcall TraceLoggingThreadActivityIdSetter::~TraceLoggingThreadActivityIdSetter(
        TraceLoggingThreadActivityIdSetter *this)
{
  EtwEventActivityIdControl(4LL, (char *)this + 16);
}
