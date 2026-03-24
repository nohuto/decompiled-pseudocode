/*
 * XREFs of MouseClassCreateWaitWakeIrpWorker @ 0x1C000E260
 * Callers:
 *     <none>
 * Callees:
 *     MouseClassCreateWaitWakeIrp @ 0x1C000CEC0 (MouseClassCreateWaitWakeIrp.c)
 */

void __fastcall MouseClassCreateWaitWakeIrpWorker(PDEVICE_OBJECT DeviceObject, PVOID Context)
{
  MouseClassCreateWaitWakeIrp(*((char **)Context + 1));
  IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(*((_QWORD *)Context + 1) + 32LL), Context, 0x20u);
  IoFreeWorkItem(*((PIO_WORKITEM *)Context + 2));
  ExFreePoolWithTag(Context, 0);
}
