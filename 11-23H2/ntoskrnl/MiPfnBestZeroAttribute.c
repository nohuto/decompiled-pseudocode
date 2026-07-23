/*
 * XREFs of MiPfnBestZeroAttribute @ 0x1403397FC
 * Callers:
 *     MiZeroAndReleasePages @ 0x1402D32C0 (MiZeroAndReleasePages.c)
 *     MiAllocateLargeZeroPages @ 0x1402E7A70 (MiAllocateLargeZeroPages.c)
 *     MiInitializeMdlOneNodeBatchPages @ 0x1402F9AA0 (MiInitializeMdlOneNodeBatchPages.c)
 *     MiUpdateCacheAttributeListsForPage @ 0x1402F9D98 (MiUpdateCacheAttributeListsForPage.c)
 *     MiZeroPhysicalPage @ 0x14033948C (MiZeroPhysicalPage.c)
 *     MiZeroAndConvertPage @ 0x140650584 (MiZeroAndConvertPage.c)
 * Callees:
 *     MiSearchNumaNodeTable @ 0x14026ED60 (MiSearchNumaNodeTable.c)
 */

__int64 __fastcall MiPfnBestZeroAttribute(__int64 a1, int a2)
{
  return *(unsigned int *)(qword_140C65AA0
                         + 4
                         * (a2
                          + 28LL
                          + 94LL
                          * *((unsigned int *)MiSearchNumaNodeTable(0xAAAAAAAAAAAAAAABuLL * ((a1 + 0x220000000000LL) >> 4))
                            + 2)
                          + 4 * ((unsigned __int64)*(unsigned __int8 *)(a1 + 34) >> 6)));
}
