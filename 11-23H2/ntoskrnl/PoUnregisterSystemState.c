/*
 * XREFs of PoUnregisterSystemState @ 0x14058E350
 * Callers:
 *     <none>
 * Callees:
 *     PoDeletePowerRequest @ 0x140875890 (PoDeletePowerRequest.c)
 */

void __stdcall PoUnregisterSystemState(PVOID StateHandle)
{
  if ( StateHandle )
    PoDeletePowerRequest(StateHandle);
}
