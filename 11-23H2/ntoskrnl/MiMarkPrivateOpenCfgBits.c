/*
 * XREFs of MiMarkPrivateOpenCfgBits @ 0x1407A4B24
 * Callers:
 *     MiCommitVadCfgBits @ 0x1406AE968 (MiCommitVadCfgBits.c)
 *     MiMarkPrivateImageCfgBits @ 0x1407A4150 (MiMarkPrivateImageCfgBits.c)
 * Callees:
 *     MiPopulateCfgBitMap @ 0x1407A4B60 (MiPopulateCfgBitMap.c)
 */

__int64 __fastcall MiMarkPrivateOpenCfgBits(int a1, __int64 a2, __int64 a3, int a4)
{
  return MiPopulateCfgBitMap(a1, a4 == 0, (a3 + 4095) & 0xFFFFF000, 0, a2, (a3 + 4095) & 0xFFFFFFFFFFFFF000uLL);
}
