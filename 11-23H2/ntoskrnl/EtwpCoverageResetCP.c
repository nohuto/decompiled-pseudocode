/*
 * XREFs of EtwpCoverageResetCP @ 0x1409E88D0
 * Callers:
 *     EtwSetProcessTelemetryCoverage @ 0x1408740A8 (EtwSetProcessTelemetryCoverage.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14022F7F0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140231120 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140231350 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1402BDBF0 (ExfTryToWakePushLock.c)
 *     EtwTelemetryCoverageReport @ 0x1403653E0 (EtwTelemetryCoverageReport.c)
 *     TelemetryCoverageTableLocateInternal @ 0x1403654B8 (TelemetryCoverageTableLocateInternal.c)
 *     EtwpCoverageValidateCP @ 0x14036550C (EtwpCoverageValidateCP.c)
 *     TelemetryCoverageStringHashInternal @ 0x14036556C (TelemetryCoverageStringHashInternal.c)
 *     memmove @ 0x140435B00 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     EtwpCoverageFlushPending @ 0x1407E8B64 (EtwpCoverageFlushPending.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall EtwpCoverageResetCP(__int64 a1, __int64 a2)
{
  _DWORD *Pool2; // r14
  unsigned int v4; // r12d
  struct _KTHREAD *CurrentThread; // rax
  int v7; // r11d
  _QWORD *v8; // rdi
  unsigned __int64 v9; // rbp
  char *v10; // rcx
  __int64 v11; // rdx
  unsigned int v13; // r8d
  unsigned int v14; // edx
  _DWORD *v15; // rcx
  int v16; // r9d
  __int64 v17; // rax
  unsigned int *v18; // rcx
  unsigned int i; // edi
  unsigned int *v20; // rax
  unsigned int v21; // r11d
  int v22; // [rsp+68h] [rbp+10h] BYREF
  int v23; // [rsp+70h] [rbp+18h] BYREF
  unsigned int *Internal; // [rsp+78h] [rbp+20h]

  v22 = 0;
  Pool2 = 0LL;
  v4 = 0;
  *(_DWORD *)(a2 + 12) = 0;
  if ( (unsigned int)dword_140C093BC < MEMORY[0xFFFFF7800000037C] )
  {
    if ( !dword_140C093B8 )
      dword_140C093B8 = TelemetryCoverageStringHashInternal(off_140C093B0, &v23);
    EtwTelemetryCoverageReport((__int64 *)&off_140C093B0);
  }
  if ( (unsigned int)EtwpCoverageValidateCP((__int64 *)a2, &v22) )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&EtwpCoverageLock, 0LL);
    EtwpCoverageLockOwner = (__int64)KeGetCurrentThread();
    *(_DWORD *)(a1 + 24) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    Internal = TelemetryCoverageTableLocateInternal(*(unsigned int **)(a1 + 16), *(_DWORD *)(a2 + 8));
    if ( *Internal == v7 )
    {
      EtwpCoverageFlushPending((int **)a1);
      Pool2 = (_DWORD *)ExAllocatePool2(
                          256LL,
                          (unsigned int)(4 * *(_DWORD *)(*(_QWORD *)(a1 + 16) + 32LL)),
                          1450669125LL);
      if ( Pool2 )
      {
        v8 = *(_QWORD **)(a1 + 48);
        if ( v8 != (_QWORD *)(a1 + 48) )
        {
          while ( 1 )
          {
            v9 = v8[3];
            v10 = (char *)(v8 + 5);
            if ( (unsigned __int64)(v8 + 5) < v9 )
              break;
LABEL_15:
            v8 = (_QWORD *)*v8;
            if ( v8 == (_QWORD *)(a1 + 48) )
              goto LABEL_16;
          }
          while ( 1 )
          {
            v11 = -1LL;
            do
              ++v11;
            while ( v10[v11] );
            if ( v11 == v22 && !strcmp(v10, *(const char **)a2) )
              break;
            v10 += v11 + 1;
            if ( (unsigned __int64)v10 >= v9 )
              goto LABEL_15;
          }
          memmove(v10, &v10[v22 + 1], v9 - (_QWORD)&v10[v22 + 1]);
          v13 = 0;
          v8[3] -= (unsigned int)(v22 + 1);
          v14 = 0;
          v8[4] = v8[3];
          ++*(_DWORD *)(*(_QWORD *)(a1 + 16) + 12LL);
          *Internal = 0;
          --*(_DWORD *)(*(_QWORD *)(a1 + 16) + 32LL);
          v15 = *(_DWORD **)(a1 + 16);
          if ( v15[1] )
          {
            do
            {
              v16 = v15[v14 + 13];
              if ( v16 )
              {
                v17 = v13++;
                Pool2[v17] = v16;
                v15 = *(_DWORD **)(a1 + 16);
                if ( v13 >= v15[8] )
                  break;
              }
              ++v14;
            }
            while ( v14 < v15[1] );
          }
          memset(v15 + 13, 0, 4LL * (unsigned int)v15[1]);
          v18 = *(unsigned int **)(a1 + 16);
          for ( i = 0; i < v18[8]; v18 = *(unsigned int **)(a1 + 16) )
          {
            v20 = TelemetryCoverageTableLocateInternal(v18, Pool2[i++]);
            *v20 = v21;
          }
          v4 = 1;
          *(_DWORD *)(a2 + 12) = v18[6];
        }
      }
    }
  }
LABEL_16:
  if ( (struct _KTHREAD *)EtwpCoverageLockOwner == KeGetCurrentThread() )
  {
    EtwpCoverageLockOwner = 0LL;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&EtwpCoverageLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&EtwpCoverageLock);
    KeAbPostRelease((ULONG_PTR)&EtwpCoverageLock);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0x56777445u);
  return v4;
}
