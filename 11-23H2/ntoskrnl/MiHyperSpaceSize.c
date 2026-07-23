/*
 * XREFs of MiHyperSpaceSize @ 0x14025D7A4
 * Callers:
 *     MiInitializeWalkBounds @ 0x14025D67C (MiInitializeWalkBounds.c)
 *     MiSystemFault @ 0x140261430 (MiSystemFault.c)
 *     MiQueryLeafPte @ 0x140331B40 (MiQueryLeafPte.c)
 *     MiRealVaToFlushType @ 0x14038CDA8 (MiRealVaToFlushType.c)
 *     MiStealPage @ 0x1403BC5BC (MiStealPage.c)
 *     MiDeleteVadBitmap @ 0x140706DC4 (MiDeleteVadBitmap.c)
 *     MiAssignTopLevelRanges @ 0x140B5FC2C (MiAssignTopLevelRanges.c)
 *     MiAddSubRegionEntropy @ 0x140B60128 (MiAddSubRegionEntropy.c)
 * Callees:
 *     <none>
 */

__int64 MiHyperSpaceSize()
{
  __int64 result; // rax
  unsigned __int64 v1; // r8
  unsigned int v2; // r9d
  unsigned __int64 v3; // rdx
  unsigned __int64 v4; // rcx

  result = qword_140C67078;
  if ( !qword_140C67078 )
  {
    result = 0x10000000LL;
    v1 = 0x4000000LL;
    v2 = 0;
    do
    {
      v3 = (result + 4095) & 0xFFFFFFFFFFFFF000uLL;
      qword_140C67080[1 - v2++] = v3;
      v4 = (v1 >> 6) + ((v1 & 0x3F) != 0);
      v1 >>= 9;
      result = v3 + 8 * v4;
    }
    while ( v2 < 2 );
    qword_140C67078 = v3 + 8 * v4;
  }
  return result;
}
