/*
 * XREFs of __C_specific_handler @ 0x1C0022EF6
 * Callers:
 *     __GSHandlerCheck_SEH @ 0x1C0024844 (__GSHandlerCheck_SEH.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
EXCEPTION_DISPOSITION __cdecl _C_specific_handler(
        struct _EXCEPTION_RECORD *ExceptionRecord,
        void *EstablisherFrame,
        struct _CONTEXT *ContextRecord,
        struct _DISPATCHER_CONTEXT *DispatcherContext)
{
  return __C_specific_handler(ExceptionRecord, EstablisherFrame, ContextRecord, DispatcherContext);
}
