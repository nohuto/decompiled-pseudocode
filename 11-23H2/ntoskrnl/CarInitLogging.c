/*
 * XREFs of CarInitLogging @ 0x1405D37D0
 * Callers:
 *     CarInit @ 0x1405D4274 (CarInit.c)
 *     CarReportUnusualShutdown @ 0x1405D4B20 (CarReportUnusualShutdown.c)
 *     Phase1InitializationIoReady @ 0x140B4DC38 (Phase1InitializationIoReady.c)
 * Callees:
 *     _tlgKeywordOn @ 0x140212E64 (_tlgKeywordOn.c)
 *     KeQueryPerformanceCounter @ 0x1402C3500 (KeQueryPerformanceCounter.c)
 *     CarEtwRegister @ 0x1405D2F58 (CarEtwRegister.c)
 *     DifiDbgPrint @ 0x1405D5BB4 (DifiDbgPrint.c)
 */

__int64 CarInitLogging()
{
  unsigned int v0; // ebx
  NTSTATUS v1; // eax

  v0 = 0;
  if ( _InterlockedCompareExchange(&CarLogInitialized, 1, 0) != 1
    && (!dword_140C09318 || !tlgKeywordOn((__int64)&dword_140C09318, 0x800000000000LL)) )
  {
    CarEtwRandomSeed = KeQueryPerformanceCounter(0LL).QuadPart;
    v1 = CarEtwRegister();
    v0 = v1;
    if ( v1 < 0 )
      DifiDbgPrint("Driver Verifier: CarLogging failed to initialize with %08lx\n", v1);
  }
  return v0;
}
