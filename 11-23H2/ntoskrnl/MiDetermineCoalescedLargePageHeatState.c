/*
 * XREFs of MiDetermineCoalescedLargePageHeatState @ 0x140347B38
 * Callers:
 *     MiCoalesceFreePages @ 0x1402D4C00 (MiCoalesceFreePages.c)
 *     MiLargePagePromote @ 0x1402D7A60 (MiLargePagePromote.c)
 * Callees:
 *     MiDetermineNewPfnHeatState @ 0x140347B78 (MiDetermineNewPfnHeatState.c)
 *     MiColdPageSizeSupported @ 0x140347BC0 (MiColdPageSizeSupported.c)
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
