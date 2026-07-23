/*
 * XREFs of EtwProcessPrivateLoggerRequest @ 0x18005BA20
 * Callers:
 *     EtwpProcessNotification @ 0x18005ECA4 (EtwpProcessNotification.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180033C40 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180037D80 (RtlAcquireSRWLockExclusive.c)
 *     EtwpValidateLoggerInfo @ 0x18005BB50 (EtwpValidateLoggerInfo.c)
 *     EtwpStartUmLogger @ 0x18005BB9C (EtwpStartUmLogger.c)
 *     EtwpQueryUmLogger @ 0x18005F188 (EtwpQueryUmLogger.c)
 *     EtwpFlushUmLogger @ 0x18005F2C0 (EtwpFlushUmLogger.c)
 *     EtwpStopUmLogger @ 0x18005F5F0 (EtwpStopUmLogger.c)
 *     EtwpIncrementUmLoggerFile @ 0x18012588C (EtwpIncrementUmLoggerFile.c)
 *     EtwpUpdateUmLogger @ 0x180125F44 (EtwpUpdateUmLogger.c)
 *     memset$thunk$772440563353939046 @ 0x180132010 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall EtwProcessPrivateLoggerRequest(char *a1)
{
  __int128 v2; // xmm6
  int *v3; // rdi
  int v4; // ebx
  int v5; // ebx
  unsigned int v6; // r14d
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  int v10; // ebx
  int v11; // ebx
  int v12; // ebx
  int v13; // ebx
  int v14; // ebx
  int started; // eax
  int v16; // r14d
  int v18; // [rsp+50h] [rbp+20h] BYREF
  int v19; // [rsp+58h] [rbp+28h] BYREF

  if ( *((_DWORD *)a1 + 1) < 0xF8u )
    return 4209LL;
  v2 = *(_OWORD *)(a1 + 56);
  v3 = (int *)(a1 + 72);
  *((_DWORD *)a1 + 42) = *((_DWORD *)a1 + 5);
  v4 = EtwpValidateLoggerInfo(a1 + 72);
  if ( v4 )
    goto LABEL_17;
  v5 = v3[1];
  v6 = *v3;
  v19 = 0;
  v18 = 0;
  RtlAcquireSRWLockExclusive(&EtwpPrivSessionLock);
  v10 = v5 - 1;
  if ( !v10 )
  {
    started = EtwpStartUmLogger(v8, &v19, &v18, v3);
    goto LABEL_10;
  }
  v11 = v10 - 1;
  if ( !v11 )
  {
    started = EtwpStopUmLogger(v8, v7, v9, v3);
    goto LABEL_10;
  }
  v12 = v11 - 1;
  if ( !v12 )
  {
    started = EtwpQueryUmLogger(v6, &v19, &v18, v3);
    goto LABEL_10;
  }
  v13 = v12 - 1;
  if ( !v13 )
  {
    started = EtwpUpdateUmLogger(v6, &v19, &v18, v3);
    goto LABEL_10;
  }
  v14 = v13 - 1;
  if ( !v14 )
  {
    started = EtwpFlushUmLogger(v6, &v19, &v18, v3);
LABEL_10:
    v4 = started;
    goto LABEL_11;
  }
  if ( v14 == 1 )
  {
    started = EtwpIncrementUmLoggerFile(v6, &v19, &v18, v3);
    goto LABEL_10;
  }
  v4 = 87;
LABEL_11:
  RtlReleaseSRWLockExclusive(&EtwpPrivSessionLock);
  if ( v4 )
  {
LABEL_17:
    v16 = 76;
    goto LABEL_13;
  }
  v16 = *v3 + 72;
LABEL_13:
  memset_thunk_772440563353939046(a1, 0, 0x48uLL);
  *((_DWORD *)a1 + 1) = v16;
  *(_DWORD *)a1 = 4;
  *(_OWORD *)(a1 + 40) = v2;
  *((_DWORD *)a1 + 8) = NtCurrentTeb()->ClientId.UniqueProcess;
  if ( v4 )
    *v3 = v4;
  return 0LL;
}
