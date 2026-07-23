/*
 * XREFs of RtlpStackTraceDatabaseLogPrefix @ 0x1801195A0
 * Callers:
 *     RtlpCallInterceptRoutine @ 0x1800B085E (RtlpCallInterceptRoutine.c)
 * Callees:
 *     RtlCaptureStackBackTrace @ 0x18007A3C0 (RtlCaptureStackBackTrace.c)
 *     __security_check_cookie @ 0x18008EF90 (__security_check_cookie.c)
 *     RtlpRegisterStackTrace @ 0x180119350 (RtlpRegisterStackTrace.c)
 */

__int64 __fastcall RtlpStackTraceDatabaseLogPrefix(__int64 a1, __int64 a2, int a3, _QWORD *a4)
{
  int v5; // r8d
  int v6; // r8d
  int v7; // r8d
  USHORT v8; // ax
  ULONG BackTraceHash[4]; // [rsp+20h] [rbp-128h] BYREF
  PVOID BackTrace[32]; // [rsp+30h] [rbp-118h] BYREF

  v5 = a3 - 1;
  if ( v5 )
  {
    v6 = v5 - 1;
    if ( !v6 || (v7 = v6 - 1) == 0 || (unsigned int)(v7 - 2) <= 1 )
    {
      if ( a4 )
      {
        v8 = RtlCaptureStackBackTrace(1u, 0x20u, BackTrace, BackTraceHash);
        *a4 = RtlpRegisterStackTrace(v8, BackTrace, BackTraceHash[0]);
      }
    }
  }
  else
  {
    *a4 = 16LL;
  }
  return 0LL;
}
