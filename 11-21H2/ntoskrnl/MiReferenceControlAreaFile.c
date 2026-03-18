/*
 * XREFs of MiReferenceControlAreaFile @ 0x140281750
 * Callers:
 *     MmCreateSpecialImageSection @ 0x14066D4BC (MmCreateSpecialImageSection.c)
 *     MmExtendSection @ 0x1406A377C (MmExtendSection.c)
 *     MiMapImageInSystemSpace @ 0x1406F3884 (MiMapImageInSystemSpace.c)
 *     MmEnumerateAddressSpaceAndReferenceImages @ 0x1406F71A0 (MmEnumerateAddressSpaceAndReferenceImages.c)
 *     MiAllowImageMap @ 0x1406F884C (MiAllowImageMap.c)
 *     MiUnmapViewOfSection @ 0x1406F8D30 (MiUnmapViewOfSection.c)
 *     MiUnmapVad @ 0x1406F9060 (MiUnmapVad.c)
 *     MiMapViewOfImageSection @ 0x1406F9990 (MiMapViewOfImageSection.c)
 *     MiCreateSectionCommon @ 0x1406FD140 (MiCreateSectionCommon.c)
 *     MiParseImageLoadConfig @ 0x140706ABC (MiParseImageLoadConfig.c)
 *     MiLogRelocationFaults @ 0x140707460 (MiLogRelocationFaults.c)
 *     MmLoadSystemImageEx @ 0x14075FC44 (MmLoadSystemImageEx.c)
 *     MiDriverLoadSucceeded @ 0x140761234 (MiDriverLoadSucceeded.c)
 *     MmQueryVirtualMemory @ 0x1407BA750 (MmQueryVirtualMemory.c)
 *     MiParseComAndCetHeaders @ 0x1407E4D40 (MiParseComAndCetHeaders.c)
 *     MmFlushVirtualMemory @ 0x1407F0478 (MmFlushVirtualMemory.c)
 *     NtAreMappedFilesTheSame @ 0x1407FAEE0 (NtAreMappedFilesTheSame.c)
 *     MmGetFileNameForAddress @ 0x140881A9A (MmGetFileNameForAddress.c)
 *     MmSectionToSectionObjectPointers @ 0x140881BB6 (MmSectionToSectionObjectPointers.c)
 *     MmGetFileNameForSection @ 0x14096B158 (MmGetFileNameForSection.c)
 *     MiFillMapFileInfo @ 0x14096CB14 (MiFillMapFileInfo.c)
 *     MiLoadUserSymbols @ 0x14096CCF8 (MiLoadUserSymbols.c)
 *     MiAllocateFileExtents @ 0x14096F8CC (MiAllocateFileExtents.c)
 *     MmIsFileMapped @ 0x1409780D4 (MmIsFileMapped.c)
 *     MiMapImageForEnclaveUse @ 0x14097A9C4 (MiMapImageForEnclaveUse.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x1402A6D50 (ObfReferenceObjectWithTag.c)
 *     ObpFastReplenishReference @ 0x1402F339C (ObpFastReplenishReference.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1403127A0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x140366580 (ExAcquireSpinLockShared.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     ObpPushStackInfo @ 0x1405C5EC8 (ObpPushStackInfo.c)
 */

unsigned __int64 __fastcall MiReferenceControlAreaFile(__int64 a1)
{
  signed __int64 v2; // r8
  signed __int64 v3; // rax
  signed __int64 v4; // rbx
  unsigned int v5; // r8d
  unsigned __int64 v6; // rbx
  unsigned __int64 v8; // rbp
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v12; // edx
  bool v13; // zf

  _m_prefetchw((const void *)(a1 + 64));
  v2 = *(_QWORD *)(a1 + 64);
  if ( (v2 & 0xF) != 0 )
  {
    do
    {
      v3 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 64), v2 - 1, v2);
      if ( v2 == v3 )
        break;
      v2 = v3;
    }
    while ( (v3 & 0xF) != 0 );
  }
  v4 = v2;
  v5 = v2 & 0xF;
  v6 = v4 & 0xFFFFFFFFFFFFFFF0uLL;
  if ( v5 <= 1 )
  {
    if ( !v5 )
    {
LABEL_9:
      v8 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(a1 + 72));
      v6 = *(_QWORD *)(a1 + 64) & 0xFFFFFFFFFFFFFFF0uLL;
      if ( v6 )
        ObfReferenceObjectWithTag((PVOID)(*(_QWORD *)(a1 + 64) & 0xFFFFFFFFFFFFFFF0uLL), 0x63536D4Du);
      ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(a1 + 72));
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && (unsigned __int8)v8 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v12 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v8 + 1));
            v13 = (v12 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v12;
            if ( v13 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
      }
      __writecr8(v8);
      return v6;
    }
    ObpFastReplenishReference(a1 + 64, v6);
  }
  if ( ObpTraceFlags )
    ObpPushStackInfo(v6 - 48);
  if ( !v6 )
    goto LABEL_9;
  return v6;
}
