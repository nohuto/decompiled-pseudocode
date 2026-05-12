/*
 * XREFs of StorEtwResetCounters @ 0x1C00214EC
 * Callers:
 *     StorpTraceLoggingTelemetryTimerDpcRoutine @ 0x1C00213E0 (StorpTraceLoggingTelemetryTimerDpcRoutine.c)
 * Callees:
 *     RaUnitAcquireRemoveLock @ 0x1C0007014 (RaUnitAcquireRemoveLock.c)
 *     RaUnitReleaseRemoveLock @ 0x1C00070DC (RaUnitReleaseRemoveLock.c)
 *     RaidAcquireAdapterRemoveLock @ 0x1C0007534 (RaidAcquireAdapterRemoveLock.c)
 *     RaidGetPortData @ 0x1C00216A4 (RaidGetPortData.c)
 *     RaidReleasePortData @ 0x1C00216D4 (RaidReleasePortData.c)
 */

__int64 __fastcall StorEtwResetCounters(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v5; // r14
  _QWORD *v6; // r13
  _QWORD *i; // rbx
  __int64 *v8; // r12
  __int64 *v9; // r15
  __int64 *v10; // rsi
  struct _KLOCK_QUEUE_HANDLE v11; // [rsp+20h] [rbp-50h] BYREF
  struct _KLOCK_QUEUE_HANDLE v12; // [rsp+38h] [rbp-38h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-20h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  *(_QWORD *)&v12.OldIrql = 0LL;
  result = RaidGetPortData(a1, a2, a3, a4, 0LL, 0LL, 0LL, 0LL, 0LL);
  v5 = result;
  if ( result )
  {
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(result + 24), &LockHandle);
    v6 = (_QWORD *)(v5 + 8);
    for ( i = *(_QWORD **)(v5 + 8); i != v6; i = (_QWORD *)*i )
    {
      KeAcquireInStackQueuedSpinLock(i + 7, &v12);
      v9 = i + 4;
      v10 = (__int64 *)i[4];
      if ( v10 != i + 4 )
      {
        do
        {
          if ( (int)RaidAcquireAdapterRemoveLock((__int64)(v10 - 8)) >= 0 )
          {
            *((_WORD *)v10 + 2920) = 0;
            *((_WORD *)v10 + 2921) = 0;
            *((_WORD *)v10 + 2922) = 0;
            KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)v10 + 10, &v11);
            v8 = (__int64 *)v10[11];
            if ( v8 != v10 + 11 )
            {
              do
              {
                if ( (int)RaUnitAcquireRemoveLock((__int64)(v8 - 7), 0LL, 0LL) >= 0 )
                {
                  *((_WORD *)v8 + 1692) = 0;
                  *((_WORD *)v8 + 1693) = 0;
                  *((_WORD *)v8 + 1694) = 0;
                  RaUnitReleaseRemoveLock((__int64)(v8 - 7));
                }
                v8 = (__int64 *)*v8;
              }
              while ( v8 != v10 + 11 );
              v9 = i + 4;
            }
            KeReleaseInStackQueuedSpinLock(&v11);
            ExReleaseRundownProtectionCacheAware((PEX_RUNDOWN_REF_CACHE_AWARE)v10[29]);
          }
          v10 = (__int64 *)*v10;
        }
        while ( v10 != v9 );
        v6 = (_QWORD *)(v5 + 8);
      }
      KeReleaseInStackQueuedSpinLock(&v12);
    }
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    return RaidReleasePortData(v5);
  }
  return result;
}
