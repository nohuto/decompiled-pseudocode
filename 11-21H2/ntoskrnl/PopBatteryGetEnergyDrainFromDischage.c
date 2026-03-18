/*
 * XREFs of PopBatteryGetEnergyDrainFromDischage @ 0x1403978E4
 * Callers:
 *     PopCalculateCsSummary @ 0x140397424 (PopCalculateCsSummary.c)
 *     PopDiagTraceCsResiliencyExit @ 0x1405D1548 (PopDiagTraceCsResiliencyExit.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PopBatteryGetEnergyDrainFromDischage(unsigned int a1, unsigned int a2)
{
  unsigned int v2; // r8d

  v2 = 0;
  if ( (xmmword_140C229F4 & 0x40000000) == 0 && a2 < a1 && a2 )
    return a1 - a2;
  return v2;
}
