/*
 * XREFs of sub_1406874F0 @ 0x1406874F0
 * Callers:
 *     sub_140684450 @ 0x140684450 (sub_140684450.c)
 *     sub_140685A20 @ 0x140685A20 (sub_140685A20.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1406874F0(__int64 a1, int a2)
{
  __int64 v2; // rax

  if ( a2 )
  {
    if ( a2 == 1 )
      v2 = 56LL;
    else
      v2 = 36LL;
  }
  else
  {
    v2 = 64LL;
  }
  return a1 + v2;
}
