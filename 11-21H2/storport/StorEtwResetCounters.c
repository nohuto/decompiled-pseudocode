/*
 * XREFs of StorEtwResetCounters @ 0x1C0002B64
 * Callers:
 *     StorpTraceLoggingTelemetryTimerDpcRoutine @ 0x1C0003470 (StorpTraceLoggingTelemetryTimerDpcRoutine.c)
 * Callees:
 *     RaidGetPortData @ 0x1C00035F0 (RaidGetPortData.c)
 *     RaidReleasePortData @ 0x1C0003620 (RaidReleasePortData.c)
 *     RaUnitReleaseRemoveLock @ 0x1C000B52C (RaUnitReleaseRemoveLock.c)
 *     RaUnitAcquireRemoveLock @ 0x1C000B570 (RaUnitAcquireRemoveLock.c)
 *     RaidAcquireAdapterRemoveLock @ 0x1C000BA44 (RaidAcquireAdapterRemoveLock.c)
 */

__int64 __fastcall StorEtwResetCounters(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v5; // r14
  _QWORD *v6; // r13
  _QWORD *i; // rbx
  __int64 *v8; // r15
  __int64 *v9; // rsi
  __int64 *v10; // r12
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
      v8 = i + 4;
      v9 = (__int64 *)i[4];
      if ( v9 != i + 4 )
      {
        do
        {
          if ( (int)RaidAcquireAdapterRemoveLock(v9 - 8) >= 0 )
          {
            *((_WORD *)v9 + 2888) = 0;
            *((_WORD *)v9 + 2889) = 0;
            *((_WORD *)v9 + 2890) = 0;
            KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)v9 + 9, &v11);
            v10 = (__int64 *)v9[10];
            if ( v10 != v9 + 10 )
            {
              do
              {
                if ( (int)RaUnitAcquireRemoveLock(v10 - 7, 0LL, 0LL) >= 0 )
                {
                  *((_WORD *)v10 + 1668) = 0;
                  *((_WORD *)v10 + 1669) = 0;
                  *((_WORD *)v10 + 1670) = 0;
                  RaUnitReleaseRemoveLock(v10 - 7);
                }
                v10 = (__int64 *)*v10;
              }
              while ( v10 != v9 + 10 );
              v8 = i + 4;
            }
            KeReleaseInStackQueuedSpinLock(&v11);
            ExReleaseRundownProtectionCacheAware((PEX_RUNDOWN_REF_CACHE_AWARE)v9[29]);
          }
          v9 = (__int64 *)*v9;
        }
        while ( v9 != v8 );
        v6 = (_QWORD *)(v5 + 8);
      }
      KeReleaseInStackQueuedSpinLock(&v12);
    }
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    return RaidReleasePortData(v5);
  }
  return result;
}
