/*
 * XREFs of sub_1405380DC @ 0x1405380DC
 * Callers:
 *     sub_1405370FC @ 0x1405370FC (sub_1405370FC.c)
 *     sub_14053802C @ 0x14053802C (sub_14053802C.c)
 *     sub_140538480 @ 0x140538480 (sub_140538480.c)
 * Callees:
 *     sub_1405383E4 @ 0x1405383E4 (sub_1405383E4.c)
 */

__int64 __fastcall sub_1405380DC(unsigned __int64 a1, __int64 a2)
{
  unsigned __int64 v3; // rdx

  v3 = a1 + *(unsigned __int16 *)(a1 + 2);
  if ( v3 > a1 )
    return sub_1405383E4(a1 + 16, v3, a2);
  else
    return 0LL;
}
