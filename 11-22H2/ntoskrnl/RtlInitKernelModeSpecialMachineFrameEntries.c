/*
 * XREFs of RtlInitKernelModeSpecialMachineFrameEntries @ 0x140B97BDC
 * Callers:
 *     KiInitializeKernel @ 0x140A8C770 (KiInitializeKernel.c)
 * Callees:
 *     RtlpInitMachineFrameEntries @ 0x140B74444 (RtlpInitMachineFrameEntries.c)
 */

void RtlInitKernelModeSpecialMachineFrameEntries()
{
  RtlpInitMachineFrameEntries((DWORD64 *)&RtlpNoShadowStackUnwindMachineFrameEntries, 2u);
}
