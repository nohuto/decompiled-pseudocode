/*
 * XREFs of sub_140457ED8 @ 0x140457ED8
 * Callers:
 *     HalAllocateAdapterChannel @ 0x140456840 (HalAllocateAdapterChannel.c)
 * Callees:
 *     KeInsertDeviceQueue @ 0x140257A00 (KeInsertDeviceQueue.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     IoFreeAdapterChannel @ 0x140456A00 (IoFreeAdapterChannel.c)
 *     sub_140456F16 @ 0x140456F16 (sub_140456F16.c)
 *     sub_14050905C @ 0x14050905C (sub_14050905C.c)
 *     sub_140513AD4 @ 0x140513AD4 (sub_140513AD4.c)
 */

__int64 __fastcall sub_140457ED8(
        PDMA_ADAPTER DmaAdapter,
        struct _DMA_OPERATIONS *DeviceQueueEntry,
        ULONG a3,
        struct _LIST_ENTRY *a4)
{
  char v4; // r12
  char v5; // r15
  unsigned __int8 CurrentIrql; // di
  __int64 v10; // r9
  __int64 v11; // rdx
  unsigned __int8 v12; // al
  struct _KPRCB *CurrentPrcb; // r9
  __int64 v14; // r8
  int v15; // eax
  bool v16; // zf
  struct _DMA_OPERATIONS *v18; // rax
  PDMA_OPERATIONS DmaOperations; // rcx
  int v20; // eax
  unsigned __int8 v21; // al
  struct _KPRCB *v22; // r9
  __int64 v23; // r8
  int v24; // eax

  HIDWORD(DeviceQueueEntry->AllocateCommonBuffer) &= ~4u;
  v4 = 0;
  v5 = 0;
  DeviceQueueEntry->FreeCommonBuffer = (PFREE_COMMON_BUFFER)a4;
  CurrentIrql = 0;
  LODWORD(DeviceQueueEntry->FlushAdapterBuffers) = a3;
  if ( KeGetCurrentIrql() < 2u )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
    {
      v10 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
      *(_DWORD *)(v10 + 20) |= (-1 << (CurrentIrql + 1)) & 4;
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
          if ( dword_140D06B08 )
          {
            if ( (dword_140D06B08 & 1) != 0 )
            {
              v12 = KeGetCurrentIrql();
              if ( v12 <= 0xFu && CurrentIrql <= 0xFu && v12 >= 2u )
              {
                CurrentPrcb = KeGetCurrentPrcb();
                v14 = *((_QWORD *)CurrentPrcb + 4375);
                v15 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
                v16 = (v15 & *(_DWORD *)(v14 + 20)) == 0;
                *(_DWORD *)(v14 + 20) &= v15;
                if ( v16 )
                  sub_140418E4C((__int64)CurrentPrcb);
              }
            }
          }
          __writecr8(CurrentIrql);
        }
        return 3221225626LL;
      }
      v18 = (struct _DMA_OPERATIONS *)sub_140456F16((__int64)DmaAdapter, a3);
      DmaAdapter[14].DmaOperations = v18;
      if ( !v18 )
      {
        sub_140513AD4(DmaAdapter);
        v4 = 1;
        sub_14050905C(DmaAdapter, a3);
      }
    }
    else
    {
      DmaAdapter[14].DmaOperations = 0LL;
      *(_DWORD *)&DmaAdapter[15].Version = 0;
    }
    DmaOperations = DmaAdapter[26].DmaOperations;
    if ( DmaOperations )
      sub_14042A5E0(DmaOperations, v11);
    if ( !v4 )
    {
      DmaAdapter[21].DmaOperations = DeviceQueueEntry;
      v20 = sub_14042A5E0(DeviceQueueEntry->FreeAdapterChannel, DeviceQueueEntry->FreeMapRegisters);
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
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v21 = KeGetCurrentIrql();
        if ( v21 <= 0xFu && CurrentIrql <= 0xFu && v21 >= 2u )
        {
          v22 = KeGetCurrentPrcb();
          v23 = *((_QWORD *)v22 + 4375);
          v24 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v16 = (v24 & *(_DWORD *)(v23 + 20)) == 0;
          *(_DWORD *)(v23 + 20) &= v24;
          if ( v16 )
            sub_140418E4C((__int64)v22);
        }
      }
    }
    __writecr8(CurrentIrql);
  }
  return 0LL;
}
