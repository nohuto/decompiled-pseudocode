/*
 * XREFs of MiCheckControlArea @ 0x140287660
 * Callers:
 *     MiReleaseFaultCharges @ 0x140250924 (MiReleaseFaultCharges.c)
 *     MiDereferenceControlArea @ 0x14025E274 (MiDereferenceControlArea.c)
 *     MiRemoveMappedPtes @ 0x140274860 (MiRemoveMappedPtes.c)
 *     MmPurgeSection @ 0x14027F360 (MmPurgeSection.c)
 *     MiFlushRelease @ 0x1402867DC (MiFlushRelease.c)
 *     MiDereferenceControlAreaBySection @ 0x140287574 (MiDereferenceControlAreaBySection.c)
 *     MiUnmapViewSubsections @ 0x1402875B0 (MiUnmapViewSubsections.c)
 *     MiAddViewsForSection @ 0x140311CC0 (MiAddViewsForSection.c)
 *     MmUnmapViewInSystemCache @ 0x140335870 (MmUnmapViewInSystemCache.c)
 *     MiRemoveSystemCacheReferences @ 0x140592278 (MiRemoveSystemCacheReferences.c)
 * Callees:
 *     MiClearFilePointer @ 0x140220A44 (MiClearFilePointer.c)
 *     MiImageUnused @ 0x140242580 (MiImageUnused.c)
 *     KeSignalGate @ 0x14024B0B4 (KeSignalGate.c)
 *     MiPurgeImageSection @ 0x14025AD28 (MiPurgeImageSection.c)
 *     MiFreeExcessSegments @ 0x1402878F0 (MiFreeExcessSegments.c)
 *     MiBuildWakeList @ 0x140287B04 (MiBuildWakeList.c)
 *     MiInsertUnusedSegment @ 0x140287FB8 (MiInsertUnusedSegment.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     MiCleanSection @ 0x1403885EC (MiCleanSection.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x1405C4B8C (MiReturnCrossPartitionSectionCharges.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14063D8B0 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     MiSegmentDelete @ 0x1406F4904 (MiSegmentDelete.c)
 *     MiReturnImageBase @ 0x1406FC148 (MiReturnImageBase.c)
 */

