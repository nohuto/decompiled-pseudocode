/*
 * XREFs of RaidDeleteAdapter @ 0x1C003AB5C
 * Callers:
 *     RaDriverAddDevice @ 0x1C003F5C0 (RaDriverAddDevice.c)
 *     RaidAdapterRemoveDeviceIrp @ 0x1C00A6FD4 (RaidAdapterRemoveDeviceIrp.c)
 * Callees:
 *     StorFreeContiguousIoResources @ 0x1C000832C (StorFreeContiguousIoResources.c)
 *     RaidDeleteDeferredQueue @ 0x1C003F214 (RaidDeleteDeferredQueue.c)
 *     RaDriverDeleteDevice @ 0x1C003F7EC (RaDriverDeleteDevice.c)
 *     PortFreeRegistryBuffer @ 0x1C0077D1C (PortFreeRegistryBuffer.c)
 *     RaDeleteBus @ 0x1C00A8290 (RaDeleteBus.c)
 *     RaidDeleteDma @ 0x1C00A8324 (RaidDeleteDma.c)
 *     RaDeleteMiniport @ 0x1C00A8FAC (RaDeleteMiniport.c)
 *     RaidDeleteResourceList @ 0x1C00A93E0 (RaidDeleteResourceList.c)
 *     StorFreeContiguousMemory @ 0x1C00A96C4 (StorFreeContiguousMemory.c)
 *     PortFreeDriverParameters @ 0x1C00AF2DC (PortFreeDriverParameters.c)
 */

