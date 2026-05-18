/*
 * XREFs of sub_18008467C @ 0x18008467C
 * Callers:
 *     sub_180084484 @ 0x180084484 (sub_180084484.c)
 * Callees:
 *     sub_180084078 @ 0x180084078 (sub_180084078.c)
 */

__int64 *__fastcall sub_18008467C(__int64 *a1, __int64 a2)
{
  if ( a1 != (__int64 *)a2 )
    sub_180084078(a1, *(_QWORD *)a2, *(_QWORD **)(a2 + 8));
  return a1;
}
