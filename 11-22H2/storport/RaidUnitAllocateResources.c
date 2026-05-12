/*
 * XREFs of RaidUnitAllocateResources @ 0x1C0018AC4
 * Callers:
 *     RaidCreateUnit @ 0x1C0018888 (RaidCreateUnit.c)
 * Callees:
 *     RaidZeroXrb @ 0x1C0004AA4 (RaidZeroXrb.c)
 *     RaidAllocatePool @ 0x1C0007B34 (RaidAllocatePool.c)
 *     StorAllocateContiguousIoResources @ 0x1C000826C (StorAllocateContiguousIoResources.c)
 *     RaidUnitFreeResources @ 0x1C001544C (RaidUnitFreeResources.c)
 *     StorCreateEventQueue @ 0x1C0018E28 (StorCreateEventQueue.c)
 *     RaidInitializeDeviceQueue @ 0x1C001A08C (RaidInitializeDeviceQueue.c)
 *     StorEnableSortedEventQueue @ 0x1C003FE14 (StorEnableSortedEventQueue.c)
 *     RaInitializeTagList @ 0x1C00A08F0 (RaInitializeTagList.c)
 */

__int64 __fastcall RaidUnitAllocateResources(__int64 a1)
{
  __int64 v1; // r14
  int EventQueue; // ebx
  __int64 v4; // rax
  _QWORD *v5; // r15
  __int64 v6; // r8
  __int64 v7; // rdx
  __int64 v8; // rax
  USHORT CurrentNodeNumber; // ax
  PSLIST_ENTRY v10; // rax
  int v11; // ecx
  __int64 v12; // rax
  unsigned int v13; // ecx
  __int64 ContiguousIoResources; // rax
  __int64 v15; // rdx
  __int64 v16; // rbx
  PIO_WORKITEM WorkItem; // rax
  PIO_WORKITEM v18; // rax
  struct _DEVICE_OBJECT *v19; // rcx
  PIO_WORKITEM v20; // rax
  struct _EX_RUNDOWN_REF_CACHE_AWARE *CacheAwareRundownProtection; // rax
  __int64 Pool; // rax
  int v24; // ebp
  unsigned int v25; // edi
  unsigned int v26; // ebx

  v1 = *(_QWORD *)(a1 + 24);
  *(_DWORD *)(a1 + 1744) = -1;
  *(_DWORD *)(a1 + 968) = 0x10000000;
  KeInitializeEvent((PRKEVENT)(a1 + 464), SynchronizationEvent, 0);
  KeInitializeDpc((PRKDPC)(a1 + 1240), RaidUnitRestartQueueDpcRoutine, *(PVOID *)(a1 + 8));
  KeInitializeDpc((PRKDPC)(a1 + 1048), (PKDEFERRED_ROUTINE)RaidUnitPendingDpcRoutine, *(PVOID *)(a1 + 8));
  KeInitializeTimer((PKTIMER)(a1 + 984));
  KeInitializeTimer((PKTIMER)(a1 + 1112));
  KeInitializeDpc((PRKDPC)(a1 + 1176), RaidUnitPauseTimerDpcRoutine, *(PVOID *)(a1 + 8));
  KeSetCoalescableTimer((PKTIMER)(a1 + 984), (LARGE_INTEGER)-20000000LL, 0x7D0u, 0x12Cu, (PKDPC)(a1 + 1048));
  EventQueue = StorCreateEventQueue(a1 + 504);
  if ( EventQueue >= 0 )
  {
    v4 = *(_QWORD *)(a1 + 24);
    if ( v4 && (*(_BYTE *)(v4 + 564) & 0x10) != 0 )
      StorEnableSortedEventQueue(*(_QWORD *)(a1 + 504), 0LL);
    v5 = (_QWORD *)(a1 + 512);
    EventQueue = RaInitializeTagList(a1 + 512, (unsigned int)(*(_DWORD *)(v1 + 552) + 1), *(_QWORD *)(a1 + 8));
    if ( EventQueue >= 0 )
    {
      KeInitializeSpinLock((PKSPIN_LOCK)(a1 + 40));
      KeInitializeSpinLock((PKSPIN_LOCK)(a1 + 1840));
      v6 = *(unsigned int *)(v1 + 552);
      v7 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 896LL);
      v8 = *(_QWORD *)(a1 + 8);
      *(_DWORD *)(a1 + 848) = 0;
      *(_QWORD *)(a1 + 640) = v8;
      *(_QWORD *)(a1 + 648) = RaUnitStartIo;
      RaidInitializeDeviceQueue(a1 + 656, v7, v6);
      if ( !*(_DWORD *)(v1 + 480)
        || (Pool = RaidAllocatePool(64LL, *(unsigned int *)(v1 + 480), 1163223378LL, *(_QWORD *)(a1 + 8)),
            (*(_QWORD *)(a1 + 16) = Pool) != 0LL) )
      {
        CurrentNodeNumber = KeGetCurrentNodeNumber();
        v10 = ExpInterlockedPopEntrySList((PSLIST_HEADER)(*v5 + ((unsigned __int64)CurrentNodeNumber << 6)));
        if ( !v10 )
        {
          v24 = 0;
          v25 = KeQueryHighestNodeNumber() + 1;
          while ( 1 )
          {
            v26 = 0;
            if ( v25 )
              break;
LABEL_27:
            if ( ++v24 == 10 )
              goto LABEL_19;
          }
          while ( 1 )
          {
            v10 = ExpInterlockedPopEntrySList((PSLIST_HEADER)(*v5 + ((unsigned __int64)v26 << 6)));
            if ( v10 )
              break;
            if ( ++v26 >= v25 )
              goto LABEL_27;
          }
        }
        v11 = *((_DWORD *)&v10->Next + 2);
        if ( v11 != -1 )
        {
          *(_DWORD *)(a1 + 1744) = v11;
          v12 = *(_QWORD *)(a1 + 24);
          v13 = ((*(_DWORD *)(v12 + 484) + 7) & 0xFFFFFFF8) + 1248;
          if ( *(_BYTE *)(v1 + 442) != 1 )
            v13 = ((*(_DWORD *)(v12 + 484) + 7) & 0xFFFFFFF8) + 1104;
          ContiguousIoResources = StorAllocateContiguousIoResources(
                                    v13,
                                    ((*(_DWORD *)(v12 + 484) + 7) & 0xFFFFFFF8) + 1104,
                                    v1);
          v16 = ContiguousIoResources;
          if ( ContiguousIoResources )
          {
            *(_QWORD *)(a1 + 1760) = ContiguousIoResources + 48;
            *(_QWORD *)(a1 + 1768) = ContiguousIoResources + 848;
            *(_QWORD *)(a1 + 1752) = ContiguousIoResources + 1104;
            RaidZeroXrb(ContiguousIoResources + 48, v15, 0, 0LL);
            if ( *(_BYTE *)(v1 + 442) == 1 )
            {
              *(_DWORD *)(v16 + 792) = 144;
              *(_QWORD *)(v16 + 808) = v16 + ((*(_DWORD *)(*(_QWORD *)(a1 + 24) + 484LL) + 7) & 0xFFFFFFF8) + 1104LL;
            }
            WorkItem = IoAllocateWorkItem(*(PDEVICE_OBJECT *)(a1 + 8));
            *(_QWORD *)(a1 + 1896) = WorkItem;
            if ( WorkItem )
            {
              v18 = IoAllocateWorkItem(*(PDEVICE_OBJECT *)(a1 + 8));
              *(_QWORD *)(a1 + 1912) = v18;
              if ( v18 )
              {
                v19 = *(struct _DEVICE_OBJECT **)(a1 + 8);
                *(_QWORD *)(a1 + 1920) = 0LL;
                *(_DWORD *)(a1 + 1928) = 0;
                v20 = IoAllocateWorkItem(v19);
                *(_QWORD *)(a1 + 1936) = v20;
                if ( v20 )
                {
                  CacheAwareRundownProtection = ExAllocateCacheAwareRundownProtection(NonPagedPoolNx, 0x4F506152u);
                  *(_QWORD *)(a1 + 1784) = CacheAwareRundownProtection;
                  if ( CacheAwareRundownProtection )
                  {
                    ExWaitForRundownProtectionReleaseCacheAware(CacheAwareRundownProtection);
                    return 0LL;
                  }
                }
              }
            }
          }
        }
LABEL_19:
        EventQueue = -1073741670;
      }
      else
      {
        EventQueue = -1073741801;
      }
    }
  }
  RaidUnitFreeResources(a1);
  return (unsigned int)EventQueue;
}
