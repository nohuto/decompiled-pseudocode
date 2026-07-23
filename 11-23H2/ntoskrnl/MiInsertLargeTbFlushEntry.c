/*
 * XREFs of MiInsertLargeTbFlushEntry @ 0x140211C2C
 * Callers:
 *     MiDecommitLargePoolVa @ 0x140211A20 (MiDecommitLargePoolVa.c)
 *     MiDeleteSystemPageTable @ 0x14021DDF0 (MiDeleteSystemPageTable.c)
 *     MiRevertValidPte @ 0x140278D10 (MiRevertValidPte.c)
 *     MiMakePteClean @ 0x140285B00 (MiMakePteClean.c)
 *     MiZeroPage @ 0x1402D0C80 (MiZeroPage.c)
 *     MmUnmapIoSpace @ 0x140335F60 (MmUnmapIoSpace.c)
 *     MiZeroAndFlushPtes @ 0x1403360EC (MiZeroAndFlushPtes.c)
 *     MiMakeVaRangeNoAccess @ 0x14035BDBC (MiMakeVaRangeNoAccess.c)
 *     MiZeroPageWorkMapping @ 0x140368AE4 (MiZeroPageWorkMapping.c)
 *     MiFlushValidPteFromTb @ 0x14038CA94 (MiFlushValidPteFromTb.c)
 *     MiReplacePfnWithGapMapping @ 0x14038F6D8 (MiReplacePfnWithGapMapping.c)
 *     MiDemoteValidLargePageOneLevel @ 0x14038F884 (MiDemoteValidLargePageOneLevel.c)
 *     MiClearSystemAccessBits @ 0x14038FDE4 (MiClearSystemAccessBits.c)
 *     MiUnmapMdlCommon @ 0x14061E728 (MiUnmapMdlCommon.c)
 *     MiDecommitLargePte @ 0x140635E20 (MiDecommitLargePte.c)
 *     MiProtectAweRegion @ 0x14064B8F4 (MiProtectAweRegion.c)
 *     MiWriteAwePtes @ 0x14064CB0C (MiWriteAwePtes.c)
 *     MiWritePteHighLevel @ 0x14064E80C (MiWritePteHighLevel.c)
 *     MiDeleteLargeUserPde @ 0x1406508B4 (MiDeleteLargeUserPde.c)
 *     MiReleaseLargePdeMappings @ 0x14065FD24 (MiReleaseLargePdeMappings.c)
 *     MiFreeBootDriverPages @ 0x140B47054 (MiFreeBootDriverPages.c)
 * Callees:
 *     MiInsertTbFlushEntry @ 0x14027F800 (MiInsertTbFlushEntry.c)
 */

__int64 __fastcall MiInsertLargeTbFlushEntry(__int64 a1, int a2, __int64 a3)
{
  int i; // esi
  __int64 result; // rax

  if ( a2 >= 0 )
  {
    for ( i = 0; i <= a2; ++i )
    {
      a3 = a3 << 25 >> 16;
      result = MiInsertTbFlushEntry(a1, a3, 1LL, (unsigned int)i);
    }
  }
  return result;
}
