/*
 * XREFs of IoInitializeTimer @ 0x140862A60
 * Callers:
 *     DifIoInitializeTimerWrapper @ 0x1405E04B0 (DifIoInitializeTimerWrapper.c)
 * Callees:
 *     ExInterlockedInsertTailList @ 0x14028C530 (ExInterlockedInsertTailList.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

NTSTATUS __stdcall IoInitializeTimer(PDEVICE_OBJECT DeviceObject, PIO_TIMER_ROUTINE TimerRoutine, PVOID Context)
{
  PIO_TIMER Timer; // rax

  Timer = DeviceObject->Timer;
  if ( Timer )
    goto LABEL_4;
  Timer = (PIO_TIMER)ExAllocatePool2(64LL, 48LL, 1767141193LL);
  if ( Timer )
  {
    Timer->DeviceObject = DeviceObject;
    Timer->Type = 9;
    DeviceObject->Timer = Timer;
LABEL_4:
    Timer->TimerRoutine = (void (__fastcall *)(_DEVICE_OBJECT *, void *))TimerRoutine;
    Timer->Context = Context;
    ExInterlockedInsertTailList(&IopTimerQueueHead, &Timer->TimerList, &IopTimerLock);
    return 0;
  }
  return -1073741670;
}
