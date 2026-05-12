/*
 * XREFs of sub_1C00196D4 @ 0x1C00196D4
 * Callers:
 *     sub_1C0019498 @ 0x1C0019498 (sub_1C0019498.c)
 * Callees:
 *     sub_1C0004C64 @ 0x1C0004C64 (sub_1C0004C64.c)
 *     sub_1C0007CF4 @ 0x1C0007CF4 (sub_1C0007CF4.c)
 *     sub_1C0008424 @ 0x1C0008424 (sub_1C0008424.c)
 *     sub_1C0015DDC @ 0x1C0015DDC (sub_1C0015DDC.c)
 *     sub_1C0019ADC @ 0x1C0019ADC (sub_1C0019ADC.c)
 *     sub_1C001AD3C @ 0x1C001AD3C (sub_1C001AD3C.c)
 *     sub_1C00230AC @ 0x1C00230AC (sub_1C00230AC.c)
 *     sub_1C0023100 @ 0x1C0023100 (sub_1C0023100.c)
 *     sub_1C00403E4 @ 0x1C00403E4 (sub_1C00403E4.c)
 *     sub_1C00A1AA0 @ 0x1C00A1AA0 (sub_1C00A1AA0.c)
 */

__int64 __fastcall sub_1C00196D4(__int64 a1)
{
  __int64 v2; // rbp
  int v3; // ebx
  __int64 v4; // rax
  __int64 v5; // r8
  __int64 v6; // rdx
  __int64 v7; // rax
  unsigned int v8; // eax
  __int64 v9; // rax
  USHORT CurrentNodeNumber; // ax
  PSLIST_ENTRY v12; // rax
  int v13; // r14d
  unsigned int v14; // edi
  unsigned int v15; // ebx
  int v16; // ecx
  __int64 v17; // rax
  unsigned int v18; // ecx
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rbx
  PIO_WORKITEM WorkItem; // rax
  PIO_WORKITEM v23; // rax
  struct _DEVICE_OBJECT *v24; // rcx
  PIO_WORKITEM v25; // rax
  struct _EX_RUNDOWN_REF_CACHE_AWARE *CacheAwareRundownProtection; // rax

  sub_1C00230AC();
  sub_1C00230AC();
  v2 = *(_QWORD *)(a1 + 24);
  *(_DWORD *)(a1 + 1744) = -1;
  *(_DWORD *)(a1 + 968) = 0x10000000;
  KeInitializeEvent((PRKEVENT)(a1 + 464), SynchronizationEvent, 0);
  KeInitializeDpc((PRKDPC)(a1 + 1240), DeferredRoutine, *(PVOID *)(a1 + 8));
  KeInitializeDpc((PRKDPC)(a1 + 1048), (PKDEFERRED_ROUTINE)sub_1C000F3C0, *(PVOID *)(a1 + 8));
  KeInitializeTimer((PKTIMER)(a1 + 984));
  KeInitializeTimer((PKTIMER)(a1 + 1112));
  KeInitializeDpc((PRKDPC)(a1 + 1176), sub_1C0062370, *(PVOID *)(a1 + 8));
  KeSetCoalescableTimer((PKTIMER)(a1 + 984), (LARGE_INTEGER)-20000000LL, 0x7D0u, 0x12Cu, (PKDPC)(a1 + 1048));
  v3 = sub_1C0019ADC(a1 + 504);
  if ( v3 < 0 )
    goto LABEL_11;
  v4 = *(_QWORD *)(a1 + 24);
  if ( v4 && (*(_BYTE *)(v4 + 564) & 0x10) != 0 )
    sub_1C00403E4(*(_QWORD *)(a1 + 504), 0LL);
  if ( !(unsigned int)sub_1C00230AC() || !(unsigned __int8)sub_1C0023100(v2) )
  {
    v3 = sub_1C00A1AA0(a1 + 512, (unsigned int)(*(_DWORD *)(v2 + 552) + 1), *(_QWORD *)(a1 + 8));
    if ( v3 < 0 )
      goto LABEL_11;
  }
  KeInitializeSpinLock((PKSPIN_LOCK)(a1 + 40));
  KeInitializeSpinLock((PKSPIN_LOCK)(a1 + 1840));
  v5 = *(unsigned int *)(v2 + 552);
  v6 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 896LL);
  v7 = *(_QWORD *)(a1 + 8);
  *(_DWORD *)(a1 + 848) = 0;
  *(_QWORD *)(a1 + 640) = v7;
  *(_QWORD *)(a1 + 648) = sub_1C0009130;
  sub_1C001AD3C(a1 + 656, v6, v5);
  v8 = *(_DWORD *)(v2 + 480);
  if ( v8 )
  {
    v9 = sub_1C0007CF4(64LL, v8, 1163223378LL, *(_QWORD *)(a1 + 8));
    *(_QWORD *)(a1 + 16) = v9;
    if ( !v9 )
    {
      v3 = -1073741801;
LABEL_11:
      sub_1C0015DDC(a1);
      return (unsigned int)v3;
    }
  }
  if ( !(unsigned int)sub_1C00230AC() || !(unsigned __int8)sub_1C0023100(v2) )
  {
    CurrentNodeNumber = KeGetCurrentNodeNumber();
    v12 = ExpInterlockedPopEntrySList((PSLIST_HEADER)(*(_QWORD *)(a1 + 512) + ((unsigned __int64)CurrentNodeNumber << 6)));
    if ( !v12 )
    {
      v13 = 0;
      v14 = KeQueryHighestNodeNumber() + 1;
      while ( 1 )
      {
        v15 = 0;
        if ( v14 )
          break;
LABEL_19:
        if ( ++v13 == 10 )
          goto LABEL_22;
      }
      while ( 1 )
      {
        v12 = ExpInterlockedPopEntrySList((PSLIST_HEADER)(*(_QWORD *)(a1 + 512) + ((unsigned __int64)v15 << 6)));
        if ( v12 )
          break;
        if ( ++v15 >= v14 )
          goto LABEL_19;
      }
    }
    v16 = *((_DWORD *)&v12->Next + 2);
    if ( v16 == -1 )
      goto LABEL_22;
    *(_DWORD *)(a1 + 1744) = v16;
  }
  v17 = *(_QWORD *)(a1 + 24);
  v18 = ((*(_DWORD *)(v17 + 484) + 7) & 0xFFFFFFF8) + 1248;
  if ( *(_BYTE *)(v2 + 442) != 1 )
    v18 = ((*(_DWORD *)(v17 + 484) + 7) & 0xFFFFFFF8) + 1104;
  v19 = sub_1C0008424(v18, ((*(_DWORD *)(v17 + 484) + 7) & 0xFFFFFFF8) + 1104, v2);
  v21 = v19;
  if ( !v19 )
    goto LABEL_22;
  *(_QWORD *)(a1 + 1760) = v19 + 48;
  *(_QWORD *)(a1 + 1768) = v19 + 848;
  *(_QWORD *)(a1 + 1752) = v19 + 1104;
  sub_1C0004C64(v19 + 48, v20, 0, 0LL);
  if ( *(_BYTE *)(v2 + 442) == 1 )
  {
    *(_DWORD *)(v21 + 792) = 144;
    *(_QWORD *)(v21 + 808) = v21 + ((*(_DWORD *)(*(_QWORD *)(a1 + 24) + 484LL) + 7) & 0xFFFFFFF8) + 1104LL;
  }
  WorkItem = IoAllocateWorkItem(*(PDEVICE_OBJECT *)(a1 + 8));
  *(_QWORD *)(a1 + 1896) = WorkItem;
  if ( !WorkItem )
    goto LABEL_22;
  v23 = IoAllocateWorkItem(*(PDEVICE_OBJECT *)(a1 + 8));
  *(_QWORD *)(a1 + 1912) = v23;
  if ( !v23
    || (v24 = *(struct _DEVICE_OBJECT **)(a1 + 8),
        *(_QWORD *)(a1 + 1920) = 0LL,
        *(_DWORD *)(a1 + 1928) = 0,
        v25 = IoAllocateWorkItem(v24),
        (*(_QWORD *)(a1 + 1936) = v25) == 0LL)
    || (CacheAwareRundownProtection = ExAllocateCacheAwareRundownProtection((POOL_TYPE)512, 0x4F506152u),
        (*(_QWORD *)(a1 + 1784) = CacheAwareRundownProtection) == 0LL) )
  {
LABEL_22:
    v3 = -1073741670;
    goto LABEL_11;
  }
  ExWaitForRundownProtectionReleaseCacheAware(CacheAwareRundownProtection);
  return 0LL;
}
