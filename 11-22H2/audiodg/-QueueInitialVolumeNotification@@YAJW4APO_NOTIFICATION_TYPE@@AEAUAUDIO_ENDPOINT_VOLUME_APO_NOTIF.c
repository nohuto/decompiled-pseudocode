/*
 * XREFs of ?QueueInitialVolumeNotification@@YAJW4APO_NOTIFICATION_TYPE@@AEAUAUDIO_ENDPOINT_VOLUME_APO_NOTIFICATION_DESCRIPTOR@@PEAVCAPOProcessingHostObject@@@Z @ 0x14006DA2C
 * Callers:
 *     ?RegisterAPONotifications@CAPOProcessingHost@@UEAAJPEAUIAudioProcessingObjectNotifications@@@Z @ 0x1400227E0 (-RegisterAPONotifications@CAPOProcessingHost@@UEAAJPEAUIAudioProcessingObjectNotifications@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1400280E4 (--2@YAPEAX_K@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1400284DC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x140029234 (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F210 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x14003833E (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14004DF14 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$shared_any_t@V?$shared_storage@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x140064CBC (--1-$shared_any_t@V-$shared_storage@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6A.c)
 *     ?GetAudioVolumeNotificationData@@YAJPEAUIMMDevice@@PEAPEAUAUDIO_VOLUME_NOTIFICATION_DATA2@@@Z @ 0x14006C7B0 (-GetAudioVolumeNotificationData@@YAJPEAUIMMDevice@@PEAPEAUAUDIO_VOLUME_NOTIFICATION_DATA2@@@Z.c)
 *     ?GetAudioVolumeNotificationData@@YAJPEAUIMMDevice@@PEAPEAUAUDIO_VOLUME_NOTIFICATION_DATA@@@Z @ 0x14006CA58 (-GetAudioVolumeNotificationData@@YAJPEAUIMMDevice@@PEAPEAUAUDIO_VOLUME_NOTIFICATION_DATA@@@Z.c)
 *     ?QueueNotification@CAPOProcessingHostObject@@QEAAXAEAV?$shared_ptr@UAPO_NOTIFICATION@@@std@@@Z @ 0x140070080 (-QueueNotification@CAPOProcessingHostObject@@QEAAXAEAV-$shared_ptr@UAPO_NOTIFICATION@@@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall QueueInitialVolumeNotification(int a1, _QWORD *a2, __int64 a3)
{
  _DWORD *v6; // rdi
  _DWORD *v7; // rsi
  unsigned int v8; // ebx
  __int64 v9; // r9
  __int64 v10; // rdx
  int AudioVolumeNotificationData; // eax
  int v13[2]; // [rsp+20h] [rbp-38h] BYREF
  _DWORD *v14; // [rsp+28h] [rbp-30h]
  char v15; // [rsp+30h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v6 = operator new(0x48uLL, (const struct std::nothrow_t *)&std::nothrow);
  v15 = 1;
  v7 = operator new(0x18uLL);
  *(_OWORD *)v7 = 0LL;
  v7[2] = 1;
  v7[3] = 1;
  *(_QWORD *)v7 = off_1400A8108;
  *((_QWORD *)v7 + 2) = v6;
  *(_QWORD *)v13 = v6;
  v14 = v7;
  if ( !v6 )
  {
    v8 = -2147024882;
    v9 = 2147942414LL;
    v10 = 351LL;
LABEL_14:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\apoprocessinghost.cpp",
      (const char *)v9);
    wil::shared_any_t<wil::details::shared_storage<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>>::~shared_any_t<wil::details::shared_storage<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>>((__int64)v13);
    return v8;
  }
  memset_0(v6, 0, 0x48uLL);
  *v6 = a1;
  if ( a1 == 1 )
  {
    AudioVolumeNotificationData = (**(__int64 (__fastcall ***)(_QWORD, GUID *, __int64))*a2)(
                                    *a2,
                                    &GUID_d666063f_1587_4e43_81f1_b948e807363f,
                                    (__int64)(v6 + 2));
    v8 = AudioVolumeNotificationData;
    if ( AudioVolumeNotificationData < 0 )
    {
      v10 = 358LL;
LABEL_13:
      v9 = (unsigned int)AudioVolumeNotificationData;
      goto LABEL_14;
    }
    AudioVolumeNotificationData = GetAudioVolumeNotificationData(
                                    *((struct IMMDevice **)v6 + 1),
                                    (struct AUDIO_VOLUME_NOTIFICATION_DATA **)v6 + 2);
    v8 = AudioVolumeNotificationData;
    if ( AudioVolumeNotificationData < 0 )
    {
      v10 = 359LL;
      goto LABEL_13;
    }
  }
  else if ( a1 == 4 )
  {
    AudioVolumeNotificationData = (**(__int64 (__fastcall ***)(_QWORD, GUID *, __int64))*a2)(
                                    *a2,
                                    &GUID_d666063f_1587_4e43_81f1_b948e807363f,
                                    (__int64)(v6 + 2));
    v8 = AudioVolumeNotificationData;
    if ( AudioVolumeNotificationData < 0 )
    {
      v10 = 363LL;
      goto LABEL_13;
    }
    AudioVolumeNotificationData = GetAudioVolumeNotificationData(
                                    *((struct IMMDevice **)v6 + 1),
                                    (struct AUDIO_VOLUME_NOTIFICATION_DATA2 **)v6 + 2);
    v8 = AudioVolumeNotificationData;
    if ( AudioVolumeNotificationData < 0 )
    {
      v10 = 364LL;
      goto LABEL_13;
    }
  }
  CAPOProcessingHostObject::QueueNotification(a3, v13);
  std::_Ref_count_base::_Decref((std::_Ref_count_base *)v7);
  return 0LL;
}
