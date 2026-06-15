/*
 * XREFs of ?CopyNotificationDataFromBlock@@YAXPEAUAUDIO_VOLUME_NOTIFICATION_DATA@@PEAUAUDIO_VOLUME_NOTIFICATION_BLOCK@@@Z @ 0x14006FC58
 * Callers:
 *     ?CopyAudioVolumeNotificationData2FromBlock@@YAJPEAUAPO_NOTIFICATION@@PEAUAUDIO_VOLUME_NOTIFICATION_BLOCK@@@Z @ 0x14006F91C (-CopyAudioVolumeNotificationData2FromBlock@@YAJPEAUAPO_NOTIFICATION@@PEAUAUDIO_VOLUME_NOTIFICATI.c)
 *     ?OnNotifyVolume@CAPOEndpointNotificationsHandler@@AEAAJPEAUAUDIO_VOLUME_NOTIFICATION_BLOCK@@@Z @ 0x140071FB4 (-OnNotifyVolume@CAPOEndpointNotificationsHandler@@AEAAJPEAUAUDIO_VOLUME_NOTIFICATION_BLOCK@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CopyNotificationDataFromBlock(
        struct AUDIO_VOLUME_NOTIFICATION_DATA *a1,
        struct AUDIO_VOLUME_NOTIFICATION_BLOCK *a2)
{
  UINT v2; // r8d
  char *v3; // r10
  __int64 i; // rdx

  a1->guidEventContext = *(GUID *)((char *)a2 + 24);
  a1->bMuted = *((_DWORD *)a2 + 10);
  a1->fMasterVolume = *((float *)a2 + 11);
  v2 = *((_DWORD *)a2 + 12);
  a1->nChannels = v2;
  v3 = (char *)a2 + *((unsigned int *)a2 + 19);
  for ( i = 0LL; (unsigned int)i < a1->nChannels; i = (unsigned int)(i + 1) )
    a1->afChannelVolumes[i] = *(float *)&v3[4 * i + 80];
}
