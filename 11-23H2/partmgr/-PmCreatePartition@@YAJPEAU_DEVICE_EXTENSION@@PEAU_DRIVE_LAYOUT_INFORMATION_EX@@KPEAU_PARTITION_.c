/*
 * XREFs of ?PmCreatePartition@@YAJPEAU_DEVICE_EXTENSION@@PEAU_DRIVE_LAYOUT_INFORMATION_EX@@KPEAU_PARTITION_INFORMATION_EX@@PEAPEAU_PARTITION_EXTENSION@@@Z @ 0x1C001F7CC
 * Callers:
 *     ?PmUpdatePartitions@@YAJPEAU_DEVICE_EXTENSION@@PEAU_DRIVE_LAYOUT_INFORMATION_EX@@@Z @ 0x1C0003030 (-PmUpdatePartitions@@YAJPEAU_DEVICE_EXTENSION@@PEAU_DRIVE_LAYOUT_INFORMATION_EX@@@Z.c)
 *     ?PmUpdatePartitionsLegacyRemovable@@YAJPEAU_DEVICE_EXTENSION@@PEAU_DRIVE_LAYOUT_INFORMATION_EX@@@Z @ 0x1C000C838 (-PmUpdatePartitionsLegacyRemovable@@YAJPEAU_DEVICE_EXTENSION@@PEAU_DRIVE_LAYOUT_INFORMATION_EX@@.c)
 * Callees:
 *     PmDeletePartition @ 0x1C0004D84 (PmDeletePartition.c)
 *     ?PmSetPartitionFlags@@YAXPEAU_PARTITION_EXTENSION@@PEAU_DRIVE_LAYOUT_INFORMATION_EX@@@Z @ 0x1C0007914 (-PmSetPartitionFlags@@YAXPEAU_PARTITION_EXTENSION@@PEAU_DRIVE_LAYOUT_INFORMATION_EX@@@Z.c)
 *     ?PmBuildUniqueId@@YAJPEAU_DEVICE_EXTENSION@@PEAU_PARTITION_EXTENSION@@@Z @ 0x1C00079B8 (-PmBuildUniqueId@@YAJPEAU_DEVICE_EXTENSION@@PEAU_PARTITION_EXTENSION@@@Z.c)
 *     ?PmBuildStableGuid@@YAJPEAU_DEVICE_EXTENSION@@PEAU_PARTITION_EXTENSION@@@Z @ 0x1C001FA60 (-PmBuildStableGuid@@YAJPEAU_DEVICE_EXTENSION@@PEAU_PARTITION_EXTENSION@@@Z.c)
 *     ?PmBuildInstanceId@@YAJPEAU_DEVICE_EXTENSION@@PEAU_PARTITION_EXTENSION@@@Z @ 0x1C001FAA4 (-PmBuildInstanceId@@YAJPEAU_DEVICE_EXTENSION@@PEAU_PARTITION_EXTENSION@@@Z.c)
 *     ?PmIsConversionInProgress@@YAJPEAU_DEVICE_EXTENSION@@PEAU_PARTITION_EXTENSION@@@Z @ 0x1C001FE1C (-PmIsConversionInProgress@@YAJPEAU_DEVICE_EXTENSION@@PEAU_PARTITION_EXTENSION@@@Z.c)
 */

__int64 __fastcall PmCreatePartition(
        PDEVICE_OBJECT *a1,
        struct _DRIVE_LAYOUT_INFORMATION_EX *a2,
        int a3,
        struct _PARTITION_INFORMATION_EX *a4,
        struct _PARTITION_EXTENSION **a5)
{
  PDRIVER_OBJECT *DeviceExtension; // rbx
  unsigned int v10; // r15d
  NTSTATUS v11; // edi
  char *v12; // rbx
  PDEVICE_OBJECT AttachedDeviceReference; // rax
  PDEVICE_OBJECT v14; // rax
  PDEVICE_OBJECT DeviceObject; // [rsp+40h] [rbp-38h] BYREF

