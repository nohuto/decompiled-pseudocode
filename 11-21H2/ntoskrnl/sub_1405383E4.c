/*
 * XREFs of sub_1405383E4 @ 0x1405383E4
 * Callers:
 *     sub_1405378F4 @ 0x1405378F4 (sub_1405378F4.c)
 *     sub_1405380DC @ 0x1405380DC (sub_1405380DC.c)
 *     sub_140538278 @ 0x140538278 (sub_140538278.c)
 *     sub_140538580 @ 0x140538580 (sub_140538580.c)
 *     sub_14090B300 @ 0x14090B300 (sub_14090B300.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall sub_1405383E4(unsigned __int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  __int64 v3; // r9
  unsigned __int64 v6; // rdx

  v3 = 0LL;
  if ( a3 )
    a1 = a3 + *(unsigned __int8 *)(a3 + 1);
  if ( a1 > a3 && a1 + 2 >= a1 && a1 + 2 <= a2 )
  {
    v6 = a1 + *(unsigned __int8 *)(a1 + 1);
    if ( v6 > a1 && v6 <= a2 )
      return a1;
  }
  return v3;
}
