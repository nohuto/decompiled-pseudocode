/*
 * XREFs of EtwpGetSoftRestartInformation @ 0x1409ED5C4
 * Callers:
 *     EtwQueryPerformanceTraceInformation @ 0x140860134 (EtwQueryPerformanceTraceInformation.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14022F7F0 (KeLeaveCriticalRegionThread.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140287700 (PsIsCurrentThreadInServerSilo.c)
 *     EtwpCheckLoggerControlAccess @ 0x1406BDB3C (EtwpCheckLoggerControlAccess.c)
 *     EtwpReleaseLoggerContext @ 0x1406BE238 (EtwpReleaseLoggerContext.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x1406BECFC (EtwpAcquireLoggerContextByLoggerId.c)
 */

__int64 __fastcall EtwpGetSoftRestartInformation(__int64 a1, unsigned int a2, _DWORD *a3)
{
  char v6; // r14
  unsigned int v8; // edx
  struct _KTHREAD *CurrentThread; // rax
  unsigned int *v10; // rax
  unsigned int *v11; // rdi
  int v12; // ebx
  __int64 v13; // rax

  v6 = 0;
  if ( !EtwpKsrCallbackObject || PsIsCurrentThreadInServerSilo() )
    return 3221225659LL;
  *a3 = 24;
  if ( a2 < 0x18 )
    return 3221225476LL;
  v8 = (unsigned __int16)*(_QWORD *)(a1 + 8);
  if ( v8 == 0xFFFF )
    v8 = *(unsigned __int8 *)(EtwpHostSiloState + 4232);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v10 = EtwpAcquireLoggerContextByLoggerId(EtwpHostSiloState, v8, 1);
  v11 = v10;
  if ( v10 )
  {
    v12 = EtwpCheckLoggerControlAccess(1u, (__int64)v10);
    if ( v12 >= 0 )
    {
      v13 = *((_QWORD *)v11 + 136);
      if ( v13 )
        v6 = *(_BYTE *)(v13 + 32);
    }
    EtwpReleaseLoggerContext(v11, 1);
  }
  else
  {
    v12 = -1073741162;
  }
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( v12 >= 0 )
    *(_BYTE *)(a1 + 16) = v6;
  return (unsigned int)v12;
}
