/*
 * XREFs of KdEnableDebugger @ 0x140567E00
 * Callers:
 *     KdpStub @ 0x1403D092C (KdpStub.c)
 *     NtSystemDebugControl @ 0x1407E13A0 (NtSystemDebugControl.c)
 *     KiVerifyXcpt15 @ 0x140B17320 (KiVerifyXcpt15.c)
 *     KeCheckedKernelInitialize @ 0x140B17B50 (KeCheckedKernelInitialize.c)
 *     KiFilterFiberContext @ 0x140B17C30 (KiFilterFiberContext.c)
 * Callees:
 *     KdEnableDebuggerWithLock @ 0x140567E3C (KdEnableDebuggerWithLock.c)
 *     KeRelaxTimingConstraints @ 0x14056B5CC (KeRelaxTimingConstraints.c)
 */

NTSTATUS KdEnableDebugger(void)
{
  unsigned __int8 v0; // al
  __int64 v1; // rcx
  unsigned int v2; // edi
  NTSTATUS v3; // ebx

  v0 = KeRelaxTimingConstraints(1LL);
  LOBYTE(v1) = 1;
  v2 = v0;
  v3 = KdEnableDebuggerWithLock(v1);
  KeRelaxTimingConstraints(v2);
  return v3;
}
