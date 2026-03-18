/*
 * XREFs of DbgBreakPointWithStatus @ 0x140428E30
 * Callers:
 *     vDbgPrintExWithPrefixInternal @ 0x14032A7B0 (vDbgPrintExWithPrefixInternal.c)
 *     KdCheckForDebugBreak @ 0x140331E74 (KdCheckForDebugBreak.c)
 *     KiBugCheckDebugBreak @ 0x140569760 (KiBugCheckDebugBreak.c)
 *     NtSystemDebugControl @ 0x1407E10D0 (NtSystemDebugControl.c)
 *     PopInvokeSystemStateHandler @ 0x140AA859C (PopInvokeSystemStateHandler.c)
 *     ExpDebuggerWorker @ 0x140AB1D30 (ExpDebuggerWorker.c)
 *     InitBootProcessor @ 0x140B52774 (InitBootProcessor.c)
 * Callees:
 *     <none>
 */

void __stdcall DbgBreakPointWithStatus(ULONG Status)
{
  __debugbreak();
}
