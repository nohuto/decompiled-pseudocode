/*
 * XREFs of sub_180074F6C @ 0x180074F6C
 * Callers:
 *     sub_180071A08 @ 0x180071A08 (sub_180071A08.c)
 *     sub_180076154 @ 0x180076154 (sub_180076154.c)
 * Callees:
 *     _o_powf @ 0x18000C06C (_o_powf.c)
 */

double __fastcall sub_180074F6C(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4, __int64 a5)
{
  o_powf();
  return sub_180093340(*a4);
}
