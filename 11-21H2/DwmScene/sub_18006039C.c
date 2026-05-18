/*
 * XREFs of sub_18006039C @ 0x18006039C
 * Callers:
 *     sub_1800604F4 @ 0x1800604F4 (sub_1800604F4.c)
 * Callees:
 *     sub_180060C88 @ 0x180060C88 (sub_180060C88.c)
 */

bool __fastcall sub_18006039C(_QWORD *a1, __int64 a2)
{
  char v2; // bl

  v2 = 0;
  if ( a1[1] == *(_QWORD *)(a2 + 8) )
    return (unsigned __int8)sub_180060C88(*(_QWORD *)*a1, *a1, **(_QWORD **)a2) != 0;
  return v2;
}
