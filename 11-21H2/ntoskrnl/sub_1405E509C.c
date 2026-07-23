/*
 * XREFs of sub_1405E509C @ 0x1405E509C
 * Callers:
 *     sub_1406E3AE0 @ 0x1406E3AE0 (sub_1406E3AE0.c)
 * Callees:
 *     <none>
 */

bool __fastcall sub_1405E509C(int a1, int a2)
{
  int v2; // ecx

  if ( (~a2 & a1) != 0 )
    return 0;
  v2 = a2 & a1;
  if ( !v2 )
    return 0;
  while ( (v2 & 1) == 0 )
    v2 >>= 1;
  return v2 <= 1;
}
