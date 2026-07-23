/*
 * XREFs of PnpDisableAndFreeEventWatchdog @ 0x14078573C
 * Callers:
 *     PnpDeviceEventWorker @ 0x140786A50 (PnpDeviceEventWorker.c)
 *     PnpProcessCompletedEject @ 0x1409591F0 (PnpProcessCompletedEject.c)
 * Callees:
 *     PnpWatchdogEtwWrite @ 0x140561130 (PnpWatchdogEtwWrite.c)
 *     PnpRecordBlackbox @ 0x1407857BC (PnpRecordBlackbox.c)
 *     PnpWatchdogTimerPause @ 0x140785830 (PnpWatchdogTimerPause.c)
 *     WdtpCancelTimer @ 0x1407858BC (WdtpCancelTimer.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

void __fastcall PnpDisableAndFreeEventWatchdog(__int64 a1)
{
  __int64 v1; // rbx
  void *v3; // rsi
  __int64 v4; // rdx
  void *v5; // rbx

  v1 = *(_QWORD *)(a1 + 104);
  if ( v1 )
  {
    v3 = *(void **)(v1 + 24);
    PnpWatchdogTimerPause(*(_QWORD *)(v1 + 8));
    PnpRecordBlackbox(0LL, *(unsigned int *)(v1 + 16));
    if ( *(_BYTE *)(v1 + 32) )
    {
      PnpWatchdogEtwWrite(v1, 1);
      if ( !*(_BYTE *)(v1 + 33) )
        PnpWatchdogEtwWrite(v1, 3);
    }
    v5 = *(void **)(v1 + 8);
    LOBYTE(v4) = 1;
    WdtpCancelTimer(v5, v4);
    ExFreePoolWithTag(v5, 0x54645750u);
    *(_QWORD *)(a1 + 104) = 0LL;
    ExFreePoolWithTag(v3, 0);
  }
}
