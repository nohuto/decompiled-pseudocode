/*
 * XREFs of MiInsertLargeTbFlushEntry @ 0x140211C2C
 * Callers:
 *     MiDecommitLargePoolVa @ 0x140211A20 (MiDecommitLargePoolVa.c)
 *     MiDeleteSystemPageTable @ 0x14021DDF0 (MiDeleteSystemPageTable.c)
 *     MiRevertValidPte @ 0x140278A80 (MiRevertValidPte.c)
 *     MiMakePteClean @ 0x140285870 (MiMakePteClean.c)
 *     MiZeroPage @ 0x1402D09F0 (MiZeroPage.c)
 *     MmUnmapIoSpace @ 0x140335CD0 (MmUnmapIoSpace.c)
 *     MiZeroAndFlushPtes @ 0x140335E5C (MiZeroAndFlushPtes.c)
 *     MiMakeVaRangeNoAccess @ 0x14035BC1C (MiMakeVaRangeNoAccess.c)
 *     MiZeroPageWorkMapping @ 0x140368944 (MiZeroPageWorkMapping.c)
 *     MiFlushValidPteFromTb @ 0x14038C8B4 (MiFlushValidPteFromTb.c)
 *     MiReplacePfnWithGapMapping @ 0x14038F4F8 (MiReplacePfnWithGapMapping.c)
 *     MiDemoteValidLargePageOneLevel @ 0x14038F6A4 (MiDemoteValidLargePageOneLevel.c)
 *     MiClearSystemAccessBits @ 0x14038FC04 (MiClearSystemAccessBits.c)
 *     MiUnmapMdlCommon @ 0x14061E1D8 (MiUnmapMdlCommon.c)
 *     MiDecommitLargePte @ 0x1406358D0 (MiDecommitLargePte.c)
 *     MiProtectAweRegion @ 0x14064B3A4 (MiProtectAweRegion.c)
 *     MiWriteAwePtes @ 0x14064C5BC (MiWriteAwePtes.c)
 *     MiWritePteHighLevel @ 0x14064E2BC (MiWritePteHighLevel.c)
 *     MiDeleteLargeUserPde @ 0x140650364 (MiDeleteLargeUserPde.c)
 *     MiReleaseLargePdeMappings @ 0x14065F7D4 (MiReleaseLargePdeMappings.c)
 *     MiFreeBootDriverPages @ 0x140B47054 (MiFreeBootDriverPages.c)
 * Callees:
 *     MiInsertTbFlushEntry @ 0x14027F570 (MiInsertTbFlushEntry.c)
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
