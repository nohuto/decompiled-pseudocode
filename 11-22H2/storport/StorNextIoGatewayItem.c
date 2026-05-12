/*
 * XREFs of StorNextIoGatewayItem @ 0x1C0019328
 * Callers:
 *     RaidAdapterRestartQueues @ 0x1C001921C (RaidAdapterRestartQueues.c)
 * Callees:
 *     RaAllocateIoResource @ 0x1C0004A1C (RaAllocateIoResource.c)
 *     RaidZeroXrb @ 0x1C0004AA4 (RaidZeroXrb.c)
 *     StorIsIoGatewayPaused @ 0x1C00194C0 (StorIsIoGatewayPaused.c)
 *     RaidGetQosEntryForDeviceEntry @ 0x1C00207F4 (RaidGetQosEntryForDeviceEntry.c)
 *     RaFreeIoResource @ 0x1C0021F64 (RaFreeIoResource.c)
 *     RaAttemptHighWaterMarkIncrease @ 0x1C00655F4 (RaAttemptHighWaterMarkIncrease.c)
 */

__int64 *__fastcall StorNextIoGatewayItem(char *Context, _QWORD *a2)
{
  __int64 *v2; // rdi
  char v3; // bp
  PSLIST_ENTRY IoResource; // rsi
  __int64 v8; // rdx
  __int64 v9; // r8
  _QWORD *v10; // rax
  __int64 v11; // rcx
  unsigned int v12; // ecx
  _QWORD *QosEntryForDeviceEntry; // rax
  __int64 v14; // rdx
  _QWORD *v15; // rcx
  __int64 v16; // rdx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  v2 = 0LL;
  v3 = 0;
  if ( *(_DWORD *)(*((_QWORD *)Context + 6) + 932LL) )
  {
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)Context, &LockHandle);
    v3 = 1;
  }
  if ( *((_DWORD *)Context + 6) )
  {
    if ( *((_DWORD *)Context + 10) != 1 && !(unsigned __int8)StorIsIoGatewayPaused(Context) )
    {
      IoResource = RaAllocateIoResource((__int64)(Context + 64));
      if ( IoResource
        || *((_DWORD *)Context + 34) < *((_DWORD *)Context + 36)
        && (RaAttemptHighWaterMarkIncrease(Context), (IoResource = RaAllocateIoResource((__int64)(Context + 64))) != 0LL) )
      {
        if ( !v3 )
          KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)Context, &LockHandle);
        if ( !*((_DWORD *)Context + 6) || *((int *)Context + 10) > 0 || (unsigned __int8)StorIsIoGatewayPaused(Context) )
          goto LABEL_23;
        v10 = Context + 8;
        v2 = (__int64 *)*((_QWORD *)Context + 1);
        if ( (char *)v2[1] == Context + 8 )
        {
          v11 = *v2;
          if ( *(__int64 **)(*v2 + 8) == v2 )
          {
            *v10 = v11;
            *(_QWORD *)(v11 + 8) = v10;
            _InterlockedIncrement((volatile signed __int32 *)Context + 48);
            v12 = *((_DWORD *)Context + 48);
            if ( v12 <= *((_DWORD *)Context + 9) )
              v12 = *((_DWORD *)Context + 9);
            --*((_DWORD *)Context + 6);
            *((_DWORD *)Context + 9) = v12;
            if ( (*((_BYTE *)v2 + 22) & 0x20) == 0 )
              goto LABEL_23;
            QosEntryForDeviceEntry = (_QWORD *)RaidGetQosEntryForDeviceEntry(v2, v8, v9);
            v14 = *QosEntryForDeviceEntry;
            if ( *(_QWORD **)(*QosEntryForDeviceEntry + 8LL) == QosEntryForDeviceEntry )
            {
              v15 = (_QWORD *)QosEntryForDeviceEntry[1];
              if ( (_QWORD *)*v15 == QosEntryForDeviceEntry )
              {
                *v15 = v14;
                *(_QWORD *)(v14 + 8) = v15;
LABEL_23:
                KeReleaseInStackQueuedSpinLock(&LockHandle);
                if ( v2 )
                {
                  a2[3] = IoResource + 53;
                  a2[2] = IoResource + 3;
                  a2[1] = IoResource + 69;
                  RaidZeroXrb(
                    (__int64)&IoResource[3],
                    v16,
                    *((_DWORD *)&IoResource[49].Next + 2),
                    *((void **)&IoResource[50].Next + 1));
                }
                else
                {
                  RaFreeIoResource(Context + 64, IoResource);
                }
                return v2;
              }
            }
          }
        }
        __fastfail(3u);
      }
    }
  }
  if ( v3 )
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  return v2;
}
