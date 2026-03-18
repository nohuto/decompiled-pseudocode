/*
 * XREFs of MiDriverPageRangeCompare @ 0x1403CB264
 * Callers:
 *     MiBetterDriverPageNeeded @ 0x140247FBC (MiBetterDriverPageNeeded.c)
 *     MiLockCode @ 0x140312BB0 (MiLockCode.c)
 *     MiAllocateDriverPageFromRange @ 0x1403C9C90 (MiAllocateDriverPageFromRange.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiDriverPageRangeCompare(_QWORD *a1, __int64 a2)
{
  if ( *a1 >= *(_QWORD *)(a2 + 24) )
    return *a1 > *(_QWORD *)(a2 + 32);
  else
    return 0xFFFFFFFFLL;
}
