/*
 * XREFs of sub_1C0014D10 @ 0x1C0014D10
 * Callers:
 *     StorPortNotification @ 0x1C000EAB0 (StorPortNotification.c)
 *     sub_1C0014C8C @ 0x1C0014C8C (sub_1C0014C8C.c)
 *     sub_1C00367A0 @ 0x1C00367A0 (sub_1C00367A0.c)
 *     sub_1C0037E88 @ 0x1C0037E88 (sub_1C0037E88.c)
 *     sub_1C00452DC @ 0x1C00452DC (sub_1C00452DC.c)
 *     StorPortBusy @ 0x1C0045E10 (StorPortBusy.c)
 *     StorPortDeviceBusy @ 0x1C00460E0 (StorPortDeviceBusy.c)
 *     StorPortDeviceReady @ 0x1C0046270 (StorPortDeviceReady.c)
 *     StorPortPause @ 0x1C0046980 (StorPortPause.c)
 *     StorPortPauseDevice @ 0x1C0046AE0 (StorPortPauseDevice.c)
 *     StorPortReady @ 0x1C0046E60 (StorPortReady.c)
 *     StorPortResume @ 0x1C0047270 (StorPortResume.c)
 *     StorPortResumeDevice @ 0x1C0047380 (StorPortResumeDevice.c)
 * Callees:
 *     <none>
 */

BOOLEAN __fastcall sub_1C0014D10(char *SystemArgument1, struct _SLIST_ENTRY *a2)
{
  ExpInterlockedPushEntrySList((PSLIST_HEADER)SystemArgument1 + 6, a2);
  return KeInsertQueueDpc((PRKDPC)(SystemArgument1 + 8), SystemArgument1, 0LL);
}
