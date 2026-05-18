/*
 * XREFs of sub_180058690 @ 0x180058690
 * Callers:
 *     sub_1800586CC @ 0x1800586CC (sub_1800586CC.c)
 * Callees:
 *     sub_1800590C0 @ 0x1800590C0 (sub_1800590C0.c)
 */

bool __fastcall sub_180058690(_QWORD *a1, __int64 a2)
{
  char v2; // bl

  v2 = 0;
  if ( a1[1] == *(_QWORD *)(a2 + 8) )
    return (unsigned __int8)sub_1800590C0(*(_QWORD *)*a1, *a1, **(_QWORD **)a2) != 0;
  return v2;
}
