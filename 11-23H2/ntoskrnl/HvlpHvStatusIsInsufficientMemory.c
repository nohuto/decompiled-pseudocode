/*
 * XREFs of HvlpHvStatusIsInsufficientMemory @ 0x14045F8EE
 * Callers:
 *     HvlAttachPasidSpace @ 0x140542FC0 (HvlAttachPasidSpace.c)
 *     HvlAttachPrQueue @ 0x140543070 (HvlAttachPrQueue.c)
 *     HvlCreatePasidSpace @ 0x140543180 (HvlCreatePasidSpace.c)
 *     HvlCreatePrQueue @ 0x140543240 (HvlCreatePrQueue.c)
 *     HvlDmaAllocateDeviceDomain @ 0x1405434B0 (HvlDmaAllocateDeviceDomain.c)
 *     HvlDmaAttachDeviceDomain @ 0x140543580 (HvlDmaAttachDeviceDomain.c)
 *     HvlDmaMapDeviceLogicalRange @ 0x140543AD0 (HvlDmaMapDeviceLogicalRange.c)
 *     HvlDmaMapDeviceSparsePages @ 0x140543D90 (HvlDmaMapDeviceSparsePages.c)
 *     HvlDmaReserveDeviceDomainAttachment @ 0x140543FA0 (HvlDmaReserveDeviceDomainAttachment.c)
 *     HvlEnablePasid @ 0x1405443C0 (HvlEnablePasid.c)
 *     HvlMapDeviceInterrupt @ 0x140545280 (HvlMapDeviceInterrupt.c)
 *     HvlRegisterDeviceId @ 0x140545980 (HvlRegisterDeviceId.c)
 *     HvlSetDeviceCapabilities @ 0x140545EF0 (HvlSetDeviceCapabilities.c)
 *     HvlSetHpetConfig @ 0x140546060 (HvlSetHpetConfig.c)
 *     HvlSetPasidAddressSpace @ 0x140546290 (HvlSetPasidAddressSpace.c)
 *     HvlpDynamicUpdateMicrocode @ 0x140941798 (HvlpDynamicUpdateMicrocode.c)
 * Callees:
 *     <none>
 */

bool __fastcall HvlpHvStatusIsInsufficientMemory(__int16 a1)
{
  bool result; // al

  result = 1;
  if ( a1 != 117 && a1 != 11 )
    return (unsigned __int16)(a1 - 129) <= 1u;
  return result;
}
