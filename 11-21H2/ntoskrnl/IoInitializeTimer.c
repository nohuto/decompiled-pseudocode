/*
 * XREFs of IoInitializeTimer @ 0x140862800
 * Callers:
 *     sub_14060FA20 @ 0x14060FA20 (sub_14060FA20.c)
 * Callees:
 *     ExInterlockedInsertTailList @ 0x140223920 (ExInterlockedInsertTailList.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

NTSTATUS __stdcall IoInitializeTimer(PDEVICE_OBJECT DeviceObject, PIO_TIMER_ROUTINE TimerRoutine, PVOID Context)
{
  __int64 Timer; // rax

  Timer = (__int64)DeviceObject->Timer;
  if ( Timer )
    goto LABEL_4;
  Timer = ExAllocatePool2(64LL, 48LL, 1767141193LL);
  if ( Timer )
  {
    *(_QWORD *)(Timer + 40) = DeviceObject;
    *(_WORD *)Timer = 9;
    DeviceObject->Timer = (PIO_TIMER)Timer;
LABEL_4:
    *(_QWORD *)(Timer + 24) = TimerRoutine;
    *(_QWORD *)(Timer + 32) = Context;
    ExInterlockedInsertTailList(&stru_140C47140, (PLIST_ENTRY)(Timer + 8), &qword_140D31140);
    return 0;
  }
  return -1073741670;
}
