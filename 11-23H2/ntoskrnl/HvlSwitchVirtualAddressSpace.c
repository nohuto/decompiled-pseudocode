/*
 * XREFs of HvlSwitchVirtualAddressSpace @ 0x140549F50
 * Callers:
 *     KiStackAttachProcess @ 0x14022D710 (KiStackAttachProcess.c)
 *     KiAttachProcess @ 0x14022DBC0 (KiAttachProcess.c)
 *     KiDetachProcess @ 0x14022DE10 (KiDetachProcess.c)
 *     KiSwapDirectoryTableBaseTarget @ 0x1403D74B0 (KiSwapDirectoryTableBaseTarget.c)
 *     SwapContext @ 0x140428750 (SwapContext.c)
 * Callees:
 *     HvcallInitiateHypercall @ 0x1403CD540 (HvcallInitiateHypercall.c)
 */

__int64 HvlSwitchVirtualAddressSpace()
{
  return HvcallInitiateHypercall(65537);
}
