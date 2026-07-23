/*
 * XREFs of sub_140767600 @ 0x140767600
 * Callers:
 *     sub_1407655BC @ 0x1407655BC (sub_1407655BC.c)
 *     sub_140767538 @ 0x140767538 (sub_140767538.c)
 *     sub_140767F88 @ 0x140767F88 (sub_140767F88.c)
 *     sub_14080E8D0 @ 0x14080E8D0 (sub_14080E8D0.c)
 *     sub_14080ED34 @ 0x14080ED34 (sub_14080ED34.c)
 *     sub_140810CB4 @ 0x140810CB4 (sub_140810CB4.c)
 *     sub_140947450 @ 0x140947450 (sub_140947450.c)
 * Callees:
 *     sub_140767650 @ 0x140767650 (sub_140767650.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_140767600(_QWORD *P)
{
  void *v1; // rdi

  if ( P )
  {
    v1 = (void *)*P;
    if ( *P )
    {
      sub_140767650(*P);
      ExFreePoolWithTag(v1, 0);
      *P = 0LL;
    }
    ExFreePoolWithTag(P, 0x54706E50u);
  }
}
