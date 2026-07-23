/*
 * XREFs of sub_14078AEE0 @ 0x14078AEE0
 * Callers:
 *     sub_14078AE7C @ 0x14078AE7C (sub_14078AE7C.c)
 *     sub_14078B2D4 @ 0x14078B2D4 (sub_14078B2D4.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_14078AEE0(_QWORD *P)
{
  void *v2; // rcx
  void *v3; // rcx
  void *v4; // rcx

  v2 = (void *)P[3];
  if ( v2 )
    ExFreePoolWithTag(v2, 0x59706E50u);
  v3 = (void *)P[2];
  if ( v3 )
    ExFreePoolWithTag(v3, 0x59706E50u);
  v4 = (void *)P[6];
  if ( v4 )
    ExFreePoolWithTag(v4, 0x59706E50u);
  ExFreePoolWithTag(P, 0x59706E50u);
}
