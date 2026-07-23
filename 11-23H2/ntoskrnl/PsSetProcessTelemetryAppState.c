/*
 * XREFs of PsSetProcessTelemetryAppState @ 0x1407518DC
 * Callers:
 *     PsThawMultiProcess @ 0x1402044E4 (PsThawMultiProcess.c)
 *     PsSetProcessFaultInformation @ 0x140683030 (PsSetProcessFaultInformation.c)
 *     PspExitProcess @ 0x140751624 (PspExitProcess.c)
 *     PsFreezeProcess @ 0x1407EBF50 (PsFreezeProcess.c)
 *     EtwpPsProvProcessEnumCallback @ 0x1409EFCF0 (EtwpPsProvProcessEnumCallback.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14022F7F0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140231120 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140231350 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1402BDBF0 (ExfTryToWakePushLock.c)
 *     PsGetProcessDeepFreezeStats @ 0x140751A74 (PsGetProcessDeepFreezeStats.c)
 *     EtwTraceAppStateChange @ 0x140751BE8 (EtwTraceAppStateChange.c)
 */

__int64 __fastcall PsSetProcessTelemetryAppState(_QWORD *BugCheckParameter1, int a2)
{
  struct _KTHREAD *CurrentThread; // r12
  volatile signed __int64 *v3; // r14
  __int64 v6; // r15
  unsigned int v7; // edi
  unsigned __int64 v8; // rcx
  __int128 v10; // [rsp+20h] [rbp-60h] BYREF
  __int128 v11; // [rsp+30h] [rbp-50h]
  __int128 v12; // [rsp+40h] [rbp-40h]
  __int128 v13; // [rsp+50h] [rbp-30h]
  __int128 v14; // [rsp+60h] [rbp-20h]
  __int64 v15; // [rsp+70h] [rbp-10h]

  CurrentThread = KeGetCurrentThread();
  v3 = BugCheckParameter1 + 135;
  v15 = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  while ( 1 )
  {
    PsGetProcessDeepFreezeStats(BugCheckParameter1, &v10);
    v6 = *((_QWORD *)&v10 + 1) - v11 - BugCheckParameter1[289];
    --CurrentThread->KernelApcDisable;
    v7 = 0;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)v3, 0LL);
    v8 = BugCheckParameter1[292];
    if ( v8 >> 61 != 3 && BugCheckParameter1[291] <= (unsigned __int64)v10 )
    {
      *(_QWORD *)&v13 = BugCheckParameter1[291];
      LODWORD(v15) = v8 >> 61;
      *((_QWORD *)&v13 + 1) = v8 & 0x1FFFFFFFFFFFFFFFLL;
      if ( a2 == 5 && v8 >> 61 == 1 )
        a2 = 6;
      BugCheckParameter1[291] = v10;
      BugCheckParameter1[292] = v6 & 0x1FFFFFFFFFFFFFFFLL | ((__int64)a2 << 61);
      v7 = 1;
    }
    if ( (_InterlockedExchangeAdd64(v3, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v3);
    KeAbPostRelease((ULONG_PTR)v3);
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
    if ( BugCheckParameter1[292] >> 61 == 3 )
      break;
    if ( v7 )
      goto LABEL_10;
  }
  if ( !v7 )
    return v7;
LABEL_10:
  v12 = v10;
  *((_QWORD *)&v14 + 1) = v11;
  *(_QWORD *)&v14 = v6;
  HIDWORD(v15) = a2;
  EtwTraceAppStateChange((ULONG_PTR)BugCheckParameter1);
  return v7;
}
