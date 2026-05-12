/*
 * XREFs of RaidUnitFreeResources @ 0x1C0019DC8
 * Callers:
 *     RaidDeleteUnit @ 0x1C0019D24 (RaidDeleteUnit.c)
 *     RaidUnitAllocateResources @ 0x1C001CE48 (RaidUnitAllocateResources.c)
 * Callees:
 *     StorFreeContiguousIoResources @ 0x1C000F988 (StorFreeContiguousIoResources.c)
 *     RaidAdapterPoFxIdleComponent @ 0x1C00136DC (RaidAdapterPoFxIdleComponent.c)
 *     StorDeleteScsiIdentity @ 0x1C001C0EC (StorDeleteScsiIdentity.c)
 *     StorpUninitializePerUnitPerfTelemetry @ 0x1C0022938 (StorpUninitializePerUnitPerfTelemetry.c)
 *     RaDeleteTagList @ 0x1C0086808 (RaDeleteTagList.c)
 */

__int64 __fastcall RaidUnitFreeResources(__int64 a1)
{
  unsigned int v2; // esi
  unsigned int HighestNodeNumber; // r8d
  __int64 v4; // rdx
  void *v5; // rcx
  void *v6; // rcx
  void *v7; // rcx
  void *v8; // rcx
  struct _IO_WORKITEM *v9; // rcx
  struct _IO_WORKITEM *v10; // rcx
  struct _IO_WORKITEM *v11; // rcx
  __int64 v12; // rax
  struct _EX_RUNDOWN_REF_CACHE_AWARE *v13; // rcx
  void *v14; // rcx
  void *v15; // rcx
  void *v16; // rcx
  void *v17; // rcx

  KeCancelTimer((PKTIMER)(a1 + 928));
  KeCancelTimer((PKTIMER)(a1 + 1056));
  KeFlushQueuedDpcs();
  v2 = *(_DWORD *)(a1 + 1696);
  if ( v2 != -1 )
  {
    HighestNodeNumber = KeQueryHighestNodeNumber();
    if ( v2 / *(_DWORD *)(a1 + 584) < HighestNodeNumber + 1 )
      HighestNodeNumber = v2 / *(_DWORD *)(a1 + 584);
    ExpInterlockedPushEntrySList(
      (PSLIST_HEADER)(*(_QWORD *)(a1 + 512) + ((unsigned __int64)HighestNodeNumber << 6)),
      (PSLIST_ENTRY)(*(_QWORD *)(a1 + 576) + 16LL * v2));
  }
  v4 = *(_QWORD *)(a1 + 1712);
  if ( v4 )
    StorFreeContiguousIoResources(*(_QWORD *)(a1 + 24), v4 - 48);
  v5 = *(void **)(a1 + 3424);
  if ( v5 )
  {
    ExFreePoolWithTag(v5, 0x494E6152u);
    *(_QWORD *)(a1 + 3424) = 0LL;
  }
  v6 = *(void **)(a1 + 3416);
  if ( v6 )
  {
    ExFreePoolWithTag(v6, 0x494E6152u);
    *(_QWORD *)(a1 + 3416) = 0LL;
  }
  v7 = *(void **)(a1 + 504);
  if ( v7 )
  {
    ExFreePoolWithTag(v7, 0x51506152u);
    *(_QWORD *)(a1 + 504) = 0LL;
  }
  StorDeleteScsiIdentity(a1 + 104);
  RaDeleteTagList(a1 + 512);
  v8 = *(void **)(a1 + 16);
  if ( v8 )
  {
    ExFreePoolWithTag(v8, 0x45556152u);
    *(_QWORD *)(a1 + 16) = 0LL;
  }
  if ( *(_DWORD *)(a1 + 2244) )
    StorpUninitializePerUnitPerfTelemetry(a1);
  if ( (*(_BYTE *)(a1 + 448) & 0x10) != 0 )
  {
    IoWMIRegistrationControl(*(PDEVICE_OBJECT *)(a1 + 8), 2u);
    *(_BYTE *)(a1 + 448) &= ~0x10u;
  }
  v9 = *(struct _IO_WORKITEM **)(a1 + 1848);
  if ( v9 )
  {
    IoFreeWorkItem(v9);
    *(_QWORD *)(a1 + 1848) = 0LL;
  }
  v10 = *(struct _IO_WORKITEM **)(a1 + 1864);
  if ( v10 )
  {
    IoFreeWorkItem(v10);
    *(_QWORD *)(a1 + 1864) = 0LL;
  }
  v11 = *(struct _IO_WORKITEM **)(a1 + 1888);
  if ( v11 )
  {
    IoFreeWorkItem(v11);
    *(_QWORD *)(a1 + 1888) = 0LL;
  }
  v12 = *(_QWORD *)(a1 + 24);
  if ( v12 && *(_QWORD *)(v12 + 4832) && _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 3432), 0, 1) == 1 )
    RaidAdapterPoFxIdleComponent(*(_QWORD *)(a1 + 24), 0LL, 0LL);
  v13 = *(struct _EX_RUNDOWN_REF_CACHE_AWARE **)(a1 + 1736);
  if ( v13 )
  {
    ExFreeCacheAwareRundownProtection(v13);
    *(_QWORD *)(a1 + 1736) = 0LL;
  }
  v14 = *(void **)(a1 + 1752);
  if ( v14 )
  {
    ExFreePoolWithTag(v14, 0x57506152u);
    *(_QWORD *)(a1 + 1752) = 0LL;
  }
  v15 = *(void **)(a1 + 3288);
  if ( v15 )
  {
    ExFreePoolWithTag(v15, 0x54536152u);
    *(_QWORD *)(a1 + 3288) = 0LL;
  }
  v16 = *(void **)(a1 + 3304);
  if ( v16 )
  {
    ExFreePoolWithTag(v16, 0x525A6152u);
    *(_QWORD *)(a1 + 3304) = 0LL;
  }
  v17 = *(void **)(a1 + 3320);
  if ( v17 )
    ExFreePoolWithTag(v17, 0x525A6152u);
  return 0LL;
}
