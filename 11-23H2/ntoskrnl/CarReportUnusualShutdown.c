/*
 * XREFs of CarReportUnusualShutdown @ 0x1405D4B20
 * Callers:
 *     Phase1InitializationIoReady @ 0x140B4DC38 (Phase1InitializationIoReady.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 *     VfUtilCrashEvent @ 0x1405CE7A4 (VfUtilCrashEvent.c)
 *     CarEtwCrashEvent @ 0x1405D2D8C (CarEtwCrashEvent.c)
 *     CarInitLogging @ 0x1405D37D0 (CarInitLogging.c)
 *     CarCleanup @ 0x1405D3CA8 (CarCleanup.c)
 *     CarInit @ 0x1405D4274 (CarInit.c)
 */

unsigned __int64 CarReportUnusualShutdown()
{
  _QWORD v1[9]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v2; // [rsp+70h] [rbp+8h] BYREF

  CarInit();
  CarInitLogging();
  memset(v1, 0, 0x40uLL);
  v2 = 0LL;
  v1[5] = &v2;
  if ( VfUtilCrashEvent((__int64)v1) )
    CarEtwCrashEvent();
  return CarCleanup();
}