__int64 __fastcall MiCheckControlArea(__int64 a1, unsigned __int8 a2, _DWORD *a3)
{
  unsigned __int64 v4; // rbp
  __int64 v5; // rdx
  __int64 v6; // r14
  __int16 v7; // cx
  __int64 v8; // rsi
  unsigned int v9; // ebx
  BOOL v10; // r12d
  __int64 v11; // r13
  int v12; // ecx
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // rdx
  __int64 inserted; // rax
  KIRQL v17; // al
  bool v18; // zf
  __int64 v19; // rbx
  unsigned __int8 v20; // al
  struct _KPRCB *v21; // r10
  _DWORD *v22; // r9
  int v23; // eax
  unsigned __int8 v24; // al
  struct _KPRCB *v25; // r9
  _DWORD *v26; // r8
  int v27; // eax
  int v28; // eax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *v30; // r9
  int v31; // eax
  __int64 v32; // [rsp+20h] [rbp-58h] BYREF
  __int128 v33; // [rsp+28h] [rbp-50h]
  void *retaddr; // [rsp+78h] [rbp+0h]

  v4 = a2;
  v5 = *(_QWORD *)(a1 + 64);
  v6 = 0LL;
  v7 = *(_WORD *)(a1 + 60);
  v8 = 0LL;
  v9 = 0;
  v33 = 0LL;
  v10 = v5 != 0;
  v32 = -1LL;
  v11 = *(_QWORD *)(qword_140C51F48 + 8LL * (v7 & 0x3FF));
  if ( *(_QWORD *)(a1 + 40) || *(_QWORD *)(a1 + 24) )
  {
    if ( !*(_QWORD *)(a1 + 80) )
    {
LABEL_16:
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(a1 + 72, retaddr);
      else
        *(_DWORD *)(a1 + 72) = 0;
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      if ( SchedulerAssist )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v28 = SchedulerAssist[6] - 1;
          SchedulerAssist[6] = v28;
          if ( !v28 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && (unsigned __int8)v4 <= 0xFu && CurrentIrql >= 2u )
          {
            v30 = KeGetCurrentPrcb();
            CurrentPrcb = (struct _KPRCB *)((unsigned int)(unsigned __int8)v4 + 1);
            a3 = v30->SchedulerAssist;
            v31 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v4 + 1));
            v18 = (v31 & a3[5]) == 0;
            SchedulerAssist = (_DWORD *)((unsigned int)v31 & a3[5]);
            a3[5] = (_DWORD)SchedulerAssist;
            if ( v18 )
              KiRemoveSystemWorkPriorityKick(v30);
          }
        }
      }
      __writecr8((unsigned __int8)v4);
      if ( v6 )
      {
        do
        {
          v19 = *(_QWORD *)v6;
          KeSignalGate((_DWORD *)(v6 + 16), 1);
          v6 = v19;
        }
        while ( v19 );
      }
      MiFreeExcessSegments(CurrentPrcb, SchedulerAssist, a3);
      goto LABEL_22;
    }
    v9 = 4;
    goto LABEL_4;
  }
  if ( (v5 & 0xFFFFFFFFFFFFFFF0uLL) != 0 )
  {
    v12 = *(_DWORD *)(a1 + 56);
    if ( *(_QWORD *)(a1 + 32) )
    {
      if ( (v12 & 0x40000) != 0 )
      {
        v9 = 1;
      }
      else
      {
        if ( (v12 & 0x20020) != 0x20020 )
        {
          inserted = MiInsertUnusedSegment(a1);
          v12 = *(_DWORD *)(a1 + 56);
          v8 = inserted;
        }
        if ( (v12 & 0x20) != 0 )
        {
          MiImageUnused(a1, 1, (__int64)&v32);
          v12 = *(_DWORD *)(a1 + 56);
        }
      }
      if ( (v12 & 0x20020) == 0x20020 )
      {
        *(_QWORD *)(a1 + 40) = 1LL;
        *(_DWORD *)(a1 + 56) = v12 | 4;
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 72));
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v20 = KeGetCurrentIrql();
            if ( v20 <= 0xFu && (unsigned __int8)v4 <= 0xFu && v20 >= 2u )
            {
              v21 = KeGetCurrentPrcb();
              v22 = v21->SchedulerAssist;
              v23 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v4 + 1));
              v18 = (v23 & v22[5]) == 0;
              v22[5] &= v23;
              if ( v18 )
                KiRemoveSystemWorkPriorityKick(v21);
            }
          }
        }
        __writecr8(v4);
        MiPurgeImageSection(a1);
        v17 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72));
        *(_DWORD *)(a1 + 56) &= ~4u;
        LOBYTE(v4) = v17;
        v18 = (*(_QWORD *)(a1 + 40))-- == 1LL;
        if ( !v18 || *(_QWORD *)(a1 + 24) )
        {
          v9 = 4;
        }
        else if ( *(_QWORD *)(a1 + 32) )
        {
          if ( !v9 )
          {
            v8 = MiInsertUnusedSegment(a1);
            v9 = 4;
          }
        }
        else
        {
          *(_DWORD *)(a1 + 56) |= 1u;
          v9 = 2;
          MiClearFilePointer(a1);
        }
      }
    }
    else
    {
      v9 = 2;
      *(_DWORD *)(a1 + 56) = v12 | 1;
      MiClearFilePointer(a1);
    }
  }
  else
  {
    *(_DWORD *)(a1 + 56) |= 1u;
    v9 = 2;
  }
  if ( v9 >= 4 )
  {
LABEL_4:
    v6 = MiBuildWakeList(a1, 3LL);
    v9 &= ~4u;
  }
  if ( !v9 )
    goto LABEL_16;
  if ( (v9 & 1) != 0 )
  {
    *(_QWORD *)(a1 + 40) = 1LL;
    MiCleanSection(a1, (unsigned __int8)v4, 0LL);
  }
  else
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 72));
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v24 = KeGetCurrentIrql();
        if ( v24 <= 0xFu && (unsigned __int8)v4 <= 0xFu && v24 >= 2u )
        {
          v25 = KeGetCurrentPrcb();
          v26 = v25->SchedulerAssist;
          v27 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v4 + 1));
          v18 = (v27 & v26[5]) == 0;
          v26[5] &= v27;
          if ( v18 )
            KiRemoveSystemWorkPriorityKick(v25);
        }
      }
    }
    __writecr8((unsigned __int8)v4);
    MiSegmentDelete(a1);
  }
LABEL_22:
  if ( v8 )
    MiReturnCrossPartitionSectionCharges(v11, v10, v8);
  return MiReturnImageBase(&v32);
}
