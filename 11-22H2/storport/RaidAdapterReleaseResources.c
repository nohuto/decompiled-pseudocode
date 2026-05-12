/*
 * XREFs of RaidAdapterReleaseResources @ 0x1C00A6D44
 * Callers:
 *     RaidAdapterRemoveDeviceIrp @ 0x1C00A6FD4 (RaidAdapterRemoveDeviceIrp.c)
 *     RaidAdapterSurpriseRemovalIrp @ 0x1C00A73DC (RaidAdapterSurpriseRemovalIrp.c)
 * Callees:
 *     StorFreeContiguousIoResources @ 0x1C000832C (StorFreeContiguousIoResources.c)
 *     RaidAdapterStop @ 0x1C0011178 (RaidAdapterStop.c)
 *     RaidPnPPassToMiniPort @ 0x1C0019810 (RaidPnPPassToMiniPort.c)
 *     StorpShutdownRegistryWatch @ 0x1C0021EC4 (StorpShutdownRegistryWatch.c)
 *     RaidAdapterDeleteAsyncCallbacks @ 0x1C0034EEC (RaidAdapterDeleteAsyncCallbacks.c)
 *     WPP_SF_ @ 0x1C003E820 (WPP_SF_.c)
 *     RaAdapterDeregisterFromIdleDetection @ 0x1C004B448 (RaAdapterDeregisterFromIdleDetection.c)
 *     RaidFreeMappingList @ 0x1C0059504 (RaidFreeMappingList.c)
 *     RaFreeRaidResources @ 0x1C00658F8 (RaFreeRaidResources.c)
 *     StorDeleteIoGateway @ 0x1C0066074 (StorDeleteIoGateway.c)
 *     StorFreeGatewayLockHandleArray @ 0x1C006629C (StorFreeGatewayLockHandleArray.c)
 */

void __fastcall RaidAdapterReleaseResources(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // edx
  struct _IO_WORKITEM *v5; // rcx
  void *v6; // rcx
  void *v7; // rcx
  void *v8; // rcx
  unsigned int i; // edi
  unsigned int j; // edi
  __int64 v11; // rcx
  __int64 v12; // rdx
  union _LARGE_INTEGER Interval; // [rsp+40h] [rbp+8h] BYREF

  v4 = *(unsigned __int8 *)(*(_QWORD *)(a2 + 184) + 1LL);
  if ( *(_QWORD *)(a1 + 336) && (*(_BYTE *)(a1 + 108) & 0x40) != 0 )
    RaidPnPPassToMiniPort(*(_QWORD *)(a1 + 8), v4, a3, 0LL, 0);
  v5 = *(struct _IO_WORKITEM **)(a1 + 5600);
  if ( v5 )
  {
    IoFreeWorkItem(v5);
    *(_QWORD *)(a1 + 5600) = 0LL;
  }
  RaAdapterDeregisterFromIdleDetection(a1);
  v6 = *(void **)(a1 + 5304);
  if ( v6 )
  {
    ExFreePoolWithTag(v6, 0x57506152u);
    *(_QWORD *)(a1 + 5304) = 0LL;
  }
  v7 = *(void **)(a1 + 5312);
  if ( v7 )
  {
    ExFreePoolWithTag(v7, 0x504F6152u);
    *(_QWORD *)(a1 + 5312) = 0LL;
  }
  v8 = *(void **)(a1 + 5624);
  if ( v8 )
  {
    ExFreePoolWithTag(v8, 0x504E6152u);
    *(_QWORD *)(a1 + 5624) = 0LL;
  }
  RaidAdapterDeleteAsyncCallbacks(a1);
  Interval.QuadPart = -10000000LL;
  KeDelayExecutionThread(0, 0, &Interval);
  RaidAdapterStop(a1);
  for ( i = 0; i < 0x258; ++i )
  {
    if ( !*(_DWORD *)(a1 + 4824) && !*(_DWORD *)(a1 + 4064) )
      break;
    if ( i < 0x32
      && WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
    {
      WPP_SF_(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        0x1Bu,
        (__int64)&WPP_5f9124ff5a9e349f71738e58a6eba805_Traceguids);
    }
    Interval.QuadPart = -1000000LL;
    KeDelayExecutionThread(0, 0, &Interval);
  }
  if ( i >= 0x258
    && WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
  {
    WPP_SF_(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      0x1Cu,
      (__int64)&WPP_5f9124ff5a9e349f71738e58a6eba805_Traceguids);
  }
  for ( j = 0; j < *(_DWORD *)(a1 + 904); ++j )
    RaFreeRaidResources(*(_QWORD *)(a1 + 896) + 320LL * j, *(_QWORD *)(a1 + 8), *(_BYTE *)(a1 + 4306));
  *(_DWORD *)(a1 + 904) = 0;
  StorFreeGatewayLockHandleArray(a1);
  StorDeleteIoGateway(a1);
  RaidFreeMappingList((void **)(a1 + 832));
  v11 = *(_QWORD *)(a1 + 6000);
  if ( v11 )
  {
    StorpShutdownRegistryWatch(v11);
    ExFreePoolWithTag(**(PVOID **)(a1 + 6000), 0x57526152u);
    ExFreePoolWithTag(*(PVOID *)(a1 + 6000), 0x57526152u);
    *(_QWORD *)(a1 + 6000) = 0LL;
  }
  v12 = *(_QWORD *)(a1 + 128);
  if ( v12 )
  {
    StorFreeContiguousIoResources(a1, v12);
    *(_DWORD *)(a1 + 136) &= ~2u;
    *(_QWORD *)(a1 + 128) = 0LL;
  }
}
