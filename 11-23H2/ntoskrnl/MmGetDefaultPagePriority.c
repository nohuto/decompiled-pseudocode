/*
 * XREFs of MmGetDefaultPagePriority @ 0x1402F5F64
 * Callers:
 *     PspAllocateProcess @ 0x1406B442C (PspAllocateProcess.c)
 *     NtSetInformationThread @ 0x1407335B0 (NtSetInformationThread.c)
 *     PfSnAsyncPrefetchWorker @ 0x14074DCA0 (PfSnAsyncPrefetchWorker.c)
 *     PfSnCheckActionsNeeded @ 0x14074DFF8 (PfSnCheckActionsNeeded.c)
 *     NtSetInformationProcess @ 0x140774540 (NtSetInformationProcess.c)
 *     PfpLogEventRequest @ 0x14097DDD8 (PfpLogEventRequest.c)
 *     PspApplyIFEOPerfOptions @ 0x1409B0C88 (PspApplyIFEOPerfOptions.c)
 *     PfTAccessTracingCleanup @ 0x140A874E0 (PfTAccessTracingCleanup.c)
 *     PfTAccessTracingStart @ 0x140A88964 (PfTAccessTracingStart.c)
 *     ExpDebuggerWorker @ 0x140AB1D30 (ExpDebuggerWorker.c)
 * Callees:
 *     <none>
 */

__int64 MmGetDefaultPagePriority()
{
  return 5LL;
}
