/*
 * XREFs of PpmEventTraceFailedPerfCheckStart @ 0x140373D18
 * Callers:
 *     PpmCheckPeriodicStart @ 0x14032C2B0 (PpmCheckPeriodicStart.c)
 * Callees:
 *     EtwWriteEx @ 0x1402582A0 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x1402584E0 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 */

void __fastcall PpmEventTraceFailedPerfCheckStart(__int64 a1)
{
  REGHANDLE v1; // rbx
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-28h] BYREF
  __int64 v3; // [rsp+70h] [rbp+8h] BYREF

  v3 = a1;
  if ( PpmEtwRegistered )
  {
    v1 = PpmEtwHandle;
    if ( EtwEventEnabled(PpmEtwHandle, &PPM_ETW_PERF_CHECK_FAILED_START) )
    {
      UserData.Reserved = 0;
      UserData.Ptr = (ULONGLONG)&v3;
      UserData.Size = 8;
      EtwWriteEx(v1, &PPM_ETW_PERF_CHECK_FAILED_START, 0LL, 0, 0LL, 0LL, 1u, &UserData);
    }
  }
}
