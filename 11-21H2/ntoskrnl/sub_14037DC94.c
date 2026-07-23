/*
 * XREFs of sub_14037DC94 @ 0x14037DC94
 * Callers:
 *     sub_1402376C4 @ 0x1402376C4 (sub_1402376C4.c)
 *     sub_14037AE58 @ 0x14037AE58 (sub_14037AE58.c)
 * Callees:
 *     sub_140262ED4 @ 0x140262ED4 (sub_140262ED4.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_14037DC94(unsigned int *P)
{
  sub_140262ED4(P[10], 3, 1);
  ExFreePoolWithTag(P, 0);
}
