/*
 * XREFs of sub_1C0025BC0 @ 0x1C0025BC0
 * Callers:
 *     sub_1C0039770 @ 0x1C0039770 (sub_1C0039770.c)
 *     sub_1C003AB20 @ 0x1C003AB20 (sub_1C003AB20.c)
 *     Callback @ 0x1C003D660 (Callback.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1C0025BC0(__int64 a1)
{
  if ( (*(_BYTE *)(a1 + 111) & 8) != 0 )
    return 1LL;
  else
    return ((*(_BYTE *)(a1 + 108) & 1) == 0) | 2u;
}
