/*
 * XREFs of ??0SetActivityIdFromVadServer@@QEAA@PEAX@Z @ 0x18001298C
 * Callers:
 *     AUDIOSERVER_rundown @ 0x180006280 (AUDIOSERVER_rundown.c)
 *     AudioServerCreateStream @ 0x180011CB0 (AudioServerCreateStream.c)
 *     AudioServerStartStream @ 0x180011E90 (AudioServerStartStream.c)
 *     AudioServerDisconnect @ 0x1800126E0 (AudioServerDisconnect.c)
 *     AudioServerStopStream @ 0x1800127E0 (AudioServerStopStream.c)
 *     AudioServerDestroyStream @ 0x1800128C0 (AudioServerDestroyStream.c)
 *     AudioServerSetAllVolumes @ 0x180050AB0 (AudioServerSetAllVolumes.c)
 *     AudioServerGetChannelCount @ 0x1800515A0 (AudioServerGetChannelCount.c)
 *     AudioServerGetAudioSession @ 0x180051950 (AudioServerGetAudioSession.c)
 *     AudioServerGetAllVolumes @ 0x180051C30 (AudioServerGetAllVolumes.c)
 *     AudioServerGetAmbHeadTracking @ 0x1801208E0 (AudioServerGetAmbHeadTracking.c)
 *     AudioServerGetAudioEffectsChangedWnfStateName @ 0x180120970 (AudioServerGetAudioEffectsChangedWnfStateName.c)
 *     AudioServerGetAudioStreamInfo @ 0x180120B80 (AudioServerGetAudioStreamInfo.c)
 *     AudioServerGetChannelVolume @ 0x180120FE0 (AudioServerGetChannelVolume.c)
 *     AudioServerGetStreamLatency @ 0x180122E70 (AudioServerGetStreamLatency.c)
 *     AudioServerGetStreamVpoContext @ 0x180122F50 (AudioServerGetStreamVpoContext.c)
 *     AudioServerPopulateAudioHistoryForStream @ 0x180124890 (AudioServerPopulateAudioHistoryForStream.c)
 *     AudioServerPreStartStream @ 0x180124940 (AudioServerPreStartStream.c)
 *     AudioServerReleaseAudioStreamHandle @ 0x180124A40 (AudioServerReleaseAudioStreamHandle.c)
 *     AudioServerResetEndpoint @ 0x180124C20 (AudioServerResetEndpoint.c)
 *     AudioServerSetAllInitialVolumesWithRamp @ 0x180124D00 (AudioServerSetAllInitialVolumesWithRamp.c)
 *     AudioServerSetAmbHeadTracking @ 0x180124E10 (AudioServerSetAmbHeadTracking.c)
 *     AudioServerSetAmbMetadata @ 0x180124EA0 (AudioServerSetAmbMetadata.c)
 *     AudioServerSetAmbRotation @ 0x180124F30 (AudioServerSetAmbRotation.c)
 *     AudioServerSetAudioEffect @ 0x180125000 (AudioServerSetAudioEffect.c)
 *     AudioServerSetChannelVolume @ 0x180125150 (AudioServerSetChannelVolume.c)
 *     AudioServerSetDuckingOptionsForCurrentStream @ 0x180125260 (AudioServerSetDuckingOptionsForCurrentStream.c)
 *     AudioServerSetEchoCancellationRenderEndpoint @ 0x180125370 (AudioServerSetEchoCancellationRenderEndpoint.c)
 *     AudioServerSetLastBufferInProgress @ 0x180125480 (AudioServerSetLastBufferInProgress.c)
 *     AudioServerSetStreamSampleRate @ 0x180125570 (AudioServerSetStreamSampleRate.c)
 *     AudioServerStartStreamAborted @ 0x180125710 (AudioServerStartStreamAborted.c)
 * Callees:
 *     __security_check_cookie @ 0x1800669A0 (__security_check_cookie.c)
 */

SetActivityIdFromVadServer *__fastcall SetActivityIdFromVadServer::SetActivityIdFromVadServer(
        SetActivityIdFromVadServer *this,
        char *a2)
{
  GUID v3; // xmm0

  if ( a2 )
    v3 = *(GUID *)(a2 + 248);
  else
    v3 = GUID_00000000_0000_0000_0000_000000000000;
  *(GUID *)this = v3;
  *((GUID *)this + 1) = v3;
  EtwEventActivityIdControl(4LL, (char *)this + 16);
  return this;
}
