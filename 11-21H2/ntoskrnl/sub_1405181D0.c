/*
 * XREFs of sub_1405181D0 @ 0x1405181D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1403ADF94 @ 0x1403ADF94 (sub_1403ADF94.c)
 */

__int64 __fastcall sub_1405181D0(int a1, unsigned int a2, void *a3, unsigned int a4, unsigned int a5)
{
  unsigned int v5; // r10d

  if ( !a1 )
  {
    v5 = a5;
    if ( a4 + a5 <= 0x100 )
      return sub_1403ADF94(0, 0, a2, a3, a4, v5);
    if ( a4 <= 0x100 )
    {
      v5 = 256 - a4;
      return sub_1403ADF94(0, 0, a2, a3, a4, v5);
    }
  }
  return 0LL;
}
