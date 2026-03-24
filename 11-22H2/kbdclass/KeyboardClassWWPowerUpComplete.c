/*
 * XREFs of KeyboardClassWWPowerUpComplete @ 0x1C0005ED0
 * Callers:
 *     <none>
 * Callees:
 *     KeyboardClassLogError @ 0x1C0005418 (KeyboardClassLogError.c)
 *     WPP_RECORDER_SF_q @ 0x1C0006604 (WPP_RECORDER_SF_q.c)
 */

void __fastcall KeyboardClassWWPowerUpComplete(
        PDEVICE_OBJECT DeviceObject,
        UCHAR MinorFunction,
        POWER_STATE PowerState,
        PVOID Context)
{
  int v5; // edx
  _QWORD *Pool2; // rbx
  int v7; // r8d
  PIO_WORKITEM WorkItem; // rax
  NTSTATUS v9; // eax
  struct _IO_WORKITEM *v10; // rcx

  if ( *((_BYTE *)Context + 362) )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 32LL, 1130652235LL);
    if ( Pool2 )
    {
      WorkItem = IoAllocateWorkItem(*(PDEVICE_OBJECT *)Context);
      Pool2[2] = WorkItem;
      if ( WorkItem )
      {
        *Pool2 = 0LL;
        Pool2[1] = Context;
        v9 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)Context + 1, Pool2, File, 1u, 0x20u);
        v10 = (struct _IO_WORKITEM *)Pool2[2];
        if ( v9 < 0 )
        {
          IoFreeWorkItem(v10);
          ExFreePoolWithTag(Pool2, 0);
        }
        else
        {
          IoQueueWorkItem(v10, KeyboardClassCreateWaitWakeIrpWorker, DelayedWorkQueue, Pool2);
        }
        return;
      }
      ExFreePoolWithTag(Pool2, 0);
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_q(WPP_GLOBAL_Control->DeviceExtension, v5, v7, 91);
    KeyboardClassLogError(*(void **)Context, -2147155954, 2, -1073741670, 0, 0LL, 0);
  }
}
