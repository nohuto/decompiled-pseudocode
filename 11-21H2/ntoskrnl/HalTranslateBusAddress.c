/*
 * XREFs of HalTranslateBusAddress @ 0x1403B5160
 * Callers:
 *     sub_14081F804 @ 0x14081F804 (sub_14081F804.c)
 *     sub_14084DDD8 @ 0x14084DDD8 (sub_14084DDD8.c)
 *     sub_140AF77F8 @ 0x140AF77F8 (sub_140AF77F8.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

// local variable allocation has failed, the output may be wrong!
BOOLEAN __stdcall HalTranslateBusAddress(
        INTERFACE_TYPE InterfaceType,
        ULONG BusNumber,
        PHYSICAL_ADDRESS BusAddress,
        PULONG AddressSpace,
        PPHYSICAL_ADDRESS TranslatedAddress)
{
  if ( InterfaceType == PCIBus )
    return sub_14042A5E0(5LL, *(_QWORD *)&BusNumber);
  *TranslatedAddress = BusAddress;
  return 1;
}
