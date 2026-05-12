/*
 * XREFs of StorpLogStatistics @ 0x1C00037DC
 * Callers:
 *     StorpTraceLoggingTelemetryTimerDpcRoutine @ 0x1C0003470 (StorpTraceLoggingTelemetryTimerDpcRoutine.c)
 * Callees:
 *     StorpLogPerAdapterStatistics @ 0x1C0003300 (StorpLogPerAdapterStatistics.c)
 *     RaidGetPortData @ 0x1C00035F0 (RaidGetPortData.c)
 *     RaidReleasePortData @ 0x1C0003620 (RaidReleasePortData.c)
 *     StorpLogPerUnitStatistics @ 0x1C00039A4 (StorpLogPerUnitStatistics.c)
 *     RaidAcquireAdapterRemoveLock @ 0x1C000BA44 (RaidAcquireAdapterRemoveLock.c)
 */

void __fastcall StorpLogStatistics(unsigned __int16 a1)
{
  __int16 v2; // r12
  __int64 PortData; // rax
  _QWORD *v4; // r13
  _QWORD *v5; // rdi
  _QWORD *v6; // r13
  KSPIN_LOCK *v7; // r14
  KSPIN_LOCK *v8; // rsi
  __int64 *i; // r14
  struct _KLOCK_QUEUE_HANDLE v10; // [rsp+20h] [rbp-58h] BYREF
  struct _KLOCK_QUEUE_HANDLE v11; // [rsp+38h] [rbp-40h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-28h] BYREF
  __int16 v13; // [rsp+C0h] [rbp+48h]
  __int16 v14; // [rsp+C8h] [rbp+50h]
  _QWORD *v15; // [rsp+D0h] [rbp+58h]
  _QWORD *v16; // [rsp+D8h] [rbp+60h]

  v2 = a1 & 0x43;
  v13 = a1 & 0x1FC;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v14 = v2;
  memset(&v11, 0, sizeof(v11));
  memset(&v10, 0, sizeof(v10));
  PortData = RaidGetPortData();
  v16 = (_QWORD *)PortData;
  v4 = (_QWORD *)PortData;
  if ( PortData )
  {
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(PortData + 24), &LockHandle);
    v5 = (_QWORD *)v4[1];
    v15 = v4 + 1;
    if ( v5 != v4 + 1 )
    {
      v6 = v4 + 1;
      do
      {
        KeAcquireInStackQueuedSpinLock(v5 + 7, &v11);
        v7 = v5 + 4;
        v8 = (KSPIN_LOCK *)v5[4];
        if ( v8 != v5 + 4 )
        {
          do
          {
            if ( (int)RaidAcquireAdapterRemoveLock(v8 - 8) >= 0 )
            {
              if ( v2 )
                StorpLogPerAdapterStatistics((__int64)(v8 - 8));
              if ( v13 )
              {
                KeAcquireInStackQueuedSpinLock(v8 + 9, &v10);
                for ( i = (__int64 *)v8[10]; i != (__int64 *)(v8 + 10); i = (__int64 *)*i )
                  StorpLogPerUnitStatistics(i - 7, a1);
                KeReleaseInStackQueuedSpinLock(&v10);
                v2 = v14;
                v7 = v5 + 4;
              }
              if ( (a1 & 0x20) != 0 )
                *((_DWORD *)v8 + 1289) = 0;
              if ( (a1 & 0x40) != 0 )
                v8[645] = 0LL;
              ExReleaseRundownProtectionCacheAware((PEX_RUNDOWN_REF_CACHE_AWARE)v8[29]);
            }
            v8 = (KSPIN_LOCK *)*v8;
          }
          while ( v8 != v7 );
          v6 = v15;
        }
        KeReleaseInStackQueuedSpinLock(&v11);
        v5 = (_QWORD *)*v5;
      }
      while ( v5 != v6 );
      v4 = v16;
    }
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    RaidReleasePortData(v4);
  }
}
