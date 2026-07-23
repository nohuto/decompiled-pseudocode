/*
 * XREFs of LdrpAcquireLoaderLock @ 0x180051388
 * Callers:
 *     LdrQueryModuleInfoLocalLoaderLock @ 0x180002D50 (LdrQueryModuleInfoLocalLoaderLock.c)
 *     LdrpInitializeThread @ 0x180028A58 (LdrpInitializeThread.c)
 *     LdrShutdownThread @ 0x1800294B0 (LdrShutdownThread.c)
 *     LdrpDecrementModuleLoadCountEx @ 0x18002D65C (LdrpDecrementModuleLoadCountEx.c)
 *     LdrpPrepareModuleForExecution @ 0x18002DCA8 (LdrpPrepareModuleForExecution.c)
 *     LdrLockLoaderLock @ 0x180051190 (LdrLockLoaderLock.c)
 *     RtlExitUserProcess @ 0x1800512C0 (RtlExitUserProcess.c)
 *     LdrEnumerateLoadedModules @ 0x180051CE0 (LdrEnumerateLoadedModules.c)
 *     LdrpInitializeImportRedirection @ 0x1800847E4 (LdrpInitializeImportRedirection.c)
 *     RtlPrepareForProcessCloning @ 0x18009E120 (RtlPrepareForProcessCloning.c)
 *     LdrpInitializeProcess @ 0x1800D4658 (LdrpInitializeProcess.c)
 *     LdrInitShimEngineDynamic @ 0x1800DCF80 (LdrInitShimEngineDynamic.c)
 *     RtlCloneUserProcess @ 0x1800E1600 (RtlCloneUserProcess.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x180021D10 (RtlEnterCriticalSection.c)
 *     RtlGetCurrentServiceSessionId @ 0x18003B280 (RtlGetCurrentServiceSessionId.c)
 *     LdrpLogEtwEvent @ 0x1800DB9FC (LdrpLogEtwEvent.c)
 */

__int64 LdrpAcquireLoaderLock()
{
  __int64 v0; // rbx
  __int64 v1; // rcx
  __int64 v2; // rdi
  unsigned __int32 v3; // esi
  int v5; // r8d
  int v6; // r9d
  char *v7; // rcx
  int v8; // r8d
  int v9; // r9d

  v0 = 2147353476LL;
  if ( RtlGetCurrentServiceSessionId() )
    v1 = (__int64)NtCurrentPeb()->SharedData + 554;
  else
    v1 = 2147353476LL;
  v2 = 2147353477LL;
  if ( *(_BYTE *)v1 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
  {
    v7 = RtlGetCurrentServiceSessionId() ? (char *)NtCurrentPeb()->SharedData + 555 : (char *)2147353477;
    if ( (*v7 & 0x20) != 0 )
    {
      LOBYTE(v6) = -1;
      LOBYTE(v5) = -1;
      LdrpLogEtwEvent(5248, -1, v5, v6, 0LL, 0LL);
    }
  }
  v3 = RtlEnterCriticalSection(&LdrpLoaderLock);
  if ( RtlGetCurrentServiceSessionId() )
    v0 = (__int64)NtCurrentPeb()->SharedData + 554;
  if ( *(_BYTE *)v0 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
  {
    if ( RtlGetCurrentServiceSessionId() )
      v2 = (__int64)NtCurrentPeb()->SharedData + 555;
    if ( (*(_BYTE *)v2 & 0x20) != 0 )
    {
      LOBYTE(v9) = -1;
      LOBYTE(v8) = -1;
      LdrpLogEtwEvent(5249, -1, v8, v9, 0LL, 0LL);
    }
  }
  return v3;
}
