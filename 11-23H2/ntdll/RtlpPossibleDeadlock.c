/*
 * XREFs of RtlpPossibleDeadlock @ 0x1800F4EB4
 * Callers:
 *     RtlpWaitOnCriticalSection @ 0x180033F90 (RtlpWaitOnCriticalSection.c)
 *     RtlAcquireResourceShared @ 0x1800601A0 (RtlAcquireResourceShared.c)
 *     RtlAcquireResourceExclusive @ 0x1800602C0 (RtlAcquireResourceExclusive.c)
 * Callees:
 *     RtlRaiseException @ 0x180054840 (RtlRaiseException.c)
 *     __security_check_cookie @ 0x18008EF90 (__security_check_cookie.c)
 *     NtQueryInformationProcess @ 0x1800A11D0 (NtQueryInformationProcess.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A4B90 (_guard_xfg_dispatch_icall_nop.c)
 *     RtlCaptureContext @ 0x1800A51D0 (RtlCaptureContext.c)
 *     RtlReportExceptionHelper @ 0x1800E8600 (RtlReportExceptionHelper.c)
 *     RtlRaiseStatus @ 0x1801106A0 (RtlRaiseStatus.c)
 */

void __fastcall RtlpPossibleDeadlock(unsigned __int64 a1)
{
  __int64 v2; // rdi
  unsigned int v3; // edx
  int v4; // eax
  __int64 v5; // rdi
  LONG (__cdecl *v6)(PEXCEPTION_POINTERS); // rcx
  signed __int32 v7; // ecx
  int v8; // eax
  NTSTATUS InformationProcess; // eax
  int v10; // ecx
  __int64 v11; // rax
  _QWORD *v12; // r9
  int ProcessInformation; // [rsp+30h] [rbp-5E8h] BYREF
  _QWORD v14[3]; // [rsp+38h] [rbp-5E0h] BYREF
  _BYTE v15[32]; // [rsp+50h] [rbp-5C8h] BYREF
  int v16; // [rsp+70h] [rbp-5A8h]
  EXCEPTION_RECORD ExceptionRecord; // [rsp+90h] [rbp-588h] BYREF
  struct _CONTEXT ContextRecord; // [rsp+130h] [rbp-4E8h] BYREF

  v2 = RtlpUnhandledExceptionFilter;
  v3 = `RtlpGetCookieValue'::`2'::CookieValue;
  if ( !`RtlpGetCookieValue'::`2'::CookieValue )
  {
    v4 = NtQueryInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ProcessCookie, &ProcessInformation, 4u, 0LL);
    if ( v4 < 0 )
      RtlRaiseStatus(v4);
    v3 = ProcessInformation;
    `RtlpGetCookieValue'::`2'::CookieValue = ProcessInformation;
  }
  v5 = __ROR8__(v2, 64 - (v3 & 0x3F));
  v6 = (LONG (__cdecl *)(PEXCEPTION_POINTERS))(v5 ^ v3);
  if ( v3 == v5 )
    v6 = RtlUnhandledExceptionFilter;
  v14[1] = v6;
  ExceptionRecord.ExceptionCode = -1073741420;
  ExceptionRecord.ExceptionFlags = 0;
  ExceptionRecord.ExceptionRecord = 0LL;
  ExceptionRecord.ExceptionAddress = RtlRaiseException;
  ExceptionRecord.NumberParameters = 1;
  ExceptionRecord.ExceptionInformation[0] = a1;
  v7 = _InterlockedIncrement(&PossibleDeadlockReportCounter);
  if ( PossibleDeadlockReportThreshold && v7 == PossibleDeadlockReportThreshold )
  {
    v8 = 0;
    if ( ((5 * PossibleDeadlockReportThreshold) & 0x40000000) == 0 )
      v8 = 10 * PossibleDeadlockReportThreshold;
    PossibleDeadlockReportThreshold = v8;
    RtlCaptureContext(&ContextRecord);
    v14[0] = 0LL;
    if ( !LdrpIsSecureProcess )
    {
      InformationProcess = NtQueryInformationProcess(
                             (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                             ProcessImageInformation,
                             v15,
                             0x40u,
                             0LL);
      v10 = 0;
      if ( InformationProcess >= 0 )
        LOBYTE(v10) = v16 == 1;
      v11 = v14[0];
      if ( v10 )
        v11 = -300000000LL;
      v14[0] = v11;
      v12 = v14;
      if ( !v10 )
        v12 = 0LL;
      RtlReportExceptionHelper((__int64)&ExceptionRecord, &ContextRecord, 15, (__int64)v12);
    }
  }
  if ( RtlpRaiseExceptionOnPossibleDeadlock )
    RtlRaiseException(&ExceptionRecord);
}
