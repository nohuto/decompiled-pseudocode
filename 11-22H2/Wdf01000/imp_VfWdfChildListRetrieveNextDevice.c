/*
 * XREFs of imp_VfWdfChildListRetrieveNextDevice @ 0x1C00B3150
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall imp_VfWdfChildListRetrieveNextDevice(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFCHILDLIST__ *ChildList,
        _WDF_CHILD_LIST_ITERATOR *Iterator,
        WDFDEVICE__ **Device,
        _WDF_CHILD_RETRIEVE_INFO *Info)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFCHILDLIST__ *, _WDF_CHILD_LIST_ITERATOR *, WDFDEVICE__ **, _WDF_CHILD_RETRIEVE_INFO *))WdfVersion.Functions.pfnWdfChildListRetrieveNextDevice)(
           DriverGlobals,
           ChildList,
           Iterator,
           Device,
           Info);
}
