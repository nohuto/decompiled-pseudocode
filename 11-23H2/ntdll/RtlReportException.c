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
 *     RtlReportFatalFailure @ 0x18010D6F0 (RtlReportFatalFailure.c)
 *     RtlUnhandledExceptionFilter2 @ 0x18010EB60 (RtlUnhandledExceptionFilter2.c)
 *     TppReportExceptionFilter @ 0x1801272F8 (TppReportExceptionFilter.c)
 *     TppWorkerpInnerExceptionFilter @ 0x180127CA8 (TppWorkerpInnerExceptionFilter.c)
 *     TppWorkerpOuterExceptionFilter @ 0x180127D40 (TppWorkerpOuterExceptionFilter.c)
 * Callees:
 *     NtQueryInformationProcess @ 0x1800A11D0 (NtQueryInformationProcess.c)
 *     RtlReportExceptionHelper @ 0x1800E8600 (RtlReportExceptionHelper.c)
 *     WerpBreakIntoDebuggerIfPresent @ 0x1800E8F9C (WerpBreakIntoDebuggerIfPresent.c)
 */

__int64 __fastcall RtlReportException(__int64 a1, __int64 a2, unsigned int a3)
{
  int v3; // ebx
  unsigned int v8; // ebx
  _BYTE ProcessInformation[32]; // [rsp+30h] [rbp-48h] BYREF
  int v10; // [rsp+50h] [rbp-28h]
  __int64 v11; // [rsp+98h] [rbp+20h] BYREF

  v3 = 0;
  v11 = 0LL;
  if ( (a3 & 0xFFFFFFE0) != 0 )
    return 3221225485LL;
  ((void (*)(void))WerpBreakIntoDebuggerIfPresent)();
  if ( LdrpIsSecureProcess )
    return 0LL;
  if ( NtQueryInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PROCESSINFOCLASS)37, ProcessInformation, 0x40u, 0LL) >= 0
    && v10 == 1 )
  {
    v11 = -300000000LL;
    v3 = 1;
  }
  v8 = RtlReportExceptionHelper(a1, a2, a3, (unsigned __int64)&v11 & -(__int64)(v3 != 0));
  WerpBreakIntoDebuggerIfPresent(a1, a2, a3);
  return v8;
}
