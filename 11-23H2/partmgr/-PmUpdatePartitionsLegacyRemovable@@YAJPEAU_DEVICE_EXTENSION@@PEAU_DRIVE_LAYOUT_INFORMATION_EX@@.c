/*
 * XREFs of ?PmUpdatePartitionsLegacyRemovable@@YAJPEAU_DEVICE_EXTENSION@@PEAU_DRIVE_LAYOUT_INFORMATION_EX@@@Z @ 0x1C000C838
 * Callers:
 *     ?PmUpdateLayoutEx@@YAJPEAU_DEVICE_EXTENSION@@PEAU_DRIVE_LAYOUT_INFORMATION_EX@@E@Z @ 0x1C0002D88 (-PmUpdateLayoutEx@@YAJPEAU_DEVICE_EXTENSION@@PEAU_DRIVE_LAYOUT_INFORMATION_EX@@E@Z.c)
 * Callees:
 *     ?PmVerifyPropertyChange@@YAKPEAU_PARTITION_INFORMATION_EX@@0@Z @ 0x1C0003498 (-PmVerifyPropertyChange@@YAKPEAU_PARTITION_INFORMATION_EX@@0@Z.c)
 *     ?IsUnused@SC_PART_ENTRY@@QEAAEXZ @ 0x1C0006DB0 (-IsUnused@SC_PART_ENTRY@@QEAAEXZ.c)
 *     __security_check_cookie @ 0x1C000B3D0 (__security_check_cookie.c)
 *     memset @ 0x1C000BA40 (memset.c)
 *     ?IsContainer@SC_PART_ENTRY@@QEAAEXZ @ 0x1C000CBE8 (-IsContainer@SC_PART_ENTRY@@QEAAEXZ.c)
 *     ?PmCreatePartition@@YAJPEAU_DEVICE_EXTENSION@@PEAU_DRIVE_LAYOUT_INFORMATION_EX@@KPEAU_PARTITION_INFORMATION_EX@@PEAPEAU_PARTITION_EXTENSION@@@Z @ 0x1C001F7CC (-PmCreatePartition@@YAJPEAU_DEVICE_EXTENSION@@PEAU_DRIVE_LAYOUT_INFORMATION_EX@@KPEAU_PARTITION_.c)
 *     PmSendDeviceControl @ 0x1C0021354 (PmSendDeviceControl.c)
 */

__int64 __fastcall PmUpdatePartitionsLegacyRemovable(
        struct _DEVICE_EXTENSION *a1,
        struct _DRIVE_LAYOUT_INFORMATION_EX *a2)
{
  char v4; // r15
  __int64 v5; // rdx
  DWORD PartitionCount; // r10d
  int v7; // r14d
  __int64 v8; // rcx
  __int64 v9; // r9
  PARTITION_INFORMATION_EX *v10; // rbx
  SC_PART_ENTRY *v11; // rcx
  int v12; // r9d
  unsigned int v13; // r10d
  char *v14; // rdi
  KIRQL v15; // al
  __int64 v16; // rdx
  _QWORD *v17; // rcx
  KIRQL v18; // al
  __int64 v19; // rdi
  KIRQL v20; // si
  struct _PARTITION_EXTENSION *v22; // [rsp+40h] [rbp-D8h] BYREF
  _DWORD v23[36]; // [rsp+50h] [rbp-C8h] BYREF

  v4 = 0;
  memset(v23, 0, sizeof(v23));
  v22 = 0LL;
  v5 = 0LL;
  PartitionCount = a2->PartitionCount;
  v7 = 0;
  if ( PartitionCount )
  {
    do
    {
      v8 = 9 * v5;
      v5 = (unsigned int)(v5 + 1);
      v8 *= 2LL;
      *(&a2->PartitionEntry[0].PartitionNumber + 2 * v8) = 0;
      *((_DWORD *)&a2->PartitionEntry[0].PartitionStyle + 2 * v8) = a2->PartitionStyle;
      PartitionCount = a2->PartitionCount;
    }
    while ( (unsigned int)v5 < PartitionCount );
  }
  v9 = 0LL;
  if ( PartitionCount )
  {
    while ( 1 )
    {
      v10 = &a2->PartitionEntry[v9];
      if ( !SC_PART_ENTRY::IsUnused((SC_PART_ENTRY *)v10) && !SC_PART_ENTRY::IsContainer(v11) )
        break;
      v9 = (unsigned int)(v12 + 1);
      if ( (unsigned int)v9 >= v13 )
        goto LABEL_7;
    }
  }
  else
  {
LABEL_7:
    v10 = (PARTITION_INFORMATION_EX *)v23;
    v23[0] = a2->PartitionStyle;
  }
  v14 = (char *)a1 + 896;
  if ( *(char **)v14 == v14 )
  {
    v10->PartitionNumber = 1;
    v7 = PmCreatePartition(a1, a2, 1u, v10, &v22);
    if ( v7 >= 0 )
    {
      v15 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)a1 + 14);
      v16 = *(_QWORD *)v14;
      v17 = (_QWORD *)((char *)v22 + 144);
      if ( *(char **)(*(_QWORD *)v14 + 8LL) != v14 )
        __fastfail(3u);
      *v17 = v16;
      v17[1] = v14;
      *(_QWORD *)(v16 + 8) = v17;
      *(_QWORD *)v14 = v17;
      KeReleaseSpinLock((PKSPIN_LOCK)a1 + 14, v15);
    }
    else
    {
      v10->PartitionNumber = 0;
    }
  }
  else
  {
    v18 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)a1 + 14);
    v19 = *(_QWORD *)v14;
    v20 = v18;
    *(_DWORD *)(v19 - 104) &= ~4u;
    v10->PartitionNumber = *(_DWORD *)(v19 + 48);
    if ( v10->StartingOffset.QuadPart != *(_QWORD *)(v19 + 32) || v10->PartitionLength.QuadPart != *(_QWORD *)(v19 + 40) )
    {
      v4 = 1;
      *(_DWORD *)(*(_QWORD *)(v19 - 136) + 48LL) |= 2u;
    }
    *(_DWORD *)(v19 + 16) = 1;
    *(_DWORD *)(v19 - 104) |= PmVerifyPropertyChange(v10, (struct _PARTITION_INFORMATION_EX *)(v19 + 24));
    *(_OWORD *)(v19 + 24) = *(_OWORD *)&v10->PartitionStyle;
    *(_OWORD *)(v19 + 40) = *(_OWORD *)&v10->PartitionLength.LowPart;
    *(_OWORD *)(v19 + 56) = *(_OWORD *)&v10->Mbr.PartitionType;
    *(GUID *)(v19 + 72) = v10->Gpt.PartitionId;
    *(_OWORD *)(v19 + 88) = *(_OWORD *)&v10->Gpt.Attributes;
    *(_OWORD *)(v19 + 104) = *(_OWORD *)&v10->Gpt.Name[4];
    *(_OWORD *)(v19 + 120) = *(_OWORD *)&v10->Gpt.Name[12];
    *(_OWORD *)(v19 + 136) = *(_OWORD *)&v10->Gpt.Name[20];
    *(_OWORD *)(v19 + 152) = *(_OWORD *)&v10->Gpt.Name[28];
    KeReleaseSpinLock((PKSPIN_LOCK)a1 + 14, v20);
    if ( v4 )
      PmSendDeviceControl(*(PDEVICE_OBJECT *)(*(_QWORD *)(v19 - 120) + 16LL), 0x70407u, 0LL, 0, 0LL, 0, 0);
  }
  return (unsigned int)v7;
}
