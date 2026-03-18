/*
 * XREFs of MiDetermineCoalescedLargePageHeatState @ 0x1403478A8
 * Callers:
 *     MiCoalesceFreePages @ 0x1402D4970 (MiCoalesceFreePages.c)
 *     MiLargePagePromote @ 0x1402D77D0 (MiLargePagePromote.c)
 * Callees:
 *     MiDetermineNewPfnHeatState @ 0x1403478E8 (MiDetermineNewPfnHeatState.c)
 *     MiColdPageSizeSupported @ 0x140347930 (MiColdPageSizeSupported.c)
 */

_BOOL8 __fastcall MiDetermineCoalescedLargePageHeatState(__int64 a1)
{
  unsigned int v1; // ecx
  int v2; // r8d
  _DWORD *v3; // r9
  char v4; // r10

  if ( !(unsigned int)MiColdPageSizeSupported(a1) )
  {
    if ( !(unsigned int)MiDetermineNewPfnHeatState(0LL, v1) )
      return 1;
    return (v4 & 1) == 0;
  }
  if ( v2 == 1 )
    return (v4 & 1) == 0;
  if ( (v4 & 2) != 0 )
    *v3 = 1;
  return 0;
}