  DeviceObject = 0LL;
  DeviceExtension = (PDRIVER_OBJECT *)PmControlObject->DeviceExtension;
  *a5 = 0LL;
  v10 = ExSizeOfRundownProtectionCacheAware();
  v11 = IoCreateDevice(DeviceExtension[1], v10 + 456, 0LL, 0x2Du, 0x100u, 0, &DeviceObject);
  if ( v11 >= 0 )
  {
    v12 = (char *)DeviceObject->DeviceExtension;
    *(_QWORD *)v12 = &PartitionDispatch;
    *((_QWORD *)v12 + 1) = DeviceObject;
    AttachedDeviceReference = IoGetAttachedDeviceReference(a1[1]);
    *((_QWORD *)v12 + 3) = a1;
    *((_QWORD *)v12 + 2) = AttachedDeviceReference;
    *((_DWORD *)v12 + 40) = a3;
    *((_QWORD *)v12 + 50) = v12 + 456;
    *(_OWORD *)(v12 + 168) = *(_OWORD *)&a4->PartitionStyle;
    *(_OWORD *)(v12 + 184) = *(_OWORD *)&a4->PartitionLength.LowPart;
    *(_OWORD *)(v12 + 200) = *(_OWORD *)&a4->Mbr.PartitionType;
    *(GUID *)(v12 + 216) = a4->Gpt.PartitionId;
    *(_OWORD *)(v12 + 232) = *(_OWORD *)&a4->Gpt.Attributes;
    *(_OWORD *)(v12 + 248) = *(_OWORD *)&a4->Gpt.Name[4];
    *(_OWORD *)(v12 + 264) = *(_OWORD *)&a4->Gpt.Name[12];
    *(_OWORD *)(v12 + 280) = *(_OWORD *)&a4->Gpt.Name[20];
    *(_OWORD *)(v12 + 296) = *(_OWORD *)&a4->Gpt.Name[28];
    *((_QWORD *)v12 + 40) = v12 + 312;
    *((_QWORD *)v12 + 39) = v12 + 312;
    *((_QWORD *)v12 + 42) = v12 + 328;
    *((_QWORD *)v12 + 41) = v12 + 328;
    KeInitializeMutex((PRKMUTEX)(v12 + 344), 0);
    ExInitializeRundownProtectionCacheAware(*((PEX_RUNDOWN_REF_CACHE_AWARE *)v12 + 50), v10);
    KeInitializeEvent((PRKEVENT)v12 + 17, NotificationEvent, 0);
    *((_QWORD *)v12 + 55) = v12 + 432;
    *((_QWORD *)v12 + 54) = v12 + 432;
    KeInitializeSpinLock((PKSPIN_LOCK)v12 + 56);
    if ( (a1[1]->Characteristics & 1) != 0 && a4->PartitionStyle != PARTITION_STYLE_GPT && a4->PartitionNumber == 1 )
      *((_DWORD *)v12 + 10) |= 0x200u;
    v11 = PmBuildInstanceId((struct _DEVICE_EXTENSION *)a1, (struct _PARTITION_EXTENSION *)v12);
    if ( v11 < 0
      || (v11 = PmBuildStableGuid((struct _DEVICE_EXTENSION *)a1, (struct _PARTITION_EXTENSION *)v12), v11 < 0)
      || (v11 = PmBuildUniqueId((struct _DEVICE_EXTENSION *)a1, (struct _PARTITION_EXTENSION *)v12), v11 < 0) )
    {
      if ( v12 )
        PmDeletePartition((__int64)v12);
    }
    else
    {
      PmIsConversionInProgress((struct _DEVICE_EXTENSION *)a1, (struct _PARTITION_EXTENSION *)v12);
      PmSetPartitionFlags((struct _PARTITION_EXTENSION *)v12, a2);
      v14 = a1[1];
      *a5 = (struct _PARTITION_EXTENSION *)v12;
      DeviceObject->DeviceType = v14->DeviceType;
      DeviceObject->StackSize = *(_BYTE *)(*((_QWORD *)v12 + 2) + 76LL) + 1;
      DeviceObject->AlignmentRequirement = *(_DWORD *)(*((_QWORD *)v12 + 2) + 152LL);
      DeviceObject->SectorSize = *(_WORD *)(*((_QWORD *)v12 + 2) + 304LL);
    }
  }
  return (unsigned int)v11;
}
