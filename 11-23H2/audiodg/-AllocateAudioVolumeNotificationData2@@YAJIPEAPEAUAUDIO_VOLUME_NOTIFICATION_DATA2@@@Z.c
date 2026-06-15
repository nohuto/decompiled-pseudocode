/*
 * XREFs of ?AllocateAudioVolumeNotificationData2@@YAJIPEAPEAUAUDIO_VOLUME_NOTIFICATION_DATA2@@@Z @ 0x14006F714
 * Callers:
 *     ?GetAudioVolumeNotificationData@@YAJPEAUIMMDevice@@PEAPEAUAUDIO_VOLUME_NOTIFICATION_DATA2@@@Z @ 0x14006C760 (-GetAudioVolumeNotificationData@@YAJPEAUIMMDevice@@PEAPEAUAUDIO_VOLUME_NOTIFICATION_DATA2@@@Z.c)
 *     ?CopyAudioVolumeNotificationData2FromBlock@@YAJPEAUAPO_NOTIFICATION@@PEAUAUDIO_VOLUME_NOTIFICATION_BLOCK@@@Z @ 0x14006F91C (-CopyAudioVolumeNotificationData2FromBlock@@YAJPEAUAPO_NOTIFICATION@@PEAUAUDIO_VOLUME_NOTIFICATI.c)
 *     ?CopyAudioVolumeNotificationData2FromBlock@@YAJPEAUAPO_NOTIFICATION@@PEAUAUDIO_VOLUME_NOTIFICATION_DATA2@@@Z @ 0x14006F9F4 (-CopyAudioVolumeNotificationData2FromBlock@@YAJPEAUAPO_NOTIFICATION@@PEAUAUDIO_VOLU_ea_14006F9F4.c)
 * Callees:
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x14002850C (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14004DED4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_ptr@UAUDIO_VOLUME_NOTIFICATION_DATA2@@U?$default_delete@UAUDIO_VOLUME_NOTIFICATION_DATA2@@@std@@@std@@QEAA@XZ @ 0x14006BA7C (--1-$unique_ptr@UAUDIO_VOLUME_NOTIFICATION_DATA2@@U-$default_delete@UAUDIO_VOLUME_NOTIFICATION_D.c)
 *     ??1?$unique_ptr@UAUDIO_VOLUME_NOTIFICATION_DATA@@U?$default_delete@UAUDIO_VOLUME_NOTIFICATION_DATA@@@std@@@std@@QEAA@XZ @ 0x14006BAA0 (--1-$unique_ptr@UAUDIO_VOLUME_NOTIFICATION_DATA@@U-$default_delete@UAUDIO_VOLUME_NOTIFICATION_DA.c)
 */

__int64 __fastcall AllocateAudioVolumeNotificationData2(unsigned int a1, struct AUDIO_VOLUME_NOTIFICATION_DATA2 **a2)
{
  __int64 v2; // rsi
  struct AUDIO_VOLUME_NOTIFICATION_DATA2 *v4; // rbx
  __int64 result; // rax
  void *v6; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct AUDIO_VOLUME_NOTIFICATION_DATA2 *v8; // [rsp+40h] [rbp+18h] BYREF
  void *v9; // [rsp+48h] [rbp+20h] BYREF

  v2 = a1;
  v8 = (struct AUDIO_VOLUME_NOTIFICATION_DATA2 *)operator new[](
                                                   4LL * a1 + 40,
                                                   (const struct std::nothrow_t *)&std::nothrow);
  v4 = v8;
  if ( !v8 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA2,
      (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\apoprocessinghostobject.cpp",
      (const char *)0x8007000ELL);
LABEL_3:
    std::unique_ptr<AUDIO_VOLUME_NOTIFICATION_DATA2>::~unique_ptr<AUDIO_VOLUME_NOTIFICATION_DATA2>((void **)&v8);
    return 2147942414LL;
  }
  v6 = operator new[](4 * v2 + 32, (const struct std::nothrow_t *)&std::nothrow);
  v9 = v6;
  if ( !v6 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA6,
      (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\apoprocessinghostobject.cpp",
      (const char *)0x8007000ELL);
    std::unique_ptr<AUDIO_VOLUME_NOTIFICATION_DATA>::~unique_ptr<AUDIO_VOLUME_NOTIFICATION_DATA>(&v9);
    goto LABEL_3;
  }
  *(_QWORD *)v4 = v6;
  result = 0LL;
  *a2 = v4;
  return result;
}
