/*
 * XREFs of MiGetLeafVa @ 0x1402E5CB0
 * Callers:
 *     MiClearNonPagedPtes @ 0x140212458 (MiClearNonPagedPtes.c)
 *     MiDeleteNonPagedPoolPte @ 0x1402126F0 (MiDeleteNonPagedPoolPte.c)
 *     MiDeleteSystemPageTable @ 0x14021DDF0 (MiDeleteSystemPageTable.c)
 *     MiIdentifyPfn @ 0x14023E590 (MiIdentifyPfn.c)
 *     MiWalkPageTablesRecursively @ 0x14025C400 (MiWalkPageTablesRecursively.c)
 *     MiComputePxeWalkAction @ 0x14025CFD0 (MiComputePxeWalkAction.c)
 *     MiGetNextPageTablePte @ 0x14025D330 (MiGetNextPageTablePte.c)
 *     MiCompletePrivateZeroFault @ 0x14026AC10 (MiCompletePrivateZeroFault.c)
 *     MiQueryAddressState @ 0x140271E90 (MiQueryAddressState.c)
 *     MiCountSharedPages @ 0x140273BA0 (MiCountSharedPages.c)
 *     MiRevertValidPte @ 0x140278D10 (MiRevertValidPte.c)
 *     MiFillSystemPtes @ 0x14027EB50 (MiFillSystemPtes.c)
 *     MiDecommitPages @ 0x14027FA60 (MiDecommitPages.c)
 *     MiMoveDirtyBitsToPfns @ 0x140285CA0 (MiMoveDirtyBitsToPfns.c)
 *     MiMakeValidPte @ 0x1402CF540 (MiMakeValidPte.c)
 *     MiZeroLocalPages @ 0x1402CF7D0 (MiZeroLocalPages.c)
 *     MiZeroInParallelWorker @ 0x1402D1590 (MiZeroInParallelWorker.c)
 *     MiInitializeSystemPageTable @ 0x1402E4838 (MiInitializeSystemPageTable.c)
 *     MiInPagePageTable @ 0x1402E5000 (MiInPagePageTable.c)
 *     MiEvictPageTableLock @ 0x1402E54C0 (MiEvictPageTableLock.c)
 *     MiIsCfgBitMapPageShared @ 0x1402E5680 (MiIsCfgBitMapPageShared.c)
 *     MiGetNextPageTable @ 0x1402E5940 (MiGetNextPageTable.c)
 *     MiIsPageTableDeletable @ 0x1402E5B14 (MiIsPageTableDeletable.c)
 *     NtGetWriteWatch @ 0x1402EA4F0 (NtGetWriteWatch.c)
 *     MiPrefetchVirtualMemory @ 0x1402EE458 (MiPrefetchVirtualMemory.c)
 *     MiDeleteEmptyPageTableCommit @ 0x14033D1CC (MiDeleteEmptyPageTableCommit.c)
 *     MiFlushDirtyBitsToPfn @ 0x14033D63C (MiFlushDirtyBitsToPfn.c)
 *     MiMakeVaRangeNoAccess @ 0x14035BDBC (MiMakeVaRangeNoAccess.c)
 *     MiReplicatePteChange @ 0x1403684A0 (MiReplicatePteChange.c)
 *     MiZeroPageWorkMapping @ 0x140368AE4 (MiZeroPageWorkMapping.c)
 *     MiFlushValidPteFromTb @ 0x14038CA94 (MiFlushValidPteFromTb.c)
 *     MiDbgReleaseAddress @ 0x14038CB40 (MiDbgReleaseAddress.c)
 *     MiDbgWriteCheck @ 0x14038CC04 (MiDbgWriteCheck.c)
 *     MiGetNextNonGapPfnPage @ 0x14038F170 (MiGetNextNonGapPfnPage.c)
 *     MiPfnRangeIsZero @ 0x14038F364 (MiPfnRangeIsZero.c)
 *     MiReplacePageTablePage @ 0x14039502C (MiReplacePageTablePage.c)
 *     MiStealPage @ 0x1403BC5BC (MiStealPage.c)
 *     MiUnlockPhysicalPageByVa @ 0x14061D320 (MiUnlockPhysicalPageByVa.c)
 *     MiMirrorRemoveInactivePages @ 0x140628814 (MiMirrorRemoveInactivePages.c)
 *     MiCrashdumpRemovePte @ 0x14062FE90 (MiCrashdumpRemovePte.c)
 *     MiFilterCrashDumpPte @ 0x14062FF50 (MiFilterCrashDumpPte.c)
 *     MiDecommitLargePte @ 0x140635E20 (MiDecommitLargePte.c)
 *     MiMakeLargePageTable @ 0x140637554 (MiMakeLargePageTable.c)
 *     MiDbgCopyMemoryTarget @ 0x140643F80 (MiDbgCopyMemoryTarget.c)
 *     MiProtectAweRegion @ 0x14064B8F4 (MiProtectAweRegion.c)
 *     MiWriteAwePtes @ 0x14064CB0C (MiWriteAwePtes.c)
 *     MiScrubLargePageRegions @ 0x140A466C0 (MiScrubLargePageRegions.c)
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
