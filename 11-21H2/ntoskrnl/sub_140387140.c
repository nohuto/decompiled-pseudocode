/*
 * XREFs of sub_140387140 @ 0x140387140
 * Callers:
 *     sub_1402715A0 @ 0x1402715A0 (sub_1402715A0.c)
 * Callees:
 *     sub_14024AA58 @ 0x14024AA58 (sub_14024AA58.c)
 *     sub_140266AD0 @ 0x140266AD0 (sub_140266AD0.c)
 *     sub_140329630 @ 0x140329630 (sub_140329630.c)
 */

__int64 __fastcall sub_140387140(ULONG_PTR *a1, unsigned __int64 *a2, unsigned int a3, unsigned __int64 a4, int a5)
{
  if ( !sub_140266AD0(a1, a4, a3) )
    return 0LL;
  if ( a2 )
  {
    if ( *a2 < a4 )
      return 0LL;
    *a2 -= a4;
  }
  if ( !a5 || sub_140329630(a1, a4, 1) == a4 )
    return 1LL;
  sub_14024AA58((__int64)a1, a4, 1);
  return 0LL;
}
