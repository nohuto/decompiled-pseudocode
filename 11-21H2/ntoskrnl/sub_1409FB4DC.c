/*
 * XREFs of sub_1409FB4DC @ 0x1409FB4DC
 * Callers:
 *     IoUnregisterPriorityCallback @ 0x140557E20 (IoUnregisterPriorityCallback.c)
 *     KeDeregisterBoundCallback @ 0x14056A090 (KeDeregisterBoundCallback.c)
 *     sub_140639B54 @ 0x140639B54 (sub_140639B54.c)
 * Callees:
 *     ExWaitForRundownProtectionRelease @ 0x1402F0990 (ExWaitForRundownProtectionRelease.c)
 */

void __fastcall sub_1409FB4DC(struct _EX_RUNDOWN_REF *a1)
{
  ExWaitForRundownProtectionRelease(a1);
}
