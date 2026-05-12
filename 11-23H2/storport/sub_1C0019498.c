/*
 * XREFs of sub_1C0019498 @ 0x1C0019498
 * Callers:
 *     sub_1C0016EE0 @ 0x1C0016EE0 (sub_1C0016EE0.c)
 * Callees:
 *     sub_1C0008BF0 @ 0x1C0008BF0 (sub_1C0008BF0.c)
 *     sub_1C0019680 @ 0x1C0019680 (sub_1C0019680.c)
 *     sub_1C00196D4 @ 0x1C00196D4 (sub_1C00196D4.c)
 *     sub_1C0019BAC @ 0x1C0019BAC (sub_1C0019BAC.c)
 *     sub_1C001A2F4 @ 0x1C001A2F4 (sub_1C001A2F4.c)
 *     memset_0 @ 0x1C0024D40 (memset_0.c)
 */

NTSTATUS __fastcall sub_1C0019498(__int64 a1, _QWORD *a2)
{
  __int64 RecommendedSharedDataAlignment; // rbp
  ULONG MaximumProcessorCount; // r14d
  NTSTATUS result; // eax
  char *DeviceExtension; // rbx
  void *v8; // rcx
  char v9; // al
  int v10; // edi
  __int64 v11; // rax
  PDEVICE_OBJECT DeviceObject; // [rsp+60h] [rbp+8h] BYREF

  DeviceObject = 0LL;
  RecommendedSharedDataAlignment = KeGetRecommendedSharedDataAlignment();
  MaximumProcessorCount = KeQueryMaximumProcessorCountEx(0xFFFFu);
  result = IoCreateDevice(
             *(PDRIVER_OBJECT *)(*(_QWORD *)(a1 + 8) + 8LL),
             RecommendedSharedDataAlignment + ((MaximumProcessorCount + 56) << 6),
             0LL,
             0x2Du,
             0x180u,
             0,
             &DeviceObject);
  if ( result >= 0 )
  {
    DeviceExtension = (char *)DeviceObject->DeviceExtension;
    sub_1C0019BAC(DeviceExtension);
    v8 = (void *)(-(__int64)(unsigned int)RecommendedSharedDataAlignment & (unsigned __int64)&DeviceExtension[RecommendedSharedDataAlignment + 3583]);
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
    v10 = sub_1C00196D4(DeviceExtension);
    if ( v10 < 0 )
    {
      IoDeleteDevice(DeviceObject);
      return v10;
    }
    else
    {
      sub_1C0019680(
        DeviceExtension,
        *(unsigned int *)(*((_QWORD *)DeviceExtension + 3) + 556LL),
        *(unsigned int *)(*((_QWORD *)DeviceExtension + 3) + 552LL));
      DeviceExtension[693] = 1;
      sub_1C001A2F4();
      v11 = *((_QWORD *)DeviceExtension + 3);
      DeviceExtension[449] &= ~0x80u;
      *((_QWORD *)DeviceExtension + 224) = 0LL;
      DeviceExtension[448] &= ~0x80u;
      if ( *(_QWORD *)(v11 + 4896)
        && (*(_BYTE *)(v11 + 108) & 8) == 0
        && !_InterlockedCompareExchange((volatile signed __int32 *)DeviceExtension + 878, 1, 0) )
      {
        sub_1C0008BF0(*((_QWORD *)DeviceExtension + 3), 0LL, 0LL);
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
