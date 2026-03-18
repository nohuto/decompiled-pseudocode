/*
 * XREFs of MiGetLeafVa @ 0x1402E5A20
 * Callers:
 *     MiClearNonPagedPtes @ 0x140212458 (MiClearNonPagedPtes.c)
 *     MiDeleteNonPagedPoolPte @ 0x1402126F0 (MiDeleteNonPagedPoolPte.c)
 *     MiDeleteSystemPageTable @ 0x14021DDF0 (MiDeleteSystemPageTable.c)
 *     MiIdentifyPfn @ 0x14023E4C0 (MiIdentifyPfn.c)
 *     MiWalkPageTablesRecursively @ 0x14025C170 (MiWalkPageTablesRecursively.c)
 *     MiComputePxeWalkAction @ 0x14025CD40 (MiComputePxeWalkAction.c)
 *     MiGetNextPageTablePte @ 0x14025D0A0 (MiGetNextPageTablePte.c)
 *     MiCompletePrivateZeroFault @ 0x14026A980 (MiCompletePrivateZeroFault.c)
 *     MiQueryAddressState @ 0x140271C00 (MiQueryAddressState.c)
 *     MiCountSharedPages @ 0x140273910 (MiCountSharedPages.c)
 *     MiRevertValidPte @ 0x140278A80 (MiRevertValidPte.c)
 *     MiFillSystemPtes @ 0x14027E8C0 (MiFillSystemPtes.c)
 *     MiDecommitPages @ 0x14027F7D0 (MiDecommitPages.c)
 *     MiMoveDirtyBitsToPfns @ 0x140285A10 (MiMoveDirtyBitsToPfns.c)
 *     MiMakeValidPte @ 0x1402CF2B0 (MiMakeValidPte.c)
 *     MiZeroLocalPages @ 0x1402CF540 (MiZeroLocalPages.c)
 *     MiZeroInParallelWorker @ 0x1402D1300 (MiZeroInParallelWorker.c)
 *     MiInitializeSystemPageTable @ 0x1402E45A8 (MiInitializeSystemPageTable.c)
 *     MiInPagePageTable @ 0x1402E4D70 (MiInPagePageTable.c)
 *     MiEvictPageTableLock @ 0x1402E5230 (MiEvictPageTableLock.c)
 *     MiIsCfgBitMapPageShared @ 0x1402E53F0 (MiIsCfgBitMapPageShared.c)
 *     MiGetNextPageTable @ 0x1402E56B0 (MiGetNextPageTable.c)
 *     MiIsPageTableDeletable @ 0x1402E5884 (MiIsPageTableDeletable.c)
 *     NtGetWriteWatch @ 0x1402EA260 (NtGetWriteWatch.c)
 *     MiPrefetchVirtualMemory @ 0x1402EE1C8 (MiPrefetchVirtualMemory.c)
 *     MiDeleteEmptyPageTableCommit @ 0x14033CF3C (MiDeleteEmptyPageTableCommit.c)
 *     MiFlushDirtyBitsToPfn @ 0x14033D3AC (MiFlushDirtyBitsToPfn.c)
 *     MiMakeVaRangeNoAccess @ 0x14035BC1C (MiMakeVaRangeNoAccess.c)
 *     MiReplicatePteChange @ 0x140368300 (MiReplicatePteChange.c)
 *     MiZeroPageWorkMapping @ 0x140368944 (MiZeroPageWorkMapping.c)
 *     MiFlushValidPteFromTb @ 0x14038C8B4 (MiFlushValidPteFromTb.c)
 *     MiDbgReleaseAddress @ 0x14038C960 (MiDbgReleaseAddress.c)
 *     MiDbgWriteCheck @ 0x14038CA24 (MiDbgWriteCheck.c)
 *     MiGetNextNonGapPfnPage @ 0x14038EF90 (MiGetNextNonGapPfnPage.c)
 *     MiPfnRangeIsZero @ 0x14038F184 (MiPfnRangeIsZero.c)
 *     MiReplacePageTablePage @ 0x140394E4C (MiReplacePageTablePage.c)
 *     MiStealPage @ 0x1403BC3DC (MiStealPage.c)
 *     MiUnlockPhysicalPageByVa @ 0x14061CDD0 (MiUnlockPhysicalPageByVa.c)
 *     MiMirrorRemoveInactivePages @ 0x1406282C4 (MiMirrorRemoveInactivePages.c)
 *     MiCrashdumpRemovePte @ 0x14062F940 (MiCrashdumpRemovePte.c)
 *     MiFilterCrashDumpPte @ 0x14062FA00 (MiFilterCrashDumpPte.c)
 *     MiDecommitLargePte @ 0x1406358D0 (MiDecommitLargePte.c)
 *     MiMakeLargePageTable @ 0x140637004 (MiMakeLargePageTable.c)
 *     MiDbgCopyMemoryTarget @ 0x140643A30 (MiDbgCopyMemoryTarget.c)
 *     MiProtectAweRegion @ 0x14064B3A4 (MiProtectAweRegion.c)
 *     MiWriteAwePtes @ 0x14064C5BC (MiWriteAwePtes.c)
 *     MiScrubLargePageRegions @ 0x140A46410 (MiScrubLargePageRegions.c)
 *     MxCreatePfnsForPtes @ 0x140B586A0 (MxCreatePfnsForPtes.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiGetLeafVa(unsigned __int64 a1)
{
  for ( ; a1 >= 0xFFFFF68000000000uLL; a1 = (__int64)(a1 << 25) >> 16 )
  {
    if ( a1 > 0xFFFFF6FFFFFFFFFFuLL )
      break;
  }
  return a1;
}
