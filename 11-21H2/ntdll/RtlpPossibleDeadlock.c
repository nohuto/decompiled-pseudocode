/*
 * XREFs of RtlpPossibleDeadlock @ 0x1800F3D74
 * Callers:
 *     RtlpWaitOnCriticalSection @ 0x18001D420 (RtlpWaitOnCriticalSection.c)
 *     RtlAcquireResourceShared @ 0x180069980 (RtlAcquireResourceShared.c)
 *     RtlAcquireResourceExclusive @ 0x180069AA0 (RtlAcquireResourceExclusive.c)
 * Callees:
 *     RtlRaiseException @ 0x180032D00 (RtlRaiseException.c)
 *     RtlRaiseStatus @ 0x18008FDF0 (RtlRaiseStatus.c)
 *     __security_check_cookie @ 0x180093840 (__security_check_cookie.c)
 *     NtQueryInformationProcess @ 0x1800A4390 (NtQueryInformationProcess.c)
 *     RtlCaptureContext @ 0x1800A82D0 (RtlCaptureContext.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800AAAD0 (_guard_xfg_dispatch_icall_nop.c)
 *     RtlReportExceptionHelper @ 0x1800E8440 (RtlReportExceptionHelper.c)
 */

void __fastcall RtlpPossibleDeadlock(unsigned __int64 a1)
{
  __int64 v2; // rdi
  unsigned int v3; // edx
  NTSTATUS v4; // eax
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // rdi
  __int64 (__fastcall *v8)(__int64); // rcx
  int v9; // edi
  signed __int32 v10; // ecx
  int v11; // eax
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
    v4 = NtQueryInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PROCESSINFOCLASS)36, &ProcessInformation, 4u, 0LL);
    if ( v4 < 0 )
      RtlRaiseStatus(v4, v5, v6);
    v3 = ProcessInformation;
    `RtlpGetCookieValue'::`2'::CookieValue = ProcessInformation;
  }
  v7 = __ROR8__(v2, 64 - (v3 & 0x3F));
  v8 = (__int64 (__fastcall *)(__int64))(v7 ^ v3);
  if ( v3 == v7 )
    v8 = RtlUnhandledExceptionFilter;
  v14[1] = v8;
  ExceptionRecord.ExceptionCode = -1073741420;
  ExceptionRecord.ExceptionFlags = 0;
  ExceptionRecord.ExceptionRecord = 0LL;
  ExceptionRecord.ExceptionAddress = RtlRaiseException;
  v9 = 1;
  ExceptionRecord.NumberParameters = 1;
  ExceptionRecord.ExceptionInformation[0] = a1;
  v10 = _InterlockedIncrement(&PossibleDeadlockReportCounter);
  if ( PossibleDeadlockReportThreshold && v10 == PossibleDeadlockReportThreshold )
  {
    v11 = 0;
    if ( ((5 * PossibleDeadlockReportThreshold) & 0x40000000) == 0 )
      v11 = 10 * PossibleDeadlockReportThreshold;
    PossibleDeadlockReportThreshold = v11;
    RtlCaptureContext(&ContextRecord);
    v14[0] = 0LL;
    if ( !LdrpIsSecureProcess )
    {
      if ( NtQueryInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PROCESSINFOCLASS)37, v15, 0x40u, 0LL) >= 0
        && v16 == 1 )
      {
        v14[0] = -300000000LL;
      }
      else
      {
        v9 = 0;
      }
      v12 = v14;
      if ( !v9 )
        v12 = 0LL;
      RtlReportExceptionHelper((__int64)&ExceptionRecord, &ContextRecord, 15LL, (__int64)v12);
    }
  }
  if ( RtlpRaiseExceptionOnPossibleDeadlock )
    RtlRaiseException(&ExceptionRecord);
}
