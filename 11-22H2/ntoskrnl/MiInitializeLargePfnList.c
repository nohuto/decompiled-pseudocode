/*
 * XREFs of MiInitializeLargePfnList @ 0x1402E8F98
 * Callers:
 *     MiMakeZeroedPageTablesEx @ 0x140214330 (MiMakeZeroedPageTablesEx.c)
 *     MiPruneProcessLargePageCaches @ 0x14021E6B0 (MiPruneProcessLargePageCaches.c)
 *     MiZeroAndReleasePages @ 0x1402D3030 (MiZeroAndReleasePages.c)
 *     MiAllocateSlabEntry @ 0x1402E6C40 (MiAllocateSlabEntry.c)
 *     MiGetFastLargePages @ 0x1402E86FC (MiGetFastLargePages.c)
 *     MiFreePagesFromMdl @ 0x1402EBB80 (MiFreePagesFromMdl.c)
 *     MiAllocateFastLargePagesForMdl @ 0x140388FF4 (MiAllocateFastLargePagesForMdl.c)
 *     MiInitializeLargeMdlLeafPfns @ 0x1403899D0 (MiInitializeLargeMdlLeafPfns.c)
 *     MiPfnRangeIsZero @ 0x14038D604 (MiPfnRangeIsZero.c)
 *     MiDemoteValidLargePageOneLevel @ 0x14038DB24 (MiDemoteValidLargePageOneLevel.c)
 *     MiAllocateLargeProcessPagesFromCache @ 0x1406671AC (MiAllocateLargeProcessPagesFromCache.c)
 *     MiFreeLargeProcessPagesToCache @ 0x1406686B4 (MiFreeLargeProcessPagesToCache.c)
 *     MiMapUserLargePages @ 0x140668E30 (MiMapUserLargePages.c)
 *     MiCreatePagingFileMap @ 0x140747EA4 (MiCreatePagingFileMap.c)
 *     MmCreateShadowMapping @ 0x140820130 (MmCreateShadowMapping.c)
 *     MiAllocateFastAwePages @ 0x140A40214 (MiAllocateFastAwePages.c)
 *     MiCreateInitialSystemWsles @ 0x140B48DF8 (MiCreateInitialSystemWsles.c)
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
