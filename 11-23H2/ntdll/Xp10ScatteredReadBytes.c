/*
 * XREFs of Xp10ScatteredReadBytes @ 0x1801201FC
 * Callers:
 *     RtlDecompressBuffer2Xp10 @ 0x18011BC10 (RtlDecompressBuffer2Xp10.c)
 *     Xp10Compute2Crc32 @ 0x18011D850 (Xp10Compute2Crc32.c)
 *     Xp10Compute2Crc64 @ 0x18011D958 (Xp10Compute2Crc64.c)
 *     Xp10ExecuteHuffmanDecode @ 0x18011DBB4 (Xp10ExecuteHuffmanDecode.c)
 *     Xp10ReadAndDecodeHuffmanTables @ 0x18011F404 (Xp10ReadAndDecodeHuffmanTables.c)
 *     Xp10ReadMtfHeader @ 0x18011FC3C (Xp10ReadMtfHeader.c)
 *     Xp10ScatteredBitBufferReadBytes @ 0x18011FD98 (Xp10ScatteredBitBufferReadBytes.c)
 * Callees:
 *     memmove @ 0x1800A7A40 (memmove.c)
 *     Xp10ScatteredNextBuffer @ 0x1801201A8 (Xp10ScatteredNextBuffer.c)
 */

__int64 __fastcall Xp10ScatteredReadBytes(__int64 a1, char *a2, int a3)
{
  unsigned int v6; // edi
  size_t v7; // rbx

  v6 = 0;
  do
  {
    v7 = a3 - v6;
    if ( *(_QWORD *)(a1 + 8) - *(_QWORD *)a1 <= v7 )
      v7 = *(_QWORD *)(a1 + 8) - *(_QWORD *)a1;
    memmove(a2, *(const void **)a1, v7);
    *(_QWORD *)a1 += v7;
    v6 += v7;
    a2 += v7;
  }
  while ( v6 != a3 && (unsigned int)Xp10ScatteredNextBuffer((_QWORD *)a1) );
  return v6;
}
