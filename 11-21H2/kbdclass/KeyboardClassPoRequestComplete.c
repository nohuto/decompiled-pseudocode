/*
 * XREFs of KeyboardClassPoRequestComplete @ 0x1C00010D0
 * Callers:
 *     <none>
 * Callees:
 *     KeyboardClassCheckWaitWakeEnabled @ 0x1C0004D9C (KeyboardClassCheckWaitWakeEnabled.c)
 *     KeyboardClassLogError @ 0x1C00050A8 (KeyboardClassLogError.c)
 *     WPP_RECORDER_SF_q @ 0x1C00062A4 (WPP_RECORDER_SF_q.c)
 */

void __fastcall KeyboardClassPoRequestComplete(
        PDEVICE_OBJECT DeviceObject,
        UCHAR MinorFunction,
        POWER_STATE PowerState,
        IRP *Context)
{
  PVOID DeviceExtension; // rsi
  char v6; // bl
  POWER_STATE v7; // ebx
  KIRQL v8; // al
  int v9; // edx
  _QWORD *Pool2; // rdi
  int v11; // r8d
  PIO_WORKITEM WorkItem; // rax
  NTSTATUS v13; // eax
  struct _IO_WORKITEM *v14; // rcx
  ULONG RemlockSize; // [rsp+20h] [rbp-28h]

  DeviceExtension = DeviceObject->DeviceExtension;
  v6 = (char)DeviceObject;
  if ( Context )
  {
    v7.SystemState = (SYSTEM_POWER_STATE)Context->Tail.Overlay.CurrentStackLocation->Parameters.Power.State;
    PoSetPowerState(*(PDEVICE_OBJECT *)DeviceExtension, SystemPowerState, v7);
    *((POWER_STATE *)DeviceExtension + 48) = v7;
    PoStartNextPowerIrp(Context);
    ++Context->CurrentLocation;
    ++Context->Tail.Overlay.CurrentStackLocation;
    PoCallDriver(*((PDEVICE_OBJECT *)DeviceExtension + 2), Context);
    IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)DeviceExtension + 1, Context, 0x20u);
  }
  else if ( *((int *)DeviceExtension + 71) > 1 && *((int *)DeviceExtension + 72) > 1 )
  {
    v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)DeviceExtension + 9);
    if ( *((_QWORD *)DeviceExtension + 37) && !*((_BYTE *)DeviceExtension + 304) )
    {
      KeReleaseSpinLock((PKSPIN_LOCK)DeviceExtension + 9, v8);
      return;
    }
    KeReleaseSpinLock((PKSPIN_LOCK)DeviceExtension + 9, v8);
    if ( (unsigned __int8)KeyboardClassCheckWaitWakeEnabled(DeviceExtension) )
    {
      Pool2 = (_QWORD *)ExAllocatePool2(64LL, 32LL, 1130652235LL);
      if ( Pool2 )
      {
        WorkItem = IoAllocateWorkItem(*(PDEVICE_OBJECT *)DeviceExtension);
        Pool2[2] = WorkItem;
        if ( WorkItem )
        {
          Pool2[1] = DeviceExtension;
          *Pool2 = 0LL;
          v13 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)DeviceExtension + 1, Pool2, File, 1u, 0x20u);
          v14 = (struct _IO_WORKITEM *)Pool2[2];
          if ( v13 >= 0 )
          {
            IoQueueWorkItem(v14, KeyboardClassCreateWaitWakeIrpWorker, DelayedWorkQueue, Pool2);
            return;
          }
          IoFreeWorkItem(v14);
        }
        ExFreePoolWithTag(Pool2, 0);
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_q(WPP_GLOBAL_Control->DeviceExtension, v9, v11, 98, RemlockSize, v6);
      KeyboardClassLogError(*(_QWORD *)DeviceExtension, -2147155954, 1, -1073741670, 0, 0LL, 0);
    }
  }
}
