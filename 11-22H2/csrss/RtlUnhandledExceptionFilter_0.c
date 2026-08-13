/*
 * XREFs of RtlUnhandledExceptionFilter_0 @ 0x140001710
 * Callers:
 *     __report_gsfailure @ 0x1400014E0 (__report_gsfailure.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
LONG __stdcall RtlUnhandledExceptionFilter_0(struct _EXCEPTION_POINTERS *ExceptionInfo)
{
  return RtlUnhandledExceptionFilter(ExceptionInfo);
}
