/*
 * XREFs of RaidQueueDeferredItem @ 0x1C0014380
 * Callers:
 *     StorPortNotification @ 0x1C000E120 (StorPortNotification.c)
 *     RaidAdapterRequestAddtionalTimerDeferred @ 0x1C00142FC (RaidAdapterRequestAddtionalTimerDeferred.c)
 *     RaidAdapterLogIoErrorDeferred @ 0x1C0036290 (RaidAdapterLogIoErrorDeferred.c)
 *     RaidAdapterRequestTimerDeferred @ 0x1C0037978 (RaidAdapterRequestTimerDeferred.c)
 *     StorAsyncNotificationDeferred @ 0x1C0044D0C (StorAsyncNotificationDeferred.c)
 *     StorPortBusy @ 0x1C0045840 (StorPortBusy.c)
 *     StorPortDeviceBusy @ 0x1C0045B10 (StorPortDeviceBusy.c)
 *     StorPortDeviceReady @ 0x1C0045CA0 (StorPortDeviceReady.c)
 *     StorPortPause @ 0x1C00463B0 (StorPortPause.c)
 *     StorPortPauseDevice @ 0x1C0046510 (StorPortPauseDevice.c)
 *     StorPortReady @ 0x1C0046890 (StorPortReady.c)
 *     StorPortResume @ 0x1C0046CA0 (StorPortResume.c)
 *     StorPortResumeDevice @ 0x1C0046DB0 (StorPortResumeDevice.c)
 * Callees:
 *     <none>
 */

BOOLEAN __fastcall RaidQueueDeferredItem(char *SystemArgument1, struct _SLIST_ENTRY *a2)
{
  ExpInterlockedPushEntrySList((PSLIST_HEADER)SystemArgument1 + 6, a2);
  return KeInsertQueueDpc((PRKDPC)(SystemArgument1 + 8), SystemArgument1, 0LL);
}
