/*
 * XREFs of PsGetThreadId @ 0x140346770
 * Callers:
 *     PfSnBeginTrace @ 0x14074D9B8 (PfSnBeginTrace.c)
 *     PsOpenThread @ 0x1407BB7E0 (PsOpenThread.c)
 *     PfpScenCtxServiceThreadSet @ 0x140A91FE0 (PfpScenCtxServiceThreadSet.c)
 * Callees:
 *     <none>
 */

HANDLE __stdcall PsGetThreadId(PETHREAD Thread)
{
  return *(HANDLE *)&Thread[1].CurrentRunTime;
}
