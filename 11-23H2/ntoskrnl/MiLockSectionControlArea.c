/*
 * XREFs of MiLockSectionControlArea @ 0x1402100C8
 * Callers:
 *     MmUpdateSectionIoAttribution @ 0x14020EAE8 (MmUpdateSectionIoAttribution.c)
 *     MiCopyHeaderIfResident @ 0x14020ECB0 (MiCopyHeaderIfResident.c)
 *     MiFlushDataSection @ 0x14020EE80 (MiFlushDataSection.c)
 *     MmDisableModifiedWriteOfSection @ 0x14020EF70 (MmDisableModifiedWriteOfSection.c)
 *     MiReferenceExistingControlArea @ 0x14020EFE0 (MiReferenceExistingControlArea.c)
 *     MmGetImageFileSignatureInformation @ 0x14020F0B0 (MmGetImageFileSignatureInformation.c)
 *     MmEnoughMemoryForWrite @ 0x140210000 (MmEnoughMemoryForWrite.c)
 *     MmOnlySystemCacheViewsPresent @ 0x1402F10BC (MmOnlySystemCacheViewsPresent.c)
 *     MmChangeSectionBackingFile @ 0x14035F158 (MmChangeSectionBackingFile.c)
 *     MiForceSectionClosed @ 0x14035F860 (MiForceSectionClosed.c)
 *     MmIsFileSectionActive @ 0x1403C5B30 (MmIsFileSectionActive.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14024D430 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140289750 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x140312480 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
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
    v6 = ExAcquireSpinLockExclusive(&dword_140C65540);
    v7 = v6;
    *a3 = v6;
    v8 = a2 ? *a1 : a1[2];
    if ( !v8 )
      break;
    if ( (unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel(v8 + 72) )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C65540);
      return v8;
    }
    v10 = *a3;
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C65540);
    if ( (_DWORD)KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
        && CurrentIrql <= 0xFu
        && (unsigned __int8)v10 <= 0xFu
        && CurrentIrql >= 2u )
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
    __writecr8(v10);
  }
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C65540);
  if ( (_DWORD)KiIrqlFlags )
  {
    v16 = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v16 <= 0xFu && (unsigned __int8)v7 <= 0xFu && v16 >= 2u )
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
  __writecr8(v7);
  return 0LL;
}
