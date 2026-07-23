/*
 * XREFs of ExWaitForCallBacks @ 0x1409FB7B0
 * Callers:
 *     IoUnregisterPriorityCallback @ 0x140557BA0 (IoUnregisterPriorityCallback.c)
 *     KeDeregisterBoundCallback @ 0x14056C9C0 (KeDeregisterBoundCallback.c)
 *     ExpDeleteSiloState @ 0x1406094D0 (ExpDeleteSiloState.c)
 * Callees:
 *     ExWaitForRundownProtectionRelease @ 0x14030A5D0 (ExWaitForRundownProtectionRelease.c)
 */

void __fastcall ExWaitForCallBacks(struct _EX_RUNDOWN_REF *a1)
{
  ExWaitForRundownProtectionRelease(a1);
}
