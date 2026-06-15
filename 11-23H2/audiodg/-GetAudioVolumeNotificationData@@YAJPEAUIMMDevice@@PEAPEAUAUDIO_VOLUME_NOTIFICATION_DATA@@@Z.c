/*
 * XREFs of ?GetAudioVolumeNotificationData@@YAJPEAUIMMDevice@@PEAPEAUAUDIO_VOLUME_NOTIFICATION_DATA@@@Z @ 0x14006CA08
 * Callers:
 *     ?QueueInitialVolumeNotification@@YAJW4APO_NOTIFICATION_TYPE@@AEAUAUDIO_ENDPOINT_VOLUME_APO_NOTIFICATION_DESCRIPTOR@@PEAVCAPOProcessingHostObject@@@Z @ 0x14006D9DC (-QueueInitialVolumeNotification@@YAJW4APO_NOTIFICATION_TYPE@@AEAUAUDIO_ENDPOINT_VOLUME_APO_NOTIF.c)
 * Callees:
 *     ??1?$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140002804 (--1-$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x14002850C (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F1D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14004DED4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_ptr@UAUDIO_VOLUME_NOTIFICATION_DATA@@U?$default_delete@UAUDIO_VOLUME_NOTIFICATION_DATA@@@std@@@std@@QEAA@XZ @ 0x14006BAA0 (--1-$unique_ptr@UAUDIO_VOLUME_NOTIFICATION_DATA@@U-$default_delete@UAUDIO_VOLUME_NOTIFICATION_DA.c)
 *     ?GetAudioVolumeNotificationDataInternal@@YAJIPEAUIAudioEndpointVolume@@PEAUAUDIO_VOLUME_NOTIFICATION_DATA@@@Z @ 0x14006CB64 (-GetAudioVolumeNotificationDataInternal@@YAJIPEAUIAudioEndpointVolume@@PEAUAUDIO_VOLUME_NOTIFICA.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall GetAudioVolumeNotificationData(struct IMMDevice *a1, struct AUDIO_VOLUME_NOTIFICATION_DATA **a2)
{
  struct IMMDeviceVtbl *lpVtbl; // rax
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rdx
  struct AUDIO_VOLUME_NOTIFICATION_DATA *v7; // rax
  struct AUDIO_VOLUME_NOTIFICATION_DATA *v8; // rbx
  int AudioVolumeNotificationDataInternal; // eax
  unsigned int v10; // edi
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  unsigned int v13; // [rsp+50h] [rbp+8h] BYREF
  struct IAudioEndpointVolume *v14; // [rsp+60h] [rbp+18h] BYREF
  struct AUDIO_VOLUME_NOTIFICATION_DATA *v15; // [rsp+68h] [rbp+20h] BYREF

  lpVtbl = a1->lpVtbl;
  v14 = 0LL;
  v4 = ((__int64 (__fastcall *)(struct IMMDevice *, GUID *, __int64))lpVtbl->Activate)(
         a1,
         &GUID_5cdf2c82_841e_4546_9722_0cf74078229a,
         23LL);
  v5 = v4;
  if ( v4 < 0 )
  {
    v6 = 282LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\apoprocessinghost.cpp",
      (const char *)(unsigned int)v4);
    goto LABEL_11;
  }
  v4 = ((__int64 (__fastcall *)(struct IAudioEndpointVolume *, unsigned int *))v14->lpVtbl->GetChannelCount)(v14, &v13);
  v5 = v4;
  if ( v4 < 0 )
  {
    v6 = 285LL;
    goto LABEL_5;
  }
  v7 = (struct AUDIO_VOLUME_NOTIFICATION_DATA *)operator new[](
                                                  4LL * v13 + 32,
                                                  (const struct std::nothrow_t *)&std::nothrow);
  v8 = v7;
  v15 = v7;
  if ( v7 )
  {
    AudioVolumeNotificationDataInternal = GetAudioVolumeNotificationDataInternal(v13, v14, v7);
    v10 = AudioVolumeNotificationDataInternal;
    if ( AudioVolumeNotificationDataInternal >= 0 )
    {
      *a2 = v8;
      v5 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x123,
        (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\apoprocessinghost.cpp",
        (const char *)(unsigned int)AudioVolumeNotificationDataInternal);
      std::unique_ptr<AUDIO_VOLUME_NOTIFICATION_DATA>::~unique_ptr<AUDIO_VOLUME_NOTIFICATION_DATA>((void **)&v15);
      v5 = v10;
    }
  }
  else
  {
    v5 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x121,
      (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\apoprocessinghost.cpp",
      (const char *)0x8007000ELL);
    std::unique_ptr<AUDIO_VOLUME_NOTIFICATION_DATA>::~unique_ptr<AUDIO_VOLUME_NOTIFICATION_DATA>((void **)&v15);
  }
LABEL_11:
  wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>((__int64 *)&v14);
  return v5;
}
