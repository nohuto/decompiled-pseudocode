/*
 * XREFs of sub_1405ED010 @ 0x1405ED010
 * Callers:
 *     sub_1409BDBFC @ 0x1409BDBFC (sub_1409BDBFC.c)
 * Callees:
 *     sub_1405ED044 @ 0x1405ED044 (sub_1405ED044.c)
 */

__int64 __fastcall sub_1405ED010(__int64 a1, __int64 a2)
{
  int v2; // r8d
  int v3; // r9d

  if ( (unsigned int)(a2 - 4520) <= 0x1A && (unsigned __int8)sub_1405ED044(a1, a2, (unsigned int)a1) )
    return (unsigned int)(v3 + v2);
  else
    return 0LL;
}
