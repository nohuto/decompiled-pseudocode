/*
 * XREFs of RtlReportException @ 0x1800E8040
 * Callers:
 *     LdrpCallTlsInitializers @ 0x1800297D4 (LdrpCallTlsInitializers.c)
 *     LdrpProcessDetachNode @ 0x18006B9F4 (LdrpProcessDetachNode.c)
 *     LdrpInitializeNode @ 0x18006D4F4 (LdrpInitializeNode.c)
 *     LdrAppxHandleIntegrityFailure @ 0x1800D5FE0 (LdrAppxHandleIntegrityFailure.c)
 *     LdrpLogIntegrityContinuityTelemetry @ 0x1800DBA50 (LdrpLogIntegrityContinuityTelemetry.c)
 *     LdrpInitializeProcessWrapperFilter @ 0x1800DFD8C (LdrpInitializeProcessWrapperFilter.c)
 *     RtlReportExceptionEx @ 0x1800E8110 (RtlReportExceptionEx.c)
 *     RtlReportFatalFailure @ 0x18010D6C0 (RtlReportFatalFailure.c)
 *     RtlUnhandledExceptionFilter2 @ 0x18010EB30 (RtlUnhandledExceptionFilter2.c)
 *     TppReportExceptionFilter @ 0x1801272C8 (TppReportExceptionFilter.c)
 *     TppWorkerpInnerExceptionFilter @ 0x180127C78 (TppWorkerpInnerExceptionFilter.c)
 *     TppWorkerpOuterExceptionFilter @ 0x180127D10 (TppWorkerpOuterExceptionFilter.c)
 * Callees:
 *     NtQueryInformationProcess @ 0x1800A11D0 (NtQueryInformationProcess.c)
 *     RtlReportExceptionHelper @ 0x1800E8600 (RtlReportExceptionHelper.c)
 *     WerpBreakIntoDebuggerIfPresent @ 0x1800E8F9C (WerpBreakIntoDebuggerIfPresent.c)
 */

NTSTATUS __cdecl RtlReportException(PEXCEPTION_RECORD ExceptionRecord, PCONTEXT ContextRecord, ULONG Flags)
{
  int v3; // ebx
  NTSTATUS v8; // ebx
  _BYTE ProcessInformation[32]; // [rsp+30h] [rbp-48h] BYREF
  int v10; // [rsp+50h] [rbp-28h]
  __int64 v11; // [rsp+98h] [rbp+20h] BYREF

  v3 = 0;
  v11 = 0LL;
  if ( (Flags & 0xFFFFFFE0) != 0 )
    return -1073741811;
  WerpBreakIntoDebuggerIfPresent(ExceptionRecord, ContextRecord);
  if ( LdrpIsSecureProcess )
    return 0;
  if ( NtQueryInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ProcessImageInformation, ProcessInformation, 0x40u, 0LL) >= 0
    && v10 == 1 )
  {
    v11 = -300000000LL;
    v3 = 1;
  }
  v8 = RtlReportExceptionHelper(ExceptionRecord, ContextRecord, Flags, (unsigned __int64)&v11 & -(__int64)(v3 != 0));
  WerpBreakIntoDebuggerIfPresent(ExceptionRecord, ContextRecord);
  return v8;
}
