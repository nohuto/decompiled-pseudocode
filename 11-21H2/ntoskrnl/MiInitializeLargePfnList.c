/*
 * XREFs of MiInitializeLargePfnList @ 0x14026E1F4
 * Callers:
 *     MiPruneProcessLargePageCaches @ 0x140267594 (MiPruneProcessLargePageCaches.c)
 *     MiMakeZeroedPageTablesEx @ 0x14026DC5C (MiMakeZeroedPageTablesEx.c)
 *     MiPfnRangeIsZero @ 0x1403C8EF8 (MiPfnRangeIsZero.c)
 *     MiDemoteValidLargePageOneLevel @ 0x1403C9590 (MiDemoteValidLargePageOneLevel.c)
 *     MiAllocateFastLargePagesForMdl @ 0x140589518 (MiAllocateFastLargePagesForMdl.c)
 *     MiAllocateLargeProcessPagesFromCache @ 0x1405C0828 (MiAllocateLargeProcessPagesFromCache.c)
 *     MiFreeLargeProcessPagesToCache @ 0x1405C20CC (MiFreeLargeProcessPagesToCache.c)
 *     MiGetFastLargePages @ 0x1405C2478 (MiGetFastLargePages.c)
 *     MiMapUserLargePages @ 0x1405C2A4C (MiMapUserLargePages.c)
 *     MiCreatePagingFileMap @ 0x1406F3A44 (MiCreatePagingFileMap.c)
 *     MmCreateShadowMapping @ 0x14082A644 (MmCreateShadowMapping.c)
 *     MiCreateInitialSystemWsles @ 0x140B2F9C4 (MiCreateInitialSystemWsles.c)
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
