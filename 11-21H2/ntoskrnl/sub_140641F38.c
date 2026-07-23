/*
 * XREFs of sub_140641F38 @ 0x140641F38
 * Callers:
 *     ExTryToConvertFastResourceSharedToExclusive @ 0x14063CB30 (ExTryToConvertFastResourceSharedToExclusive.c)
 *     sub_14063D600 @ 0x14063D600 (sub_14063D600.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_140641F38(__int64 a1)
{
  char result; // al

  if ( *(_DWORD *)(a1 + 64) != 1 )
    return 0;
  result = 1;
  *(_WORD *)(a1 + 26) |= 0x80u;
  return result;
}
