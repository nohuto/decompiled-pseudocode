/*
 * XREFs of ?PmUpdatePartition@@YAJPEAU_DEVICE_EXTENSION@@PEAU_PARTITION_EXTENSION@@PEAU_DRIVE_LAYOUT_INFORMATION_EX@@KPEAU_PARTITION_INFORMATION_EX@@@Z @ 0x1C0003380
 * Callers:
 *     ?PmUpdatePartitions@@YAJPEAU_DEVICE_EXTENSION@@PEAU_DRIVE_LAYOUT_INFORMATION_EX@@@Z @ 0x1C0003030 (-PmUpdatePartitions@@YAJPEAU_DEVICE_EXTENSION@@PEAU_DRIVE_LAYOUT_INFORMATION_EX@@@Z.c)
 * Callees:
 *     ?PmVerifyPropertyChange@@YAKPEAU_PARTITION_INFORMATION_EX@@0@Z @ 0x1C0003498 (-PmVerifyPropertyChange@@YAKPEAU_PARTITION_INFORMATION_EX@@0@Z.c)
 *     ?PmBuildUniqueId@@YAJPEAU_DEVICE_EXTENSION@@PEAU_PARTITION_EXTENSION@@@Z @ 0x1C00079B8 (-PmBuildUniqueId@@YAJPEAU_DEVICE_EXTENSION@@PEAU_PARTITION_EXTENSION@@@Z.c)
 *     PartitionReleaseRundownExclusive @ 0x1C000A258 (PartitionReleaseRundownExclusive.c)
 *     PartitionAcquireRundownExclusive @ 0x1C000A7A4 (PartitionAcquireRundownExclusive.c)
 *     ?PmBuildStableGuid@@YAJPEAU_DEVICE_EXTENSION@@PEAU_PARTITION_EXTENSION@@@Z @ 0x1C001FA60 (-PmBuildStableGuid@@YAJPEAU_DEVICE_EXTENSION@@PEAU_PARTITION_EXTENSION@@@Z.c)
 */

__int64 __fastcall PmUpdatePartition(
        struct _DEVICE_EXTENSION *a1,
        struct _PARTITION_EXTENSION *a2,
        struct _DRIVE_LAYOUT_INFORMATION_EX *a3,
        int a4,
        struct _PARTITION_INFORMATION_EX *a5)
{
  struct _PARTITION_INFORMATION_EX *v5; // rsi
  unsigned int v9; // ebp
  KIRQL v10; // al
  PDEVICE_OBJECT AttachedDeviceReference; // rbx
  __int64 result; // rax
  KIRQL v13; // al

  v5 = (struct _PARTITION_INFORMATION_EX *)((char *)a2 + 168);
  v9 = PmVerifyPropertyChange(a5, (struct _PARTITION_INFORMATION_EX *)((char *)a2 + 168));
  v10 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)a1 + 14);
  *((_DWORD *)a2 + 10) |= v9;
  *((_DWORD *)a2 + 40) = a4;
  *v5 = *a5;
  KeReleaseSpinLock((PKSPIN_LOCK)a1 + 14, v10);
  AttachedDeviceReference = IoGetAttachedDeviceReference(*((PDEVICE_OBJECT *)a1 + 1));
  if ( AttachedDeviceReference != *((PDEVICE_OBJECT *)a2 + 2) )
  {
    PartitionAcquireRundownExclusive(a2);
    v13 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)a1 + 14);
    AttachedDeviceReference = (PDEVICE_OBJECT)_InterlockedExchange64(
                                                (volatile __int64 *)a2 + 2,
                                                (__int64)AttachedDeviceReference);
    KeReleaseSpinLock((PKSPIN_LOCK)a1 + 14, v13);
    PartitionReleaseRundownExclusive(a2);
  }
  ObfDereferenceObject(AttachedDeviceReference);
  if ( (v9 & 0x20) == 0 )
    return 0LL;
  result = PmBuildStableGuid(a1, a2);
  if ( (int)result >= 0 )
    return PmBuildUniqueId(a1, a2);
  return result;
}
