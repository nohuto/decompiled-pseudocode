/*
 * XREFs of sub_14037907C @ 0x14037907C
 * Callers:
 *     sub_14037A5F0 @ 0x14037A5F0 (sub_14037A5F0.c)
 *     sub_1403898C4 @ 0x1403898C4 (sub_1403898C4.c)
 *     sub_1403D8FF0 @ 0x1403D8FF0 (sub_1403D8FF0.c)
 * Callees:
 *     sub_1402AD030 @ 0x1402AD030 (sub_1402AD030.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_14037907C(struct _EX_RUNDOWN_REF **P)
{
  sub_1402AD030(*P + 15);
  ExFreePoolWithTag(P, 0);
}
