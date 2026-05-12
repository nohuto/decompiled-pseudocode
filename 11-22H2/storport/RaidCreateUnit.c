/*
 * XREFs of RaidCreateUnit @ 0x1C0018888
 * Callers:
 *     RaidBusEnumeratorGetUnit @ 0x1C00164A4 (RaidBusEnumeratorGetUnit.c)
 * Callees:
 *     RaidAdapterPoFxActivateComponent @ 0x1C00089E4 (RaidAdapterPoFxActivateComponent.c)
 *     RaUnitSetQueueDepth @ 0x1C0018A70 (RaUnitSetQueueDepth.c)
 *     RaidUnitAllocateResources @ 0x1C0018AC4 (RaidUnitAllocateResources.c)
 *     RaidZeroUnit @ 0x1C0018EF8 (RaidZeroUnit.c)
 *     RiDisableDeviceQueueFastPath @ 0x1C0019640 (RiDisableDeviceQueueFastPath.c)
 *     memset_0 @ 0x1C0023980 (memset_0.c)
 */

NTSTATUS __fastcall RaidCreateUnit(__int64 a1, _QWORD *a2)
{
  __int64 RecommendedSharedDataAlignment; // rbp
  ULONG MaximumProcessorCount; // r14d
  NTSTATUS result; // eax
  char *DeviceExtension; // rbx
  void *v8; // rcx
  char v9; // al
  int Resources; // edi
  __int64 v11; // rdx
  __int64 v12; // rax
  PDEVICE_OBJECT DeviceObject; // [rsp+60h] [rbp+8h] BYREF

  DeviceObject = 0LL;
  RecommendedSharedDataAlignment = KeGetRecommendedSharedDataAlignment();
  MaximumProcessorCount = KeQueryMaximumProcessorCountEx(0xFFFFu);
  result = IoCreateDevice(
             *(PDRIVER_OBJECT *)(*(_QWORD *)(a1 + 8) + 8LL),
             RecommendedSharedDataAlignment + ((MaximumProcessorCount + 55) << 6),
             0LL,
             0x2Du,
             0x180u,
             0,
             &DeviceObject);
  if ( result >= 0 )
  {
    DeviceExtension = (char *)DeviceObject->DeviceExtension;
    RaidZeroUnit(DeviceExtension);
    v8 = (void *)(-(__int64)(unsigned int)RecommendedSharedDataAlignment & (unsigned __int64)&DeviceExtension[RecommendedSharedDataAlignment + 3519]);
    *((_QWORD *)DeviceExtension + 4) = v8;
    memset_0(v8, 0, (unsigned __int64)MaximumProcessorCount << 6);
    *((_QWORD *)DeviceExtension + 3) = a1;
    *((_QWORD *)DeviceExtension + 1) = DeviceObject;
    *(_WORD *)(DeviceExtension + 1781) = 256;
    DeviceExtension[1783] = 1;
    DeviceObject->Flags |= 0x10u;
    DeviceObject->Flags |= 0x1000u;
    *(_DWORD *)(*((_QWORD *)DeviceExtension + 1) + 152LL) = *(_DWORD *)(*(_QWORD *)(a1 + 8) + 152LL);
    *((_DWORD *)DeviceExtension + 12) = 0;
    v9 = (*(_BYTE *)(a1 + 4828) + 3) & 0xFC;
    if ( ((*(unsigned __int8 *)(a1 + 4828) + 3) & 0xFFFFFFFC) > 0xFF )
      v9 = -1;
    DeviceExtension[1780] = v9;
    Resources = RaidUnitAllocateResources(DeviceExtension);
    if ( Resources < 0 )
    {
      IoDeleteDevice(DeviceObject);
      return Resources;
    }
    else
    {
      RaUnitSetQueueDepth(
        DeviceExtension,
        *(unsigned int *)(*((_QWORD *)DeviceExtension + 3) + 556LL),
        *(unsigned int *)(*((_QWORD *)DeviceExtension + 3) + 552LL));
      DeviceExtension[693] = 1;
      RiDisableDeviceQueueFastPath(DeviceExtension + 656, v11);
      v12 = *((_QWORD *)DeviceExtension + 3);
      DeviceExtension[449] &= ~0x80u;
      *((_QWORD *)DeviceExtension + 224) = 0LL;
      DeviceExtension[448] &= ~0x80u;
      if ( *(_QWORD *)(v12 + 4896)
        && (*(_BYTE *)(v12 + 108) & 8) == 0
        && !_InterlockedCompareExchange((volatile signed __int32 *)DeviceExtension + 878, 1, 0) )
      {
        RaidAdapterPoFxActivateComponent(*((_QWORD *)DeviceExtension + 3), 0LL, 0LL);
      }
      *((_DWORD *)DeviceExtension + 462) = 10;
      result = 0;
      *((_DWORD *)DeviceExtension + 463) = 25;
      *((_DWORD *)DeviceExtension + 464) = 125;
      *a2 = DeviceExtension;
    }
  }
  return result;
}
