/*
 * XREFs of StorSubmitIoGatewayItem @ 0x1C0004920
 * Callers:
 *     StorPortUnitActiveConditionStep2 @ 0x1C000152C (StorPortUnitActiveConditionStep2.c)
 *     RaidUnitCompleteRequest @ 0x1C0001770 (RaidUnitCompleteRequest.c)
 *     RaidRestartIoQueue @ 0x1C00194E0 (RaidRestartIoQueue.c)
 * Callees:
 *     RaAllocateIoResource @ 0x1C0004A1C (RaAllocateIoResource.c)
 *     RaidZeroXrb @ 0x1C0004AA4 (RaidZeroXrb.c)
 *     StorIsIoGatewayPaused @ 0x1C00194C0 (StorIsIoGatewayPaused.c)
 *     RaidGetQosEntryForDeviceEntry @ 0x1C00207F4 (RaidGetQosEntryForDeviceEntry.c)
 *     RaAttemptHighWaterMarkIncrease @ 0x1C00655F4 (RaAttemptHighWaterMarkIncrease.c)
 */

char __fastcall StorSubmitIoGatewayItem(__int64 a1, __int64 a2, _QWORD *a3)
{
  unsigned int v3; // r9d
  __int64 v7; // rbx
  int *v8; // rsi
  __int64 IoResource; // rdx
  __int64 v11; // rbx
  ULONG CurrentProcessorNumber; // eax
  unsigned int v13; // ecx
  unsigned int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // r8
  _QWORD *v17; // rcx
  _QWORD *v18; // rcx
  _QWORD *QosEntryForDeviceEntry; // rax
  __int64 v20; // rbx
  _QWORD *v21; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  v3 = 0;
  if ( *(_DWORD *)(*(_QWORD *)(a1 + 48) + 904LL) > 1u )
  {
    v11 = *(_QWORD *)(a1 + 48);
    CurrentProcessorNumber = KeGetCurrentProcessorNumberEx(0LL);
    v13 = *(_DWORD *)(v11 + 904);
    v14 = CurrentProcessorNumber / *(_DWORD *)(v11 + 912);
    v3 = v14;
    if ( v14 >= v13 )
      v3 = v14 % v13;
  }
  v7 = a1 + 320LL * v3;
  if ( v7 && *(_DWORD *)(*(_QWORD *)(v7 + 48) + 924LL) )
  {
    v8 = (int *)(v7 + 40);
  }
  else
  {
    v8 = (int *)(v7 + 40);
    if ( *(int *)(v7 + 40) <= 0 )
      goto LABEL_5;
  }
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)v7, &LockHandle);
  if ( (unsigned __int8)StorIsIoGatewayPaused(v7) || *v8 > 0 )
  {
    v17 = *(_QWORD **)(v7 + 16);
    if ( *v17 != v7 + 8 )
      goto LABEL_25;
    *(_QWORD *)a2 = v7 + 8;
    *(_QWORD *)(a2 + 8) = v17;
    *v17 = a2;
    *(_QWORD *)(v7 + 16) = a2;
    goto LABEL_21;
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
LABEL_5:
  IoResource = RaAllocateIoResource(v7 + 64);
  if ( !IoResource )
  {
    if ( *(_DWORD *)(v7 + 136) >= *(_DWORD *)(v7 + 144)
      || (RaAttemptHighWaterMarkIncrease((PVOID)v7), (IoResource = RaAllocateIoResource(v7 + 64)) == 0) )
    {
      KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)v7, &LockHandle);
      v18 = *(_QWORD **)(v7 + 16);
      if ( *v18 != v7 + 8 )
        goto LABEL_25;
      *(_QWORD *)a2 = v7 + 8;
      *(_QWORD *)(a2 + 8) = v18;
      *v18 = a2;
      *(_QWORD *)(v7 + 16) = a2;
      *v8 = 1;
LABEL_21:
      ++*(_DWORD *)(v7 + 24);
      if ( (*(_BYTE *)(a2 + 22) & 0x20) == 0 )
      {
LABEL_24:
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        return 1;
      }
      QosEntryForDeviceEntry = (_QWORD *)RaidGetQosEntryForDeviceEntry(a2, v15, v16);
      v20 = v7 + 264;
      v21 = *(_QWORD **)(v20 + 8);
      if ( *v21 == v20 )
      {
        *QosEntryForDeviceEntry = v20;
        QosEntryForDeviceEntry[1] = v21;
        *v21 = QosEntryForDeviceEntry;
        *(_QWORD *)(v20 + 8) = QosEntryForDeviceEntry;
        goto LABEL_24;
      }
LABEL_25:
      __fastfail(3u);
    }
  }
  if ( (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(v7 + 192)) >= *(_DWORD *)(v7 + 36) )
    *(_DWORD *)(v7 + 36) = *(_DWORD *)(v7 + 192);
  a3[3] = IoResource + 848;
  a3[2] = IoResource + 48;
  a3[1] = IoResource + 1104;
  RaidZeroXrb(
    IoResource + 48,
    IoResource,
    *(unsigned int *)(IoResource + 792),
    *(_QWORD *)(IoResource + 808),
    LockHandle.LockQueue.Next,
    LockHandle.LockQueue.Lock,
    *(_QWORD *)&LockHandle.OldIrql);
  return 0;
}
