/*
 * XREFs of sub_1800CF04C @ 0x1800CF04C
 * Callers:
 *     sub_1800D25B0 @ 0x1800D25B0 (sub_1800D25B0.c)
 * Callees:
 *     sub_180011520 @ 0x180011520 (sub_180011520.c)
 *     sub_1800CE0A0 @ 0x1800CE0A0 (sub_1800CE0A0.c)
 */

__int64 *__fastcall sub_1800CF04C(__int64 a1, __int64 *a2)
{
  sub_1800CE0A0(a1);
  *a2 = *(_QWORD *)(a1 + 160);
  sub_180011520(a2);
  return a2;
}
