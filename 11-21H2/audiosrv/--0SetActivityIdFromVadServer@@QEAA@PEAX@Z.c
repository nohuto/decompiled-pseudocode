/*
 * XREFs of ??0SetActivityIdFromVadServer@@QEAA@PEAX@Z @ 0x1800ED894
 * Callers:
 *     AUDIOSERVER_rundown @ 0x1800F0DE0 (AUDIOSERVER_rundown.c)
 *     AudioServerGetAmbHeadTracking @ 0x1800F1120 (AudioServerGetAmbHeadTracking.c)
 *     AudioServerGetAudioEffectsChangedWnfStateName @ 0x1800F11C0 (AudioServerGetAudioEffectsChangedWnfStateName.c)
 *     AudioServerGetAudioHistoryProducerInfo @ 0x1800F13A0 (AudioServerGetAudioHistoryProducerInfo.c)
 *     AudioServerGetChannelVolume @ 0x1800F1810 (AudioServerGetChannelVolume.c)
 *     AudioServerGetStreamLatency @ 0x1800F2A80 (AudioServerGetStreamLatency.c)
 *     AudioServerGetStreamVpoContext @ 0x1800F2B70 (AudioServerGetStreamVpoContext.c)
 *     AudioServerPopulateAudioHistoryForStream @ 0x1800F3770 (AudioServerPopulateAudioHistoryForStream.c)
 *     AudioServerPreStartStream @ 0x1800F3830 (AudioServerPreStartStream.c)
 *     AudioServerReleaseAudioHistoryProducerHandle @ 0x1800F3930 (AudioServerReleaseAudioHistoryProducerHandle.c)
 *     AudioServerResetEndpoint @ 0x1800F3B20 (AudioServerResetEndpoint.c)
 *     AudioServerSetAllInitialVolumesWithRamp @ 0x1800F3C10 (AudioServerSetAllInitialVolumesWithRamp.c)
 *     AudioServerSetAmbHeadTracking @ 0x1800F3D20 (AudioServerSetAmbHeadTracking.c)
 *     AudioServerSetAmbMetadata @ 0x1800F3DC0 (AudioServerSetAmbMetadata.c)
 *     AudioServerSetAmbRotation @ 0x1800F3E60 (AudioServerSetAmbRotation.c)
 *     AudioServerSetAudioEffect @ 0x1800F3F40 (AudioServerSetAudioEffect.c)
 *     AudioServerSetChannelVolume @ 0x1800F4040 (AudioServerSetChannelVolume.c)
 *     AudioServerSetDuckingOptionsForCurrentStream @ 0x1800F4150 (AudioServerSetDuckingOptionsForCurrentStream.c)
 *     AudioServerSetLastBufferInProgress @ 0x1800F4250 (AudioServerSetLastBufferInProgress.c)
 *     AudioServerSetStreamSampleRate @ 0x1800F4340 (AudioServerSetStreamSampleRate.c)
 *     AudioServerStartStreamAborted @ 0x1800F4500 (AudioServerStartStreamAborted.c)
 * Callees:
 *     __security_check_cookie @ 0x18005E920 (__security_check_cookie.c)
 */

SetActivityIdFromVadServer *__fastcall SetActivityIdFromVadServer::SetActivityIdFromVadServer(
        SetActivityIdFromVadServer *this,
        char *a2)
{
  GUID v3; // xmm0

  if ( a2 )
    v3 = *(GUID *)(a2 + 280);
  else
    v3 = GUID_00000000_0000_0000_0000_000000000000;
  *(GUID *)this = v3;
  *((GUID *)this + 1) = v3;
  EtwEventActivityIdControl(4LL, (char *)this + 16);
  return this;
}
