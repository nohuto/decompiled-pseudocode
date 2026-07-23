/*
 * XREFs of MiDereferenceControlAreaPfnList @ 0x1403399D0
 * Callers:
 *     MiGatherMappedPages @ 0x140297C04 (MiGatherMappedPages.c)
 *     MiDeleteTransitionPte @ 0x1402DCE80 (MiDeleteTransitionPte.c)
 *     MiReleaseInPageRefs @ 0x1403301AC (MiReleaseInPageRefs.c)
 *     MiRestoreTransitionPte @ 0x14033501C (MiRestoreTransitionPte.c)
 *     MiPurgeImageSection @ 0x140369DE8 (MiPurgeImageSection.c)
 *     MiPurgeSubsection @ 0x140625744 (MiPurgeSubsection.c)
 *     MiSplitDirectMapPage @ 0x14063F2D4 (MiSplitDirectMapPage.c)
 * Callees:
 *     MiRemoveUnusedSubsection @ 0x14021B994 (MiRemoveUnusedSubsection.c)
 *     ExAcquireSpinLockExclusive @ 0x14024D340 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402893A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14028A810 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiInsertUnusedSubsection @ 0x14028BBE0 (MiInsertUnusedSubsection.c)
 *     MiCheckForControlAreaDeletion @ 0x140339AD8 (MiCheckForControlAreaDeletion.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14060B12C (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x14066B424 (MiReturnCrossPartitionSectionCharges.c)
 */

void __fastcall MiDereferenceControlAreaPfnList(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  __int64 inserted; // r15
  __int64 v8; // rbx
  unsigned int v9; // edi
  volatile LONG *v10; // r14
  volatile LONG *v11; // rcx
  KIRQL v12; // bp
  bool v13; // zf
  __int64 v14; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v18; // eax
  void *retaddr; // [rsp+48h] [rbp+0h]

  inserted = 0LL;
  if ( (*(_DWORD *)(a1 + 56) & 0x20) == 0 && *(_QWORD *)(a1 + 64) )
  {
    v8 = a2;
LABEL_4:
    v9 = 1;
    goto LABEL_5;
  }
  v8 = 0LL;
  if ( *(_QWORD *)(a1 + 64) )
    goto LABEL_4;
  v9 = 0;
LABEL_5:
  v10 = (volatile LONG *)(a1 + 72);
  v11 = (volatile LONG *)(a1 + 72);
  if ( (a4 & 2) != 0 )
  {
    v12 = 17;
    ExAcquireSpinLockExclusiveAtDpcLevel(v11);
  }
  else
  {
    v12 = ExAcquireSpinLockExclusive(v11);
  }
  if ( v8 )
  {
    v13 = (*(_DWORD *)(v8 + 104))-- == 1;
    if ( v13 && !*(_QWORD *)(v8 + 96) && (*(_BYTE *)(a2 + 34) & 1) == 0 && (*(_BYTE *)(v8 + 34) & 8) != 0 )
    {
      MiRemoveUnusedSubsection(v8);
      inserted = MiInsertUnusedSubsection(v8);
    }
  }
  --*(_QWORD *)(a1 + 32);
  if ( (a4 & 1) != 0 )
    MiCheckForControlAreaDeletion(a1);
  if ( inserted )
    v14 = *(_QWORD *)(qword_140C674C8 + 8LL * (*(_WORD *)(a1 + 60) & 0x3FF));
  else
    v14 = 0LL;
  if ( v12 == 17 )
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v10, retaddr);
    else
      *v10 = 0;
  }
  else
  {
    ExReleaseSpinLockExclusiveFromDpcLevel(v10);
    if ( (_DWORD)KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && v12 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v18 = ~(unsigned __int16)(-1LL << (v12 + 1));
        v13 = (v18 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v18;
        if ( v13 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(v12);
  }
  if ( inserted )
    MiReturnCrossPartitionSectionCharges(v14, v9, inserted);
}
