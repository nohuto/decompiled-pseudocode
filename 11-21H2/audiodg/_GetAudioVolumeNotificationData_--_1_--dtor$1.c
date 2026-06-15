/*
 * XREFs of _GetAudioVolumeNotificationData_::_1_::dtor$1 @ 0x140065A86
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall GetAudioVolumeNotificationData_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  std::unique_ptr<AUDIO_VOLUME_NOTIFICATION_DATA>::~unique_ptr<AUDIO_VOLUME_NOTIFICATION_DATA>((void **)(a2 + 120));
}
