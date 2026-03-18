/*
 * XREFs of MiGetLeafVa @ 0x1402CFEB0
 * Callers:
 *     MiZeroAndFlushPtes @ 0x1402157EC (MiZeroAndFlushPtes.c)
 *     MiFlushValidPteFromTb @ 0x140227254 (MiFlushValidPteFromTb.c)
 *     MiClearNonPagedPtes @ 0x140227ED0 (MiClearNonPagedPtes.c)
 *     MiDeleteNonPagedPoolPte @ 0x140228170 (MiDeleteNonPagedPoolPte.c)
 *     MiDeleteSystemPageTable @ 0x140228CD0 (MiDeleteSystemPageTable.c)
 *     MiEvictPageTableLock @ 0x140229100 (MiEvictPageTableLock.c)
 *     MiDeleteEmptyPageTableCommit @ 0x140233E34 (MiDeleteEmptyPageTableCommit.c)
 *     MiMakeVaRangeNoAccess @ 0x14024D7F4 (MiMakeVaRangeNoAccess.c)
 *     MiInitializeSystemPageTable @ 0x14027C784 (MiInitializeSystemPageTable.c)
 *     MiIsCfgBitMapPageShared @ 0x1402810B0 (MiIsCfgBitMapPageShared.c)
 *     MiPrefetchVirtualMemory @ 0x140284EB0 (MiPrefetchVirtualMemory.c)
 *     MiMoveDirtyBitsToPfns @ 0x14028E8E0 (MiMoveDirtyBitsToPfns.c)
 *     MiGetNextPageTable @ 0x14028F080 (MiGetNextPageTable.c)
 *     MiMapPagesToZero @ 0x1402C5D00 (MiMapPagesToZero.c)
 *     MiMakeValidPte @ 0x1402CBD10 (MiMakeValidPte.c)
 *     MiDecommitPages @ 0x1402CE240 (MiDecommitPages.c)
 *     NtGetWriteWatch @ 0x1402CF630 (NtGetWriteWatch.c)
 *     MiIsPageTableDeletable @ 0x1402D01A8 (MiIsPageTableDeletable.c)
 *     MiCountSharedPages @ 0x1402D0500 (MiCountSharedPages.c)
 *     MiStealPage @ 0x1402E97D4 (MiStealPage.c)
 *     MiFillSystemPtes @ 0x140308F00 (MiFillSystemPtes.c)
 *     MiQueryAddressState @ 0x140318330 (MiQueryAddressState.c)
 *     MiWalkPageTablesRecursively @ 0x14031A5C0 (MiWalkPageTablesRecursively.c)
 *     MiComputePxeWalkAction @ 0x14031B1C0 (MiComputePxeWalkAction.c)
 *     MiGetNextPageTablePte @ 0x14031B510 (MiGetNextPageTablePte.c)
 *     MiCompletePrivateZeroFault @ 0x140321F70 (MiCompletePrivateZeroFault.c)
 *     MiRevertValidPte @ 0x14032E130 (MiRevertValidPte.c)
 *     MiInPagePageTable @ 0x140353230 (MiInPagePageTable.c)
 *     MiFlushDirtyBitsToPfn @ 0x14036B408 (MiFlushDirtyBitsToPfn.c)
 *     MiReplicatePteChange @ 0x14036CB28 (MiReplicatePteChange.c)
 *     MiReplacePageTablePage @ 0x14036CF60 (MiReplacePageTablePage.c)
 *     MiDbgReleaseAddress @ 0x1403AD0A8 (MiDbgReleaseAddress.c)
 *     MiDbgWriteCheck @ 0x1403AD16C (MiDbgWriteCheck.c)
 *     MiGetNextNonGapPfnPage @ 0x1403C8D10 (MiGetNextNonGapPfnPage.c)
 *     MiPfnRangeIsZero @ 0x1403C8EF8 (MiPfnRangeIsZero.c)
 *     MiUnlockPhysicalPageByVa @ 0x140584A30 (MiUnlockPhysicalPageByVa.c)
 *     MiMirrorRemoveInactivePages @ 0x14058CF54 (MiMirrorRemoveInactivePages.c)
 *     MiCrashdumpRemovePte @ 0x140592CD0 (MiCrashdumpRemovePte.c)
 *     MiFilterCrashDumpPte @ 0x140592D90 (MiFilterCrashDumpPte.c)
 *     MiDecommitLargePte @ 0x140597940 (MiDecommitLargePte.c)
 *     MiMakeLargePageTable @ 0x140598DA4 (MiMakeLargePageTable.c)
 *     MiDbgCopyMemoryTarget @ 0x1405A47A0 (MiDbgCopyMemoryTarget.c)
 *     MiProtectAweRegion @ 0x1405ABD20 (MiProtectAweRegion.c)
 *     MiWriteAwePtes @ 0x1405ACB84 (MiWriteAwePtes.c)
 *     MiScrubLargeMappedPage @ 0x1405C4FB8 (MiScrubLargeMappedPage.c)
 *     MxCreatePfnsForPtes @ 0x140AF3B50 (MxCreatePfnsForPtes.c)
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
