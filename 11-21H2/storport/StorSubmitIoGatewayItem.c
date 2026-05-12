/*
 * XREFs of StorSubmitIoGatewayItem @ 0x1C00062BC
 * Callers:
 *     StorPortAdapterActiveCondition @ 0x1C00063C0 (StorPortAdapterActiveCondition.c)
 *     RaidUnitCompleteRequest @ 0x1C0006E70 (RaidUnitCompleteRequest.c)
 *     RaidRestartIoQueue @ 0x1C0009220 (RaidRestartIoQueue.c)
 * Callees:
 *     RaAllocateIoResource @ 0x1C0006CC8 (RaAllocateIoResource.c)
 *     RaidZeroXrb @ 0x1C0006D50 (RaidZeroXrb.c)
 *     StorIsIoGatewayPaused @ 0x1C0006E4C (StorIsIoGatewayPaused.c)
 *     RaidGetQosEntryForDeviceEntry @ 0x1C00225D4 (RaidGetQosEntryForDeviceEntry.c)
 *     RaAttemptHighWaterMarkIncrease @ 0x1C00586F4 (RaAttemptHighWaterMarkIncrease.c)
 */

char __fastcall StorSubmitIoGatewayItem(__int64 a1, __int64 a2, _QWORD *a3)
{
  unsigned int v3; // r9d
  __int64 v5; // rdi
  __int64 v7; // rbx
  KSPIN_LOCK *v8; // rcx
  int *v9; // rsi
  __int64 IoResource; // rdx
  __int64 v12; // rbx
  ULONG CurrentProcessorNumber; // eax
  unsigned int v14; // ecx
  unsigned int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // r8
  _QWORD *v18; // rcx
  _QWORD *v19; // rcx
  _QWORD *QosEntryForDeviceEntry; // rax
  __int64 v21; // rbx
  _QWORD *v22; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  v3 = 0;
  v5 = a2;
  if ( *(_DWORD *)(*(_QWORD *)(a1 + 48) + 840LL) > 1u )
  {
    v12 = *(_QWORD *)(a1 + 48);
    CurrentProcessorNumber = KeGetCurrentProcessorNumberEx(0LL);
    v14 = *(_DWORD *)(v12 + 840);
    a2 = CurrentProcessorNumber % *(_DWORD *)(v12 + 848);
    v15 = CurrentProcessorNumber / *(_DWORD *)(v12 + 848);
    v3 = v15;
    if ( v15 >= v14 )
    {
      a2 = v15 % v14;
      v3 = v15 % v14;
    }
  }
  v7 = a1 + 320LL * v3;
  v9 = (int *)(v7 + 40);
  if ( (unsigned __int8)StorIsIoGatewayPaused(v7, a2, a3) || *v9 > 0 )
  {
    KeAcquireInStackQueuedSpinLockAtDpcLevel(v8, &LockHandle);
    if ( (unsigned __int8)StorIsIoGatewayPaused(v7, v16, v17) || *v9 > 0 )
    {
      v19 = *(_QWORD **)(v7 + 16);
      if ( *v19 != v7 + 8 )
        goto LABEL_23;
      *(_QWORD *)v5 = v7 + 8;
      *(_QWORD *)(v5 + 8) = v19;
      *v19 = v5;
      *(_QWORD *)(v7 + 16) = v5;
LABEL_19:
      ++*(_DWORD *)(v7 + 24);
      if ( (*(_BYTE *)(v5 + 22) & 0x20) == 0 )
      {
LABEL_22:
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        return 1;
      }
      QosEntryForDeviceEntry = (_QWORD *)RaidGetQosEntryForDeviceEntry(v5);
      v21 = v7 + 264;
      v22 = *(_QWORD **)(v21 + 8);
      if ( *v22 == v21 )
      {
        *QosEntryForDeviceEntry = v21;
        QosEntryForDeviceEntry[1] = v22;
        *v22 = QosEntryForDeviceEntry;
        *(_QWORD *)(v21 + 8) = QosEntryForDeviceEntry;
        goto LABEL_22;
      }
LABEL_23:
      __fastfail(3u);
    }
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  }
  IoResource = RaAllocateIoResource(v7 + 64);
  if ( !IoResource )
  {
    if ( *(_DWORD *)(v7 + 136) >= *(_DWORD *)(v7 + 144)
      || (RaAttemptHighWaterMarkIncrease((PVOID)v7), (IoResource = RaAllocateIoResource(v7 + 64)) == 0) )
    {
      KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)v7, &LockHandle);
      v18 = *(_QWORD **)(v7 + 16);
      if ( *v18 != v7 + 8 )
        goto LABEL_23;
      *(_QWORD *)v5 = v7 + 8;
      *(_QWORD *)(v5 + 8) = v18;
      *v18 = v5;
      *(_QWORD *)(v7 + 16) = v5;
      *v9 = 1;
      goto LABEL_19;
    }
  }
  if ( (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(v7 + 192)) >= *(_DWORD *)(v7 + 36) )
    *(_DWORD *)(v7 + 36) = *(_DWORD *)(v7 + 192);
  a3[3] = IoResource + 848;
  a3[2] = IoResource + 48;
  a3[1] = IoResource + 1104;
  RaidZeroXrb(IoResource + 48, IoResource, *(unsigned int *)(IoResource + 792), *(_QWORD *)(IoResource + 808));
  return 0;
}
