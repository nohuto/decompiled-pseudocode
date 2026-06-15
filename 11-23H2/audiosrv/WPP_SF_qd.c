/*
 * XREFs of WPP_SF_qD @ 0x180111964
 * Callers:
 *     ?DeleteVolumeClientNotification@CVolumeStrip@@UEAAJK@Z @ 0x18000AEC0 (-DeleteVolumeClientNotification@CVolumeStrip@@UEAAJK@Z.c)
 *     ?AddVolumeClientNotification@CVolumeStrip@@UEAAJK@Z @ 0x18000B060 (-AddVolumeClientNotification@CVolumeStrip@@UEAAJK@Z.c)
 *     ?InitializeAPOs@CMuteSoftware@@UEAAJ_KIPEAPEAUIAudioProcessingObject@@@Z @ 0x180110B80 (-InitializeAPOs@CMuteSoftware@@UEAAJ_KIPEAPEAUIAudioProcessingObject@@@Z.c)
 *     ?InitializeAPOs@CVolumeSoftware@@UEAAJ_KIPEAPEAUIAudioProcessingObject@@@Z @ 0x1801275F0 (-InitializeAPOs@CVolumeSoftware@@UEAAJ_KIPEAPEAUIAudioProcessingObject@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 WPP_SF_qD(__int64 a1, unsigned __int16 a2, __int64 a3, ...)
{
  va_list va; // [rsp+78h] [rbp+20h] BYREF

  va_start(va, a3);
  return EtwTraceMessage(a1, 43LL, a3, a2, (__int64 *)va);
}
