/*
 * XREFs of PpmCheckRun @ 0x14032C480
 * Callers:
 *     PpmCheckStart @ 0x14032C354 (PpmCheckStart.c)
 * Callees:
 *     EtwWrite @ 0x140257960 (EtwWrite.c)
 *     EtwEventEnabled @ 0x1402584E0 (EtwEventEnabled.c)
 *     PpmReleaseLock @ 0x14032C510 (PpmReleaseLock.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 */

BOOLEAN PpmCheckRun()
{
  __int64 (*v0)(void); // rax
  BOOLEAN result; // al
  REGHANDLE v2; // rbx
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-28h] BYREF

  while ( *(_QWORD *)(PpmCheckPipeline + 8LL * (unsigned int)PpmCheckPipelineIndex) )
  {
    v0 = *(__int64 (**)(void))(PpmCheckPipeline + 8LL * (unsigned int)PpmCheckPipelineIndex++);
    result = v0();
    if ( !result )
      return result;
  }
  result = PpmReleaseLock(&PpmPerfPolicyLock);
  if ( PpmEtwRegistered )
  {
    v2 = PpmEtwHandle;
    result = EtwEventEnabled(PpmEtwHandle, &PPM_ETW_PERF_CHECK_STOP);
    if ( result )
    {
      UserData.Reserved = 0;
      UserData.Ptr = (ULONGLONG)&PpmCheckTime;
      UserData.Size = 8;
      return EtwWrite(v2, &PPM_ETW_PERF_CHECK_STOP, 0LL, 1u, &UserData);
    }
  }
  return result;
}
