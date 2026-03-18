/*
 * XREFs of ExWaitForCallBacks @ 0x1409FB520
 * Callers:
 *     IoUnregisterPriorityCallback @ 0x1405574E0 (IoUnregisterPriorityCallback.c)
 *     KeDeregisterBoundCallback @ 0x14056C300 (KeDeregisterBoundCallback.c)
 *     ExpDeleteSiloState @ 0x140608F80 (ExpDeleteSiloState.c)
 * Callees:
 *     ExWaitForRundownProtectionRelease @ 0x14030A340 (ExWaitForRundownProtectionRelease.c)
 */

void __fastcall ExWaitForCallBacks(struct _EX_RUNDOWN_REF *a1)
{
  ExWaitForRundownProtectionRelease(a1);
}
