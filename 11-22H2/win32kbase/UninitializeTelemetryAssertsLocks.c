/*
 * XREFs of UninitializeTelemetryAssertsLocks @ 0x1C00AF02C
 * Callers:
 *     UninitializeTelemetryAssertsKM @ 0x1C00ADE88 (UninitializeTelemetryAssertsKM.c)
 *     InitializeTelemetryAssertsKMWorkerInternal @ 0x1C00AED14 (InitializeTelemetryAssertsKMWorkerInternal.c)
 * Callees:
 *     <none>
 */

void UninitializeTelemetryAssertsLocks()
{
  if ( g_AssertFastMutex )
  {
    ExFreePoolWithTag(g_AssertFastMutex, 0x74727341u);
    g_AssertFastMutex = 0LL;
  }
}
