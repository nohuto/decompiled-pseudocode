/*
 * XREFs of MiCheckZeroFreeRebalance @ 0x1402D9100
 * Callers:
 *     MiGetPage @ 0x14026D240 (MiGetPage.c)
 * Callees:
 *     KxReleaseQueuedSpinLock @ 0x140260240 (KxReleaseQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140260D40 (KeAcquireInStackQueuedSpinLock.c)
 *     ExQueueWorkItemToPartition @ 0x1402B956C (ExQueueWorkItemToPartition.c)
 *     MiNodeLargeFreeZeroPages @ 0x1402D75E0 (MiNodeLargeFreeZeroPages.c)
 *     PsReferencePartitionSafe @ 0x1402F9C1C (PsReferencePartitionSafe.c)
 *     MiGetNodeStandbyPageCount @ 0x14046C7CA (MiGetNodeStandbyPageCount.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 */

unsigned __int64 __fastcall MiCheckZeroFreeRebalance(__int64 a1, unsigned int a2)
{
  unsigned int v2; // r12d
  _QWORD *v3; // r13
  _QWORD *v4; // rdi
  unsigned __int64 result; // rax
  int v6; // r15d
  __int64 i; // r14
  unsigned __int64 v8; // rbp
  _QWORD *v9; // rsi
  __int64 v10; // rax
  int v11; // ebx
  unsigned __int64 OldIrql; // rsi
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v15; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-58h] BYREF
  unsigned int v18; // [rsp+88h] [rbp+10h]
  unsigned int v19; // [rsp+90h] [rbp+18h]

  v2 = MmNumberOfChannels;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v19 = a2 >> byte_140C65B8D;
  v3 = (_QWORD *)(*(_QWORD *)(a1 + 16) + 25408LL * (a2 >> byte_140C65B8D));
  v18 = 0;
  if ( (unsigned int)MmNumberOfChannels > 1 )
    v18 = (unsigned __int16)(unsigned __int8)MiChannelMaximumPowerOf2Mask & (unsigned __int16)(a2 >> byte_140C65B8E);
  v4 = v3 + 2844;
  result = 0LL;
  v6 = 0;
  for ( i = 0LL; i <= 1; ++i )
  {
    v8 = result;
    if ( v2 > 1 )
      v9 = &v3[2 * v18 + 2867 + i];
    else
      v9 = v4;
    v10 = MiNodeLargeFreeZeroPages(v3, v18, v6++);
    result = v8 + *v9 + v10;
    ++v4;
  }
  if ( result < 0x200 )
  {
    result = MiGetNodeStandbyPageCount(a1, v19, v18);
    if ( result >= 0x1000 && !*(_QWORD *)(a1 + 16464) )
    {
      result = *(unsigned int *)(a1 + 4);
      if ( (result & 1) == 0 )
      {
        KeAcquireInStackQueuedSpinLock(&qword_140C67480, &LockHandle);
        if ( *(_QWORD *)(a1 + 16464) || (*(_DWORD *)(a1 + 4) & 1) != 0 )
        {
          v11 = 0;
        }
        else
        {
          v11 = 0;
          if ( (unsigned __int8)PsReferencePartitionSafe(*(_QWORD *)(a1 + 200)) )
          {
            *(_QWORD *)(a1 + 16448) = 0LL;
            *(_QWORD *)(a1 + 16464) = MiRebalanceZeroFreeLists;
            v11 = 1;
            *(_QWORD *)(a1 + 16472) = a1;
          }
        }
        result = KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
        OldIrql = LockHandle.OldIrql;
        if ( (_DWORD)KiIrqlFlags )
        {
          result = KeGetCurrentIrql();
          if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
            && (unsigned __int8)result <= 0xFu
            && LockHandle.OldIrql <= 0xFu
            && (unsigned __int8)result >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            result = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
            v15 = ((unsigned int)result & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= result;
            if ( v15 )
              result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        __writecr8(OldIrql);
        if ( v11 )
          return ExQueueWorkItemToPartition((_QWORD *)(a1 + 16448), 1, 0xFFFFFFFF, *(_QWORD *)(a1 + 200));
      }
    }
  }
  return result;
}
