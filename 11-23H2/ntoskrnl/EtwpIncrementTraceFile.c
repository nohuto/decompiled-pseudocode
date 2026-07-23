/*
 * XREFs of EtwpIncrementTraceFile @ 0x1409E81C0
 * Callers:
 *     NtTraceControl @ 0x140725DD0 (NtTraceControl.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14022F7F0 (KeLeaveCriticalRegionThread.c)
 *     EtwpReleaseLoggerContext @ 0x1406BE238 (EtwpReleaseLoggerContext.c)
 *     EtwpGenerateFileName @ 0x1407E9570 (EtwpGenerateFileName.c)
 *     EtwpSynchronizeWithLogger @ 0x1407F5C40 (EtwpSynchronizeWithLogger.c)
 *     EtwpValidateLoggerInfo @ 0x1407F8CD8 (EtwpValidateLoggerInfo.c)
 *     EtwpAcquireLoggerContext @ 0x1407F8D10 (EtwpAcquireLoggerContext.c)
 *     EtwpGetLoggerInfoFromContext @ 0x1407F8E0C (EtwpGetLoggerInfoFromContext.c)
 */

__int64 __fastcall EtwpIncrementTraceFile(__int64 a1, _DWORD *a2)
{
  __int64 result; // rax
  __int64 v4; // rdx
  __int64 v5; // r9
  struct _KTHREAD *CurrentThread; // rax
  int LoggerInfoFromContext; // edi
  __int64 v8; // rbx
  __int64 v9; // [rsp+40h] [rbp+18h] BYREF

  v9 = 0LL;
  result = EtwpValidateLoggerInfo(a2);
  if ( (int)result >= 0 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    LoggerInfoFromContext = EtwpAcquireLoggerContext(v5, v4, &v9);
    if ( LoggerInfoFromContext >= 0 )
    {
      v8 = v9;
      if ( (*(_DWORD *)(v9 + 12) & 8) != 0 )
      {
        v8 = v9;
        if ( (*(_DWORD *)(v9 + 824) & 1) != 0
          || (EtwpSynchronizeWithLogger(v9, 4u),
              EtwpGenerateFileName(
                (unsigned __int16 *)(v8 + 168),
                (volatile signed __int32 *)(v8 + 296),
                (UNICODE_STRING *)(v8 + 184)),
              LoggerInfoFromContext = EtwpSynchronizeWithLogger(v8, 1u),
              LoggerInfoFromContext >= 0) )
        {
          LoggerInfoFromContext = EtwpGetLoggerInfoFromContext((__int64)a2, v8);
        }
      }
      else
      {
        LoggerInfoFromContext = -1073741811;
      }
      EtwpReleaseLoggerContext((unsigned int *)v8, 1);
    }
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    return (unsigned int)LoggerInfoFromContext;
  }
  return result;
}
