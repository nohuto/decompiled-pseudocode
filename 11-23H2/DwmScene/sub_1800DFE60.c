/*
 * XREFs of sub_1800DFE60 @ 0x1800DFE60
 * Callers:
 *     <none>
 * Callees:
 *     sub_180017890 @ 0x180017890 (sub_180017890.c)
 */

_QWORD *__fastcall sub_1800DFE60(_QWORD *a1, __int64 a2)
{
  sub_180017890((__int64)a1, a2);
  *a1 = &Spectre::Utils::CancelledException::`vftable';
  return a1;
}
