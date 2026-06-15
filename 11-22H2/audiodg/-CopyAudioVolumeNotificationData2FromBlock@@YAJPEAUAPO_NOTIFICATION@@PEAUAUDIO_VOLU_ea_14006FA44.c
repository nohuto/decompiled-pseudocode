/*
 * XREFs of ?CopyAudioVolumeNotificationData2FromBlock@@YAJPEAUAPO_NOTIFICATION@@PEAUAUDIO_VOLUME_NOTIFICATION_DATA2@@@Z @ 0x14006FA44
 * Callers:
 *     ?CopyVolume2ChangeNotification@@YAJPEAUAPO_NOTIFICATION@@0@Z @ 0x14006FCEC (-CopyVolume2ChangeNotification@@YAJPEAUAPO_NOTIFICATION@@0@Z.c)
 * Callees:
 *     memcpy_0 @ 0x14002A5CF (memcpy_0.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14004DF14 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AllocateAudioVolumeNotificationData2@@YAJIPEAPEAUAUDIO_VOLUME_NOTIFICATION_DATA2@@@Z @ 0x14006F764 (-AllocateAudioVolumeNotificationData2@@YAJIPEAPEAUAUDIO_VOLUME_NOTIFICATION_DATA2@@@Z.c)
 */

__int64 __fastcall CopyAudioVolumeNotificationData2FromBlock(
        struct AUDIO_VOLUME_NOTIFICATION_DATA2 **a1,
        struct AUDIO_VOLUME_NOTIFICATION_DATA2 *a2)
{
  void ***v2; // rsi
  __int64 v4; // rbp
  int AudioVolumeNotificationData2; // eax
  unsigned int v6; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (void ***)(a1 + 2);
  v4 = *(unsigned int *)(*(_QWORD *)a2 + 24LL);
  AudioVolumeNotificationData2 = AllocateAudioVolumeNotificationData2(*(_DWORD *)(*(_QWORD *)a2 + 24LL), a1 + 2);
  v6 = AudioVolumeNotificationData2;
  if ( AudioVolumeNotificationData2 >= 0 )
  {
    *((_DWORD *)*v2 + 2) = *((_DWORD *)a2 + 2);
    *((_DWORD *)*v2 + 3) = *((_DWORD *)a2 + 3);
    *((_DWORD *)*v2 + 4) = *((_DWORD *)a2 + 4);
    *((_DWORD *)*v2 + 5) = *((_DWORD *)a2 + 5);
    *((_DWORD *)*v2 + 6) = *((_DWORD *)a2 + 6);
    *((_DWORD *)*v2 + 7) = *((_DWORD *)a2 + 7);
    memcpy_0(*v2 + 4, (char *)a2 + 32, 4 * v4);
    memcpy_0(**v2, *(const void **)a2, 4 * v4 + 32);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xC7,
      (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\apoprocessinghostobject.cpp",
      (const char *)(unsigned int)AudioVolumeNotificationData2);
    return v6;
  }
}
