/*
 * XREFs of sub_18006AD94 @ 0x18006AD94
 * Callers:
 *     sub_180067EB0 @ 0x180067EB0 (sub_180067EB0.c)
 *     sub_18006BEB0 @ 0x18006BEB0 (sub_18006BEB0.c)
 * Callees:
 *     _o_powf @ 0x18000C05C (_o_powf.c)
 */

double __fastcall sub_18006AD94(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4, __int64 a5)
{
  o_powf();
  return sub_180085608(*a4);
}
