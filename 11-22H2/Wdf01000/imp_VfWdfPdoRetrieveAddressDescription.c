/*
 * XREFs of imp_VfWdfPdoRetrieveAddressDescription @ 0x1C00B6360
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall imp_VfWdfPdoRetrieveAddressDescription(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Device,
        _WDF_CHILD_ADDRESS_DESCRIPTION_HEADER *AddressDescription)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFDEVICE__ *, _WDF_CHILD_ADDRESS_DESCRIPTION_HEADER *))WdfVersion.Functions.pfnWdfPdoRetrieveAddressDescription)(
           DriverGlobals,
           Device,
           AddressDescription);
}
