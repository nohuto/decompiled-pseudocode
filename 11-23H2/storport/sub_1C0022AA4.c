/*
 * XREFs of sub_1C0022AA4 @ 0x1C0022AA4
 * Callers:
 *     sub_1C0015DDC @ 0x1C0015DDC (sub_1C0015DDC.c)
 *     sub_1C002212C @ 0x1C002212C (sub_1C002212C.c)
 *     sub_1C00A4654 @ 0x1C00A4654 (sub_1C00A4654.c)
 * Callees:
 *     sub_1C0022B34 @ 0x1C0022B34 (sub_1C0022B34.c)
 */

__int64 __fastcall sub_1C0022AA4(_QWORD *a1)
{
  void *v2; // rcx
  void *v3; // rcx
  void *v4; // rcx

  v2 = (void *)a1[287];
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0x65546152u);
    a1[287] = 0LL;
  }
  v3 = (void *)a1[290];
  if ( v3 )
  {
    ExFreePoolWithTag(v3, 0x65546152u);
    a1[290] = 0LL;
  }
  v4 = (void *)a1[292];
  if ( v4 )
  {
    ExFreePoolWithTag(v4, 0x65546152u);
    a1[292] = 0LL;
  }
  return sub_1C0022B34(a1);
}
