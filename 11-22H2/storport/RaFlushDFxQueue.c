/*
 * XREFs of RaFlushDFxQueue @ 0x1C003FA08
 * Callers:
 *     StorPortAdapterDirectedPowerUpCompletion @ 0x1C004DE30 (StorPortAdapterDirectedPowerUpCompletion.c)
 *     StorPortAdapterDirectedPowerUpRequestD0 @ 0x1C004DF00 (StorPortAdapterDirectedPowerUpRequestD0.c)
 *     StorPortUnitDirectedPowerUpCompletion @ 0x1C004EE70 (StorPortUnitDirectedPowerUpCompletion.c)
 *     StorPortUnitDirectedPowerUpRequestD0 @ 0x1C004EEA8 (StorPortUnitDirectedPowerUpRequestD0.c)
 * Callees:
 *     <none>
 */

void __fastcall RaFlushDFxQueue(struct _DEVICE_OBJECT *a1)
{
  struct _IO_WORKITEM *WorkItem; // r10
  _QWORD *DeviceExtension; // rax
  bool v4; // zf

  WorkItem = IoAllocateWorkItem(a1);
  if ( WorkItem )
  {
    DeviceExtension = a1->DeviceExtension;
    if ( *(_DWORD *)DeviceExtension == 1094997074 )
    {
      v4 = DeviceExtension[707] == (_QWORD)(DeviceExtension + 707);
    }
    else
    {
      if ( *(_DWORD *)DeviceExtension != 1431193940 )
        return;
      v4 = DeviceExtension[425] == (_QWORD)(DeviceExtension + 425);
    }
    if ( !v4 )
      IoQueueWorkItem(WorkItem, RaProcessDFxQueuedRequests, CriticalWorkQueue, WorkItem);
  }
}
