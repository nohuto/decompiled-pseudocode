/*
 * XREFs of RaidDeleteAdapter @ 0x1C003956C
 * Callers:
 *     RaDriverAddDevice @ 0x1C003D390 (RaDriverAddDevice.c)
 *     RaidAdapterRemoveDeviceIrp @ 0x1C008CA88 (RaidAdapterRemoveDeviceIrp.c)
 * Callees:
 *     StorFreeContiguousIoResources @ 0x1C000F988 (StorFreeContiguousIoResources.c)
 *     RaidDeleteDeferredQueue @ 0x1C003D05C (RaidDeleteDeferredQueue.c)
 *     RaDriverDeleteDevice @ 0x1C003D5B8 (RaDriverDeleteDevice.c)
 *     PortFreeRegistryBuffer @ 0x1C00684E0 (PortFreeRegistryBuffer.c)
 *     RaDeleteBus @ 0x1C008DBC0 (RaDeleteBus.c)
 *     RaidDeleteDma @ 0x1C008DC54 (RaidDeleteDma.c)
 *     RaDeleteMiniport @ 0x1C008E8AC (RaDeleteMiniport.c)
 *     RaidDeleteResourceList @ 0x1C008ECD8 (RaidDeleteResourceList.c)
 *     StorFreeContiguousMemory @ 0x1C008EF80 (StorFreeContiguousMemory.c)
 *     PortFreeDriverParameters @ 0x1C00929B0 (PortFreeDriverParameters.c)
 */

