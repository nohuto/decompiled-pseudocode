/*
 * XREFs of MiDeleteControlArea @ 0x1402199F0
 * Callers:
 *     MiDereferenceControlAreaProbe @ 0x1402198B4 (MiDereferenceControlAreaProbe.c)
 *     MiWaitForInPageComplete @ 0x1402A1680 (MiWaitForInPageComplete.c)
 *     MiDeleteCachedSubsection @ 0x140623BB8 (MiDeleteCachedSubsection.c)
 *     MiDeleteControlAreaList @ 0x1406244D4 (MiDeleteControlAreaList.c)
 *     MiFlushControlArea @ 0x1406245A4 (MiFlushControlArea.c)
 * Callees:
 *     MiDecrementControlAreaCount @ 0x140219AC0 (MiDecrementControlAreaCount.c)
 *     ExAcquireSpinLockExclusive @ 0x14024D340 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402893A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiDecrementSubsectionViewCount @ 0x14029F9B0 (MiDecrementSubsectionViewCount.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x14066B424 (MiReturnCrossPartitionSectionCharges.c)
 *     MiUpdateSubsectionCrossPartitionRefs @ 0x14066B504 (MiUpdateSubsectionCrossPartitionRefs.c)
 *     MiDeleteFileExtents @ 0x1406B0AB0 (MiDeleteFileExtents.c)
 *     SeReleaseImageValidationContext @ 0x1407EB1F8 (SeReleaseImageValidationContext.c)
 *     MiFreeRelocations @ 0x140A48128 (MiFreeRelocations.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 */

void __fastcall MiDeleteControlArea(PVOID P)
{
  __int64 v1; // r14
  int v2; // eax
  __int64 v4; // rbp
  __int64 v5; // rbx
  ULONG_PTR v6; // rdi
  ULONG_PTR v7; // r13
  __int64 v8; // rdi
  unsigned __int64 v9; // r15
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v13; // eax
  bool v14; // zf

  v1 = 0LL;
  v2 = *((_DWORD *)P + 14);
  v4 = *(_QWORD *)(qword_140C674C8 + 8LL * (*((_WORD *)P + 30) & 0x3FF));
  v5 = v4 + 1416;
  if ( (v2 & 0x20) != 0 )
  {
    v8 = *((_QWORD *)P + 12);
    if ( (*(_QWORD *)(v8 + 40) & 0xFFFFFFFFFFFFFFF8uLL) > 8 )
      SeReleaseImageValidationContext(*(_QWORD *)(v8 + 40) & 0xFFFFFFFFFFFFFFF8uLL);
    MiFreeRelocations(P, *(_QWORD *)(v8 + 32));
  }
  else if ( (v2 & 0x80u) == 0 )
  {
    v5 = v4 + 1424;
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
          v1 += MiDecrementSubsectionViewCount(v6);
          ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)P + 18);
          if ( (_DWORD)KiIrqlFlags )
          {
            CurrentIrql = KeGetCurrentIrql();
            if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
              && CurrentIrql <= 0xFu
              && (unsigned __int8)v9 <= 0xFu
              && CurrentIrql >= 2u )
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
          __writecr8(v9);
          *(_WORD *)(v6 + 34) &= ~1u;
        }
        ExFreePoolWithTag((PVOID)v6, 0);
        v6 = v7;
      }
      while ( v7 );
      if ( v1 )
        MiReturnCrossPartitionSectionCharges(v4, 1LL, v1);
    }
  }
  MiDecrementControlAreaCount(v4, v5);
  MiDeleteFileExtents(P);
  ExFreePoolWithTag(P, 0);
}
