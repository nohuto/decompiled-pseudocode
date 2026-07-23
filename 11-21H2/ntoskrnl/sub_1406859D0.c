/*
 * XREFs of sub_1406859D0 @ 0x1406859D0
 * Callers:
 *     sub_140684450 @ 0x140684450 (sub_140684450.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1406859D0(__int64 a1, int a2)
{
  __int64 v2; // rax

  if ( a2 )
  {
    if ( a2 == 1 )
      v2 = 92LL;
    else
      v2 = 76LL;
  }
  else
  {
    v2 = 100LL;
  }
  return a1 + v2;
}