void __fastcall RaidDeleteAdapter(__int64 a1)
{
  void *v2; // rcx
  void *v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rdx
  __int64 v6; // rcx
  void *v7; // rcx
  struct _EX_RUNDOWN_REF_CACHE_AWARE *v8; // rcx
  void *v9; // rcx
  KIRQL v10; // bl
  void *v11; // rcx
  _DWORD *v12; // rsi
  USHORT HighestNodeNumber; // ax
  unsigned int v14; // ebx
  unsigned int v15; // ebp
  PSLIST_ENTRY i; // rax
  void *v17; // rcx
  void *v18; // rcx
  void *v19; // rcx
  void *v20; // rcx
  void *v21; // rcx
  signed __int32 v22[10]; // [rsp+0h] [rbp-28h] BYREF

  v2 = *(void **)(a1 + 5848);
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0x49436152u);
    *(_QWORD *)(a1 + 5848) = 0LL;
  }
  v3 = *(void **)(a1 + 5904);
  if ( v3 )
  {
    ExFreePoolWithTag(v3, 0x464D6152u);
    *(_QWORD *)(a1 + 5904) = 0LL;
  }
  PortFreeRegistryBuffer(a1 + 1880);
  *(_DWORD *)(a1 + 1936) = 0;
  RaidDeleteResourceList(a1 + 320);
  LOBYTE(v4) = *(_BYTE *)(a1 + 4242) == 0;
  RaDeleteMiniport(a1 + 336, v4);
  if ( *(_DWORD *)(a1 + 800) )
    StorFreeContiguousMemory(a1 + 752, a1 + 784);
  v5 = *(_QWORD *)(a1 + 4424);
  if ( v5 )
  {
    StorFreeContiguousIoResources(a1, v5);
    *(_QWORD *)(a1 + 4424) = 0LL;
  }
  if ( *(_BYTE *)(a1 + 4242) )
    RaidDeleteDma(a1 + 752);
  RaDeleteBus(a1 + 648);
  RaidDeleteDeferredQueue(a1 + 880);
  RaidDeleteDeferredQueue(a1 + 1264);
  v6 = *(_QWORD *)(a1 + 1872);
  *(_DWORD *)a1 = -1;
  if ( v6 )
  {
    PortFreeDriverParameters();
    *(_QWORD *)(a1 + 1872) = 0LL;
  }
  v7 = *(void **)(a1 + 4248);
  if ( v7 )
  {
    ExFreePoolWithTag(v7, 0x52446152u);
    *(_QWORD *)(a1 + 4248) = 0LL;
  }
  RtlFreeUnicodeString((PUNICODE_STRING)(a1 + 1848));
  RtlFreeUnicodeString((PUNICODE_STRING)(a1 + 5880));
  RtlFreeUnicodeString((PUNICODE_STRING)(a1 + 5408));
  RtlFreeUnicodeString((PUNICODE_STRING)(a1 + 5576));
  RaDriverDeleteDevice(a1);
  v8 = *(struct _EX_RUNDOWN_REF_CACHE_AWARE **)(a1 + 296);
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  if ( v8 )
  {
    ExFreeCacheAwareRundownProtection(v8);
    *(_QWORD *)(a1 + 296) = 0LL;
  }
  v9 = *(void **)(a1 + 4232);
  if ( v9 )
  {
    ExFreePoolWithTag(v9, 0x72446152u);
    *(_QWORD *)(a1 + 4232) = 0LL;
  }
  if ( (*(_BYTE *)(a1 + 4532) & 1) != 0 )
  {
    v10 = KeAcquireSpinLockRaiseToDpc(&g_RaidDPCRedirectionInitLock);
    if ( _InterlockedExchangeAdd(&g_RaidPerfRedirectRefCount, 0xFFFFFFFF) == 1 )
    {
      g_RaidPerfRedirectGroupCount = 0;
      _InterlockedOr(v22, 0);
      ExFreePoolWithTag(g_RaidPerProcessorState, 0x72446152u);
      ExFreePoolWithTag(g_RaidDPCRedirectionProcessors, 0x72446152u);
      g_RaidPerProcessorState = 0LL;
      g_RaidDPCRedirectionProcessors = 0LL;
    }
    KeReleaseSpinLock(&g_RaidDPCRedirectionInitLock, v10);
    v11 = *(void **)(a1 + 4552);
    if ( v11 )
    {
      ExFreePoolWithTag(v11, 0x72446152u);
      *(_QWORD *)(a1 + 4552) = 0LL;
    }
  }
  if ( *(int *)(a1 + 4536) > 1 && *(_QWORD *)(a1 + 4544) )
  {
    v12 = 0LL;
    HighestNodeNumber = KeQueryHighestNodeNumber();
    v14 = 0;
    v15 = HighestNodeNumber + 1;
    if ( HighestNodeNumber != -1 )
    {
      do
      {
        for ( i = ExpInterlockedFlushSList((PSLIST_HEADER)(*(_QWORD *)(a1 + 4544) + ((unsigned __int64)v14 << 6)));
              i;
              i = i->Next )
        {
          v12 = i;
          if ( !HIDWORD(i[1].Next) )
            break;
        }
        if ( !v12[5] )
          break;
        ++v14;
      }
      while ( v14 < v15 );
      ExFreePoolWithTag(v12, 0x54436152u);
    }
    ExFreePoolWithTag(*(PVOID *)(a1 + 4544), 0x54436152u);
    *(_QWORD *)(a1 + 4544) = 0LL;
  }
  v17 = *(void **)(a1 + 4600);
  if ( v17 )
  {
    ExFreePoolWithTag(v17, 0x54456152u);
    *(_QWORD *)(a1 + 4600) = 0LL;
  }
  v18 = *(void **)(a1 + 4752);
  if ( v18 )
  {
    ExFreePoolWithTag(v18, 0x4D566152u);
    *(_QWORD *)(a1 + 4752) = 0LL;
  }
  if ( !*(_DWORD *)(a1 + 168) )
    ExFreePoolWithTag(*(PVOID *)(a1 + 184), 0x74636944u);
  v19 = *(void **)(a1 + 48);
  if ( v19 )
    ExFreePoolWithTag(v19, 0x53446152u);
  v20 = *(void **)(a1 + 5256);
  if ( v20 )
  {
    ExFreePoolWithTag(v20, 0x45436152u);
    *(_QWORD *)(a1 + 5256) = 0LL;
  }
  v21 = *(void **)(a1 + 4952);
  if ( v21 )
  {
    ExFreePoolWithTag(v21, 0x54456152u);
    *(_QWORD *)(a1 + 4952) = 0LL;
  }
  *(_DWORD *)(a1 + 4800) = -1;
  *(_DWORD *)(a1 + 4804) = 0;
  *(_QWORD *)(a1 + 4808) = 0LL;
}
