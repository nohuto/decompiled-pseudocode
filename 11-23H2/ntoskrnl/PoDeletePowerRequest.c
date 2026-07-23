/*
 * XREFs of PoDeletePowerRequest @ 0x140875890
 * Callers:
 *     PoUnregisterSystemState @ 0x14058E350 (PoUnregisterSystemState.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140231660 (ObfDereferenceObject.c)
 *     PopPowerRequestHandleClose @ 0x14032BA14 (PopPowerRequestHandleClose.c)
 */

void __stdcall PoDeletePowerRequest(PVOID PowerRequest)
{
  PopPowerRequestHandleClose(PowerRequest);
  ObfDereferenceObject(PowerRequest);
}
