/*
 * XREFs of sub_180061500 @ 0x180061500
 * Callers:
 *     sub_180060458 @ 0x180060458 (sub_180060458.c)
 *     sub_180099DE8 @ 0x180099DE8 (sub_180099DE8.c)
 * Callees:
 *     <none>
 */

bool __fastcall sub_180061500(__int64 *a1, __int64 a2)
{
  bool v2; // zf

  v2 = (a2 & ((*a1 | ~a2) + 1)) == 0;
  *a1 = a2 & ((*a1 | ~a2) + 1);
  return !v2;
}
