/*
 * XREFs of sub_14090A17C @ 0x14090A17C
 * Callers:
 *     sub_140865230 @ 0x140865230 (sub_140865230.c)
 *     sub_140B4C610 @ 0x140B4C610 (sub_140B4C610.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14090A17C(unsigned int a1, int a2, unsigned int a3, int a4)
{
  if ( a1 >= a3 )
  {
    if ( a1 > a3 )
      return 1LL;
    if ( a2 >= a4 )
      return a2 > a4;
  }
  return 0xFFFFFFFFLL;
}
