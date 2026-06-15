/*
 * XREFs of ?QueueInitialVolumeNotification@@YAJAEAUAUDIO_ENDPOINT_VOLUME_APO_NOTIFICATION_DESCRIPTOR@@PEAVCAPOProcessingHostObject@@@Z @ 0x140066200
 * Callers:
 *     ?RegisterAPONotifications@CAPOProcessingHost@@UEAAJPEAUIAudioProcessingObjectNotifications@@@Z @ 0x140029210 (-RegisterAPONotifications@CAPOProcessingHost@@UEAAJPEAUIAudioProcessingObjectNotifications@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140026348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x14002DA28 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x14002F864 (--2@YAPEAX_K@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x14002FC5C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x1400309B4 (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetAudioVolumeNotificationData@@YAJPEAUIMMDevice@@PEAPEAUAUDIO_VOLUME_NOTIFICATION_DATA@@@Z @ 0x1400658B4 (-GetAudioVolumeNotificationData@@YAJPEAUIMMDevice@@PEAPEAUAUDIO_VOLUME_NOTIFICATION_DATA@@@Z.c)
 *     ?QueueNotification@CAPOProcessingHostObject@@QEAAXAEAV?$shared_ptr@UAPO_NOTIFICATION@@@std@@@Z @ 0x1400681A0 (-QueueNotification@CAPOProcessingHostObject@@QEAAXAEAV-$shared_ptr@UAPO_NOTIFICATION@@@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall QueueInitialVolumeNotification(
        struct AUDIO_ENDPOINT_VOLUME_APO_NOTIFICATION_DESCRIPTOR *a1,
        struct CAPOProcessingHostObject *a2)
{
  _DWORD *v4; // rsi
  _DWORD *v5; // rdi
  unsigned int v6; // ebx
  __int64 v7; // r9
  __int64 v8; // rdx
  int AudioVolumeNotificationData; // eax
  int v11[2]; // [rsp+20h] [rbp-38h] BYREF
  _DWORD *v12; // [rsp+28h] [rbp-30h]
  char v13; // [rsp+30h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v4 = operator new(0x48uLL, (const struct std::nothrow_t *)&std::nothrow);
  v13 = 1;
  v5 = operator new(0x18uLL);
  *(_OWORD *)v5 = 0LL;
  v5[2] = 1;
  v5[3] = 1;
  *(_QWORD *)v5 = off_14009CC00;
  *((_QWORD *)v5 + 2) = v4;
  *(_QWORD *)v11 = v4;
  v12 = v5;
  if ( v4 )
  {
    memset_0(v4, 0, 0x48uLL);
    *v4 = 1;
    AudioVolumeNotificationData = (***(__int64 (__fastcall ****)(_QWORD, GUID *, __int64))a1)(
                                    *(_QWORD *)a1,
                                    &GUID_d666063f_1587_4e43_81f1_b948e807363f,
                                    (__int64)(v4 + 2));
    v6 = AudioVolumeNotificationData;
    if ( AudioVolumeNotificationData >= 0 )
    {
      AudioVolumeNotificationData = GetAudioVolumeNotificationData(
                                      *((struct IMMDevice **)v4 + 1),
                                      (struct AUDIO_VOLUME_NOTIFICATION_DATA **)v4 + 2);
      v6 = AudioVolumeNotificationData;
      if ( AudioVolumeNotificationData >= 0 )
      {
        CAPOProcessingHostObject::QueueNotification(a2, v11);
        v6 = 0;
        goto LABEL_10;
      }
      v8 = 251LL;
    }
    else
    {
      v8 = 250LL;
    }
    v7 = (unsigned int)AudioVolumeNotificationData;
  }
  else
  {
    v6 = -2147024882;
    v7 = 2147942414LL;
    v8 = 245LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v8,
    (int)"avcore\\audiocore\\server\\audiodg\\exe\\apoprocessinghost.cpp",
    (const char *)v7);
LABEL_10:
  std::_Ref_count_base::_Decref((std::_Ref_count_base *)v5);
  return v6;
}
