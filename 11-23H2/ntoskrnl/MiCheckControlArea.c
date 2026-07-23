/*
 * XREFs of MiCheckControlArea @ 0x14029FE50
 * Callers:
 *     MiDereferenceControlArea @ 0x14020B890 (MiDereferenceControlArea.c)
 *     MiAddViewsForSection @ 0x140288A00 (MiAddViewsForSection.c)
 *     MiUnmapViewSubsections @ 0x14029CEA0 (MiUnmapViewSubsections.c)
 *     MiDereferenceControlAreaBySection @ 0x14029FB3C (MiDereferenceControlAreaBySection.c)
 *     MiFlushRelease @ 0x14029FC10 (MiFlushRelease.c)
 *     MmUnmapViewInSystemCache @ 0x1402DA240 (MmUnmapViewInSystemCache.c)
 *     MmPurgeSection @ 0x1402DCB60 (MmPurgeSection.c)
 *     MiRemoveMappedPtes @ 0x1402E6870 (MiRemoveMappedPtes.c)
 *     MiReleaseFaultCharges @ 0x140363850 (MiReleaseFaultCharges.c)
 *     MiRemoveSystemCacheReferences @ 0x14062F4BC (MiRemoveSystemCacheReferences.c)
 * Callees:
 *     MiCleanSection @ 0x1402016FC (MiCleanSection.c)
 *     KeSetEvent @ 0x14023C6B0 (KeSetEvent.c)
 *     ExAcquireSpinLockExclusive @ 0x14024D430 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140289750 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiBuildWakeList @ 0x140289774 (MiBuildWakeList.c)
 *     MiInsertUnusedSegment @ 0x1402A0F28 (MiInsertUnusedSegment.c)
 *     MiClearFilePointer @ 0x140355830 (MiClearFilePointer.c)
 *     MiImageUnused @ 0x140355BE4 (MiImageUnused.c)
 *     KeSignalGate @ 0x14035D4DC (KeSignalGate.c)
 *     MiPurgeImageSection @ 0x14036A5D8 (MiPurgeImageSection.c)
 *     PsGetNextPartition @ 0x14036AF10 (PsGetNextPartition.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 *     MiShouldTrimUnusedSegments @ 0x14046BF28 (MiShouldTrimUnusedSegments.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14060B60C (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x14066B904 (MiReturnCrossPartitionSectionCharges.c)
 *     MiSegmentDelete @ 0x1406B0984 (MiSegmentDelete.c)
 *     MiReturnImageBase @ 0x140721EA0 (MiReturnImageBase.c)
 */

