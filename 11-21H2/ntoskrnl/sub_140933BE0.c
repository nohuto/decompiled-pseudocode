/*
 * XREFs of sub_140933BE0 @ 0x140933BE0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140934B80 @ 0x140934B80 (sub_140934B80.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_140933BE0(PIRP *P)
{
  sub_140934B80(P[4]);
  ExFreePoolWithTag(P, 0);
}
