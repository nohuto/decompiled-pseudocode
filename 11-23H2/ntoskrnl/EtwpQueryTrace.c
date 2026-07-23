/*
 * XREFs of EtwpQueryTrace @ 0x1407F8BF0
 * Callers:
 *     NtTraceControl @ 0x140725DD0 (NtTraceControl.c)
 *     EtwWmitraceWorker @ 0x1409EBC7C (EtwWmitraceWorker.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14022F7F0 (KeLeaveCriticalRegionThread.c)
 *     EtwpCheckLoggerControlAccess @ 0x1406BDB3C (EtwpCheckLoggerControlAccess.c)
 *     EtwpReleaseLoggerContext @ 0x1406BE238 (EtwpReleaseLoggerContext.c)
 *     EtwpValidateLoggerInfo @ 0x1407F8CD8 (EtwpValidateLoggerInfo.c)
 *     EtwpAcquireLoggerContext @ 0x1407F8D10 (EtwpAcquireLoggerContext.c)
 *     EtwpGetLoggerInfoFromContext @ 0x1407F8E0C (EtwpGetLoggerInfoFromContext.c)
 *     EtwCheckSecurityLoggerAccess @ 0x1407FC44C (EtwCheckSecurityLoggerAccess.c)
 */

__int64 __fastcall EtwpQueryTrace(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v5; // rdx
  __int64 v6; // r9
  struct _KTHREAD *CurrentThread; // rax
  int LoggerInfoFromContext; // edi
  __int64 v9; // rbx
  __int64 v10; // rdx
  unsigned int *v11; // rcx
  unsigned int *v12; // [rsp+40h] [rbp+18h] BYREF

  v12 = 0LL;
  result = EtwpValidateLoggerInfo(a2, a2, a3, a1);
  if ( (int)result >= 0 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    LoggerInfoFromContext = EtwpAcquireLoggerContext(v6, v5, &v12);
    if ( LoggerInfoFromContext < 0 )
    {
LABEL_8:
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      return (unsigned int)LoggerInfoFromContext;
    }
    v9 = (__int64)v12;
    LoggerInfoFromContext = EtwpCheckLoggerControlAccess(1u, (__int64)v12);
    if ( LoggerInfoFromContext >= 0 )
    {
      if ( (*(_DWORD *)(v9 + 816) & 0x4000) != 0 )
      {
        LOBYTE(v10) = KeGetCurrentThread()->PreviousMode;
        LoggerInfoFromContext = EtwCheckSecurityLoggerAccess(KeGetCurrentThread()->ApcState.Process, v10);
        if ( LoggerInfoFromContext < 0 )
        {
          v11 = v12;
          goto LABEL_7;
        }
        v9 = (__int64)v12;
      }
      LoggerInfoFromContext = EtwpGetLoggerInfoFromContext(a2, v9);
    }
    v11 = (unsigned int *)v9;
LABEL_7:
    EtwpReleaseLoggerContext(v11, 1);
    goto LABEL_8;
  }
  return result;
}
