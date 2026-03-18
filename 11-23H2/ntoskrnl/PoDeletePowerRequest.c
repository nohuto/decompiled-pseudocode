/*
 * XREFs of PoDeletePowerRequest @ 0x140875650
 * Callers:
 *     PoUnregisterSystemState @ 0x14058DE60 (PoUnregisterSystemState.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140231570 (ObfDereferenceObject.c)
 *     PopPowerRequestHandleClose @ 0x14032B784 (PopPowerRequestHandleClose.c)
 */

void __stdcall PoDeletePowerRequest(PVOID PowerRequest)
{
  PopPowerRequestHandleClose(PowerRequest);
  ObfDereferenceObject(PowerRequest);
}
