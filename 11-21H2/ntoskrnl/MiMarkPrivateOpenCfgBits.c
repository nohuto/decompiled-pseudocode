/*
 * XREFs of MiMarkPrivateOpenCfgBits @ 0x1406F5F44
 * Callers:
 *     MiMarkPrivateImageCfgBits @ 0x1406CF50C (MiMarkPrivateImageCfgBits.c)
 *     MiCommitVadCfgBits @ 0x1406F7664 (MiCommitVadCfgBits.c)
 * Callees:
 *     MiPopulateCfgBitMap @ 0x1406F5F80 (MiPopulateCfgBitMap.c)
 */

__int64 __fastcall MiMarkPrivateOpenCfgBits(int a1, __int64 a2, __int64 a3, int a4)
{
  return MiPopulateCfgBitMap(a1, a4 == 0, (a3 + 4095) & 0xFFFFF000, 0, a2, (a3 + 4095) & 0xFFFFFFFFFFFFF000uLL);
}
