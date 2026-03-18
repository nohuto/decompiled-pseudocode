/*
 * XREFs of HvlpHandleInsufficientMemory @ 0x14053FE48
 * Callers:
 *     HvlAttachPasidSpace @ 0x140542900 (HvlAttachPasidSpace.c)
 *     HvlAttachPrQueue @ 0x1405429B0 (HvlAttachPrQueue.c)
 *     HvlCreatePasidSpace @ 0x140542AC0 (HvlCreatePasidSpace.c)
 *     HvlCreatePrQueue @ 0x140542B80 (HvlCreatePrQueue.c)
 *     HvlDmaAllocateDeviceDomain @ 0x140542DF0 (HvlDmaAllocateDeviceDomain.c)
 *     HvlDmaAttachDeviceDomain @ 0x140542EC0 (HvlDmaAttachDeviceDomain.c)
 *     HvlDmaMapDeviceLogicalRange @ 0x140543410 (HvlDmaMapDeviceLogicalRange.c)
 *     HvlDmaMapDeviceSparsePages @ 0x1405436D0 (HvlDmaMapDeviceSparsePages.c)
 *     HvlDmaReserveDeviceDomainAttachment @ 0x1405438E0 (HvlDmaReserveDeviceDomainAttachment.c)
 *     HvlEnablePasid @ 0x140543D00 (HvlEnablePasid.c)
 *     HvlMapDeviceInterrupt @ 0x140544BC0 (HvlMapDeviceInterrupt.c)
 *     HvlRegisterDeviceId @ 0x1405452C0 (HvlRegisterDeviceId.c)
 *     HvlSetDeviceCapabilities @ 0x140545830 (HvlSetDeviceCapabilities.c)
 *     HvlSetHpetConfig @ 0x1405459A0 (HvlSetHpetConfig.c)
 *     HvlSetPasidAddressSpace @ 0x140545BD0 (HvlSetPasidAddressSpace.c)
 *     HvlpDynamicUpdateMicrocode @ 0x140941598 (HvlpDynamicUpdateMicrocode.c)
 * Callees:
 *     HvlpDepositPages @ 0x140540B94 (HvlpDepositPages.c)
 */

__int64 __fastcall HvlpHandleInsufficientMemory(__int16 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdx

  v4 = 1LL;
  if ( a1 != 117 && a1 != 130 )
    LOBYTE(v4) = 0;
  LOBYTE(a3) = v4;
  LOBYTE(a4) = (unsigned __int16)(a1 - 129) <= 1u;
  return HvlpDepositPages(0LL, v4, a3, a4);
}
