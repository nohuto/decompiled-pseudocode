/*
 * XREFs of MiLockSectionControlArea @ 0x14028494C
 * Callers:
 *     MiReferenceExistingControlArea @ 0x14023F590 (MiReferenceExistingControlArea.c)
 *     MmGetImageFileSignatureInformation @ 0x140246FD0 (MmGetImageFileSignatureInformation.c)
 *     MmDisableModifiedWriteOfSection @ 0x140248110 (MmDisableModifiedWriteOfSection.c)
 *     MmOnlySystemCacheViewsPresent @ 0x1402518B0 (MmOnlySystemCacheViewsPresent.c)
 *     MmUpdateSectionIoAttribution @ 0x1402535D8 (MmUpdateSectionIoAttribution.c)
 *     MmIsFileSectionActive @ 0x140258E40 (MmIsFileSectionActive.c)
 *     MiComputeFlushRange @ 0x140283E8C (MiComputeFlushRange.c)
 *     MmEnoughMemoryForWrite @ 0x140284860 (MmEnoughMemoryForWrite.c)
 *     MiFlushDataSection @ 0x14029E64C (MiFlushDataSection.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x140356250 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiLockSectionControlArea(_QWORD *a1, int a2, KIRQL *a3)
{
  KIRQL v6; // al
  unsigned __int64 v7; // rdi
  __int64 v8; // rbx
  unsigned __int64 v10; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v14; // eax
  bool v15; // zf
  unsigned __int8 v16; // al
  struct _KPRCB *v17; // r9
  int v18; // eax
  _DWORD *v19; // r8

  while ( 1 )
  {
    v6 = ExAcquireSpinLockExclusive(&dword_140C4F100);
    v7 = v6;
    *a3 = v6;
    v8 = a2 ? *a1 : a1[2];
    if ( !v8 )
      break;
    if ( (unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel(v8 + 72) )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C4F100);
      return v8;
    }
    v10 = *a3;
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C4F100);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v10 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v14 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v10 + 1));
          v15 = (v14 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v14;
          if ( v15 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(v10);
  }
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C4F100);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v16 = KeGetCurrentIrql();
      if ( v16 <= 0xFu && (unsigned __int8)v7 <= 0xFu && v16 >= 2u )
      {
        v17 = KeGetCurrentPrcb();
        v18 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
        v19 = v17->SchedulerAssist;
        v15 = (v18 & v19[5]) == 0;
        v19[5] &= v18;
        if ( v15 )
          KiRemoveSystemWorkPriorityKick(v17);
      }
    }
  }
  __writecr8(v7);
  return 0LL;
}
