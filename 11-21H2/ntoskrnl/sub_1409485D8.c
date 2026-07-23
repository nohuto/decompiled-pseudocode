/*
 * XREFs of sub_1409485D8 @ 0x1409485D8
 * Callers:
 *     sub_140779F10 @ 0x140779F10 (sub_140779F10.c)
 *     sub_140948814 @ 0x140948814 (sub_140948814.c)
 * Callees:
 *     sub_14077B394 @ 0x14077B394 (sub_14077B394.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_1409485D8(unsigned int **P)
{
  unsigned int *v2; // rcx
  unsigned int *v3; // rcx
  unsigned int *v4; // rcx
  unsigned int *v5; // rcx

  if ( P )
  {
    v2 = *P;
    if ( v2 )
      sub_14077B394(v2);
    v3 = P[1];
    if ( v3 )
      sub_14077B394(v3);
    v4 = P[2];
    if ( v4 )
      sub_14077B394(v4);
    v5 = P[3];
    if ( v5 )
      sub_14077B394(v5);
    ExFreePoolWithTag(P, 0x47706E50u);
  }
}
