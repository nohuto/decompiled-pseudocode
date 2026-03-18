/*
 * XREFs of imp_VfWdfWmiInstanceFireEvent @ 0x1C00B7B00
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall imp_VfWdfWmiInstanceFireEvent(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFWMIINSTANCE__ *WmiInstance,
        __int64 EventDataSize,
        void *EventData)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFWMIINSTANCE__ *, __int64, void *))WdfVersion.Functions.pfnWdfWmiInstanceFireEvent)(
           DriverGlobals,
           WmiInstance,
           EventDataSize,
           EventData);
}
