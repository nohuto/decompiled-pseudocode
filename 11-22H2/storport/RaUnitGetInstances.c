/*
 * XREFs of RaUnitGetInstances @ 0x1C005DD38
 * Callers:
 *     RaUnitSendInstanceCounters @ 0x1C005E484 (RaUnitSendInstanceCounters.c)
 * Callees:
 *     RaUnitAcquireRemoveLock @ 0x1C0007014 (RaUnitAcquireRemoveLock.c)
 *     RaidAcquireAdapterRemoveLock @ 0x1C0007534 (RaidAcquireAdapterRemoveLock.c)
 *     RaidGetPortData @ 0x1C00216A4 (RaidGetPortData.c)
 *     RaidReleasePortData @ 0x1C00216D4 (RaidReleasePortData.c)
 */

__int64 __fastcall RaUnitGetInstances(__int64 a1, unsigned int *a2)
{
  __int64 v2; // r12
  __int64 v4; // r14
  __int64 PortData; // rax
  _QWORD *v6; // rsi
  _QWORD *v7; // rbx
  _QWORD *v8; // rsi
  KSPIN_LOCK *v9; // rdi
  KSPIN_LOCK *v10; // rsi
  __int64 *v11; // r14
  __int64 v12; // rax
  unsigned int v13; // ecx
  struct _KLOCK_QUEUE_HANDLE v15; // [rsp+20h] [rbp-50h] BYREF
  struct _KLOCK_QUEUE_HANDLE v16; // [rsp+38h] [rbp-38h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-20h] BYREF
  _QWORD *v19; // [rsp+C0h] [rbp+50h]
  _QWORD *v20; // [rsp+C8h] [rbp+58h]

  v2 = 0LL;
  v4 = a1;
  memset(&v16, 0, sizeof(v16));
  memset(&LockHandle, 0, sizeof(LockHandle));
  memset(&v15, 0, sizeof(v15));
  if ( !a1 )
    *a2 = 0;
  PortData = RaidGetPortData();
  v20 = (_QWORD *)PortData;
  v6 = (_QWORD *)PortData;
  if ( PortData )
  {
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(PortData + 24), &LockHandle);
    v7 = (_QWORD *)v6[1];
    v19 = v6 + 1;
    if ( v7 != v6 + 1 )
    {
      v8 = v6 + 1;
      while ( 1 )
      {
        KeAcquireInStackQueuedSpinLock(v7 + 7, &v16);
        v9 = (KSPIN_LOCK *)v7[4];
        if ( v9 == v7 + 4 )
          goto LABEL_22;
        v10 = v7 + 4;
        do
        {
          if ( (int)RaidAcquireAdapterRemoveLock((__int64)(v9 - 8)) < 0 )
            goto LABEL_20;
          KeAcquireInStackQueuedSpinLock(v9 + 10, &v15);
          v11 = (__int64 *)v9[11];
          if ( v11 == (__int64 *)(v9 + 11) )
            goto LABEL_19;
          v12 = a1;
          do
          {
            v13 = *a2;
            if ( v12 )
            {
              if ( (unsigned int)v2 >= v13 )
                goto LABEL_17;
              if ( (int)RaUnitAcquireRemoveLock((__int64)(v11 - 7), 0LL, 0LL) >= 0 )
              {
                *(_QWORD *)(a1 + 8 * v2) = v11 - 7;
                v2 = (unsigned int)(v2 + 1);
              }
            }
            else
            {
              *a2 = v13 + 1;
            }
            v12 = a1;
LABEL_17:
            v11 = (__int64 *)*v11;
          }
          while ( v11 != (__int64 *)(v9 + 11) );
          v10 = v7 + 4;
LABEL_19:
          KeReleaseInStackQueuedSpinLock(&v15);
          ExReleaseRundownProtectionCacheAware((PEX_RUNDOWN_REF_CACHE_AWARE)v9[29]);
LABEL_20:
          v9 = (KSPIN_LOCK *)*v9;
        }
        while ( v9 != v10 );
        v8 = v19;
LABEL_22:
        KeReleaseInStackQueuedSpinLock(&v16);
        v7 = (_QWORD *)*v7;
        if ( v7 == v8 )
        {
          v6 = v20;
          v4 = a1;
          break;
        }
      }
    }
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    RaidReleasePortData(v6);
    if ( v4 )
      *a2 = v2;
  }
  return 0LL;
}
