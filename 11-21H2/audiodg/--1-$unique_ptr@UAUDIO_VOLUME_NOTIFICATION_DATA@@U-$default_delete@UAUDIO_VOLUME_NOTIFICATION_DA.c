/*
 * XREFs of ??1?$unique_ptr@UAUDIO_VOLUME_NOTIFICATION_DATA@@U?$default_delete@UAUDIO_VOLUME_NOTIFICATION_DATA@@@std@@@std@@QEAA@XZ @ 0x140064D84
 * Callers:
 *     _GetAudioVolumeNotificationData_::_1_::dtor$1 @ 0x140065A86 (_GetAudioVolumeNotificationData_--_1_--dtor$1.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x14002FC18 (--3@YAXPEAX_K@Z.c)
 */

void __fastcall std::unique_ptr<AUDIO_VOLUME_NOTIFICATION_DATA>::~unique_ptr<AUDIO_VOLUME_NOTIFICATION_DATA>(void **a1)
{
  void *v1; // rcx

  v1 = *a1;
  if ( v1 )
    operator delete(v1);
}
