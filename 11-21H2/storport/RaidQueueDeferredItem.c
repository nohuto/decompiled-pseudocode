/*
 * XREFs of RaidQueueDeferredItem @ 0x1C00027F0
 * Callers:
 *     StorPortPauseDevice @ 0x1C0002540 (StorPortPauseDevice.c)
 *     StorPortResumeDevice @ 0x1C00026B0 (StorPortResumeDevice.c)
 *     StorPortNotification @ 0x1C0010160 (StorPortNotification.c)
 *     RaidAdapterLogIoErrorDeferred @ 0x1C0035424 (RaidAdapterLogIoErrorDeferred.c)
 *     RaidAdapterRequestAddtionalTimerDeferred @ 0x1C0036570 (RaidAdapterRequestAddtionalTimerDeferred.c)
 *     RaidAdapterRequestTimerDeferred @ 0x1C00365FC (RaidAdapterRequestTimerDeferred.c)
 *     StorAsyncNotificationDeferred @ 0x1C00423A8 (StorAsyncNotificationDeferred.c)
 *     StorPortBusy @ 0x1C0042C00 (StorPortBusy.c)
 *     StorPortDeviceBusy @ 0x1C0042ED0 (StorPortDeviceBusy.c)
 *     StorPortDeviceReady @ 0x1C0043060 (StorPortDeviceReady.c)
 *     StorPortPause @ 0x1C00437C0 (StorPortPause.c)
 *     StorPortReady @ 0x1C0043A70 (StorPortReady.c)
 *     StorPortResume @ 0x1C0043E80 (StorPortResume.c)
 * Callees:
 *     <none>
 */

BOOLEAN __fastcall RaidQueueDeferredItem(char *SystemArgument1, struct _SLIST_ENTRY *a2)
{
  ExpInterlockedPushEntrySList((PSLIST_HEADER)SystemArgument1 + 6, a2);
  return KeInsertQueueDpc((PRKDPC)(SystemArgument1 + 8), SystemArgument1, 0LL);
}
