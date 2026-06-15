/*
 * XREFs of ?OnNotify@_CEndpointVolumeNotificationDelegator@CEndpointVolumeState@@UEAAJPEAUAUDIO_VOLUME_NOTIFICATION_DATA@@@Z @ 0x1800411B0
 * Callers:
 *     <none>
 * Callees:
 *     _o_log10_0 @ 0x1800177D8 (_o_log10_0.c)
 */

__int64 __fastcall CEndpointVolumeState::_CEndpointVolumeNotificationDelegator::OnNotify(
        CEndpointVolumeState::_CEndpointVolumeNotificationDelegator *this,
        struct AUDIO_VOLUME_NOTIFICATION_DATA *a2)
{
  __int64 v3; // rax
  float fMasterVolume; // xmm0_4
  double v6; // xmm0_8
  float v7; // xmm1_4

  v3 = *(_QWORD *)&a2->guidEventContext.Data1 - PBM_INITIATED_ENDPOINT_VOLUME_CHANGE;
  if ( *(_QWORD *)&a2->guidEventContext.Data1 == PBM_INITIATED_ENDPOINT_VOLUME_CHANGE )
    v3 = *(_QWORD *)a2->guidEventContext.Data4 - 0x5936EC8617E85EAALL;
  if ( v3 )
  {
    fMasterVolume = a2->fMasterVolume;
    if ( fMasterVolume <= 0.0 )
      v6 = o_log10_0(0.0);
    else
      v6 = o_log10_0(fMasterVolume) * 20.0;
    v7 = v6;
    if ( v7 != 0.0 )
      _InterlockedExchange((volatile __int32 *)(*((_QWORD *)this + 1) + 12LL), 1);
    if ( a2->bMuted )
      _InterlockedExchange((volatile __int32 *)(*((_QWORD *)this + 1) + 16LL), 1);
  }
  return 0LL;
}
