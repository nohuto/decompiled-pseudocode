/*
 * XREFs of RtlUnhandledExceptionFilter_0 @ 0x140011148
 * Callers:
 *     __report_gsfailure @ 0x140010F00 (__report_gsfailure.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
LONG __stdcall RtlUnhandledExceptionFilter_0(struct _EXCEPTION_POINTERS *ExceptionInfo)
{
  return RtlUnhandledExceptionFilter(ExceptionInfo);
}
