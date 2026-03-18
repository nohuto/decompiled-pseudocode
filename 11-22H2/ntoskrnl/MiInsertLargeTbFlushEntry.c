/*
 * XREFs of MiInsertLargeTbFlushEntry @ 0x140211C4C
 * Callers:
 *     MiDecommitLargePoolVa @ 0x140211A40 (MiDecommitLargePoolVa.c)
 *     MiDeleteSystemPageTable @ 0x14021DE10 (MiDeleteSystemPageTable.c)
 *     MiRevertValidPte @ 0x140278960 (MiRevertValidPte.c)
 *     MiMakePteClean @ 0x140285750 (MiMakePteClean.c)
 *     MiZeroPage @ 0x1402D09F0 (MiZeroPage.c)
 *     MmUnmapIoSpace @ 0x140335B30 (MmUnmapIoSpace.c)
 *     MiZeroAndFlushPtes @ 0x140335CBC (MiZeroAndFlushPtes.c)
 *     MiMakeVaRangeNoAccess @ 0x14035B5CC (MiMakeVaRangeNoAccess.c)
 *     MiZeroPageWorkMapping @ 0x1403682F4 (MiZeroPageWorkMapping.c)
 *     MiFlushValidPteFromTb @ 0x14038A3A4 (MiFlushValidPteFromTb.c)
 *     MiReplacePfnWithGapMapping @ 0x14038D978 (MiReplacePfnWithGapMapping.c)
 *     MiDemoteValidLargePageOneLevel @ 0x14038DB24 (MiDemoteValidLargePageOneLevel.c)
 *     MiClearSystemAccessBits @ 0x14038E084 (MiClearSystemAccessBits.c)
 *     MiUnmapMdlCommon @ 0x14061E248 (MiUnmapMdlCommon.c)
 *     MiDecommitLargePte @ 0x140635940 (MiDecommitLargePte.c)
 *     MiProtectAweRegion @ 0x14064B414 (MiProtectAweRegion.c)
 *     MiWriteAwePtes @ 0x14064C62C (MiWriteAwePtes.c)
 *     MiWritePteHighLevel @ 0x14064E32C (MiWritePteHighLevel.c)
 *     MiDeleteLargeUserPde @ 0x1406503D4 (MiDeleteLargeUserPde.c)
 *     MiReleaseLargePdeMappings @ 0x14065F844 (MiReleaseLargePdeMappings.c)
 *     MiFreeBootDriverPages @ 0x140B4A754 (MiFreeBootDriverPages.c)
 * Callees:
 *     MiInsertTbFlushEntry @ 0x14027F450 (MiInsertTbFlushEntry.c)
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
