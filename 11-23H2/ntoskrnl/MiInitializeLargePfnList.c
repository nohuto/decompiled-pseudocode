/*
 * XREFs of MiInitializeLargePfnList @ 0x1402E8F98
 * Callers:
 *     MiMakeZeroedPageTablesEx @ 0x140214310 (MiMakeZeroedPageTablesEx.c)
 *     MiPruneProcessLargePageCaches @ 0x14021E690 (MiPruneProcessLargePageCaches.c)
 *     MiZeroAndReleasePages @ 0x1402D3030 (MiZeroAndReleasePages.c)
 *     MiAllocateSlabEntry @ 0x1402E6C40 (MiAllocateSlabEntry.c)
 *     MiGetFastLargePages @ 0x1402E86FC (MiGetFastLargePages.c)
 *     MiFreePagesFromMdl @ 0x1402EBB80 (MiFreePagesFromMdl.c)
 *     MiAllocateFastLargePagesForMdl @ 0x14038B504 (MiAllocateFastLargePagesForMdl.c)
 *     MiInitializeLargeMdlLeafPfns @ 0x14038BEE0 (MiInitializeLargeMdlLeafPfns.c)
 *     MiPfnRangeIsZero @ 0x14038F184 (MiPfnRangeIsZero.c)
 *     MiDemoteValidLargePageOneLevel @ 0x14038F6A4 (MiDemoteValidLargePageOneLevel.c)
 *     MiAllocateLargeProcessPagesFromCache @ 0x14066713C (MiAllocateLargeProcessPagesFromCache.c)
 *     MiFreeLargeProcessPagesToCache @ 0x140668644 (MiFreeLargeProcessPagesToCache.c)
 *     MiMapUserLargePages @ 0x140668DC0 (MiMapUserLargePages.c)
 *     MiCreatePagingFileMap @ 0x140747994 (MiCreatePagingFileMap.c)
 *     MmCreateShadowMapping @ 0x14081DBB0 (MmCreateShadowMapping.c)
 *     MiAllocateFastAwePages @ 0x140A401A4 (MiAllocateFastAwePages.c)
 *     MiCreateInitialSystemWsles @ 0x140B456F8 (MiCreateInitialSystemWsles.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiInitializeLargePfnList(_QWORD *a1)
{
  __int64 result; // rax

  result = 4LL;
  do
  {
    a1[2] = 0LL;
    a1[1] = a1;
    *a1 = a1;
    a1 += 3;
    --result;
  }
  while ( result );
  return result;
}
