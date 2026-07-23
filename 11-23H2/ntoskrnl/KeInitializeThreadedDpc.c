/*
 * XREFs of KeInitializeThreadedDpc @ 0x140383B00
 * Callers:
 *     KiInitializeProcessor @ 0x140A8EA9C (KiInitializeProcessor.c)
 * Callees:
 *     <none>
 */

void __stdcall KeInitializeThreadedDpc(PRKDPC Dpc, PKDEFERRED_ROUTINE DeferredRoutine, PVOID DeferredContext)
{
  Dpc->TargetInfoAsUlong = 282;
  Dpc->DpcData = 0LL;
  Dpc->ProcessorHistory = 0LL;
  Dpc->DeferredRoutine = DeferredRoutine;
  Dpc->DeferredContext = DeferredContext;
}
