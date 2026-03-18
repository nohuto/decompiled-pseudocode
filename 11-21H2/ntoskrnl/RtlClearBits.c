/*
 * XREFs of RtlClearBits @ 0x140347580
 * Callers:
 *     HvpGrowDirtyVectors @ 0x14020C5E4 (HvpGrowDirtyVectors.c)
 *     MiReduceMappedFileReadBehind @ 0x140246CCC (MiReduceMappedFileReadBehind.c)
 *     MiReduceMappedFileReadAhead @ 0x1402482BC (MiReduceMappedFileReadAhead.c)
 *     MiTrimWorkingSetBuildup @ 0x140373880 (MiTrimWorkingSetBuildup.c)
 *     MiStoreWriteModifiedPages @ 0x14037B44C (MiStoreWriteModifiedPages.c)
 *     MiStoreSetPageFileRunEvicted @ 0x140386D24 (MiStoreSetPageFileRunEvicted.c)
 *     BgpFwFreeMemory @ 0x1403A8CB4 (BgpFwFreeMemory.c)
 *     HalpMmAllocCtxFree @ 0x1403B1B5C (HalpMmAllocCtxFree.c)
 *     HalpDmaCommitContiguousMapBuffers @ 0x1403CDDB0 (HalpDmaCommitContiguousMapBuffers.c)
 *     HalpDmaReturnToContiguousPool @ 0x140457862 (HalpDmaReturnToContiguousPool.c)
 *     HalpDmaAllocateScatterPagesFromContiguousPoolAtHighLevelV3 @ 0x140503808 (HalpDmaAllocateScatterPagesFromContiguousPoolAtHighLevelV3.c)
 *     HalpDmaAllocateScatterPagesFromContiguousPoolAtHighLevelV2 @ 0x1405188FC (HalpDmaAllocateScatterPagesFromContiguousPoolAtHighLevelV2.c)
 *     ExtEnvClearBits @ 0x140522654 (ExtEnvClearBits.c)
 *     HalpIommuProcessIvhdEntry @ 0x1405307FC (HalpIommuProcessIvhdEntry.c)
 *     HsaAllocateRemappingTableEntry @ 0x140530DE0 (HsaAllocateRemappingTableEntry.c)
 *     HsaUpdateRemappingTableEntry @ 0x140533520 (HsaUpdateRemappingTableEntry.c)
 *     MiAttemptPageFileReductionApc @ 0x14059B0B0 (MiAttemptPageFileReductionApc.c)
 *     MiFinishPageFileExtension @ 0x14059C580 (MiFinishPageFileExtension.c)
 *     RtlFindSetBitsAndClear @ 0x1405E5DA0 (RtlFindSetBitsAndClear.c)
 *     RtlShiftLeftBitMap @ 0x1405E6BE0 (RtlShiftLeftBitMap.c)
 *     PspQueryRateControlHistory @ 0x14068578C (PspQueryRateControlHistory.c)
 *     HvFreeHivePartial @ 0x140689900 (HvFreeHivePartial.c)
 *     HvpAdjustBitmap @ 0x14068CFE4 (HvpAdjustBitmap.c)
 *     SepGetLowBoxNumberEntry @ 0x140696750 (SepGetLowBoxNumberEntry.c)
 *     MiFreeInitializationCode @ 0x14075F23C (MiFreeInitializationCode.c)
 *     MiReleaseDriverPtes @ 0x14076200C (MiReleaseDriverPtes.c)
 *     HvpRemoveFreeCellHint @ 0x14079C290 (HvpRemoveFreeCellHint.c)
 *     HvIsCellAllocated @ 0x1407C8130 (HvIsCellAllocated.c)
 *     MiCreatePagefile @ 0x14084B698 (MiCreatePagefile.c)
 *     HalpDmaAllocateLocalContiguousPool @ 0x140908F2C (HalpDmaAllocateLocalContiguousPool.c)
 *     HalpIrtAllocateIndex @ 0x140909B14 (HalpIrtAllocateIndex.c)
 *     HalpIrtFreeIndex @ 0x140909FA0 (HalpIrtFreeIndex.c)
 *     MiPrepareToHotPatchImagePatchCallback @ 0x140976D80 (MiPrepareToHotPatchImagePatchCallback.c)
 *     MiProcessHotPatchUndoTable @ 0x140976EAC (MiProcessHotPatchUndoTable.c)
 *     MiCreateSessionDriverProtos @ 0x140981070 (MiCreateSessionDriverProtos.c)
 *     SmcStorePlacementGet @ 0x1409D847C (SmcStorePlacementGet.c)
 *     PopMirrorPhysicalMemory @ 0x140A509B0 (PopMirrorPhysicalMemory.c)
 *     PnprMarkOrMirrorPages @ 0x140A68338 (PnprMarkOrMirrorPages.c)
 *     ViFreeToContiguousMemory @ 0x140A8833C (ViFreeToContiguousMemory.c)
 *     MiAssignSystemVa @ 0x140B0751C (MiAssignSystemVa.c)
 *     HalpPowerInitDiscard @ 0x140B236AC (HalpPowerInitDiscard.c)
 *     MiAssignSessionRanges @ 0x140B29EB4 (MiAssignSessionRanges.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 */

void __stdcall RtlClearBits(PRTL_BITMAP BitMapHeader, ULONG StartingIndex, ULONG NumberToClear)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rdx
  _BYTE *v5; // rbx
  __int64 v6; // rsi
  char v7; // al

  if ( NumberToClear )
  {
    v3 = StartingIndex;
    v4 = StartingIndex & 7;
    v5 = (char *)BitMapHeader->Buffer + (v3 >> 3);
    v6 = NumberToClear;
    if ( (unsigned int)v4 + NumberToClear <= 8 )
    {
      v7 = ~(byte_140018DF0[NumberToClear] << v4);
LABEL_4:
      *v5 &= v7;
      return;
    }
    if ( (_DWORD)v4 )
    {
      v6 = (unsigned int)v4 + NumberToClear - 8;
      *v5++ &= byte_140018DF0[v4];
    }
    if ( (unsigned int)v6 > 8 )
    {
      memset(v5, 0, (unsigned __int64)(unsigned int)v6 >> 3);
      v5 += (unsigned __int64)(unsigned int)v6 >> 3;
      v6 &= 7u;
    }
    if ( (_DWORD)v6 )
    {
      v7 = byte_140015C40[v6];
      goto LABEL_4;
    }
  }
}
