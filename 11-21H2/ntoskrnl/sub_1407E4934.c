/*
 * XREFs of sub_1407E4934 @ 0x1407E4934
 * Callers:
 *     sub_1407E4720 @ 0x1407E4720 (sub_1407E4720.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1407E4934(__int64 a1, unsigned int a2, int a3)
{
  unsigned int v3; // r9d
  _BYTE *i; // rcx

  v3 = a2 + a3;
  if ( a2 >= a2 + a3 )
    return 0xFFFFFFFFLL;
  for ( i = (_BYTE *)(a2 + a1 + 44); !*i; ++i )
  {
    if ( ++a2 >= v3 )
      return 0xFFFFFFFFLL;
  }
  return a2;
}
