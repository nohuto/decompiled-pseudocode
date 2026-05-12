/*
 * XREFs of StorRemoveIoGatewayItem @ 0x1C0003010
 * Callers:
 *     RaidUnitCompleteRequest @ 0x1C0001770 (RaidUnitCompleteRequest.c)
 *     RaUnitStartIo @ 0x1C0008F30 (RaUnitStartIo.c)
 *     RaidUnitProcessBusyRequest @ 0x1C0061CF4 (RaidUnitProcessBusyRequest.c)
 * Callees:
 *     RaidZeroXrb @ 0x1C0004AA4 (RaidZeroXrb.c)
 *     StorGetOutstandingIoCount @ 0x1C000F488 (StorGetOutstandingIoCount.c)
 *     StorIsIoGatewayPaused @ 0x1C00194C0 (StorIsIoGatewayPaused.c)
 *     RaidGetQosEntryForDeviceEntry @ 0x1C00207F4 (RaidGetQosEntryForDeviceEntry.c)
 *     RaFreeIoResource @ 0x1C0021F64 (RaFreeIoResource.c)
 *     _guard_dispatch_icall_nop @ 0x1C00235E0 (_guard_dispatch_icall_nop.c)
 *     StorSetAllIoGatewayNotBusy @ 0x1C0066598 (StorSetAllIoGatewayNotBusy.c)
 *     StorSetIoGatewayNotBusy @ 0x1C0066798 (StorSetIoGatewayNotBusy.c)
 */

__int64 __fastcall StorRemoveIoGatewayItem(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v3; // rbx
  unsigned __int8 v4; // bp
  char v5; // r14
  struct _KEVENT *v8; // r15
  __int64 v9; // rbx
  __int64 v10; // rcx
  union _SLIST_HEADER *v11; // rcx
  struct _SLIST_ENTRY *v12; // rdx
  __int64 v13; // rdx
  KSPIN_LOCK *v15; // rcx
  __int64 v16; // r8
  _QWORD *v17; // rax
  _QWORD *v18; // rcx
  __int64 v19; // rdx
  unsigned int v20; // ecx
  unsigned int v21; // eax
  _QWORD *QosEntryForDeviceEntry; // rax
  __int64 v23; // rdx
  _QWORD *v24; // rcx
  unsigned int OutstandingIoCount; // eax
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // rdi
  __int64 v31; // rcx
  __int64 v32; // rdi
  __int64 v33; // rsi
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF

  v3 = *(_QWORD *)(a1 + 16);
  v4 = 0;
  v5 = 0;
  v8 = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v9 = *(_QWORD *)(v3 - 16);
  if ( a2 )
    *a2 = 0LL;
  if ( (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v9 + 192)) <= *(_DWORD *)(v9 + 32)
    && *(int *)(v9 + 40) > 0
    && !*(_DWORD *)(*(_QWORD *)(v9 + 48) + 928LL) )
  {
    StorSetIoGatewayNotBusy(v9, 0LL);
LABEL_42:
    v4 = 1;
    goto LABEL_6;
  }
  v10 = *(_QWORD *)(v9 + 48);
  if ( *(_DWORD *)(v10 + 928) == 2 )
  {
    OutstandingIoCount = StorGetOutstandingIoCount(v10, a2, a3);
    v28 = *(_QWORD *)(v9 + 48);
    if ( OutstandingIoCount <= *(_DWORD *)(v28 + 920) )
    {
      StorSetAllIoGatewayNotBusy(v28, v26, v27);
      goto LABEL_42;
    }
  }
