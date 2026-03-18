/*
 * XREFs of imp_VfWdfWaitLockAcquire @ 0x1C00B7A10
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall imp_VfWdfWaitLockAcquire(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFWAITLOCK__ *Lock, __int64 *Timeout)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFWAITLOCK__ *, __int64 *))WdfVersion.Functions.pfnWdfWaitLockAcquire)(
           DriverGlobals,
           Lock,
           Timeout);
}
