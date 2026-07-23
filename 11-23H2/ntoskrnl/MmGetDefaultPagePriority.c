/*
 * XREFs of MmGetDefaultPagePriority @ 0x1402F61F4
 * Callers:
 *     PspAllocateProcess @ 0x1406B45D8 (PspAllocateProcess.c)
 *     NtSetInformationThread @ 0x1407337A0 (NtSetInformationThread.c)
 *     PfSnAsyncPrefetchWorker @ 0x14074DE90 (PfSnAsyncPrefetchWorker.c)
 *     PfSnCheckActionsNeeded @ 0x14074E1E8 (PfSnCheckActionsNeeded.c)
 *     NtSetInformationProcess @ 0x140774730 (NtSetInformationProcess.c)
 *     PfpLogEventRequest @ 0x14097DFD8 (PfpLogEventRequest.c)
 *     PspApplyIFEOPerfOptions @ 0x1409B0E88 (PspApplyIFEOPerfOptions.c)
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
