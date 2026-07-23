/*
 * XREFs of PnpRecordBlackbox @ 0x1407857BC
 * Callers:
 *     PnpDisableWatchdog @ 0x14078285C (PnpDisableWatchdog.c)
 *     PnpDisableAndFreeEventWatchdog @ 0x14078573C (PnpDisableAndFreeEventWatchdog.c)
 *     PnpCallAddDevice @ 0x14079281C (PnpCallAddDevice.c)
 *     PnpCallDriverEntry @ 0x1407E1E98 (PnpCallDriverEntry.c)
 *     PnpDelayedRemoveWorker @ 0x1408818D0 (PnpDelayedRemoveWorker.c)
 *     PnpWatchdogFirstChanceCallback @ 0x140957CE0 (PnpWatchdogFirstChanceCallback.c)
 * Callees:
 *     PnpRecordBlackboxDeviceCompletionQueueInformation @ 0x1407828AC (PnpRecordBlackboxDeviceCompletionQueueInformation.c)
 *     PnpRecordBlackboxPnpEventWorkerInformation @ 0x140784074 (PnpRecordBlackboxPnpEventWorkerInformation.c)
 *     PnpRecordBlackboxDelayedRemoveWorkerInformation @ 0x14096EEEC (PnpRecordBlackboxDelayedRemoveWorkerInformation.c)
 */

void __fastcall PnpRecordBlackbox(__int64 a1, int a2)
{
  int v2; // edx
  int v3; // edx
  int v4; // edx

  v2 = a2 - 1;
  if ( v2 )
  {
    v3 = v2 - 1;
    if ( v3 )
    {
      v4 = v3 - 1;
      if ( v4 )
      {
        if ( (unsigned int)(v4 - 1) >= 2 )
          __fastfail(5u);
      }
      else
      {
        PnpRecordBlackboxDelayedRemoveWorkerInformation();
      }
    }
    else
    {
      PnpRecordBlackboxDeviceCompletionQueueInformation(a1);
    }
  }
  else
  {
    PnpRecordBlackboxPnpEventWorkerInformation(a1);
  }
}
