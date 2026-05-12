/*
 * XREFs of RaidCreateUnit @ 0x1C001CC08
 * Callers:
 *     RaidBusEnumeratorGetUnit @ 0x1C001B154 (RaidBusEnumeratorGetUnit.c)
 * Callees:
 *     RaidAdapterPoFxActivateComponent @ 0x1C0002B10 (RaidAdapterPoFxActivateComponent.c)
 *     RaUnitSetQueueDepth @ 0x1C001CDF8 (RaUnitSetQueueDepth.c)
 *     RaidUnitAllocateResources @ 0x1C001CE48 (RaidUnitAllocateResources.c)
 *     RaidZeroUnit @ 0x1C001D2CC (RaidZeroUnit.c)
 *     memset @ 0x1C0024340 (memset.c)
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
  __int64 v11; // rax
  PDEVICE_OBJECT DeviceObject; // [rsp+60h] [rbp+8h] BYREF

  DeviceObject = 0LL;
  RecommendedSharedDataAlignment = KeGetRecommendedSharedDataAlignment();
  MaximumProcessorCount = KeQueryMaximumProcessorCountEx(0xFFFFu);
  result = IoCreateDevice(
             *(PDRIVER_OBJECT *)(*(_QWORD *)(a1 + 8) + 8LL),
             RecommendedSharedDataAlignment + ((MaximumProcessorCount + 54) << 6),
             0LL,
             0x2Du,
             0x180u,
             0,
             &DeviceObject);
  if ( result >= 0 )
  {
    DeviceExtension = (char *)DeviceObject->DeviceExtension;
    RaidZeroUnit(DeviceExtension);
    v8 = (void *)(-(__int64)(unsigned int)RecommendedSharedDataAlignment & (unsigned __int64)&DeviceExtension[RecommendedSharedDataAlignment + 3455]);
    *((_QWORD *)DeviceExtension + 4) = v8;
    memset(v8, 0, (unsigned __int64)MaximumProcessorCount << 6);
    *((_QWORD *)DeviceExtension + 3) = a1;
    *((_QWORD *)DeviceExtension + 1) = DeviceObject;
    *(_WORD *)(DeviceExtension + 1733) = 256;
    DeviceExtension[1735] = 1;
    DeviceObject->Flags |= 0x10u;
    DeviceObject->Flags |= 0x1000u;
    *(_DWORD *)(*((_QWORD *)DeviceExtension + 1) + 152LL) = *(_DWORD *)(*(_QWORD *)(a1 + 8) + 152LL);
    *((_DWORD *)DeviceExtension + 12) = 0;
    v9 = (*(_BYTE *)(a1 + 4764) + 3) & 0xFC;
    if ( ((*(unsigned __int8 *)(a1 + 4764) + 3) & 0xFFFFFFFC) > 0xFF )
      v9 = -1;
    DeviceExtension[1732] = v9;
    Resources = RaidUnitAllocateResources(DeviceExtension);
    if ( Resources >= 0 )
    {
      RaUnitSetQueueDepth(
        DeviceExtension,
        *(unsigned int *)(*((_QWORD *)DeviceExtension + 3) + 556LL),
        *(unsigned int *)(*((_QWORD *)DeviceExtension + 3) + 552LL));
      v11 = *((_QWORD *)DeviceExtension + 3);
      DeviceExtension[449] &= ~0x80u;
      *((_QWORD *)DeviceExtension + 218) = 0LL;
      DeviceExtension[448] &= ~0x80u;
      DeviceExtension[693] = 1;
      if ( *(_QWORD *)(v11 + 4832)
        && (*(_BYTE *)(v11 + 108) & 8) == 0
        && !_InterlockedCompareExchange((volatile signed __int32 *)DeviceExtension + 858, 1, 0) )
      {
        RaidAdapterPoFxActivateComponent(*((_QWORD *)DeviceExtension + 3));
      }
      *((_DWORD *)DeviceExtension + 450) = 10;
      result = 0;
      *((_DWORD *)DeviceExtension + 451) = 25;
      *((_DWORD *)DeviceExtension + 452) = 125;
      *a2 = DeviceExtension;
    }
    else
    {
      IoDeleteDevice(DeviceObject);
      return Resources;
    }
  }
  return result;
}
