/*
 * XREFs of sub_180069EF0 @ 0x180069EF0
 * Callers:
 *     sub_1800688C8 @ 0x1800688C8 (sub_1800688C8.c)
 *     sub_1800AAA68 @ 0x1800AAA68 (sub_1800AAA68.c)
 * Callees:
 *     <none>
 */

bool __fastcall sub_180069EF0(__int64 *a1, __int64 a2)
{
  bool v2; // zf

  v2 = (a2 & ((*a1 | ~a2) + 1)) == 0;
  *a1 = a2 & ((*a1 | ~a2) + 1);
  return !v2;
}
