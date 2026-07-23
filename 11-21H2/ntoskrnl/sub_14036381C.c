/*
 * XREFs of sub_14036381C @ 0x14036381C
 * Callers:
 *     sub_140363780 @ 0x140363780 (sub_140363780.c)
 *     sub_1405E0FA0 @ 0x1405E0FA0 (sub_1405E0FA0.c)
 * Callees:
 *     sub_140347810 @ 0x140347810 (sub_140347810.c)
 */

ULONG_PTR __fastcall sub_14036381C(struct _EX_RUNDOWN_REF *a1)
{
  BOOLEAN v2; // al
  __int64 v3; // rdx

  v2 = sub_140347810(a1 + 4);
  v3 = 0LL;
  if ( v2 )
    return a1[5].Count;
  return v3;
}
