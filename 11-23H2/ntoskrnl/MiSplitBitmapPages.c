/*
 * XREFs of MiSplitBitmapPages @ 0x14020B1E8
 * Callers:
 *     MiExpandPtes @ 0x140210C78 (MiExpandPtes.c)
 *     MiExtendDynamicBitMap @ 0x1403AAC40 (MiExtendDynamicBitMap.c)
 *     MiSplitPfnBitMaps @ 0x14081C898 (MiSplitPfnBitMaps.c)
 *     MiSplitMirrorBitMap @ 0x140A2F344 (MiSplitMirrorBitMap.c)
 *     MiMarkRetpolineBits @ 0x140A34730 (MiMarkRetpolineBits.c)
 *     MiInitializeDriverImages @ 0x140B460A0 (MiInitializeDriverImages.c)
 *     MxMarkActiveDriverBits @ 0x140B5EE38 (MxMarkActiveDriverBits.c)
 * Callees:
 *     MiMakeZeroedPageTables @ 0x14020B280 (MiMakeZeroedPageTables.c)
 */

__int64 __fastcall MiSplitBitmapPages(int a1, unsigned __int64 a2, __int64 a3)
{
  int v3; // r9d
  __int64 v5; // r8

  v3 = 9;
  if ( a1 != 13 )
    v3 = a1;
  v5 = 544LL;
  if ( ((v3 - 5) & 0xFFFFFFFB) != 0 )
  {
    if ( (unsigned int)(v3 - 14) > 2 && v3 != 8 && KeGetCurrentIrql() <= 1u )
      v5 = 545LL;
  }
  else
  {
    v5 = 560LL;
  }
  return MiMakeZeroedPageTables(
           ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
           (((a2 + ((unsigned __int64)(a3 - 1) >> 3)) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
           v5);
}
