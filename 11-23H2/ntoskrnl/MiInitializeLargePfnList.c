/*
 * XREFs of MiInitializeLargePfnList @ 0x1402E9228
 * Callers:
 *     MiMakeZeroedPageTablesEx @ 0x140214310 (MiMakeZeroedPageTablesEx.c)
 *     MiPruneProcessLargePageCaches @ 0x14021E690 (MiPruneProcessLargePageCaches.c)
 *     MiZeroAndReleasePages @ 0x1402D32C0 (MiZeroAndReleasePages.c)
 *     MiAllocateSlabEntry @ 0x1402E6ED0 (MiAllocateSlabEntry.c)
 *     MiGetFastLargePages @ 0x1402E898C (MiGetFastLargePages.c)
 *     MiFreePagesFromMdl @ 0x1402EBE10 (MiFreePagesFromMdl.c)
 *     MiAllocateFastLargePagesForMdl @ 0x14038B6E4 (MiAllocateFastLargePagesForMdl.c)
 *     MiInitializeLargeMdlLeafPfns @ 0x14038C0C0 (MiInitializeLargeMdlLeafPfns.c)
 *     MiPfnRangeIsZero @ 0x14038F364 (MiPfnRangeIsZero.c)
 *     MiDemoteValidLargePageOneLevel @ 0x14038F884 (MiDemoteValidLargePageOneLevel.c)
 *     MiAllocateLargeProcessPagesFromCache @ 0x14066768C (MiAllocateLargeProcessPagesFromCache.c)
 *     MiFreeLargeProcessPagesToCache @ 0x140668B94 (MiFreeLargeProcessPagesToCache.c)
 *     MiMapUserLargePages @ 0x140669310 (MiMapUserLargePages.c)
 *     MiCreatePagingFileMap @ 0x140747B84 (MiCreatePagingFileMap.c)
 *     MmCreateShadowMapping @ 0x14081DE80 (MmCreateShadowMapping.c)
 *     MiAllocateFastAwePages @ 0x140A40454 (MiAllocateFastAwePages.c)
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
