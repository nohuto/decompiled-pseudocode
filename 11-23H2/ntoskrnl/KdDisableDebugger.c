/*
 * XREFs of KdDisableDebugger @ 0x140567BD0
 * Callers:
 *     NtSystemDebugControl @ 0x1407E13A0 (NtSystemDebugControl.c)
 *     KiVerifyXcpt15 @ 0x140B17320 (KiVerifyXcpt15.c)
 *     KeCheckedKernelInitialize @ 0x140B17B50 (KeCheckedKernelInitialize.c)
 *     KiFilterFiberContext @ 0x140B17C30 (KiFilterFiberContext.c)
 * Callees:
 *     KdDisableDebuggerWithLock @ 0x140567BE8 (KdDisableDebuggerWithLock.c)
 */

NTSTATUS KdDisableDebugger(void)
{
  return KdDisableDebuggerWithLock();
}
