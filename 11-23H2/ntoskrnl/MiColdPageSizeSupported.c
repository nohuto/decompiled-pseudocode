/*
 * XREFs of MiColdPageSizeSupported @ 0x140347BC0
 * Callers:
 *     MiFreeLargePageMemory @ 0x1402E7728 (MiFreeLargePageMemory.c)
 *     MiDetermineCoalescedLargePageHeatState @ 0x140347B38 (MiDetermineCoalescedLargePageHeatState.c)
 *     MiDetermineNewPfnHeatState @ 0x140347B78 (MiDetermineNewPfnHeatState.c)
 *     MmSetPfnListInfo @ 0x14038C4B0 (MmSetPfnListInfo.c)
 *     MiSplitDirectMapPage @ 0x14063F7B4 (MiSplitDirectMapPage.c)
 *     MiChangePageHeatImmediate @ 0x14065433C (MiChangePageHeatImmediate.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiColdPageSizeSupported(unsigned int a1)
{
  __int64 result; // rax

  if ( (HvlEnlightenments & 0x8400000) == 0 )
    return 0LL;
  result = 1LL;
  if ( a1 > 1 && (HvlEnlightenments & 0x8000000) != 0 )
    return 0LL;
  return result;
}
