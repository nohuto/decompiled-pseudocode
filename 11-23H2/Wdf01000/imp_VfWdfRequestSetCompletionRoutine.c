/*
 * XREFs of imp_VfWdfRequestSetCompletionRoutine @ 0x1C00B6FC0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 */

void __fastcall imp_VfWdfRequestSetCompletionRoutine(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFREQUEST__ *Request,
        void (__fastcall *CompletionRoutine)(WDFREQUEST__ *, WDFIOTARGET__ *, _WDF_REQUEST_COMPLETION_PARAMS *, void *),
        void *CompletionContext)
{
  WdfVersion.Functions.pfnWdfRequestSetCompletionRoutine(DriverGlobals, Request, CompletionRoutine, CompletionContext);
}
