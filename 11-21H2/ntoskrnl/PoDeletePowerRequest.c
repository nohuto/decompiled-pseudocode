/*
 * XREFs of PoDeletePowerRequest @ 0x1407EF700
 * Callers:
 *     PoUnregisterSystemState @ 0x140202100 (PoUnregisterSystemState.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     sub_14036A100 @ 0x14036A100 (sub_14036A100.c)
 */

void __stdcall PoDeletePowerRequest(PVOID PowerRequest)
{
  sub_14036A100(PowerRequest);
  ObfDereferenceObject(PowerRequest);
}
