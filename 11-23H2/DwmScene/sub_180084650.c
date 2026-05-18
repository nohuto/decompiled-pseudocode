/*
 * XREFs of sub_180084650 @ 0x180084650
 * Callers:
 *     sub_180084484 @ 0x180084484 (sub_180084484.c)
 * Callees:
 *     sub_180084018 @ 0x180084018 (sub_180084018.c)
 */

__int64 __fastcall sub_180084650(__int64 a1, __int64 a2)
{
  if ( a1 != a2 )
    sub_180084018(a1, *(void **)a2, *(_QWORD *)(a2 + 8));
  return a1;
}
