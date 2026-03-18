/*
 * XREFs of PnpRecordBlackbox @ 0x1407855CC
 * Callers:
 *     PnpDisableWatchdog @ 0x14078266C (PnpDisableWatchdog.c)
 *     PnpDisableAndFreeEventWatchdog @ 0x14078554C (PnpDisableAndFreeEventWatchdog.c)
 *     PnpCallAddDevice @ 0x14079262C (PnpCallAddDevice.c)
 *     PnpCallDriverEntry @ 0x1407E1BC8 (PnpCallDriverEntry.c)
 *     PnpDelayedRemoveWorker @ 0x140881690 (PnpDelayedRemoveWorker.c)
 *     PnpWatchdogFirstChanceCallback @ 0x140957AE0 (PnpWatchdogFirstChanceCallback.c)
 * Callees:
 *     PnpRecordBlackboxDeviceCompletionQueueInformation @ 0x1407826BC (PnpRecordBlackboxDeviceCompletionQueueInformation.c)
 *     PnpRecordBlackboxPnpEventWorkerInformation @ 0x140783E84 (PnpRecordBlackboxPnpEventWorkerInformation.c)
 *     PnpRecordBlackboxDelayedRemoveWorkerInformation @ 0x14096ECEC (PnpRecordBlackboxDelayedRemoveWorkerInformation.c)
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
