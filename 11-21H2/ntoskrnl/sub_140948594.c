/*
 * XREFs of sub_140948594 @ 0x140948594
 * Callers:
 *     sub_140779F10 @ 0x140779F10 (sub_140779F10.c)
 *     sub_140948638 @ 0x140948638 (sub_140948638.c)
 *     sub_140948AC4 @ 0x140948AC4 (sub_140948AC4.c)
 * Callees:
 *     sub_14077B394 @ 0x14077B394 (sub_14077B394.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_140948594(unsigned int **P)
{
  unsigned int *v2; // rcx
  unsigned int *v3; // rcx

  if ( P )
  {
    v2 = *P;
    if ( v2 )
      sub_14077B394(v2);
    v3 = P[1];
    if ( v3 )
      sub_14077B394(v3);
    ExFreePoolWithTag(P, 0x47706E50u);
  }
}
