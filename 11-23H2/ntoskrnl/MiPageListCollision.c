/*
 * XREFs of MiPageListCollision @ 0x1403688AC
 * Callers:
 *     MiUnlinkFreeOrZeroedPage @ 0x1402D1E90 (MiUnlinkFreeOrZeroedPage.c)
 *     MiUnlinkNodeLargePageHelper @ 0x1402D89C0 (MiUnlinkNodeLargePageHelper.c)
 *     MiReplenishPageSlist @ 0x1402E7AD0 (MiReplenishPageSlist.c)
 *     MiUnlinkHugeRange @ 0x140622ABC (MiUnlinkHugeRange.c)
 *     MiScrubLargePage @ 0x14065E96C (MiScrubLargePage.c)
 * Callees:
 *     MiStopPageAccessor @ 0x1403688EC (MiStopPageAccessor.c)
 *     MiZeroPageWorkMapping @ 0x140368944 (MiZeroPageWorkMapping.c)
 */

__int64 __fastcall MiPageListCollision(__int64 a1, int a2, unsigned int a3)
{
  __int64 result; // rax
  _BYTE *v5; // rdx

  result = MiStopPageAccessor(a1, a3);
  v5 = *(_BYTE **)(result + 32);
  if ( v5 )
  {
    if ( (*v5 & 1) != 0 )
      return MiZeroPageWorkMapping(*(unsigned int *)(result + 64), v5, a2 == 0 ? 2 : 0);
  }
  return result;
}
