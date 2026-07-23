/*
 * XREFs of sub_1402E10FC @ 0x1402E10FC
 * Callers:
 *     sub_14078FA54 @ 0x14078FA54 (sub_14078FA54.c)
 *     sub_140797054 @ 0x140797054 (sub_140797054.c)
 *     sub_1409E448C @ 0x1409E448C (sub_1409E448C.c)
 *     sub_1409E971C @ 0x1409E971C (sub_1409E971C.c)
 *     sub_1409EC340 @ 0x1409EC340 (sub_1409EC340.c)
 *     sub_1409F5570 @ 0x1409F5570 (sub_1409F5570.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_1402E10FC(__int64 a1, int a2, _DWORD *a3)
{
  __int64 v3; // r9

  *a3 = 0;
  v3 = 0LL;
  while ( *(unsigned __int16 *)(32LL * (unsigned int)v3 + a1 + 134) != a2 || !*(_DWORD *)(32 * (v3 + 4) + a1) )
  {
    v3 = (unsigned int)(v3 + 1);
    *a3 = v3;
    if ( (unsigned int)v3 >= 8 )
      return 0;
  }
  return 1;
}
