/*
 * XREFs of RaAttemptHighWaterMarkIncrease @ 0x1C00655F4
 * Callers:
 *     StorSubmitIoGatewayItem @ 0x1C0004920 (StorSubmitIoGatewayItem.c)
 *     RaidStartIoPacket @ 0x1C00050F0 (RaidStartIoPacket.c)
 *     StorNextIoGatewayItem @ 0x1C0019328 (StorNextIoGatewayItem.c)
 *     RaAttemptHighWaterMarkIncreasePassive @ 0x1C00259F0 (RaAttemptHighWaterMarkIncreasePassive.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C0007B34 (RaidAllocatePool.c)
 *     StorAllocateContiguousIoResourcesWithPreferredNode @ 0x1C005BD60 (StorAllocateContiguousIoResourcesWithPreferredNode.c)
 *     McTemplateK0zqqqqq_EtwWriteTransfer @ 0x1C006540C (McTemplateK0zqqqqq_EtwWriteTransfer.c)
 *     McTemplateK0zqqqqqqq_EtwWriteTransfer @ 0x1C00654F0 (McTemplateK0zqqqqqqq_EtwWriteTransfer.c)
 *     StorGetPreferredNodeNumber @ 0x1C0066344 (StorGetPreferredNodeNumber.c)
 */

char __fastcall RaAttemptHighWaterMarkIncrease(unsigned int *Context)
{
  char v2; // r14
  PIO_WORKITEM WorkItem; // rax
  __int64 v5; // r9
  __int64 v6; // r15
  int PreferredNodeNumber; // eax
  __int64 v8; // rdx
  __int64 Pool; // rax
  __int64 v10; // r8
  struct _SLIST_ENTRY *v11; // rsi
  unsigned int v12; // ecx
  unsigned int v13; // eax
  unsigned int v14; // r9d
  union _SLIST_HEADER *v15; // rcx
  unsigned int v16; // r8d
  ULONG TimeIncrement; // eax
  __int64 v18; // r8
  __int64 v19; // rcx

  v2 = 0;
  if ( KeGetCurrentIrql() && !*((_BYTE *)Context + 184) )
  {
    if ( *((_QWORD *)Context + 36)
      || (WorkItem = IoAllocateWorkItem(*(PDEVICE_OBJECT *)(*(_QWORD *)(*((_QWORD *)Context + 19) + 64LL) + 8LL)),
          (*((_QWORD *)Context + 36) = WorkItem) != 0LL) )
    {
      if ( !_InterlockedCompareExchange((volatile signed __int32 *)Context + 76, 1, 0) )
        IoQueueWorkItem(
          *((PIO_WORKITEM *)Context + 36),
          (PIO_WORKITEM_ROUTINE)RaAttemptHighWaterMarkIncreasePassive,
          CriticalWorkQueue,
          Context);
    }
    return 0;
  }
  if ( _InterlockedCompareExchange((volatile signed __int32 *)Context + 47, 1, 0) )
    return 0;
  if ( Context[34] < Context[36] )
  {
    if ( !*((_QWORD *)Context + 21) )
      goto LABEL_13;
    if ( MEMORY[0xFFFFF78000000320] >= *((_QWORD *)Context + 21) )
    {
      *((_QWORD *)Context + 21) = 0LL;
LABEL_13:
      v5 = *((_QWORD *)Context + 19);
      v6 = *(_QWORD *)(v5 + 64);
      if ( *((_BYTE *)Context + 184) )
      {
        Pool = RaidAllocatePool(64LL, Context[37], 1397907794LL, v5);
      }
      else
      {
        PreferredNodeNumber = StorGetPreferredNodeNumber(Context);
        Pool = StorAllocateContiguousIoResourcesWithPreferredNode(Context[37], v8, v6, PreferredNodeNumber);
      }
      v11 = (struct _SLIST_ENTRY *)Pool;
      if ( Pool )
      {
        *(_DWORD *)(Pool + 48) = 523124044;
        *(_DWORD *)(Pool + 792) = Context[45];
        v12 = Context[45];
        if ( v12 )
          *(_QWORD *)(Pool + 808) = Pool + Context[37] - v12;
        if ( *((_BYTE *)Context + 184) )
          *(_QWORD *)(Pool + 832) = 0LL;
        Context[41] = 0;
        v2 = 1;
        *(_QWORD *)(Pool + 32) = Context;
        if ( (Microsoft_Windows_StorPortEnableBits & 0x10) != 0 )
          McTemplateK0zqqqqq_EtwWriteTransfer(
            Context[34] + 1,
            Context[34],
            v10,
            *(const wchar_t **)(v6 + 48),
            *(_DWORD *)(v6 + 56),
            Context[48],
            Context[34],
            Context[34] + 1,
            Context[36]);
        _InterlockedAdd((volatile signed __int32 *)Context + 34, 1u);
        v13 = Context[34];
        Context[7] = v13;
        Context[8] = v13;
        v14 = Context[32];
        if ( v14 )
        {
          v16 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)Context + 19) + 64LL) + 912LL);
          v15 = *(union _SLIST_HEADER **)(*((_QWORD *)Context + 8)
                                        + 8LL * (v14 * (HIDWORD(KeGetPcr()[1].LockArray) % v16) / v16));
        }
        else
        {
          v15 = (union _SLIST_HEADER *)(Context + 16);
        }
        ExpInterlockedPushEntrySList(v15, v11);
      }
      else
      {
        ++Context[40];
        ++Context[41];
        *((_QWORD *)Context + 21) = MEMORY[0xFFFFF78000000320];
        TimeIncrement = KeQueryTimeIncrement();
        v19 = Context[44] + 1;
        Context[44] = v19;
        *((_QWORD *)Context + 21) += 30 * (0x989680 / TimeIncrement);
        if ( (Microsoft_Windows_StorPortEnableBits & 0x20) != 0 )
          McTemplateK0zqqqqqqq_EtwWriteTransfer(
            v19,
            0x989680 % TimeIncrement,
            v18,
            *(const wchar_t **)(v6 + 48),
            *(_DWORD *)(v6 + 56),
            Context[48],
            Context[7],
            Context[36],
            Context[40],
            Context[41],
            v19);
      }
    }
  }
  Context[47] = 0;
  return v2;
}
