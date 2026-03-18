/*
 * XREFs of PoDeletePowerRequest @ 0x140875B20
 * Callers:
 *     PoUnregisterSystemState @ 0x14058DEF0 (PoUnregisterSystemState.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140231570 (ObfDereferenceObject.c)
 *     PopPowerRequestHandleClose @ 0x14032B5A4 (PopPowerRequestHandleClose.c)
 */

void __stdcall PoDeletePowerRequest(PVOID PowerRequest)
{
  PopPowerRequestHandleClose(PowerRequest);
  ObfDereferenceObject(PowerRequest);
}
