/*
 * XREFs of PoUnregisterSystemState @ 0x14058DE60
 * Callers:
 *     <none>
 * Callees:
 *     PoDeletePowerRequest @ 0x140875650 (PoDeletePowerRequest.c)
 */

void __stdcall PoUnregisterSystemState(PVOID StateHandle)
{
  if ( StateHandle )
    PoDeletePowerRequest(StateHandle);
}
