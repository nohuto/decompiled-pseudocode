/*
 * XREFs of HalTranslateBusAddress @ 0x1403B5160
 * Callers:
 *     HeadlessTerminalAddResources @ 0x14081F804 (HeadlessTerminalAddResources.c)
 *     IopTranslateBusAddress @ 0x14084DDD8 (IopTranslateBusAddress.c)
 *     HalpReportResourceUsage @ 0x140AF77F8 (HalpReportResourceUsage.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 */

BOOLEAN __stdcall HalTranslateBusAddress(
        INTERFACE_TYPE InterfaceType,
        ULONG BusNumber,
        PHYSICAL_ADDRESS BusAddress,
        PULONG AddressSpace,
        PPHYSICAL_ADDRESS TranslatedAddress)
{
  if ( InterfaceType == PCIBus )
    return ((__int64 (__fastcall *)(_QWORD, _DWORD, _QWORD, _QWORD, _QWORD))off_140C01C18[0])(
             5LL,
             BusNumber,
             (PHYSICAL_ADDRESS)BusAddress.QuadPart,
             AddressSpace,
             TranslatedAddress);
  *TranslatedAddress = BusAddress;
  return 1;
}
