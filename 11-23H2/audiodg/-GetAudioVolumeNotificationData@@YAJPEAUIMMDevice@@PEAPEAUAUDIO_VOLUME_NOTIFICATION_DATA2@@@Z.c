/*
 * XREFs of ?GetAudioVolumeNotificationData@@YAJPEAUIMMDevice@@PEAPEAUAUDIO_VOLUME_NOTIFICATION_DATA2@@@Z @ 0x14006C760
 * Callers:
 *     ?QueueInitialVolumeNotification@@YAJW4APO_NOTIFICATION_TYPE@@AEAUAUDIO_ENDPOINT_VOLUME_APO_NOTIFICATION_DESCRIPTOR@@PEAVCAPOProcessingHostObject@@@Z @ 0x14006D9DC (-QueueInitialVolumeNotification@@YAJW4APO_NOTIFICATION_TYPE@@AEAUAUDIO_ENDPOINT_VOLUME_APO_NOTIF.c)
 * Callees:
 *     ??1?$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140002804 (--1-$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x140028498 (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F1D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14004DED4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_ptr@UAUDIO_VOLUME_NOTIFICATION_DATA2@@U?$default_delete@UAUDIO_VOLUME_NOTIFICATION_DATA2@@@std@@@std@@QEAA@XZ @ 0x14006BA7C (--1-$unique_ptr@UAUDIO_VOLUME_NOTIFICATION_DATA2@@U-$default_delete@UAUDIO_VOLUME_NOTIFICATION_D.c)
 *     ?GetAudioVolumeNotificationDataInternal@@YAJIPEAUIAudioEndpointVolume@@PEAUAUDIO_VOLUME_NOTIFICATION_DATA@@@Z @ 0x14006CB64 (-GetAudioVolumeNotificationDataInternal@@YAJIPEAUIAudioEndpointVolume@@PEAUAUDIO_VOLUME_NOTIFICA.c)
 *     ?AllocateAudioVolumeNotificationData2@@YAJIPEAPEAUAUDIO_VOLUME_NOTIFICATION_DATA2@@@Z @ 0x14006F714 (-AllocateAudioVolumeNotificationData2@@YAJIPEAPEAUAUDIO_VOLUME_NOTIFICATION_DATA2@@@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall GetAudioVolumeNotificationData(struct IMMDevice *a1, struct AUDIO_VOLUME_NOTIFICATION_DATA2 **a2)
{
  struct IMMDeviceVtbl *lpVtbl; // rax
  int v4; // eax
  int v5; // ebx
  __int64 v6; // rdx
  struct AUDIO_VOLUME_NOTIFICATION_DATA **v7; // rcx
  __int64 v8; // rdx
  int AudioVolumeNotificationDataInternal; // eax
  unsigned __int64 v10; // r9
  int v11; // eax
  int v12; // eax
  int v13; // eax
  __int64 v14; // rbx
  int v15; // eax
  int v16; // edi
  struct AUDIO_VOLUME_NOTIFICATION_DATA2 *v17; // rax
  struct AUDIO_VOLUME_NOTIFICATION_DATA2 *v19; // [rsp+38h] [rbp-18h] BYREF
  char v20; // [rsp+40h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  unsigned int v22; // [rsp+70h] [rbp+20h] BYREF
  struct AUDIO_VOLUME_NOTIFICATION_DATA **v23; // [rsp+80h] [rbp+30h] BYREF
  struct IAudioEndpointVolume *v24; // [rsp+88h] [rbp+38h] BYREF

  lpVtbl = a1->lpVtbl;
  v24 = 0LL;
  v4 = ((__int64 (__fastcall *)(struct IMMDevice *, GUID *, __int64))lpVtbl->Activate)(
         a1,
         &GUID_5cdf2c82_841e_4546_9722_0cf74078229a,
         23LL);
  v5 = v4;
  if ( v4 < 0 )
  {
    v6 = 301LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\apoprocessinghost.cpp",
      (const char *)(unsigned int)v4);
    goto LABEL_28;
  }
  v4 = ((__int64 (__fastcall *)(struct IAudioEndpointVolume *, unsigned int *))v24->lpVtbl->GetChannelCount)(v24, &v22);
  v5 = v4;
  if ( v4 < 0 )
  {
    v6 = 304LL;
    goto LABEL_5;
  }
  v23 = 0LL;
  v19 = 0LL;
  v20 = 1;
  v5 = AllocateAudioVolumeNotificationData2(v22, &v19);
  if ( v20 )
  {
    v7 = v23;
    v23 = (struct AUDIO_VOLUME_NOTIFICATION_DATA **)v19;
    if ( v7 )
      operator delete(v7);
  }
  if ( v5 < 0 )
  {
    v8 = 307LL;
LABEL_26:
    v10 = (unsigned int)v5;
    goto LABEL_27;
  }
  if ( !v23 )
  {
    v5 = -2147024882;
    v8 = 308LL;
    goto LABEL_26;
  }
  AudioVolumeNotificationDataInternal = GetAudioVolumeNotificationDataInternal(v22, v24, *v23);
  v5 = AudioVolumeNotificationDataInternal;
  if ( AudioVolumeNotificationDataInternal < 0 )
  {
    v10 = (unsigned int)AudioVolumeNotificationDataInternal;
    v8 = 310LL;
LABEL_27:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\apoprocessinghost.cpp",
      (const char *)v10);
    std::unique_ptr<AUDIO_VOLUME_NOTIFICATION_DATA2>::~unique_ptr<AUDIO_VOLUME_NOTIFICATION_DATA2>((void **)&v23);
    goto LABEL_28;
  }
  v11 = ((__int64 (__fastcall *)(struct IAudioEndpointVolume *, struct AUDIO_VOLUME_NOTIFICATION_DATA **))v24->lpVtbl->GetMasterVolumeLevel)(
          v24,
          v23 + 1);
  v5 = v11;
  if ( v11 < 0 )
  {
    v10 = (unsigned int)v11;
    v8 = 312LL;
    goto LABEL_27;
  }
  v12 = ((__int64 (__fastcall *)(struct IAudioEndpointVolume *, char *, struct AUDIO_VOLUME_NOTIFICATION_DATA **, char *))v24->lpVtbl->GetVolumeRange)(
          v24,
          (char *)v23 + 12,
          v23 + 2,
          (char *)v23 + 20);
  v5 = v12;
  if ( v12 < 0 )
  {
    v10 = (unsigned int)v12;
    v8 = 313LL;
    goto LABEL_27;
  }
  v13 = ((__int64 (__fastcall *)(struct IAudioEndpointVolume *, struct AUDIO_VOLUME_NOTIFICATION_DATA **, char *))v24->lpVtbl->GetVolumeStepInfo)(
          v24,
          v23 + 3,
          (char *)v23 + 28);
  v5 = v13;
  if ( v13 < 0 )
  {
    v10 = (unsigned int)v13;
    v8 = 314LL;
    goto LABEL_27;
  }
  v14 = 0LL;
  if ( !v22 )
  {
LABEL_23:
    v17 = (struct AUDIO_VOLUME_NOTIFICATION_DATA2 *)v23;
    v23 = 0LL;
    *a2 = v17;
    wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>((__int64 *)&v24);
    return 0LL;
  }
  while ( 1 )
  {
    v15 = ((__int64 (__fastcall *)(struct IAudioEndpointVolume *, _QWORD, char *))v24->lpVtbl->GetChannelVolumeLevel)(
            v24,
            (unsigned int)v14,
            (char *)v23 + 4 * v14 + 32);
    v16 = v15;
    if ( v15 < 0 )
      break;
    v14 = (unsigned int)(v14 + 1);
    if ( (unsigned int)v14 >= v22 )
      goto LABEL_23;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x13D,
    (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\apoprocessinghost.cpp",
    (const char *)(unsigned int)v15);
  std::unique_ptr<AUDIO_VOLUME_NOTIFICATION_DATA2>::~unique_ptr<AUDIO_VOLUME_NOTIFICATION_DATA2>((void **)&v23);
  v5 = v16;
LABEL_28:
  wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>((__int64 *)&v24);
  return (unsigned int)v5;
}
