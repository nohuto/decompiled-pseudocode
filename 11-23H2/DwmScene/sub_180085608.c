/*
 * XREFs of sub_180085608 @ 0x180085608
 * Callers:
 *     sub_1800448F8 @ 0x1800448F8 (sub_1800448F8.c)
 *     sub_1800507C8 @ 0x1800507C8 (sub_1800507C8.c)
 *     sub_180067EB0 @ 0x180067EB0 (sub_180067EB0.c)
 *     sub_18006A64C @ 0x18006A64C (sub_18006A64C.c)
 *     sub_18006AD94 @ 0x18006AD94 (sub_18006AD94.c)
 *     sub_18006BEB0 @ 0x18006BEB0 (sub_18006BEB0.c)
 *     sub_18009B3C0 @ 0x18009B3C0 (sub_18009B3C0.c)
 * Callees:
 *     sub_180082D18 @ 0x180082D18 (sub_180082D18.c)
 */

__int64 __fastcall sub_180085608(__int64 a1, _QWORD *a2)
{
  unsigned __int16 v3; // ax

  v3 = sub_180082D18(*(_QWORD *)(a1 + 16), a2);
  return sub_180085640(a1, v3);
}
