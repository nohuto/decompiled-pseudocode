/*
 * XREFs of ExWaitForCallBacks @ 0x1409FB4DC
 * Callers:
 *     IoUnregisterPriorityCallback @ 0x140557E20 (IoUnregisterPriorityCallback.c)
 *     KeDeregisterBoundCallback @ 0x14056A090 (KeDeregisterBoundCallback.c)
 *     ExpDeleteSiloState @ 0x140639B54 (ExpDeleteSiloState.c)
 * Callees:
 *     ExWaitForRundownProtectionRelease @ 0x1402F0990 (ExWaitForRundownProtectionRelease.c)
 */

void __fastcall ExWaitForCallBacks(struct _EX_RUNDOWN_REF *a1)
{
  ExWaitForRundownProtectionRelease(a1);
}
