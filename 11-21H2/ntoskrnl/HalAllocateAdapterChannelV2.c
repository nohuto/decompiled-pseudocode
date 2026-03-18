/*
 * XREFs of HalAllocateAdapterChannelV2 @ 0x140457ED8
 * Callers:
 *     HalAllocateAdapterChannel @ 0x140456840 (HalAllocateAdapterChannel.c)
 * Callees:
 *     KeInsertDeviceQueue @ 0x140257A00 (KeInsertDeviceQueue.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     IoFreeAdapterChannel @ 0x140456A00 (IoFreeAdapterChannel.c)
 *     HalpDmaAllocateMapRegisters @ 0x140456F16 (HalpDmaAllocateMapRegisters.c)
 *     HalpQueueMapBufferWorker @ 0x14050905C (HalpQueueMapBufferWorker.c)
 *     HalpDmaQueueAdapter @ 0x140513AD4 (HalpDmaQueueAdapter.c)
 */

__int64 __fastcall HalAllocateAdapterChannelV2(
        PDMA_ADAPTER DmaAdapter,
        _DMA_OPERATIONS *DeviceQueueEntry,
        ULONG a3,
        struct _LIST_ENTRY *a4)
{
  char v4; // r12
  char v5; // r15
  unsigned __int8 CurrentIrql; // di
  _DWORD *SchedulerAssist; // r9
  unsigned __int8 v12; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v14; // r8
  int v15; // eax
  bool v16; // zf
  _DMA_OPERATIONS *MapRegisters; // rax
  _DMA_OPERATIONS *DmaOperations; // r8
  int v20; // eax
  unsigned __int8 v21; // al
  struct _KPRCB *v22; // r9
  _DWORD *v23; // r8
  int v24; // eax

  HIDWORD(DeviceQueueEntry->AllocateCommonBuffer) &= ~4u;
  v4 = 0;
  v5 = 0;
  DeviceQueueEntry->FreeCommonBuffer = (void (__fastcall *)(_DMA_ADAPTER *, unsigned int, _LARGE_INTEGER, void *, unsigned __int8))a4;
  CurrentIrql = 0;
  LODWORD(DeviceQueueEntry->FlushAdapterBuffers) = a3;
  if ( KeGetCurrentIrql() < 2u )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
    }
    v5 = 1;
  }
  if ( !KeInsertDeviceQueue((PKDEVICE_QUEUE)&DmaAdapter[11], (PKDEVICE_QUEUE_ENTRY)DeviceQueueEntry) )
  {
    *(_DWORD *)&DmaAdapter[15].Version = a3;
    DmaAdapter[21].DmaOperations = DeviceQueueEntry;
    if ( a3 && (LOBYTE(DmaAdapter[27].Version) || !*((_BYTE *)&DmaAdapter[27].Size + 3)) )
    {
      if ( a3 > *(_DWORD *)&DmaAdapter[14].Version )
      {
        *(_DWORD *)&DmaAdapter[15].Version = 0;
        IoFreeAdapterChannel(DmaAdapter);
        if ( v5 )
        {
          if ( KiIrqlFlags )
          {
            if ( (KiIrqlFlags & 1) != 0 )
            {
              v12 = KeGetCurrentIrql();
              if ( v12 <= 0xFu && CurrentIrql <= 0xFu && v12 >= 2u )
              {
                CurrentPrcb = KeGetCurrentPrcb();
                v14 = CurrentPrcb->SchedulerAssist;
                v15 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
                v16 = (v15 & v14[5]) == 0;
                v14[5] &= v15;
                if ( v16 )
                  KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
              }
            }
          }
          __writecr8(CurrentIrql);
        }
        return 3221225626LL;
      }
      MapRegisters = (_DMA_OPERATIONS *)HalpDmaAllocateMapRegisters((__int64)DmaAdapter, a3);
      DmaAdapter[14].DmaOperations = MapRegisters;
      if ( !MapRegisters )
      {
        HalpDmaQueueAdapter(DmaAdapter);
        v4 = 1;
        HalpQueueMapBufferWorker(DmaAdapter, a3);
      }
    }
    else
    {
      DmaAdapter[14].DmaOperations = 0LL;
      *(_DWORD *)&DmaAdapter[15].Version = 0;
    }
    if ( DmaAdapter[26].DmaOperations )
      (*(void (**)(void))(DmaDispatch + 32))();
    if ( !v4 )
    {
      DmaOperations = DmaAdapter[14].DmaOperations;
      DmaAdapter[21].DmaOperations = DeviceQueueEntry;
      v20 = ((__int64 (__fastcall *)(void (__fastcall *)(_DMA_ADAPTER *), void (__fastcall *)(_DMA_ADAPTER *, void *, unsigned int), _DMA_OPERATIONS *, int (__fastcall *)(_DMA_ADAPTER *, _DEVICE_OBJECT *, unsigned int, _IO_ALLOCATION_ACTION (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *, void *), void *)))a4)(
              DeviceQueueEntry->FreeAdapterChannel,
              DeviceQueueEntry->FreeMapRegisters,
              DmaOperations,
              DeviceQueueEntry->AllocateAdapterChannel);
      if ( v20 == 2 )
      {
LABEL_31:
        IoFreeAdapterChannel(DmaAdapter);
        goto LABEL_32;
      }
      if ( v20 == 3 )
      {
        *(_DWORD *)&DmaAdapter[15].Version = 0;
        goto LABEL_31;
      }
    }
  }
LABEL_32:
  if ( v5 )
  {
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v21 = KeGetCurrentIrql();
        if ( v21 <= 0xFu && CurrentIrql <= 0xFu && v21 >= 2u )
        {
          v22 = KeGetCurrentPrcb();
          v23 = v22->SchedulerAssist;
          v24 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v16 = (v24 & v23[5]) == 0;
          v23[5] &= v24;
          if ( v16 )
            KiRemoveSystemWorkPriorityKick((__int64)v22);
        }
      }
    }
    __writecr8(CurrentIrql);
  }
  return 0LL;
}
