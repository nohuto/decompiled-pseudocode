/*
 * XREFs of MiLockDynamicMemoryShared @ 0x14023502C
 * Callers:
 *     MmPrefetchPagesEx @ 0x1406FA730 (MmPrefetchPagesEx.c)
 *     PfpPfnPrioRequest @ 0x140739F40 (PfpPfnPrioRequest.c)
 *     MiPfPrepareSequentialReadList @ 0x1407BCB30 (MiPfPrepareSequentialReadList.c)
 *     MiPfPrepareReadList @ 0x1407BD420 (MiPfPrepareReadList.c)
 *     MiGetPhysicalMemoryRanges @ 0x1408525D8 (MiGetPhysicalMemoryRanges.c)
 *     MiAddPhysicalMemory @ 0x140968388 (MiAddPhysicalMemory.c)
 *     MiMapNewPfns @ 0x140969514 (MiMapNewPfns.c)
 *     MmRelocatePfnList @ 0x140978C9C (MmRelocatePfnList.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 */

__int64 __fastcall MiLockDynamicMemoryShared(__int64 a1, __int64 a2)
{
  --*(_WORD *)(a2 + 486);
  return ExAcquirePushLockSharedEx(a1 + 192, 0LL);
}
