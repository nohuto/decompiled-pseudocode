/*
 * XREFs of MiDeleteControlArea @ 0x1402700FC
 * Callers:
 *     MiDereferenceControlAreaProbe @ 0x14027031C (MiDereferenceControlAreaProbe.c)
 *     MiWaitForInPageComplete @ 0x14027AA30 (MiWaitForInPageComplete.c)
 *     MiDeleteCachedSubsection @ 0x14058A6D4 (MiDeleteCachedSubsection.c)
 *     MiDeleteControlAreaList @ 0x14058AFF8 (MiDeleteControlAreaList.c)
 *     MiFlushControlArea @ 0x14058B0C8 (MiFlushControlArea.c)
 * Callees:
 *     MiDecrementControlAreaCount @ 0x140270204 (MiDecrementControlAreaCount.c)
 *     MiDecrementSubsectionViewCount @ 0x1402869C0 (MiDecrementSubsectionViewCount.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x1405C4B8C (MiReturnCrossPartitionSectionCharges.c)
 *     MiUpdateSubsectionCrossPartitionRefs @ 0x1405C4C6C (MiUpdateSubsectionCrossPartitionRefs.c)
 *     SeReleaseImageValidationContext @ 0x1406B8748 (SeReleaseImageValidationContext.c)
 *     MiDeleteFileExtents @ 0x1406F48DC (MiDeleteFileExtents.c)
 *     MiFreeRelocations @ 0x1407FB090 (MiFreeRelocations.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall MiDeleteControlArea(PVOID P)
{
  int v2; // ecx
  __int64 v3; // r14
  __int64 v4; // rbp
  __int64 v5; // rbx
  ULONG_PTR v6; // rdi
  ULONG_PTR v7; // r13
  __int64 v8; // rdi
  unsigned __int64 v9; // r15
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v13; // eax
  bool v14; // zf

  v2 = *((_DWORD *)P + 14);
  v3 = 0LL;
  v4 = *(_QWORD *)(qword_140C51F48 + 8LL * (*((_WORD *)P + 30) & 0x3FF));
  v5 = v4 + 1352;
  if ( (v2 & 0x20) != 0 )
  {
    v8 = *((_QWORD *)P + 12);
    if ( (*(_QWORD *)(v8 + 40) & 0xFFFFFFFFFFFFFFF8uLL) > 8 )
      SeReleaseImageValidationContext(*(_QWORD *)(v8 + 40) & 0xFFFFFFFFFFFFFFF8uLL);
    MiFreeRelocations(P, *(_QWORD *)(v8 + 32));
  }
  else if ( (v2 & 0x80u) == 0 )
  {
    v5 = v4 + 1360;
  }
  else
  {
    v6 = *((_QWORD *)P + 18);
    if ( v6 )
    {
      do
      {
        v7 = *(_QWORD *)(v6 + 16);
        if ( (*(_BYTE *)(v6 + 34) & 1) != 0 && (*(_DWORD *)(v6 + 48) & 0x3FFFFFFF) != 0 )
        {
          MiUpdateSubsectionCrossPartitionRefs(v6, 1LL);
          v9 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)P + 18);
          v3 += MiDecrementSubsectionViewCount(v6);
          ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)P + 18);
          if ( KiIrqlFlags )
          {
            if ( (KiIrqlFlags & 1) != 0 )
            {
              CurrentIrql = KeGetCurrentIrql();
              if ( CurrentIrql <= 0xFu && (unsigned __int8)v9 <= 0xFu && CurrentIrql >= 2u )
              {
                CurrentPrcb = KeGetCurrentPrcb();
                SchedulerAssist = CurrentPrcb->SchedulerAssist;
                v13 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
                v14 = (v13 & SchedulerAssist[5]) == 0;
                SchedulerAssist[5] &= v13;
                if ( v14 )
                  KiRemoveSystemWorkPriorityKick(CurrentPrcb);
              }
            }
          }
          __writecr8(v9);
          *(_WORD *)(v6 + 34) &= ~1u;
        }
        ExFreePoolWithTag((PVOID)v6, 0);
        v6 = v7;
      }
      while ( v7 );
      if ( v3 )
        MiReturnCrossPartitionSectionCharges(v4, 1LL, v3);
    }
  }
  MiDecrementControlAreaCount(v4, v5);
  MiDeleteFileExtents(P);
  ExFreePoolWithTag(P, 0);
}
