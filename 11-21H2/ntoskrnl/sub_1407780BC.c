/*
 * XREFs of sub_1407780BC @ 0x1407780BC
 * Callers:
 *     sub_140776E5C @ 0x140776E5C (sub_140776E5C.c)
 *     sub_140777D40 @ 0x140777D40 (sub_140777D40.c)
 * Callees:
 *     sub_140779B80 @ 0x140779B80 (sub_140779B80.c)
 *     sub_14077B394 @ 0x14077B394 (sub_14077B394.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_1407780BC(_QWORD *P)
{
  void *v2; // rcx
  void *v3; // rcx

  v2 = (void *)P[2];
  if ( v2 )
    sub_14077B394(v2);
  v3 = (void *)P[3];
  if ( v3 )
    sub_140779B80(v3);
  ExFreePoolWithTag(P, 0x58706E50u);
}
