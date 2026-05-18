/*
 * XREFs of sub_1800349DC @ 0x1800349DC
 * Callers:
 *     sub_180037B00 @ 0x180037B00 (sub_180037B00.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_1800349DC(__int64 a1)
{
  char result; // al

  result = 0;
  if ( *(float *)a1 == -1.0
    && *(float *)(a1 + 4) == -1.0
    && *(_DWORD *)(a1 + 8) == 2
    && !*(_DWORD *)(a1 + 12)
    && !*(_DWORD *)(a1 + 16)
    || *(float *)(a1 + 20) == -1.0
    && *(float *)(a1 + 24) == -1.0
    && *(_DWORD *)(a1 + 28) == 2
    && !*(_DWORD *)(a1 + 32)
    && !*(_DWORD *)(a1 + 36) )
  {
    return 1;
  }
  return result;
}
