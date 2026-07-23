/*
 * XREFs of sub_1405C6630 @ 0x1405C6630
 * Callers:
 *     sub_1409882B4 @ 0x1409882B4 (sub_1409882B4.c)
 * Callees:
 *     ExWaitForRundownProtectionRelease @ 0x1402F0990 (ExWaitForRundownProtectionRelease.c)
 */

void __fastcall sub_1405C6630(struct _EX_RUNDOWN_REF *a1)
{
  ExWaitForRundownProtectionRelease(a1);
}
