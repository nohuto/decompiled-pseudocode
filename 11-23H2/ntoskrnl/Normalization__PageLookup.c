/*
 * XREFs of Normalization__PageLookup @ 0x1409C1B84
 * Callers:
 *     NormBuffer__GetLastChar @ 0x1405B05E4 (NormBuffer__GetLastChar.c)
 *     NormBuffer__IsBlocked @ 0x1405B074C (NormBuffer__IsBlocked.c)
 *     NormBuffer__SortBeforeSameClass @ 0x1405B0ADC (NormBuffer__SortBeforeSameClass.c)
 * Callees:
 *     <none>
 */

char __fastcall Normalization__PageLookup(__int64 a1, int a2)
{
  return *(_BYTE *)(((__int64)a2 >> 7) + *(_QWORD *)(a1 + 32));
}