LABEL_6:
  if ( !*(_DWORD *)(v9 + 192) )
  {
    KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)v9, &LockHandle);
    if ( (*(_QWORD *)(v9 + 200) || *(_BYTE *)(v9 + 208)) && !*(_DWORD *)(v9 + 192) )
    {
      v5 = *(_BYTE *)(v9 + 208);
      v8 = *(struct _KEVENT **)(v9 + 200);
      *(_BYTE *)(v9 + 208) = 0;
      *(_QWORD *)(v9 + 200) = 0LL;
    }
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  }
  if ( *(_DWORD *)(v9 + 24) && *(int *)(v9 + 40) <= 0 && !(unsigned __int8)StorIsIoGatewayPaused(v9) && a2 )
  {
    KeAcquireInStackQueuedSpinLockAtDpcLevel(v15, &LockHandle);
    if ( *(int *)(v9 + 40) > 0 || (unsigned __int8)StorIsIoGatewayPaused(v9) || !*(_DWORD *)(v9 + 24) )
    {
      RaFreeIoResource(v9 + 64, *(_QWORD *)(a1 + 16) - 48LL);
    }
    else
    {
      v17 = *(_QWORD **)(v9 + 8);
      v18 = (_QWORD *)(v9 + 8);
      if ( v17[1] != v9 + 8 )
        goto LABEL_37;
      v19 = *v17;
      if ( *(_QWORD **)(*v17 + 8LL) != v17 )
        goto LABEL_37;
      *v18 = v19;
      *(_QWORD *)(v19 + 8) = v18;
      *a2 = v17;
      _InterlockedIncrement((volatile signed __int32 *)(v9 + 192));
      v20 = *(_DWORD *)(v9 + 192);
      v21 = *(_DWORD *)(v9 + 36);
      if ( v20 > v21 )
        v21 = *(_DWORD *)(v9 + 192);
      *(_DWORD *)(v9 + 36) = v21;
      if ( v20 == *(_DWORD *)(v9 + 28) )
      {
        *(_DWORD *)(v9 + 40) = 1;
        v4 = 0;
      }
      --*(_DWORD *)(v9 + 24);
      if ( (*(_BYTE *)(*a2 + 22LL) & 0x20) == 0 )
        goto LABEL_35;
      QosEntryForDeviceEntry = (_QWORD *)RaidGetQosEntryForDeviceEntry(*a2, v19, v16);
      v23 = *QosEntryForDeviceEntry;
      if ( *(_QWORD **)(*QosEntryForDeviceEntry + 8LL) != QosEntryForDeviceEntry
        || (v24 = (_QWORD *)QosEntryForDeviceEntry[1], (_QWORD *)*v24 != QosEntryForDeviceEntry) )
      {
LABEL_37:
        __fastfail(3u);
      }
      *v24 = v23;
      *(_QWORD *)(v23 + 8) = v24;
    }
LABEL_35:
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
LABEL_11:
    if ( *a2 )
      RaidZeroXrb(
        *(_QWORD *)(a1 + 16),
        v13,
        *(unsigned int *)(*(_QWORD *)(a1 + 16) + 744LL),
        *(_QWORD *)(*(_QWORD *)(a1 + 16) + 760LL),
        LockHandle.LockQueue.Next,
        LockHandle.LockQueue.Lock,
        *(_QWORD *)&LockHandle.OldIrql);
    goto LABEL_13;
  }
  v11 = (union _SLIST_HEADER *)(v9 + 64);
  v12 = (struct _SLIST_ENTRY *)(*(_QWORD *)(a1 + 16) - 48LL);
  if ( *(_DWORD *)(v9 + 128) )
    v11 = *(union _SLIST_HEADER **)(v11->Alignment + 8LL * LODWORD(v12->Next));
  ExpInterlockedPushEntrySList(v11, v12);
  if ( a2 )
    goto LABEL_11;
LABEL_13:
  if ( v8 )
  {
    v29 = *(_QWORD *)(v9 + 48);
    v30 = (unsigned int)(*(_DWORD *)(v9 + 284) + 1);
    if ( (unsigned int)v30 < *(_DWORD *)(v29 + 904) )
    {
      while ( 1 )
      {
        KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(320 * v30 + *(_QWORD *)(v29 + 896)), &LockHandle);
        if ( _InterlockedCompareExchange(
               (volatile signed __int32 *)(*(_QWORD *)(*(_QWORD *)(v9 + 48) + 896LL) + 320 * v30 + 192),
               0,
               0) )
        {
          break;
        }
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        v29 = *(_QWORD *)(v9 + 48);
        v30 = (unsigned int)(v30 + 1);
        if ( (unsigned int)v30 >= *(_DWORD *)(v29 + 904) )
          goto LABEL_50;
      }
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v9 + 48) + 896LL) + 320 * v30 + 200) = v8;
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    }
LABEL_50:
    if ( (unsigned int)v30 >= *(_DWORD *)(*(_QWORD *)(v9 + 48) + 904LL) )
      KeSetEvent(v8, 0, 0);
  }
  if ( v5 )
  {
    v31 = *(_QWORD *)(v9 + 48);
    v32 = (unsigned int)(*(_DWORD *)(v9 + 284) + 1);
    if ( (unsigned int)v32 < *(_DWORD *)(v31 + 904) )
    {
      while ( 1 )
      {
        v33 = 320 * v32;
        KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(320 * v32 + *(_QWORD *)(v31 + 896)), &LockHandle);
        if ( _InterlockedCompareExchange(
               (volatile signed __int32 *)(*(_QWORD *)(*(_QWORD *)(v9 + 48) + 896LL) + 320 * v32 + 192),
               0,
               0) )
        {
          break;
        }
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        v31 = *(_QWORD *)(v9 + 48);
        v32 = (unsigned int)(v32 + 1);
        if ( (unsigned int)v32 >= *(_DWORD *)(v31 + 904) )
          goto LABEL_57;
      }
      *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v9 + 48) + 896LL) + v33 + 208) = 1;
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v9 + 48) + 896LL) + v33 + 224) = *(_QWORD *)(v9 + 224);
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v9 + 48) + 896LL) + v33 + 216) = *(_QWORD *)(v9 + 216);
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v9 + 48) + 896LL) + v33 + 232) = *(_QWORD *)(v9 + 232);
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v9 + 48) + 896LL) + v33 + 240) = *(_QWORD *)(v9 + 240);
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    }
LABEL_57:
    if ( (unsigned int)v32 >= *(_DWORD *)(*(_QWORD *)(v9 + 48) + 904LL) )
      (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(v9 + 240))(
        *(_QWORD *)(v9 + 232),
        *(_QWORD *)(v9 + 216),
        *(_QWORD *)(v9 + 224));
  }
  return v4;
}
