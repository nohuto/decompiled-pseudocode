/*
 * XREFs of KdDisableDebugger @ 0x1405675B0
 * Callers:
 *     NtSystemDebugControl @ 0x1407E1650 (NtSystemDebugControl.c)
 *     KiVerifyXcpt15 @ 0x140B18320 (KiVerifyXcpt15.c)
 *     KeCheckedKernelInitialize @ 0x140B18B50 (KeCheckedKernelInitialize.c)
 *     KiFilterFiberContext @ 0x140B18C30 (KiFilterFiberContext.c)
 * Callees:
 *     KdDisableDebuggerWithLock @ 0x1405675C8 (KdDisableDebuggerWithLock.c)
 */

NTSTATUS KdDisableDebugger(void)
{
  return KdDisableDebuggerWithLock();
}
