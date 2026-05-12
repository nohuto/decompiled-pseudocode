/*
 * XREFs of PmGetPartitionAttributesMbr @ 0x1C0004CCC
 * Callers:
 *     PmSetSnapshotData @ 0x1C000FD58 (PmSetSnapshotData.c)
 *     PartitionIoctlGetPartitionAttributes @ 0x1C0022758 (PartitionIoctlGetPartitionAttributes.c)
 * Callees:
 *     memset @ 0x1C000BA40 (memset.c)
 *     PmSetDeviceParameterBinary @ 0x1C00220DC (PmSetDeviceParameterBinary.c)
 *     ?PmReadPartitionAttributesMbr@@YAJPEAU_DEVICE_EXTENSION@@PEAPEAU_PARTITION_ATTRIBUTES_TABLE@@PEAK@Z @ 0x1C0024CC0 (-PmReadPartitionAttributesMbr@@YAJPEAU_DEVICE_EXTENSION@@PEAPEAU_PARTITION_ATTRIBUTES_TABLE@@PEA.c)
 */

__int64 __fastcall PmGetPartitionAttributesMbr(KSPIN_LOCK *a1, _QWORD *a2)
{
  KSPIN_LOCK *v2; // rbp
  unsigned int v4; // esi
  KIRQL v6; // al
  struct _PARTITION_ATTRIBUTES_TABLE *v7; // rbx
  KIRQL v8; // al
  int v10; // eax
  __int64 v11; // rcx
  size_t Size; // [rsp+40h] [rbp+8h] BYREF
  struct _PARTITION_ATTRIBUTES_TABLE *v13; // [rsp+48h] [rbp+10h] BYREF

  LODWORD(Size) = 0;
  v2 = a1 + 14;
  v4 = 0;
  *a2 = 0LL;
  v6 = KeAcquireSpinLockRaiseToDpc(a1 + 14);
  v7 = (struct _PARTITION_ATTRIBUTES_TABLE *)a1[141];
  a1[141] = 0LL;
  v13 = v7;
  KeReleaseSpinLock(v2, v6);
  if ( v7 )
  {
LABEL_2:
    *a2 = *((_QWORD *)v7 + 2);
    v8 = KeAcquireSpinLockRaiseToDpc(v2);
    a1[141] = (KSPIN_LOCK)v7;
    v7 = 0LL;
    KeReleaseSpinLock(v2, v8);
    goto LABEL_3;
  }
  v10 = PmReadPartitionAttributesMbr((struct _DEVICE_EXTENSION *)a1, &v13, (unsigned int *)&Size);
  v7 = v13;
  v4 = v10;
  if ( v10 >= 0 )
  {
    v11 = *(_QWORD *)v13 - *(_QWORD *)&PARTITION_BASIC_DATA_GUID.Data1;
    if ( *(_QWORD *)v13 == *(_QWORD *)&PARTITION_BASIC_DATA_GUID.Data1 )
      v11 = *((_QWORD *)v13 + 1) - *(_QWORD *)PARTITION_BASIC_DATA_GUID.Data4;
    if ( v11 )
    {
      memset(v13, 0, (unsigned int)Size);
      *(GUID *)v7 = PARTITION_BASIC_DATA_GUID;
      *((_QWORD *)v7 + 2) = 0LL;
    }
    PmSetDeviceParameterBinary(a1, L"AttributesTableCache", v7, 24LL);
    goto LABEL_2;
  }
LABEL_3:
  if ( v7 )
    ExFreePoolWithTag(v7, 0);
  return v4;
}
