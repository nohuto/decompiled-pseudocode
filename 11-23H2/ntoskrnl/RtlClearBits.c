/*
 * XREFs of RtlClearBits @ 0x14022DB10
 * Callers:
 *     MiReduceMappedFileReadAhead @ 0x1402948D4 (MiReduceMappedFileReadAhead.c)
 *     HvpGrowDirtyVectors @ 0x1402F5DB8 (HvpGrowDirtyVectors.c)
 *     MiTrimWorkingSetBuildup @ 0x14034FF60 (MiTrimWorkingSetBuildup.c)
 *     MiReduceMappedFileReadBehind @ 0x1403534B0 (MiReduceMappedFileReadBehind.c)
 *     BgpFwFreeMemory @ 0x140386280 (BgpFwFreeMemory.c)
 *     HalpDmaCommitContiguousMapBuffers @ 0x14039C46C (HalpDmaCommitContiguousMapBuffers.c)
 *     HalpMmAllocCtxFree @ 0x1403A58A0 (HalpMmAllocCtxFree.c)
 *     HalpDmaReturnToContiguousPool @ 0x14045CD0C (HalpDmaReturnToContiguousPool.c)
 *     MiStoreWriteModifiedPages @ 0x14046DEAA (MiStoreWriteModifiedPages.c)
 *     HalpDmaAllocateScatterPagesFromContiguousPoolAtHighLevelV3 @ 0x1404FF720 (HalpDmaAllocateScatterPagesFromContiguousPoolAtHighLevelV3.c)
 *     HalpDmaAllocateScatterPagesFromContiguousPoolAtHighLevelV2 @ 0x140516154 (HalpDmaAllocateScatterPagesFromContiguousPoolAtHighLevelV2.c)
 *     ExtEnvClearBits @ 0x14051FA10 (ExtEnvClearBits.c)
 *     HalpIommuProcessIvhdEntry @ 0x14052EBB4 (HalpIommuProcessIvhdEntry.c)
 *     HsaAllocateRemappingTableEntry @ 0x14052F200 (HsaAllocateRemappingTableEntry.c)
 *     HsaUpdateRemappingTableEntry @ 0x1405317C0 (HsaUpdateRemappingTableEntry.c)
 *     RtlFindSetBitsAndClear @ 0x1405A8A10 (RtlFindSetBitsAndClear.c)
 *     RtlShiftLeftBitMap @ 0x1405A9780 (RtlShiftLeftBitMap.c)
 *     MiAttemptPageFileReductionApc @ 0x1406382C0 (MiAttemptPageFileReductionApc.c)
 *     MiFinishPageFileExtension @ 0x14063A028 (MiFinishPageFileExtension.c)
 *     MiStoreSetPageFileRunEvicted @ 0x14065CF1C (MiStoreSetPageFileRunEvicted.c)
 *     MiReleaseDriverPtes @ 0x140697280 (MiReleaseDriverPtes.c)
 *     HvIsCellAllocated @ 0x1406DD380 (HvIsCellAllocated.c)
 *     CmpCheckValueList @ 0x1406DE4F0 (CmpCheckValueList.c)
 *     MiFreeInitializationCode @ 0x140703D0C (MiFreeInitializationCode.c)
 *     PspQueryRateControlHistory @ 0x14070705C (PspQueryRateControlHistory.c)
 *     HvFreeHivePartial @ 0x1407073B8 (HvFreeHivePartial.c)
 *     HvpRemoveFreeCellHint @ 0x14070A430 (HvpRemoveFreeCellHint.c)
 *     HvpAdjustBitmap @ 0x140750100 (HvpAdjustBitmap.c)
 *     SepGetLowBoxNumberEntry @ 0x1407F4B78 (SepGetLowBoxNumberEntry.c)
 *     HalpIrtAllocateIndex @ 0x14081E568 (HalpIrtAllocateIndex.c)
 *     MiCreatePagefile @ 0x140833D94 (MiCreatePagefile.c)
 *     HalpDmaAllocateLocalContiguousPool @ 0x140934150 (HalpDmaAllocateLocalContiguousPool.c)
 *     HalpIrtFreeIndex @ 0x140934B14 (HalpIrtFreeIndex.c)
 *     SmcStorePlacementGet @ 0x1409DB868 (SmcStorePlacementGet.c)
 *     MiPrepareToHotPatchImagePatchCallback @ 0x140A3B120 (MiPrepareToHotPatchImagePatchCallback.c)
 *     MiProcessHotPatchUndoTable @ 0x140A3B24C (MiProcessHotPatchUndoTable.c)
 *     MiCreateSessionDriverProtos @ 0x140A46080 (MiCreateSessionDriverProtos.c)
 *     PnprMarkOrMirrorPages @ 0x140A9CE38 (PnprMarkOrMirrorPages.c)
 *     PopMirrorPhysicalMemory @ 0x140AA3830 (PopMirrorPhysicalMemory.c)
 *     ViFreeToContiguousMemory @ 0x140AC8D54 (ViFreeToContiguousMemory.c)
 *     MiAssignSystemVa @ 0x140B5FF04 (MiAssignSystemVa.c)
 *     HalpPowerInitDiscard @ 0x140B61E20 (HalpPowerInitDiscard.c)
 *     MiAssignSessionRanges @ 0x140B6F1D0 (MiAssignSessionRanges.c)
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
      v7 = ~(byte_140018F80[NumberToClear] << v4);
LABEL_4:
      *v5 &= v7;
      return;
    }
    if ( (_DWORD)v4 )
    {
      v6 = (unsigned int)v4 + NumberToClear - 8;
      *v5++ &= byte_140018F80[v4];
    }
    if ( (unsigned int)v6 > 8 )
    {
      memset(v5, 0, (unsigned __int64)(unsigned int)v6 >> 3);
      v5 += (unsigned __int64)(unsigned int)v6 >> 3;
      v6 &= 7u;
    }
    if ( (_DWORD)v6 )
    {
      v7 = byte_140016E78[v6];
      goto LABEL_4;
    }
  }
}
