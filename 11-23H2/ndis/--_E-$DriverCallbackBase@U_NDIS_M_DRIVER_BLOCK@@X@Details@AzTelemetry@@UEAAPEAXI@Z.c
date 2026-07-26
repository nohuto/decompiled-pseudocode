/*
 * XREFs of ??_E?$DriverCallbackBase@U_NDIS_M_DRIVER_BLOCK@@X@Details@AzTelemetry@@UEAAPEAXI@Z @ 0x1C0069B70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void *__fastcall AzTelemetry::Details::DriverCallbackBase<_NDIS_M_DRIVER_BLOCK,void>::`vector deleting destructor'(
        void *a1,
        char a2)
{
  if ( (a2 & 1) != 0 && a1 )
    ExFreePoolWithTag(a1, 0);
  return a1;
}
