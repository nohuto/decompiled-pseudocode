/*
 * XREFs of MiFreeLargePageMemory @ 0x1402E7728
 * Callers:
 *     MiDecommitLargePoolVa @ 0x140211A20 (MiDecommitLargePoolVa.c)
 *     MiFreeMdlPageRun @ 0x1402C8C70 (MiFreeMdlPageRun.c)
 *     MiZeroAndReleasePages @ 0x1402D32C0 (MiZeroAndReleasePages.c)
 *     MiFreeSlabEntry @ 0x1403B88B0 (MiFreeSlabEntry.c)
 *     MiFreeContiguousPages @ 0x1403C3BBC (MiFreeContiguousPages.c)
 *     MiFreeLargePages @ 0x1406687A0 (MiFreeLargePages.c)
 *     MiFreeBootDriverPages @ 0x140B47054 (MiFreeBootDriverPages.c)
 * Callees:
 *     MiFinishLargePageFree @ 0x1402E7824 (MiFinishLargePageFree.c)
 *     MiReadyLargePageToFree @ 0x1402E79C0 (MiReadyLargePageToFree.c)
 *     MiUpdateLargePageBitMap @ 0x1402E8B9C (MiUpdateLargePageBitMap.c)
 *     MiColdPageSizeSupported @ 0x140347BC0 (MiColdPageSizeSupported.c)
 *     MiConvertSmallPageRangeToLarge @ 0x1403B8540 (MiConvertSmallPageRangeToLarge.c)
 *     MiChangePageHeatImmediate @ 0x14065433C (MiChangePageHeatImmediate.c)
 */

__int64 __fastcall MiFreeLargePageMemory(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 v3; // rdi
  __int64 v6; // r12
  unsigned int v7; // r15d
  int v8; // r8d
  int v9; // edx

  v3 = a2;
  if ( (a3 & 2) != 0 )
    MiConvertSmallPageRangeToLarge(a1);
  v6 = MiLargePageSizes[v3];
  v7 = 1;
  if ( (a3 & 1) != 0 && (unsigned int)MiColdPageSizeSupported((unsigned int)v3) )
  {
    v7 = 0;
    MiChangePageHeatImmediate(a1, (unsigned int)v3, 0LL);
  }
  v8 = 512;
  v9 = a1;
  if ( (unsigned int)v3 > 1 )
    v9 = a1 & 0xFFFFFE00;
  else
    v8 = v6;
  MiUpdateLargePageBitMap(
    *(_QWORD *)(qword_140C673C8 + 8 * ((*(_QWORD *)(48 * a1 - 0x220000000000LL + 40) >> 43) & 0x3FFLL)),
    v9,
    v8,
    0,
    0);
  if ( (unsigned int)MiReadyLargePageToFree(a1, (unsigned int)v3, a3) )
    return MiFinishLargePageFree(48 * a1 - 0x220000000000LL, (a3 & 1) == 0, v7, (a3 >> 3) & 1);
  else
    return 0LL;
}
