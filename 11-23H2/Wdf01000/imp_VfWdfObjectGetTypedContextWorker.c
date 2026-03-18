/*
 * XREFs of imp_VfWdfObjectGetTypedContextWorker @ 0x1C00B6070
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 */

void *__fastcall imp_VfWdfObjectGetTypedContextWorker(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        void *Handle,
        const _WDF_OBJECT_CONTEXT_TYPE_INFO *TypeInfo)
{
  return WdfVersion.Functions.pfnWdfObjectGetTypedContextWorker(DriverGlobals, Handle, TypeInfo);
}
