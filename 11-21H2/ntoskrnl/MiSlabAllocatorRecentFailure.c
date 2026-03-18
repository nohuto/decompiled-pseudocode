/*
 * XREFs of MiSlabAllocatorRecentFailure @ 0x1405B19C8
 * Callers:
 *     MiGetSlabPage @ 0x1402EB440 (MiGetSlabPage.c)
 *     MiAllocateSlabEntry @ 0x1405B0B24 (MiAllocateSlabEntry.c)
 * Callees:
 *     MiGetSlabCurrentTime @ 0x1404192EC (MiGetSlabCurrentTime.c)
 */

__int64 __fastcall MiSlabAllocatorRecentFailure(__int64 a1)
{
  if ( *(_QWORD *)(a1 + 160) )
  {
    if ( MiGetSlabCurrentTime() - *(_QWORD *)(a1 + 160) < 0x23C34600 )
      return 1LL;
    *(_QWORD *)(a1 + 160) = 0LL;
  }
  return 0LL;
}
