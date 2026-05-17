/*
 * XREFs of EtwProcessPrivateLoggerRequest @ 0x180006C90
 * Callers:
 *     EtwpProcessNotification @ 0x180007988 (EtwpProcessNotification.c)
 * Callees:
 *     EtwpStopUmLogger @ 0x180005B64 (EtwpStopUmLogger.c)
 *     EtwpStartUmLogger @ 0x180006FB0 (EtwpStartUmLogger.c)
 *     EtwpQueryUmLogger @ 0x180007D88 (EtwpQueryUmLogger.c)
 *     RtlAcquireSRWLockExclusive @ 0x180019910 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18001B320 (RtlReleaseSRWLockExclusive.c)
 *     EtwpFlushUmLogger @ 0x180090EE4 (EtwpFlushUmLogger.c)
 *     memset @ 0x1800AAE00 (memset.c)
 *     EtwpIncrementUmLoggerFile @ 0x1801226D4 (EtwpIncrementUmLoggerFile.c)
 *     EtwpUpdateUmLogger @ 0x180122B90 (EtwpUpdateUmLogger.c)
 */

__int64 __fastcall EtwProcessPrivateLoggerRequest(char *a1)
{
  __int128 v2; // xmm6
  int *v3; // rdi
  unsigned int v4; // r14d
  __int64 v5; // rax
  int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  int v10; // ebx
  int v11; // ebx
  int v12; // ebx
  int v13; // ebx
  int v14; // ebx
  int started; // eax
  int v16; // ebx
  int v17; // r14d
  int v19; // [rsp+50h] [rbp+20h] BYREF
  int v20; // [rsp+58h] [rbp+28h] BYREF

  if ( *((_DWORD *)a1 + 1) < 0xF8u )
    return 4209LL;
  v2 = *(_OWORD *)(a1 + 56);
  v3 = (int *)(a1 + 72);
  v4 = *((_DWORD *)a1 + 18);
  *((_DWORD *)a1 + 42) = *((_DWORD *)a1 + 5);
  if ( v4 < 0xB0 || (*((_DWORD *)a1 + 29) & 0x20000) == 0 )
    goto LABEL_24;
  v5 = *((_QWORD *)a1 + 12) - *(_QWORD *)&SystemTraceControlGuid.Data1;
  if ( !v5 )
    v5 = *((_QWORD *)a1 + 13) - *(_QWORD *)SystemTraceControlGuid.Data4;
  if ( !v5 )
  {
LABEL_24:
    v16 = 13;
    goto LABEL_21;
  }
  v6 = *((_DWORD *)a1 + 19);
  v20 = 0;
  v19 = 0;
  RtlAcquireSRWLockExclusive(&EtwpPrivSessionLock);
  v10 = v6 - 1;
  if ( !v10 )
  {
    started = EtwpStartUmLogger(v8, &v20, &v19, v3);
    goto LABEL_13;
  }
  v11 = v10 - 1;
  if ( !v11 )
  {
    started = EtwpStopUmLogger(v8, v7, v9, (__int64)v3);
    goto LABEL_13;
  }
  v12 = v11 - 1;
  if ( !v12 )
  {
    started = EtwpQueryUmLogger(v4, &v20, &v19, v3);
    goto LABEL_13;
  }
  v13 = v12 - 1;
  if ( !v13 )
  {
    started = EtwpUpdateUmLogger(v4, &v20, &v19, v3);
    goto LABEL_13;
  }
  v14 = v13 - 1;
  if ( !v14 )
  {
    started = EtwpFlushUmLogger(v4, &v20, &v19, v3);
LABEL_13:
    v16 = started;
    goto LABEL_14;
  }
  if ( v14 == 1 )
  {
    started = EtwpIncrementUmLoggerFile(v4, &v20, &v19, v3);
    goto LABEL_13;
  }
  v16 = 87;
LABEL_14:
  RtlReleaseSRWLockExclusive(&EtwpPrivSessionLock);
  if ( v16 )
  {
LABEL_21:
    v17 = 76;
    goto LABEL_16;
  }
  v17 = *v3 + 72;
LABEL_16:
  memset(a1, 0, 0x48uLL);
  *((_DWORD *)a1 + 1) = v17;
  *(_DWORD *)a1 = 4;
  *(_OWORD *)(a1 + 40) = v2;
  *((_DWORD *)a1 + 8) = NtCurrentTeb()->ClientId.UniqueProcess;
  if ( v16 )
    *v3 = v16;
  return 0LL;
}