__int64 __fastcall MiCheckControlArea(__int64 a1, unsigned __int8 a2)
{
  unsigned __int64 v3; // rbp
  unsigned int v4; // ebx
  bool v5; // zf
  __int16 v6; // cx
  BOOL v7; // r15d
  __int64 *v8; // r14
  __int64 inserted; // rdi
  __int64 v10; // r13
  int v11; // eax
  int v12; // ecx
  KIRQL v14; // al
  __int64 *v15; // rbx
  unsigned __int8 v16; // al
  struct _KPRCB *v17; // r10
  _DWORD *v18; // r9
  int v19; // eax
  unsigned __int8 v20; // cl
  struct _KPRCB *v21; // r9
  _DWORD *v22; // r8
  int v23; // eax
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8
  int v27; // eax
  struct _KEVENT **i; // rbx
  __int64 v29; // [rsp+20h] [rbp-58h] BYREF
  __int128 v30; // [rsp+28h] [rbp-50h]
  void *retaddr; // [rsp+78h] [rbp+0h]

  v3 = a2;
  v4 = 0;
  v5 = *(_QWORD *)(a1 + 64) == 0LL;
  v6 = *(_WORD *)(a1 + 60);
  v7 = !v5;
  v29 = -1LL;
  v8 = 0LL;
  inserted = 0LL;
  v30 = 0LL;
  v10 = *(_QWORD *)(qword_140C673C8 + 8LL * (v6 & 0x3FF));
  if ( *(_QWORD *)(a1 + 40) || *(_QWORD *)(a1 + 24) )
  {
    if ( !*(_QWORD *)(a1 + 80) )
    {
LABEL_16:
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(a1 + 72, retaddr);
      else
        *(_DWORD *)(a1 + 72) = 0;
      if ( (_DWORD)KiIrqlFlags )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
          && CurrentIrql <= 0xFu
          && (unsigned __int8)v3 <= 0xFu
          && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v27 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v3 + 1));
          v5 = (v27 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v27;
          if ( v5 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      __writecr8((unsigned __int8)v3);
      if ( v8 )
      {
        do
        {
          v15 = (__int64 *)*v8;
          KeSignalGate(v8 + 2, 1LL);
          v8 = v15;
        }
        while ( v15 );
      }
      if ( qword_140C6F8E8 >= 9 * (qword_140C6F9D8 / 0xAuLL) )
      {
        if ( (unsigned int)MiShouldTrimUnusedSegments(qword_140C6F9D8, qword_140C6F9D8 / 0xAuLL, qword_140C6F8E8) )
        {
          for ( i = (struct _KEVENT **)PsGetNextPartition(0LL); i; i = (struct _KEVENT **)PsGetNextPartition(i) )
          {
            if ( (*i)[73].Header.WaitListHead.Flink )
              KeSetEvent(*i + 61, 0, 0);
          }
        }
      }
      goto LABEL_21;
    }
    v4 = 4;
    goto LABEL_4;
  }
  if ( (*(_QWORD *)(a1 + 64) & 0xFFFFFFFFFFFFFFF0uLL) != 0 )
  {
    v11 = *(_DWORD *)(a1 + 56);
    if ( *(_QWORD *)(a1 + 32) )
    {
      if ( (v11 & 0x40000) != 0 )
      {
        v4 = 1;
      }
      else
      {
        if ( (v11 & 0x20020) != 0x20020 )
          inserted = MiInsertUnusedSegment(a1);
        if ( (*(_DWORD *)(a1 + 56) & 0x20) != 0 )
          MiImageUnused(a1, 1LL, &v29);
      }
      v12 = *(_DWORD *)(a1 + 56);
      if ( (v12 & 0x20020) == 0x20020 )
      {
        *(_QWORD *)(a1 + 40) = 1LL;
        *(_DWORD *)(a1 + 56) = v12 | 4;
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 72));
        if ( (_DWORD)KiIrqlFlags )
        {
          v16 = KeGetCurrentIrql();
          if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v16 <= 0xFu && (unsigned __int8)v3 <= 0xFu && v16 >= 2u )
          {
            v17 = KeGetCurrentPrcb();
            v18 = v17->SchedulerAssist;
            v19 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v3 + 1));
            v5 = (v19 & v18[5]) == 0;
            v18[5] &= v19;
            if ( v5 )
              KiRemoveSystemWorkPriorityKick(v17);
          }
        }
        __writecr8(v3);
        MiPurgeImageSection(a1);
        v14 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72));
        *(_DWORD *)(a1 + 56) &= ~4u;
        LOBYTE(v3) = v14;
        v5 = (*(_QWORD *)(a1 + 40))-- == 1LL;
        if ( !v5 || *(_QWORD *)(a1 + 24) )
        {
          v4 = 4;
        }
        else if ( *(_QWORD *)(a1 + 32) )
        {
          if ( !v4 )
          {
            inserted = MiInsertUnusedSegment(a1);
            v4 = 4;
          }
        }
        else
        {
          *(_DWORD *)(a1 + 56) |= 1u;
          v4 = 2;
          MiClearFilePointer(a1);
        }
      }
    }
    else
    {
      *(_DWORD *)(a1 + 56) = v11 | 1;
      v4 = 2;
      MiClearFilePointer(a1);
    }
  }
  else
  {
    *(_DWORD *)(a1 + 56) |= 1u;
    v4 = 2;
  }
  if ( v4 >= 4 )
  {
LABEL_4:
    v8 = MiBuildWakeList(a1, 3);
    v4 &= ~4u;
  }
  if ( !v4 )
    goto LABEL_16;
  if ( (v4 & 1) != 0 )
  {
    *(_QWORD *)(a1 + 40) = 1LL;
    MiCleanSection(a1, (unsigned __int8)v3, 0);
  }
  else
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 72));
    if ( (_DWORD)KiIrqlFlags )
    {
      v20 = KeGetCurrentIrql();
      if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v20 <= 0xFu && (unsigned __int8)v3 <= 0xFu && v20 >= 2u )
      {
        v21 = KeGetCurrentPrcb();
        v22 = v21->SchedulerAssist;
        v23 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v3 + 1));
        v5 = (v23 & v22[5]) == 0;
        v22[5] &= v23;
        if ( v5 )
          KiRemoveSystemWorkPriorityKick(v21);
      }
    }
    __writecr8((unsigned __int8)v3);
    MiSegmentDelete(a1);
  }
LABEL_21:
  if ( inserted )
    MiReturnCrossPartitionSectionCharges(v10, v7, inserted);
  return MiReturnImageBase(&v29);
}
