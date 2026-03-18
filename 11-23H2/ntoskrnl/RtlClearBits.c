/*
 * XREFs of RtlClearBits @ 0x14022DA00
 * Callers:
 *     MiReduceMappedFileReadAhead @ 0x140294644 (MiReduceMappedFileReadAhead.c)
 *     HvpGrowDirtyVectors @ 0x1402F5B28 (HvpGrowDirtyVectors.c)
 *     MiTrimWorkingSetBuildup @ 0x14034FDC0 (MiTrimWorkingSetBuildup.c)
 *     MiReduceMappedFileReadBehind @ 0x140353310 (MiReduceMappedFileReadBehind.c)
 *     BgpFwFreeMemory @ 0x1403860A0 (BgpFwFreeMemory.c)
 *     HalpDmaCommitContiguousMapBuffers @ 0x14039C28C (HalpDmaCommitContiguousMapBuffers.c)
 *     HalpMmAllocCtxFree @ 0x1403A56C0 (HalpMmAllocCtxFree.c)
 *     HalpDmaReturnToContiguousPool @ 0x14045C90C (HalpDmaReturnToContiguousPool.c)
 *     MiStoreWriteModifiedPages @ 0x14046DAAA (MiStoreWriteModifiedPages.c)
 *     HalpDmaAllocateScatterPagesFromContiguousPoolAtHighLevelV3 @ 0x1404FF1D0 (HalpDmaAllocateScatterPagesFromContiguousPoolAtHighLevelV3.c)
 *     HalpDmaAllocateScatterPagesFromContiguousPoolAtHighLevelV2 @ 0x140515C04 (HalpDmaAllocateScatterPagesFromContiguousPoolAtHighLevelV2.c)
 *     ExtEnvClearBits @ 0x14051F4C0 (ExtEnvClearBits.c)
 *     HalpIommuProcessIvhdEntry @ 0x14052E664 (HalpIommuProcessIvhdEntry.c)
 *     HsaAllocateRemappingTableEntry @ 0x14052ECB0 (HsaAllocateRemappingTableEntry.c)
 *     HsaUpdateRemappingTableEntry @ 0x140531270 (HsaUpdateRemappingTableEntry.c)
 *     RtlFindSetBitsAndClear @ 0x1405A84A0 (RtlFindSetBitsAndClear.c)
 *     RtlShiftLeftBitMap @ 0x1405A9210 (RtlShiftLeftBitMap.c)
 *     MiAttemptPageFileReductionApc @ 0x140637D70 (MiAttemptPageFileReductionApc.c)
 *     MiFinishPageFileExtension @ 0x140639AD8 (MiFinishPageFileExtension.c)
 *     MiStoreSetPageFileRunEvicted @ 0x14065C9CC (MiStoreSetPageFileRunEvicted.c)
 *     MiReleaseDriverPtes @ 0x140697280 (MiReleaseDriverPtes.c)
 *     HvIsCellAllocated @ 0x1406DD350 (HvIsCellAllocated.c)
 *     CmpCheckValueList @ 0x1406DE4C0 (CmpCheckValueList.c)
 *     MiFreeInitializationCode @ 0x140703AFC (MiFreeInitializationCode.c)
 *     PspQueryRateControlHistory @ 0x140706E4C (PspQueryRateControlHistory.c)
 *     HvFreeHivePartial @ 0x1407071A8 (HvFreeHivePartial.c)
 *     HvpRemoveFreeCellHint @ 0x14070A220 (HvpRemoveFreeCellHint.c)
 *     HvpAdjustBitmap @ 0x14074FF10 (HvpAdjustBitmap.c)
 *     SepGetLowBoxNumberEntry @ 0x1407F48A8 (SepGetLowBoxNumberEntry.c)
 *     HalpIrtAllocateIndex @ 0x14081E298 (HalpIrtAllocateIndex.c)
 *     MiCreatePagefile @ 0x140833A94 (MiCreatePagefile.c)
 *     HalpDmaAllocateLocalContiguousPool @ 0x140933F50 (HalpDmaAllocateLocalContiguousPool.c)
 *     HalpIrtFreeIndex @ 0x140934914 (HalpIrtFreeIndex.c)
 *     SmcStorePlacementGet @ 0x1409DB668 (SmcStorePlacementGet.c)
 *     MiPrepareToHotPatchImagePatchCallback @ 0x140A3AE70 (MiPrepareToHotPatchImagePatchCallback.c)
 *     MiProcessHotPatchUndoTable @ 0x140A3AF9C (MiProcessHotPatchUndoTable.c)
 *     MiCreateSessionDriverProtos @ 0x140A45DD0 (MiCreateSessionDriverProtos.c)
 *     PnprMarkOrMirrorPages @ 0x140A9CFC8 (PnprMarkOrMirrorPages.c)
 *     PopMirrorPhysicalMemory @ 0x140AA39C0 (PopMirrorPhysicalMemory.c)
 *     ViFreeToContiguousMemory @ 0x140AC8D64 (ViFreeToContiguousMemory.c)
 *     MiAssignSystemVa @ 0x140B5FF04 (MiAssignSystemVa.c)
 *     HalpPowerInitDiscard @ 0x140B61E20 (HalpPowerInitDiscard.c)
 *     MiAssignSessionRanges @ 0x140B6F1D0 (MiAssignSessionRanges.c)
 * Callees:
 *     memset @ 0x140435A00 (memset.c)
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
      v7 = ~(byte_140018F88[NumberToClear] << v4);
LABEL_4:
      *v5 &= v7;
      return;
    }
    if ( (_DWORD)v4 )
    {
      v6 = (unsigned int)v4 + NumberToClear - 8;
      *v5++ &= byte_140018F88[v4];
    }
    if ( (unsigned int)v6 > 8 )
    {
      memset(v5, 0, (unsigned __int64)(unsigned int)v6 >> 3);
      v5 += (unsigned __int64)(unsigned int)v6 >> 3;
      v6 &= 7u;
    }
    if ( (_DWORD)v6 )
    {
      v7 = byte_140016E88[v6];
      goto LABEL_4;
    }
  }
}
