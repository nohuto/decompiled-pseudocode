/*
 * XREFs of RaidAdapterReleaseResources @ 0x1C008C850
 * Callers:
 *     RaidAdapterRemoveDeviceIrp @ 0x1C008CA88 (RaidAdapterRemoveDeviceIrp.c)
 *     RaidAdapterSurpriseRemovalIrp @ 0x1C008CE90 (RaidAdapterSurpriseRemovalIrp.c)
 * Callees:
 *     StorFreeContiguousIoResources @ 0x1C000F988 (StorFreeContiguousIoResources.c)
 *     RaidAdapterStop @ 0x1C0014FAC (RaidAdapterStop.c)
 *     RaidPnPPassToMiniPort @ 0x1C001D6D0 (RaidPnPPassToMiniPort.c)
 *     StorFreeGatewayLockHandleArray @ 0x1C0023BB0 (StorFreeGatewayLockHandleArray.c)
 *     RaidAdapterDeleteAsyncCallbacks @ 0x1C0034284 (RaidAdapterDeleteAsyncCallbacks.c)
 *     WPP_SF_ @ 0x1C003C48C (WPP_SF_.c)
 *     RaAdapterDeregisterFromIdleDetection @ 0x1C0048618 (RaAdapterDeregisterFromIdleDetection.c)
 *     RaidFreeMappingList @ 0x1C004E9E4 (RaidFreeMappingList.c)
 *     RaFreeRaidResources @ 0x1C00589F8 (RaFreeRaidResources.c)
 *     StorDeleteIoGateway @ 0x1C0059068 (StorDeleteIoGateway.c)
 */

void __fastcall RaidAdapterReleaseResources(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // edx
  struct _IO_WORKITEM *v5; // rcx
  void *v6; // rcx
  void *v7; // rcx
  void *v8; // rcx
  unsigned int v9; // edi
  __int64 i; // rdi
  __int64 v11; // rdx
  union _LARGE_INTEGER Interval; // [rsp+40h] [rbp+8h] BYREF

  v4 = *(unsigned __int8 *)(*(_QWORD *)(a2 + 184) + 1LL);
  if ( *(_QWORD *)(a1 + 336) && (*(_BYTE *)(a1 + 108) & 0x40) != 0 )
    RaidPnPPassToMiniPort(*(_QWORD *)(a1 + 8), v4, a3, 0LL, 0);
  v5 = *(struct _IO_WORKITEM **)(a1 + 5536);
  if ( v5 )
  {
    IoFreeWorkItem(v5);
    *(_QWORD *)(a1 + 5536) = 0LL;
  }
  RaAdapterDeregisterFromIdleDetection(a1);
  v6 = *(void **)(a1 + 5240);
  if ( v6 )
  {
    ExFreePoolWithTag(v6, 0x57506152u);
    *(_QWORD *)(a1 + 5240) = 0LL;
  }
  v7 = *(void **)(a1 + 5248);
  if ( v7 )
  {
    ExFreePoolWithTag(v7, 0x504F6152u);
    *(_QWORD *)(a1 + 5248) = 0LL;
  }
  v8 = *(void **)(a1 + 5560);
  if ( v8 )
  {
    ExFreePoolWithTag(v8, 0x504E6152u);
    *(_QWORD *)(a1 + 5560) = 0LL;
  }
  RaidAdapterDeleteAsyncCallbacks(a1);
  Interval.QuadPart = -10000000LL;
  KeDelayExecutionThread(0, 0, &Interval);
  RaidAdapterStop(a1);
  v9 = 0;
  while ( *(_DWORD *)(a1 + 4760) || *(_DWORD *)(a1 + 4000) )
  {
    if ( v9 < 0x32
      && WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
    {
      WPP_SF_(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        0x1Bu,
        (__int64)&WPP_086a7ae95d483ea027c404bc5e9f61c7_Traceguids);
    }
    Interval.QuadPart = -1000000LL;
    KeDelayExecutionThread(0, 0, &Interval);
    if ( ++v9 >= 0x258 )
    {
      if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
        && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
      {
        WPP_SF_(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          0x1Cu,
          (__int64)&WPP_086a7ae95d483ea027c404bc5e9f61c7_Traceguids);
      }
      break;
    }
  }
  for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 840); i = (unsigned int)(i + 1) )
    RaFreeRaidResources(*(_QWORD *)(a1 + 832) + 320 * i, *(_QWORD *)(a1 + 8), *(_BYTE *)(a1 + 4242));
  *(_DWORD *)(a1 + 840) = 0;
  StorFreeGatewayLockHandleArray(a1);
  StorDeleteIoGateway(a1);
  RaidFreeMappingList((void **)(a1 + 824));
  v11 = *(_QWORD *)(a1 + 120);
  if ( v11 )
  {
    StorFreeContiguousIoResources(a1, v11);
    *(_QWORD *)(a1 + 120) = 0LL;
    *(_DWORD *)(a1 + 128) &= ~1u;
  }
}
