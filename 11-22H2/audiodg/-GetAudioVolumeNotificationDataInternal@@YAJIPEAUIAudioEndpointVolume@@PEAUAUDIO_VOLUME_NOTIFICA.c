/*
 * XREFs of ?GetAudioVolumeNotificationDataInternal@@YAJIPEAUIAudioEndpointVolume@@PEAUAUDIO_VOLUME_NOTIFICATION_DATA@@@Z @ 0x14006CBB4
 * Callers:
 *     ?GetAudioVolumeNotificationData@@YAJPEAUIMMDevice@@PEAPEAUAUDIO_VOLUME_NOTIFICATION_DATA2@@@Z @ 0x14006C7B0 (-GetAudioVolumeNotificationData@@YAJPEAUIMMDevice@@PEAPEAUAUDIO_VOLUME_NOTIFICATION_DATA2@@@Z.c)
 *     ?GetAudioVolumeNotificationData@@YAJPEAUIMMDevice@@PEAPEAUAUDIO_VOLUME_NOTIFICATION_DATA@@@Z @ 0x14006CA58 (-GetAudioVolumeNotificationData@@YAJPEAUIMMDevice@@PEAPEAUAUDIO_VOLUME_NOTIFICATION_DATA@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F210 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14004DF14 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall GetAudioVolumeNotificationDataInternal(
        UINT a1,
        struct IAudioEndpointVolume *a2,
        struct AUDIO_VOLUME_NOTIFICATION_DATA *a3)
{
  int v6; // ebx
  __int64 v7; // rdx
  unsigned int v9; // ebx
  int v10; // eax
  unsigned int v11; // edi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  a3->nChannels = a1;
  v6 = ((__int64 (__fastcall *)(struct IAudioEndpointVolume *, BOOL *))a2->lpVtbl->GetMute)(a2, &a3->bMuted);
  if ( v6 < 0 )
  {
    v7 = 268LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\apoprocessinghost.cpp",
      (const char *)(unsigned int)v6);
    return (unsigned int)v6;
  }
  v6 = ((__int64 (__fastcall *)(struct IAudioEndpointVolume *, float *))a2->lpVtbl->GetMasterVolumeLevelScalar)(
         a2,
         &a3->fMasterVolume);
  if ( v6 < 0 )
  {
    v7 = 269LL;
    goto LABEL_3;
  }
  v9 = 0;
  a3->guidEventContext = GUID_00000000_0000_0000_0000_000000000000;
  if ( !a1 )
    return 0LL;
  while ( 1 )
  {
    v10 = ((__int64 (__fastcall *)(struct IAudioEndpointVolume *, _QWORD, float *))a2->lpVtbl->GetChannelVolumeLevelScalar)(
            a2,
            v9,
            &a3->afChannelVolumes[v9]);
    v11 = v10;
    if ( v10 < 0 )
      break;
    if ( ++v9 >= a1 )
      return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x111,
    (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\apoprocessinghost.cpp",
    (const char *)(unsigned int)v10);
  return v11;
}
