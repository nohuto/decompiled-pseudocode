/*
 * XREFs of sub_180011850 @ 0x180011850
 * Callers:
 *     <none>
 * Callees:
 *     sub_180011520 @ 0x180011520 (sub_180011520.c)
 */

__int64 *__fastcall sub_180011850(__int64 a1, __int64 *a2)
{
  *a2 = *(_QWORD *)(a1 + 1696);
  sub_180011520(a2);
  return a2;
}