void __fastcall RaidDeleteAdapter(__int64 a1)
{
  void *v2; // rcx
  void *v3; // rcx
  void *v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rdx
  __int64 v7; // rcx
  void *v8; // rcx
  struct _EX_RUNDOWN_REF_CACHE_AWARE *v9; // rcx
  void *v10; // rcx
  KIRQL v11; // bl
  void *v12; // rcx
  _DWORD *v13; // rsi
  USHORT HighestNodeNumber; // ax
  unsigned int v15; // ebx
  unsigned int v16; // ebp
  PSLIST_ENTRY i; // rax
  void *v18; // rcx
  void *v19; // rcx
  void *v20; // rcx
  void *v21; // rcx
  void *v22; // rcx
  void *v23; // rcx
  void *v24; // rcx
  signed __int32 v25[10]; // [rsp+0h] [rbp-28h] BYREF

  v2 = *(void **)(a1 + 5912);
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0x49436152u);
    *(_QWORD *)(a1 + 5912) = 0LL;
  }
  v3 = *(void **)(a1 + 5968);
  if ( v3 )
  {
    ExFreePoolWithTag(v3, 0x464D6152u);
    *(_QWORD *)(a1 + 5968) = 0LL;
  }
  v4 = *(void **)(a1 + 6032);
  if ( v4 )
  {
    ExFreePoolWithTag(v4, 0x464D6152u);
    *(_QWORD *)(a1 + 6032) = 0LL;
  }
  PortFreeRegistryBuffer(a1 + 1944);
  *(_DWORD *)(a1 + 2000) = 0;
  RaidDeleteResourceList(a1 + 320);
  LOBYTE(v5) = *(_BYTE *)(a1 + 4306) == 0;
  RaDeleteMiniport(a1 + 336, v5);
  if ( *(_DWORD *)(a1 + 808) )
    StorFreeContiguousMemory(a1 + 760, a1 + 792);
  v6 = *(_QWORD *)(a1 + 4488);
  if ( v6 )
  {
    StorFreeContiguousIoResources(a1, v6);
    *(_QWORD *)(a1 + 4488) = 0LL;
  }
  if ( *(_BYTE *)(a1 + 4306) )
    RaidDeleteDma(a1 + 760);
  RaDeleteBus(a1 + 656);
  RaidDeleteDeferredQueue(a1 + 944);
  RaidDeleteDeferredQueue(a1 + 1328);
  v7 = *(_QWORD *)(a1 + 1936);
  *(_DWORD *)a1 = 0;
  if ( v7 )
  {
    PortFreeDriverParameters();
    *(_QWORD *)(a1 + 1936) = 0LL;
  }
  v8 = *(void **)(a1 + 4312);
  if ( v8 )
  {
    ExFreePoolWithTag(v8, 0x52446152u);
    *(_QWORD *)(a1 + 4312) = 0LL;
  }
  RtlFreeUnicodeString((PUNICODE_STRING)(a1 + 1912));
  RtlFreeUnicodeString((PUNICODE_STRING)(a1 + 5944));
  RtlFreeUnicodeString((PUNICODE_STRING)(a1 + 5472));
  RtlFreeUnicodeString((PUNICODE_STRING)(a1 + 5640));
  RaDriverDeleteDevice(a1);
  v9 = *(struct _EX_RUNDOWN_REF_CACHE_AWARE **)(a1 + 296);
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  if ( v9 )
  {
    ExFreeCacheAwareRundownProtection(v9);
    *(_QWORD *)(a1 + 296) = 0LL;
  }
  v10 = *(void **)(a1 + 4296);
  if ( v10 )
  {
    ExFreePoolWithTag(v10, 0x72446152u);
    *(_QWORD *)(a1 + 4296) = 0LL;
  }
  if ( (*(_BYTE *)(a1 + 4596) & 1) != 0 )
  {
    v11 = KeAcquireSpinLockRaiseToDpc(&g_RaidDPCRedirectionInitLock);
    if ( _InterlockedExchangeAdd(&g_RaidPerfRedirectRefCount, 0xFFFFFFFF) == 1 )
    {
      g_RaidPerfRedirectGroupCount = 0;
      _InterlockedOr(v25, 0);
      ExFreePoolWithTag(g_RaidPerProcessorState, 0x72446152u);
      ExFreePoolWithTag(g_RaidDPCRedirectionProcessors, 0x72446152u);
      g_RaidPerProcessorState = 0LL;
      g_RaidDPCRedirectionProcessors = 0LL;
    }
    KeReleaseSpinLock(&g_RaidDPCRedirectionInitLock, v11);
    v12 = *(void **)(a1 + 4616);
    if ( v12 )
    {
      ExFreePoolWithTag(v12, 0x72446152u);
      *(_QWORD *)(a1 + 4616) = 0LL;
    }
  }
  if ( *(int *)(a1 + 4600) > 1 && *(_QWORD *)(a1 + 4608) )
  {
    v13 = 0LL;
    HighestNodeNumber = KeQueryHighestNodeNumber();
    v15 = 0;
    v16 = HighestNodeNumber + 1;
    if ( HighestNodeNumber != -1 )
    {
      do
      {
        for ( i = ExpInterlockedFlushSList((PSLIST_HEADER)(*(_QWORD *)(a1 + 4608) + ((unsigned __int64)v15 << 6)));
              i;
              i = i->Next )
        {
          v13 = i;
          if ( !HIDWORD(i[1].Next) )
            break;
        }
        if ( !v13[5] )
          break;
        ++v15;
      }
      while ( v15 < v16 );
      ExFreePoolWithTag(v13, 0x54436152u);
    }
    ExFreePoolWithTag(*(PVOID *)(a1 + 4608), 0x54436152u);
    *(_QWORD *)(a1 + 4608) = 0LL;
  }
  v18 = *(void **)(a1 + 4664);
  if ( v18 )
  {
    ExFreePoolWithTag(v18, 0x54456152u);
    *(_QWORD *)(a1 + 4664) = 0LL;
  }
  v19 = *(void **)(a1 + 4816);
  if ( v19 )
  {
    ExFreePoolWithTag(v19, 0x4D566152u);
    *(_QWORD *)(a1 + 4816) = 0LL;
  }
  if ( !*(_DWORD *)(a1 + 176) )
    ExFreePoolWithTag(*(PVOID *)(a1 + 192), 0x74636944u);
  v20 = *(void **)(a1 + 48);
  if ( v20 )
    ExFreePoolWithTag(v20, 0x53446152u);
  v21 = *(void **)(a1 + 5320);
  if ( v21 )
  {
    ExFreePoolWithTag(v21, 0x45436152u);
    *(_QWORD *)(a1 + 5320) = 0LL;
  }
  v22 = *(void **)(a1 + 5016);
  if ( v22 )
  {
    ExFreePoolWithTag(v22, 0x54456152u);
    *(_QWORD *)(a1 + 5016) = 0LL;
  }
  *(_DWORD *)(a1 + 4864) = -1;
  v23 = *(void **)(a1 + 6008);
  *(_DWORD *)(a1 + 4868) = 0;
  *(_QWORD *)(a1 + 4872) = 0LL;
  if ( v23 )
  {
    ExFreePoolWithTag(v23, 0x43546152u);
    *(_QWORD *)(a1 + 6008) = 0LL;
  }
  v24 = *(void **)(a1 + 6016);
  if ( v24 )
  {
    ExFreePoolWithTag(v24, 0x43546152u);
    *(_QWORD *)(a1 + 6016) = 0LL;
  }
}
