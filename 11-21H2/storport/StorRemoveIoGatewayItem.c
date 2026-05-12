/*
 * XREFs of StorRemoveIoGatewayItem @ 0x1C0008220
 * Callers:
 *     RaUnitStartIo @ 0x1C0004190 (RaUnitStartIo.c)
 *     RaidUnitCompleteRequest @ 0x1C0006E70 (RaidUnitCompleteRequest.c)
 *     RaidUnitProcessBusyRequest @ 0x1C0054FE4 (RaidUnitProcessBusyRequest.c)
 * Callees:
 *     RaidZeroXrb @ 0x1C0006D50 (RaidZeroXrb.c)
 *     StorIsIoGatewayPaused @ 0x1C0006E4C (StorIsIoGatewayPaused.c)
 *     RaidGetQosEntryForDeviceEntry @ 0x1C00225D4 (RaidGetQosEntryForDeviceEntry.c)
 *     RaFreeIoResource @ 0x1C0022B9C (RaFreeIoResource.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024050 (_guard_dispatch_icall_nop.c)
 *     StorGetOutstandingIoCount @ 0x1C0059304 (StorGetOutstandingIoCount.c)
 *     StorSetAllIoGatewayNotBusy @ 0x1C005960C (StorSetAllIoGatewayNotBusy.c)
 *     StorSetIoGatewayNotBusy @ 0x1C0059814 (StorSetIoGatewayNotBusy.c)
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
  _QWORD *v16; // rax
  _QWORD *v17; // rcx
  __int64 v18; // rdx
  unsigned int v19; // ecx
  unsigned int v20; // eax
  _QWORD *QosEntryForDeviceEntry; // rax
  __int64 v22; // rdx
  _QWORD *v23; // rcx
  unsigned int OutstandingIoCount; // eax
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rsi
  __int64 v30; // rax
  __int64 v31; // rsi
  __int64 v32; // rdx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-48h] BYREF

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
    && !*(_DWORD *)(*(_QWORD *)(v9 + 48) + 864LL) )
  {
    StorSetIoGatewayNotBusy(v9, 0LL);
LABEL_42:
    v4 = 1;
    goto LABEL_6;
  }
  v10 = *(_QWORD *)(v9 + 48);
  if ( *(_DWORD *)(v10 + 864) == 2 )
  {
    OutstandingIoCount = StorGetOutstandingIoCount(v10, a2, a3);
    v27 = *(_QWORD *)(v9 + 48);
    if ( OutstandingIoCount <= *(_DWORD *)(v27 + 856) )
    {
      StorSetAllIoGatewayNotBusy(v27, v25, v26);
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
  if ( !*(_DWORD *)(v9 + 24) || *(int *)(v9 + 40) > 0 || StorIsIoGatewayPaused(v9) || !a2 )
  {
    v11 = (union _SLIST_HEADER *)(v9 + 64);
    v12 = (struct _SLIST_ENTRY *)(*(_QWORD *)(a1 + 16) - 48LL);
    if ( *(_DWORD *)(v9 + 128) )
      v11 = *(union _SLIST_HEADER **)(v11->Alignment + 8LL * LODWORD(v12->Next));
    ExpInterlockedPushEntrySList(v11, v12);
    if ( !a2 )
      goto LABEL_13;
    goto LABEL_11;
  }
  KeAcquireInStackQueuedSpinLockAtDpcLevel(v15, &LockHandle);
  if ( *(int *)(v9 + 40) > 0 || StorIsIoGatewayPaused(v9) || !*(_DWORD *)(v9 + 24) )
  {
    RaFreeIoResource(v9 + 64, *(_QWORD *)(a1 + 16) - 48LL);
  }
  else
  {
    v16 = *(_QWORD **)(v9 + 8);
    v17 = (_QWORD *)(v9 + 8);
    if ( v16[1] != v9 + 8 )
      goto LABEL_37;
    v18 = *v16;
    if ( *(_QWORD **)(*v16 + 8LL) != v16 )
      goto LABEL_37;
    *v17 = v18;
    *(_QWORD *)(v18 + 8) = v17;
    *a2 = v16;
    _InterlockedIncrement((volatile signed __int32 *)(v9 + 192));
    v19 = *(_DWORD *)(v9 + 192);
    v20 = *(_DWORD *)(v9 + 36);
    if ( v19 > v20 )
      v20 = *(_DWORD *)(v9 + 192);
    *(_DWORD *)(v9 + 36) = v20;
    if ( v19 == *(_DWORD *)(v9 + 28) )
    {
      *(_DWORD *)(v9 + 40) = 1;
      v4 = 0;
    }
    --*(_DWORD *)(v9 + 24);
    if ( (*(_BYTE *)(*a2 + 22LL) & 0x20) == 0 )
      goto LABEL_35;
    QosEntryForDeviceEntry = (_QWORD *)RaidGetQosEntryForDeviceEntry(*a2);
    v22 = *QosEntryForDeviceEntry;
    if ( *(_QWORD **)(*QosEntryForDeviceEntry + 8LL) != QosEntryForDeviceEntry
      || (v23 = (_QWORD *)QosEntryForDeviceEntry[1], (_QWORD *)*v23 != QosEntryForDeviceEntry) )
    {
LABEL_37:
      __fastfail(3u);
    }
    *v23 = v22;
    *(_QWORD *)(v22 + 8) = v23;
  }
LABEL_35:
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
LABEL_11:
  if ( *a2 )
    RaidZeroXrb(
      *(_QWORD *)(a1 + 16),
      v13,
      *(_DWORD *)(*(_QWORD *)(a1 + 16) + 744LL),
      *(void **)(*(_QWORD *)(a1 + 16) + 760LL));
LABEL_13:
  if ( v8 )
  {
    v28 = *(_QWORD *)(v9 + 48);
    v29 = (unsigned int)(*(_DWORD *)(v9 + 284) + 1);
    if ( (unsigned int)v29 >= *(_DWORD *)(v28 + 840) )
      goto LABEL_51;
    while ( 1 )
    {
      KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(320 * v29 + *(_QWORD *)(v28 + 832)), &LockHandle);
      if ( _InterlockedCompareExchange(
             (volatile signed __int32 *)(*(_QWORD *)(*(_QWORD *)(v9 + 48) + 832LL) + 320 * v29 + 192),
             0,
             0) )
      {
        break;
      }
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      v28 = *(_QWORD *)(v9 + 48);
      v29 = (unsigned int)(v29 + 1);
      if ( (unsigned int)v29 >= *(_DWORD *)(v28 + 840) )
        goto LABEL_50;
    }
    *(_QWORD *)(320 * v29 + *(_QWORD *)(*(_QWORD *)(v9 + 48) + 832LL) + 200) = v8;
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    v28 = *(_QWORD *)(v9 + 48);
LABEL_50:
    if ( (unsigned int)v29 >= *(_DWORD *)(v28 + 840) )
LABEL_51:
      KeSetEvent(v8, 0, 0);
  }
  if ( v5 )
  {
    v30 = *(_QWORD *)(v9 + 48);
    v31 = (unsigned int)(*(_DWORD *)(v9 + 284) + 1);
    if ( (unsigned int)v31 >= *(_DWORD *)(v30 + 840) )
      goto LABEL_58;
    while ( 1 )
    {
      KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(320 * v31 + *(_QWORD *)(v30 + 832)), &LockHandle);
      if ( _InterlockedCompareExchange(
             (volatile signed __int32 *)(*(_QWORD *)(*(_QWORD *)(v9 + 48) + 832LL) + 320 * v31 + 192),
             0,
             0) )
      {
        break;
      }
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      v30 = *(_QWORD *)(v9 + 48);
      v31 = (unsigned int)(v31 + 1);
      if ( (unsigned int)v31 >= *(_DWORD *)(v30 + 840) )
        goto LABEL_57;
    }
    v32 = 320 * v31;
    *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v9 + 48) + 832LL) + v32 + 208) = 1;
    *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v9 + 48) + 832LL) + v32 + 224) = *(_QWORD *)(v9 + 224);
    *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v9 + 48) + 832LL) + v32 + 216) = *(_QWORD *)(v9 + 216);
    *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v9 + 48) + 832LL) + v32 + 232) = *(_QWORD *)(v9 + 232);
    *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v9 + 48) + 832LL) + v32 + 240) = *(_QWORD *)(v9 + 240);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    v30 = *(_QWORD *)(v9 + 48);
LABEL_57:
    if ( (unsigned int)v31 >= *(_DWORD *)(v30 + 840) )
LABEL_58:
      (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(v9 + 240))(
        *(_QWORD *)(v9 + 232),
        *(_QWORD *)(v9 + 216),
        *(_QWORD *)(v9 + 224));
  }
  return v4;
}
