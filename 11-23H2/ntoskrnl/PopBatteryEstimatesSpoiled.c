/*
 * XREFs of PopBatteryEstimatesSpoiled @ 0x1408709DC
 * Callers:
 *     PopBatteryWorker @ 0x14086FD60 (PopBatteryWorker.c)
 *     PopEstimateChargeTime @ 0x140995B84 (PopEstimateChargeTime.c)
 * Callees:
 *     DbgPrintEx @ 0x14032A740 (DbgPrintEx.c)
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
