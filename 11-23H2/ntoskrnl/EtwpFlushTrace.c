/*
 * XREFs of EtwpFlushTrace @ 0x1407F5CC8
 * Callers:
 *     NtTraceControl @ 0x140725DD0 (NtTraceControl.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14022F7F0 (KeLeaveCriticalRegionThread.c)
 *     EtwEventEnabled @ 0x1402584E0 (EtwEventEnabled.c)
 *     EtwpCheckLoggerControlAccess @ 0x1406BDB3C (EtwpCheckLoggerControlAccess.c)
 *     EtwpReleaseLoggerContext @ 0x1406BE238 (EtwpReleaseLoggerContext.c)
 *     RtlFreeUnicodeString @ 0x14076F5C0 (RtlFreeUnicodeString.c)
 *     EtwpSynchronizeWithLogger @ 0x1407F5C40 (EtwpSynchronizeWithLogger.c)
 *     EtwpValidateLoggerInfo @ 0x1407F8CD8 (EtwpValidateLoggerInfo.c)
 *     EtwpAcquireLoggerContext @ 0x1407F8D10 (EtwpAcquireLoggerContext.c)
 *     EtwpGetLoggerInfoFromContext @ 0x1407F8E0C (EtwpGetLoggerInfoFromContext.c)
 *     EtwpCaptureString @ 0x1407FAF00 (EtwpCaptureString.c)
 *     EtwpCCSwapStop @ 0x14082110C (EtwpCCSwapStop.c)
 *     EtwpBufferingModeFlush @ 0x1408A7C78 (EtwpBufferingModeFlush.c)
 *     EtwpEventWriteTemplateSession @ 0x1409E3E94 (EtwpEventWriteTemplateSession.c)
 */

__int64 __fastcall EtwpFlushTrace(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v7; // rdx
  struct _KTHREAD *CurrentThread; // rax
  int LoggerInfoFromContext; // ebx
  __int64 v10; // rdi
  int v11; // r15d
  ACCESS_MASK v12; // r8d
  __int64 v13; // rbp
  int v14; // eax
  __int64 v15; // rcx
  UNICODE_STRING v16; // xmm0
  int v17; // eax
  __int64 v18; // rcx
  int v19; // eax
  UNICODE_STRING UnicodeString; // [rsp+20h] [rbp-38h] BYREF
  __int64 v21; // [rsp+70h] [rbp+18h] BYREF

  v21 = 0LL;
  UnicodeString = 0LL;
  result = EtwpValidateLoggerInfo(a2, a2, a3, a4);
  if ( (int)result >= 0 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    LoggerInfoFromContext = EtwpAcquireLoggerContext(a1, v7, &v21);
    if ( LoggerInfoFromContext < 0 )
    {
LABEL_15:
      RtlFreeUnicodeString(&UnicodeString);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      return (unsigned int)LoggerInfoFromContext;
    }
    v10 = v21;
    v11 = *(_DWORD *)(v21 + 12);
    v12 = ((v11 & 0x100 | 0x400u) >> 3) | 0x40;
    if ( !*(_QWORD *)(v21 + 800) )
      v12 = (*(_DWORD *)(v21 + 12) & 0x100 | 0x400u) >> 3;
    if ( (v11 & 0x400) != 0 )
    {
      if ( !*(_QWORD *)(a2 + 136) || (v13 = a2 + 128, !*(_WORD *)(a2 + 128)) )
      {
        LoggerInfoFromContext = -1073741809;
        goto LABEL_14;
      }
      v12 |= 0x40u;
    }
    else
    {
      v13 = a2 + 128;
    }
    LoggerInfoFromContext = EtwpCheckLoggerControlAccess(v12, v21);
    if ( LoggerInfoFromContext >= 0 )
    {
      if ( (v11 & 0x400) != 0 )
      {
        LoggerInfoFromContext = EtwpCaptureString(v13, &UnicodeString);
        if ( LoggerInfoFromContext >= 0 )
        {
          v16 = UnicodeString;
          UnicodeString.Buffer = 0LL;
          *(UNICODE_STRING *)(v10 + 184) = v16;
          _InterlockedOr((volatile signed __int32 *)(v10 + 824), 1u);
          v17 = *(_DWORD *)(v10 + 12);
          v10 = v21;
          if ( (v17 & 0x2000000) != 0 )
          {
            v18 = 32LL * *(unsigned __int8 *)(v21 + 818) + a1 + 4284;
            if ( v18 )
            {
              v19 = *(_DWORD *)(v18 + 4);
              if ( (v19 & 4) != 0 && (v19 & 0x100) != 0 )
                EtwpCCSwapStop(*(unsigned int *)(v21 + 200), 0LL);
            }
          }
          v14 = EtwpBufferingModeFlush(v10);
          goto LABEL_11;
        }
      }
      else
      {
        if ( (v11 & 0x40000) == 0 )
        {
          v14 = EtwpSynchronizeWithLogger(v10, 4u);
LABEL_11:
          LoggerInfoFromContext = v14;
          if ( v14 >= 0 )
          {
            LoggerInfoFromContext = EtwpGetLoggerInfoFromContext(a2, v10);
            if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_FLUSH_TRACE) )
              EtwpEventWriteTemplateSession(v15, &ETW_EVENT_FLUSH_TRACE, v10);
          }
          goto LABEL_14;
        }
        LoggerInfoFromContext = -1073741637;
      }
    }
LABEL_14:
    EtwpReleaseLoggerContext((unsigned int *)v10, 1);
    goto LABEL_15;
  }
  return result;
}
