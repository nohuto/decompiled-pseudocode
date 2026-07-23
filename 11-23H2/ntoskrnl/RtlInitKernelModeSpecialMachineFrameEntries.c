/*
 * XREFs of RtlInitKernelModeSpecialMachineFrameEntries @ 0x140B96BDC
 * Callers:
 *     KiInitializeKernel @ 0x140A8BF10 (KiInitializeKernel.c)
 * Callees:
 *     RtlpInitMachineFrameEntries @ 0x140B737DC (RtlpInitMachineFrameEntries.c)
 */

void RtlInitKernelModeSpecialMachineFrameEntries()
{
  RtlpInitMachineFrameEntries((DWORD64 *)&RtlpNoShadowStackUnwindMachineFrameEntries, 2u);
}
