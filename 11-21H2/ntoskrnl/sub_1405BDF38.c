/*
 * XREFs of sub_1405BDF38 @ 0x1405BDF38
 * Callers:
 *     sub_1405BDDAC @ 0x1405BDDAC (sub_1405BDDAC.c)
 *     sub_1405BDF64 @ 0x1405BDF64 (sub_1405BDF64.c)
 *     sub_1405BE614 @ 0x1405BE614 (sub_1405BE614.c)
 *     sub_140981BB0 @ 0x140981BB0 (sub_140981BB0.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_1405BDF38(PVOID *P)
{
  ExFreePoolWithTag(P[5], 0);
  ExFreePoolWithTag(P, 0);
}
