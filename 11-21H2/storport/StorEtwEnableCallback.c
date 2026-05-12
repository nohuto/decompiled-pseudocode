/*
 * XREFs of StorEtwEnableCallback @ 0x1C005A5CC
 * Callers:
 *     McGenControlCallbackV2 @ 0x1C003D1E0 (McGenControlCallbackV2.c)
 * Callees:
 *     RaidGetPortData @ 0x1C00035F0 (RaidGetPortData.c)
 *     RaidReleasePortData @ 0x1C0003620 (RaidReleasePortData.c)
 *     RaidAcquireAdapterRemoveLock @ 0x1C000BA44 (RaidAcquireAdapterRemoveLock.c)
 *     RaidAllocatePool @ 0x1C000F8A0 (RaidAllocatePool.c)
 *     StorAdapterNeedsUpdate @ 0x1C005A2E0 (StorAdapterNeedsUpdate.c)
 *     StorEnableAdapterDiagnosticEvents @ 0x1C005A3A8 (StorEnableAdapterDiagnosticEvents.c)
 *     StorEnableAdapterEtwTracing @ 0x1C005A430 (StorEnableAdapterEtwTracing.c)
 *     StorEnableAdapterHealthEvents @ 0x1C005A4AC (StorEnableAdapterHealthEvents.c)
 *     StorEnableAdapterOperationalEvents @ 0x1C005A53C (StorEnableAdapterOperationalEvents.c)
 */

void __fastcall StorEtwEnableCallback(__int64 a1, int a2, __int64 a3, int a4, __int64 a5, __int64 a6)
{
  char v6; // r12
  bool v7; // al
  __int64 PortData; // rax
  char *v9; // r13
  char *v10; // r14
  char *i; // rdi
  __int64 *Pool; // r15
  __int64 v13; // rbx
  __int64 *v14; // r14
  __int64 *v15; // rsi
  __int64 *v16; // rbp
  __int64 *v17; // rsi
  __int64 v18; // rbp
  __int64 *v19; // rsi
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-58h] BYREF
  char *v21; // [rsp+90h] [rbp+8h]
  char v22; // [rsp+98h] [rbp+10h]

  v22 = a2;
  v6 = a2;
  StorEtwLoggingEnabled = a2 != 0;
  StorRequestThresholdTime = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( (*(_QWORD *)&a4 & 0x100000LL) != 0 && a6 && *(_DWORD *)(a6 + 8) == 8 )
    StorRequestThresholdTime = **(_QWORD **)a6;
  StorMiniportOperationalEventsEnabled = (byte_1C00799E5 & 4) != 0 || (byte_1C00799E4 & 0x90) != 0;
  v7 = (byte_1C00799E5 & 0x30) != 0 || (byte_1C00799E6 & 0x10) != 0;
  StorMiniportHealthEventsEnabled = v7;
  StorMiniportDiagnosticEventsEnabled = (byte_1C00799E3 & 0x10) != 0;
  PortData = RaidGetPortData();
  v21 = (char *)PortData;
  v9 = (char *)PortData;
  if ( PortData )
  {
    v10 = (char *)(PortData + 8);
    for ( i = *(char **)(PortData + 8); i != v10; i = *(char **)i )
    {
      Pool = 0LL;
      v13 = 0LL;
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)i + 7, &LockHandle);
      if ( *((_DWORD *)i + 12) )
      {
        v14 = (__int64 *)(i + 32);
        v15 = (__int64 *)*((_QWORD *)i + 4);
        if ( v15 != (__int64 *)(i + 32) )
        {
          do
          {
            v16 = v15 - 8;
            if ( StorAdapterNeedsUpdate((__int64)(v15 - 8), v6) )
              v13 = (unsigned int)(v13 + 1);
            v15 = (__int64 *)*v15;
          }
          while ( v15 != v14 );
          if ( (_DWORD)v13 )
          {
            Pool = (__int64 *)RaidAllocatePool(64LL, 8LL * (unsigned int)v13, 1413833042LL, v16[1]);
            if ( Pool )
            {
              v17 = (__int64 *)*v14;
              v18 = 0LL;
              if ( (__int64 *)*v14 != v14 )
              {
                do
                {
                  if ( (unsigned int)v18 >= (unsigned int)v13 )
                    break;
                  if ( StorAdapterNeedsUpdate((__int64)(v17 - 8), v22)
                    && (int)RaidAcquireAdapterRemoveLock((__int64)(v17 - 8)) >= 0 )
                  {
                    Pool[v18] = (__int64)(v17 - 8);
                    v18 = (unsigned int)(v18 + 1);
                  }
                  v17 = (__int64 *)*v17;
                }
                while ( v17 != v14 );
                v9 = v21;
                v6 = v22;
              }
              v13 = (unsigned int)v18;
            }
          }
        }
        v10 = v9 + 8;
      }
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      if ( Pool )
      {
        if ( (_DWORD)v13 )
        {
          v19 = Pool;
          do
          {
            StorEnableAdapterEtwTracing(*v19, v6);
            StorEnableAdapterOperationalEvents(*v19);
            StorEnableAdapterHealthEvents(*v19);
            StorEnableAdapterDiagnosticEvents(*v19);
            ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*v19++ + 296));
            --v13;
          }
          while ( v13 );
        }
        ExFreePoolWithTag(Pool, 0x54456152u);
      }
    }
    RaidReleasePortData(v9);
  }
}
