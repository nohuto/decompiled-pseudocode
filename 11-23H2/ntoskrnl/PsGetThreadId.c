/*
 * XREFs of PsGetThreadId @ 0x140346A00
 * Callers:
 *     PfSnBeginTrace @ 0x14074DBA8 (PfSnBeginTrace.c)
 *     PsOpenThread @ 0x1407BBAB0 (PsOpenThread.c)
 *     PfpScenCtxServiceThreadSet @ 0x140A91E60 (PfpScenCtxServiceThreadSet.c)
 * Callees:
 *     <none>
 */

HANDLE __stdcall PsGetThreadId(PETHREAD Thread)
{
  return *(HANDLE *)&Thread[1].CurrentRunTime;
}
