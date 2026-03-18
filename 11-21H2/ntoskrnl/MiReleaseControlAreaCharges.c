/*
 * XREFs of MiReleaseControlAreaCharges @ 0x1402874E8
 * Callers:
 *     MiInsertUnusedSegment @ 0x140287FB8 (MiInsertUnusedSegment.c)
 *     MiSegmentDelete @ 0x1406F4904 (MiSegmentDelete.c)
 * Callees:
 *     MiIncludeSharedCommit @ 0x140287930 (MiIncludeSharedCommit.c)
 *     MiAweControlArea @ 0x14028799C (MiAweControlArea.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     MiComputeCrossPartitionSectionCharges @ 0x1405C48A0 (MiComputeCrossPartitionSectionCharges.c)
 */

__int64 __fastcall MiReleaseControlAreaCharges(__int64 a1)
{
  int v2; // edx
  __int64 v3; // rcx
  __int64 v5; // rsi
  KIRQL v6; // di
  char v7; // al
  int v8; // ecx
  BOOL v9; // r9d
  __int64 v10; // r8
  int v11; // r10d
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v15; // edx
  bool v16; // zf

  if ( (unsigned int)MiAweControlArea() || !(unsigned int)MiIncludeSharedCommit() )
    return 0LL;
  v5 = 0LL;
  if ( v2 )
    v6 = 17;
  else
    v6 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v3 + 72));
  v7 = *(_BYTE *)(a1 + 62);
  if ( (v7 & 2) != 0 )
  {
    v8 = *(_DWORD *)(a1 + 56);
    *(_BYTE *)(a1 + 62) = v7 & 0xFD;
    v9 = (v8 & 0x20) != 0 || !*(_QWORD *)(a1 + 64);
    v10 = a1 + 128;
    if ( a1 != -128 )
    {
      v11 = 0x3FFFFFFF;
      while ( 1 )
      {
        if ( (*(_BYTE *)(v10 + 34) & 1) != 0 )
          goto LABEL_22;
        if ( (v11 & *(_DWORD *)(v10 + 48)) == v11 || v9 )
          break;
LABEL_23:
        v10 = *(_QWORD *)(v10 + 16);
        if ( !v10 )
          goto LABEL_7;
      }
      v5 += MiComputeCrossPartitionSectionCharges(v10);
LABEL_22:
      if ( v9 )
        goto LABEL_7;
      goto LABEL_23;
    }
  }
LABEL_7:
  if ( v6 != 17 )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 72));
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && v6 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v15 = ~(unsigned __int16)(-1LL << (v6 + 1));
          v16 = (v15 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v15;
          if ( v16 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(v6);
  }
  return v5;
}
