/*
 * XREFs of PopCheckPowerSourceAfterRtcWakeTimerWorker @ 0x140AA68C0
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x14023C5E0 (KeSetEvent.c)
 *     PopOkayToQueueNextWorkItem @ 0x14032EF00 (PopOkayToQueueNextWorkItem.c)
 *     PopCurrentPowerStatePrecise @ 0x1408737C8 (PopCurrentPowerStatePrecise.c)
 *     NtInitiatePowerAction @ 0x14098B360 (NtInitiatePowerAction.c)
 *     PopQueryPowerSettingUlong @ 0x14098BACC (PopQueryPowerSettingUlong.c)
 */

LONG PopCheckPowerSourceAfterRtcWakeTimerWorker()
{
  __int128 v1; // [rsp+20h] [rbp-28h] BYREF
  int v2; // [rsp+58h] [rbp+10h] BYREF
  int v3; // [rsp+60h] [rbp+18h] BYREF

  v1 = 0LL;
  if ( PopSleepStats )
  {
    PopCurrentPowerStatePrecise(&v1, 0LL);
    if ( !(_BYTE)v1 )
    {
      v2 = 0;
      PopQueryPowerSettingUlong(&GUID_ALLOW_RTC_WAKE, &v3, &v2);
      if ( !v2 )
        NtInitiatePowerAction(dword_140C3D598, dword_140C3D59C, 0x80000000, 1);
    }
  }
  PopOkayToQueueNextWorkItem((__int64)&unk_140C3C4C8);
  return KeSetEvent(&PopCheckPowerSourceAfterRtcWakeCompleted, 0, 0);
}
