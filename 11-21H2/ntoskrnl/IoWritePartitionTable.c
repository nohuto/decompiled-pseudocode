/*
 * XREFs of IoWritePartitionTable @ 0x140930B90
 * Callers:
 *     sub_140611960 @ 0x140611960 (sub_140611960.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140650C18 @ 0x140650C18 (sub_140650C18.c)
 *     sub_140650D38 @ 0x140650D38 (sub_140650D38.c)
 *     sub_1406515E8 @ 0x1406515E8 (sub_1406515E8.c)
 *     sub_140930388 @ 0x140930388 (sub_140930388.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

NTSTATUS __stdcall IoWritePartitionTable(
        PDEVICE_OBJECT DeviceObject,
        ULONG SectorSize,
        ULONG SectorsPerTrack,
        ULONG NumberOfHeads,
        struct _DRIVE_LAYOUT_INFORMATION *PartitionBuffer)
{
  DWORD PartitionCount; // eax
  _DWORD *PoolWithTag; // rax
  void *v8; // rbx
  NTSTATUS v9; // edi
  __int64 v10; // r8
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  _QWORD v16[48]; // [rsp+20h] [rbp-198h] BYREF

  sub_140650C18((__int64)v16);
  PartitionCount = PartitionBuffer->PartitionCount;
  v16[47] = 0LL;
  v16[0] = off_140006F60;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 144 * PartitionCount + 48, 0x54506F49u);
  v8 = PoolWithTag;
  if ( PoolWithTag )
  {
    *PoolWithTag = 0;
    v10 = 0LL;
    PoolWithTag[1] = PartitionBuffer->PartitionCount;
    for ( PoolWithTag[2] = PartitionBuffer->Signature;
          (unsigned int)v10 < PartitionBuffer->PartitionCount;
          PoolWithTag[2 * v11 + 21] = PartitionBuffer->PartitionEntry[v12].HiddenSectors )
    {
      v11 = 18 * v10;
      v12 = (unsigned int)v10;
      v10 = (unsigned int)(v10 + 1);
      PoolWithTag[2 * v11 + 12] = 0;
      *(_QWORD *)&PoolWithTag[2 * v11 + 14] = PartitionBuffer->PartitionEntry[v12].StartingOffset.QuadPart;
      *(_QWORD *)&PoolWithTag[2 * v11 + 16] = PartitionBuffer->PartitionEntry[v12].PartitionLength.QuadPart;
      PoolWithTag[2 * v11 + 18] = PartitionBuffer->PartitionEntry[v12].PartitionNumber;
      LOBYTE(PoolWithTag[2 * v11 + 19]) = PartitionBuffer->PartitionEntry[v12].RewritePartition;
      LOBYTE(PoolWithTag[2 * v11 + 20]) = PartitionBuffer->PartitionEntry[v12].PartitionType;
      BYTE1(PoolWithTag[2 * v11 + 20]) = PartitionBuffer->PartitionEntry[v12].BootIndicator;
      BYTE2(PoolWithTag[2 * v11 + 20]) = PartitionBuffer->PartitionEntry[v12].RecognizedPartition;
    }
    v9 = sub_140930388((__int64)v16, (__int64)DeviceObject);
    if ( v9 >= 0 )
      v9 = sub_1406515E8((__int64)v16, (__int64)v8, v13, v14);
    ExFreePoolWithTag(v8, 0);
  }
  else
  {
    v9 = -1073741670;
  }
  v16[0] = off_140006F60;
  sub_140650D38(v16);
  return v9;
}
