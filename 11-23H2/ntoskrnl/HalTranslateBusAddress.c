/*
 * XREFs of HalTranslateBusAddress @ 0x1403755F0
 * Callers:
 *     IopTranslateBusAddress @ 0x14081B778 (IopTranslateBusAddress.c)
 *     HeadlessTerminalAddResources @ 0x14081B8F8 (HeadlessTerminalAddResources.c)
 *     HalpReportResourceUsage @ 0x140B40B3C (HalpReportResourceUsage.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 */

BOOLEAN __stdcall HalTranslateBusAddress(
        INTERFACE_TYPE InterfaceType,
        ULONG BusNumber,
        PHYSICAL_ADDRESS BusAddress,
        PULONG AddressSpace,
        PPHYSICAL_ADDRESS TranslatedAddress)
{
  if ( InterfaceType == PCIBus )
    return ((__int64 (__fastcall *)(_QWORD, _DWORD, _QWORD, _QWORD, _QWORD))off_140C019D8[0])(
             5LL,
             BusNumber,
             (PHYSICAL_ADDRESS)BusAddress.QuadPart,
             AddressSpace,
             TranslatedAddress);
  *TranslatedAddress = BusAddress;
  return 1;
}
