/*
 * XREFs of sub_180095554 @ 0x180095554
 * Callers:
 *     sub_180094888 @ 0x180094888 (sub_180094888.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_180095554(__int128 *a1, __int128 *a2)
{
  __int128 v2; // xmm1

  while ( a1 != a2 )
  {
    if ( a1 == --a2 )
      break;
    v2 = *a1;
    *a1++ = *a2;
    *a2 = v2;
  }
}
