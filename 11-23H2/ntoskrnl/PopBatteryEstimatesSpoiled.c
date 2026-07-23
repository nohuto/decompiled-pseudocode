/*
 * XREFs of PopBatteryEstimatesSpoiled @ 0x140870C1C
 * Callers:
 *     PopBatteryWorker @ 0x14086FFA0 (PopBatteryWorker.c)
 *     PopEstimateChargeTime @ 0x140995D84 (PopEstimateChargeTime.c)
 * Callees:
 *     DbgPrintEx @ 0x14032A9D0 (DbgPrintEx.c)
 */

char PopBatteryEstimatesSpoiled()
{
  char v0; // bl

  if ( (unsigned __int64)PopEstimateSpoiledUntilTime < MEMORY[0xFFFFF78000000008] )
    return 0;
  v0 = 1;
  DbgPrintEx(0x92u, 3u, "Battery estimate suppressed\n");
  return v0;
}
