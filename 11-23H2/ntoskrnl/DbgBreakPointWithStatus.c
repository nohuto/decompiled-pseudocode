/*
 * XREFs of DbgBreakPointWithStatus @ 0x1404291C0
 * Callers:
 *     vDbgPrintExWithPrefixInternal @ 0x14032AA40 (vDbgPrintExWithPrefixInternal.c)
 *     KdCheckForDebugBreak @ 0x140332104 (KdCheckForDebugBreak.c)
 *     KiBugCheckDebugBreak @ 0x140569E20 (KiBugCheckDebugBreak.c)
 *     NtSystemDebugControl @ 0x1407E13A0 (NtSystemDebugControl.c)
 *     PopInvokeSystemStateHandler @ 0x140AA840C (PopInvokeSystemStateHandler.c)
 *     ExpDebuggerWorker @ 0x140AB1D30 (ExpDebuggerWorker.c)
 *     InitBootProcessor @ 0x140B52774 (InitBootProcessor.c)
 * Callees:
 *     <none>
 */

void __stdcall DbgBreakPointWithStatus(ULONG Status)
{
  __debugbreak();
}
