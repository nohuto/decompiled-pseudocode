/*
 * XREFs of RtlInitKernelModeSpecialMachineFrameEntries @ 0x140B53490
 * Callers:
 *     KiInitializeKernel @ 0x140A580F0 (KiInitializeKernel.c)
 * Callees:
 *     RtlpInitMachineFrameEntries @ 0x140B2F634 (RtlpInitMachineFrameEntries.c)
 */

void RtlInitKernelModeSpecialMachineFrameEntries()
{
  RtlpInitMachineFrameEntries((unsigned __int64 *)&RtlpNoShadowStackUnwindMachineFrameEntries, 1u);
}
