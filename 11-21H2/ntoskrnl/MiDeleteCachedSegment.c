/*
 * XREFs of MiDeleteCachedSegment @ 0x14058A4E8
 * Callers:
 *     MiDereferenceSegmentThread @ 0x1403CBBF0 (MiDereferenceSegmentThread.c)
 *     MiRemoveUnusedSegments @ 0x14058BEE4 (MiRemoveUnusedSegments.c)
 * Callees:
 *     MiReleaseControlAreaWaiters @ 0x1402879F8 (MiReleaseControlAreaWaiters.c)
 *     MiInsertUnusedSegment @ 0x140287FB8 (MiInsertUnusedSegment.c)
 *     MiUnlinkUnusedControlArea @ 0x14028AF80 (MiUnlinkUnusedControlArea.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x140356250 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiDestroySection @ 0x14038868C (MiDestroySection.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     MiFlushControlArea @ 0x14058B0C8 (MiFlushControlArea.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x1405C4B8C (MiReturnCrossPartitionSectionCharges.c)
 */

__int64 __fastcall MiDeleteCachedSegment(__int64 a1)
{
  volatile LONG *v1; // r15
  volatile signed __int32 **v3; // rdi
  unsigned __int64 v4; // rbp
  volatile signed __int32 *i; // rbx
  __int64 v6; // rsi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r8
  int v10; // eax
  bool v11; // zf
  unsigned int v12; // ebx
  int v14; // ecx
  __int64 inserted; // rdi
  unsigned __int8 v16; // cl
  struct _KPRCB *v17; // r10
  _DWORD *v18; // r8
  int v19; // eax

  v1 = (volatile LONG *)(a1 + 1344);
  v3 = (volatile signed __int32 **)(a1 + 1704);
  v4 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 1344));
  for ( i = *v3; ; i = *(volatile signed __int32 **)i )
  {
    if ( i == (volatile signed __int32 *)v3 )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel(v1);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && (unsigned __int8)v4 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v10 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v4 + 1));
            v11 = (v10 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v10;
            if ( v11 )
              KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
          }
        }
      }
      __writecr8(v4);
      return 0;
    }
    v6 = (__int64)(i - 2);
    if ( (unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel(i + 16) )
      break;
  }
  MiUnlinkUnusedControlArea((__int64)(i - 2));
  ExReleaseSpinLockExclusiveFromDpcLevel(v1);
  v14 = *(_DWORD *)(v6 + 56);
  v12 = 1;
  if ( (v14 & 0x20) == 0 && *(_DWORD *)(v6 + 76) && (*(_DWORD *)(a1 + 4) & 1) == 0 )
  {
    inserted = MiInsertUnusedSegment(v6);
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v6 + 72));
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v16 = KeGetCurrentIrql();
        if ( v16 <= 0xFu && (unsigned __int8)v4 <= 0xFu && v16 >= 2u )
        {
          v17 = KeGetCurrentPrcb();
          v18 = v17->SchedulerAssist;
          v19 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v4 + 1));
          v11 = (v19 & v18[5]) == 0;
          v18[5] &= v19;
          if ( v11 )
            KiRemoveSystemWorkPriorityKick((__int64)v17);
        }
      }
    }
    __writecr8(v4);
    if ( inserted )
      MiReturnCrossPartitionSectionCharges(a1, 1LL, inserted);
    return 0;
  }
  if ( (v14 & 0x20) != 0 || (unsigned int)MiFlushControlArea((PVOID)v6) )
    MiDestroySection(v6, v4, 0LL);
  else
    return 0;
  return v12;
}
