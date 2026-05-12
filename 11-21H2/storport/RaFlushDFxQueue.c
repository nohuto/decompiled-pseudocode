/*
 * XREFs of RaFlushDFxQueue @ 0x1C003D758
 * Callers:
 *     StorPortAdapterDirectedPowerUpCompletion @ 0x1C004AAD0 (StorPortAdapterDirectedPowerUpCompletion.c)
 *     StorPortAdapterDirectedPowerUpRequestD0 @ 0x1C004ABA4 (StorPortAdapterDirectedPowerUpRequestD0.c)
 *     StorPortUnitDirectedPowerUpCompletion @ 0x1C004B480 (StorPortUnitDirectedPowerUpCompletion.c)
 *     StorPortUnitDirectedPowerUpRequestD0 @ 0x1C004B4B8 (StorPortUnitDirectedPowerUpRequestD0.c)
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
    if ( *(_DWORD *)DeviceExtension )
    {
      if ( *(_DWORD *)DeviceExtension != 1 )
        return;
      v4 = DeviceExtension[419] == (_QWORD)(DeviceExtension + 419);
    }
    else
    {
      v4 = DeviceExtension[699] == (_QWORD)(DeviceExtension + 699);
    }
    if ( !v4 )
      IoQueueWorkItem(WorkItem, RaProcessDFxQueuedRequests, CriticalWorkQueue, WorkItem);
  }
}
