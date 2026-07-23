/*
 * XREFs of sub_1407D9BC4 @ 0x1407D9BC4
 * Callers:
 *     sub_1407D8870 @ 0x1407D8870 (sub_1407D8870.c)
 *     sub_1407D9A48 @ 0x1407D9A48 (sub_1407D9A48.c)
 * Callees:
 *     <none>
 */

bool __fastcall sub_1407D9BC4(__int64 a1)
{
  int v1; // eax
  __int64 i; // rdx

  v1 = 29;
  for ( i = 29LL; i >= 0; --i )
  {
    if ( !*(_WORD *)(a1 + 2 * i) )
      break;
    --v1;
  }
  return v1 > 0;
}
