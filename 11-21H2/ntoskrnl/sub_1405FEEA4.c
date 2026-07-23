/*
 * XREFs of sub_1405FEEA4 @ 0x1405FEEA4
 * Callers:
 *     sub_140604620 @ 0x140604620 (sub_140604620.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_1405FEEA4(__int64 a1, int a2)
{
  while ( *(_DWORD *)(a1 + 52) != a2 || !*(_QWORD *)(a1 + 40) )
  {
    a1 += 56LL;
    if ( !*(_QWORD *)a1 )
      return 0;
  }
  *(_DWORD *)(a1 + 32) &= ~1u;
  return 1;
}
