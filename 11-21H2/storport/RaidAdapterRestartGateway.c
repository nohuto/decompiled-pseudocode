/*
 * XREFs of RaidAdapterRestartGateway @ 0x1C001DF98
 * Callers:
 *     RaidAdapterRestartQueues @ 0x1C001DEE0 (RaidAdapterRestartQueues.c)
 * Callees:
 *     RaAllocateIoResource @ 0x1C0006CC8 (RaAllocateIoResource.c)
 *     RaidZeroXrb @ 0x1C0006D50 (RaidZeroXrb.c)
 *     StorIsIoGatewayPaused @ 0x1C0006E4C (StorIsIoGatewayPaused.c)
 *     RaidGetQosEntryForDeviceEntry @ 0x1C00225D4 (RaidGetQosEntryForDeviceEntry.c)
 *     RaFreeIoResource @ 0x1C0022B9C (RaFreeIoResource.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024050 (_guard_dispatch_icall_nop.c)
 *     RaAttemptHighWaterMarkIncrease @ 0x1C00586F4 (RaAttemptHighWaterMarkIncrease.c)
 */

void __fastcall RaidAdapterRestartGateway(char *Context)
{
  __int64 *v2; // rdi
  __int64 v3; // rax
  char v4; // r14
  PSLIST_ENTRY IoResource; // rsi
  _QWORD *v6; // rax
  __int64 v7; // rcx
  unsigned int v8; // ecx
  _QWORD *QosEntryForDeviceEntry; // rax
  __int64 v10; // rdx
  _QWORD *v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-40h] BYREF
  __int128 v15; // [rsp+48h] [rbp-28h] BYREF
  PSLIST_ENTRY v16; // [rsp+58h] [rbp-18h]
  PSLIST_ENTRY v17; // [rsp+60h] [rbp-10h]

  v15 = 0LL;
  v16 = 0LL;
  LODWORD(v17) = 0;
  while ( 1 )
  {
    v2 = 0LL;
    v3 = *((_QWORD *)Context + 6);
    v4 = 0;
    memset(&LockHandle, 0, sizeof(LockHandle));
    if ( *(_DWORD *)(v3 + 868) )
    {
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)Context, &LockHandle);
      v4 = 1;
    }
    if ( !*((_DWORD *)Context + 6) )
      break;
    if ( *((_DWORD *)Context + 10) == 1 )
      break;
    if ( StorIsIoGatewayPaused((__int64)Context) )
      break;
    IoResource = RaAllocateIoResource((__int64)(Context + 64));
    if ( !IoResource )
    {
      if ( *((_DWORD *)Context + 34) >= *((_DWORD *)Context + 36) )
        break;
      RaAttemptHighWaterMarkIncrease(Context);
      IoResource = RaAllocateIoResource((__int64)(Context + 64));
      if ( !IoResource )
        break;
    }
    if ( !v4 )
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)Context, &LockHandle);
    if ( *((_DWORD *)Context + 6) && *((int *)Context + 10) <= 0 && !StorIsIoGatewayPaused((__int64)Context) )
    {
      v6 = Context + 8;
      v2 = (__int64 *)*((_QWORD *)Context + 1);
      if ( (char *)v2[1] != Context + 8 || (v7 = *v2, *(__int64 **)(*v2 + 8) != v2) )
LABEL_27:
        __fastfail(3u);
      *v6 = v7;
      *(_QWORD *)(v7 + 8) = v6;
      _InterlockedIncrement((volatile signed __int32 *)Context + 48);
      v8 = *((_DWORD *)Context + 48);
      if ( v8 <= *((_DWORD *)Context + 9) )
        v8 = *((_DWORD *)Context + 9);
      --*((_DWORD *)Context + 6);
      *((_DWORD *)Context + 9) = v8;
      if ( (*((_BYTE *)v2 + 22) & 0x20) != 0 )
      {
        QosEntryForDeviceEntry = (_QWORD *)RaidGetQosEntryForDeviceEntry(v2);
        v10 = *QosEntryForDeviceEntry;
        if ( *(_QWORD **)(*QosEntryForDeviceEntry + 8LL) != QosEntryForDeviceEntry )
          goto LABEL_27;
        v11 = (_QWORD *)QosEntryForDeviceEntry[1];
        if ( (_QWORD *)*v11 != QosEntryForDeviceEntry )
          goto LABEL_27;
        *v11 = v10;
        *(_QWORD *)(v10 + 8) = v11;
      }
    }
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    if ( !v2 )
    {
      RaFreeIoResource(Context + 64, IoResource);
      return;
    }
    v17 = IoResource + 53;
    v16 = IoResource + 3;
    *((_QWORD *)&v15 + 1) = IoResource + 69;
    RaidZeroXrb(
      (__int64)&IoResource[3],
      v12,
      *((_DWORD *)&IoResource[49].Next + 2),
      *((void **)&IoResource[50].Next + 1));
    v13 = *(_QWORD *)(v2[8] + 32);
    (*(void (__fastcall **)(_QWORD, __int64 *, __int128 *, _QWORD))(v13 + 648))(
      *(_QWORD *)(v13 + 640),
      v2 - 15,
      &v15,
      0LL);
  }
  if ( v4 )
    KeReleaseInStackQueuedSpinLock(&LockHandle);
}
