/*
 * XREFs of sub_140534E50 @ 0x140534E50
 * Callers:
 *     sub_140534DC0 @ 0x140534DC0 (sub_140534DC0.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_140534E50(int a1, __int64 a2)
{
  while ( (sub_14042A5E0(768LL, a2) & 0x1000) != 0 )
    ;
  return sub_14042A5E0(768LL, a1 | 0x40000u);
}
