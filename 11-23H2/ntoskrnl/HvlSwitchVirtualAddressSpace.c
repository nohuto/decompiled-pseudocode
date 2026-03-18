/*
 * XREFs of HvlSwitchVirtualAddressSpace @ 0x140549890
 * Callers:
 *     KiStackAttachProcess @ 0x14022D600 (KiStackAttachProcess.c)
 *     KiAttachProcess @ 0x14022DAB0 (KiAttachProcess.c)
 *     KiDetachProcess @ 0x14022DD00 (KiDetachProcess.c)
 *     KiSwapDirectoryTableBaseTarget @ 0x1403D72D0 (KiSwapDirectoryTableBaseTarget.c)
 *     SwapContext @ 0x1404283C0 (SwapContext.c)
 * Callees:
 *     HvcallInitiateHypercall @ 0x1403CD360 (HvcallInitiateHypercall.c)
 */

__int64 HvlSwitchVirtualAddressSpace()
{
  return HvcallInitiateHypercall(65537);
}
