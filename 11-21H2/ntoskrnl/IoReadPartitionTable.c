/*
 * XREFs of IoReadPartitionTable @ 0x1409306C0
 * Callers:
 *     sub_140610400 @ 0x140610400 (sub_140610400.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140650C18 @ 0x140650C18 (sub_140650C18.c)
 *     sub_140650D38 @ 0x140650D38 (sub_140650D38.c)
 *     sub_140651304 @ 0x140651304 (sub_140651304.c)
 *     sub_140930388 @ 0x140930388 (sub_140930388.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

NTSTATUS __stdcall IoReadPartitionTable(
        PDEVICE_OBJECT DeviceObject,
        ULONG SectorSize,
        BOOLEAN ReturnRecognizedPartitions,
        struct _DRIVE_LAYOUT_INFORMATION **PartitionBuffer)
{
  _QWORD *v6; // r9
  __int64 v7; // r10
  NTSTATUS v8; // edi
  __int64 v9; // r8
  __int64 v10; // r9
  int v11; // eax
  DWORD *v12; // rbx
  SIZE_T v13; // rbp
  struct _DRIVE_LAYOUT_INFORMATION *PoolWithTag; // rax
  __int64 v15; // r8
  struct _DRIVE_LAYOUT_INFORMATION *v16; // r9
  __int64 v17; // rcx
  unsigned int v18; // eax
  int v19; // r10d
  PVOID P[2]; // [rsp+20h] [rbp-1B8h] BYREF
  _QWORD v22[48]; // [rsp+30h] [rbp-1A8h] BYREF

  sub_140650C18((__int64)v22);
  v22[47] = 0LL;
  P[0] = 0LL;
  *v6 = 0LL;
  v22[0] = off_140006F60;
  v8 = sub_140930388((__int64)v22, v7);
  if ( v8 >= 0 )
  {
    v11 = sub_140651304((__int64)v22, P, v9, v10);
    v12 = (DWORD *)P[0];
    v8 = v11;
    if ( v11 >= 0 )
    {
      if ( *(_DWORD *)P[0] == 1 )
      {
        v8 = -1073741637;
      }
      else
      {
        v13 = (unsigned int)(144 * *((_DWORD *)P[0] + 1) + 48);
        PoolWithTag = (struct _DRIVE_LAYOUT_INFORMATION *)ExAllocatePoolWithTag(NonPagedPoolNx, v13, 0x54506F49u);
        *PartitionBuffer = PoolWithTag;
        if ( PoolWithTag )
        {
          memset(PoolWithTag, 0, v13);
          v15 = 0LL;
          (*PartitionBuffer)->PartitionCount = v12[1];
          for ( (*PartitionBuffer)->Signature = v12[2]; (unsigned int)v15 < v12[1]; v15 = (unsigned int)(v15 + 1) )
          {
            v16 = *PartitionBuffer;
            v17 = (unsigned int)v15;
            if ( ReturnRecognizedPartitions )
            {
              v18 = LOBYTE(v12[36 * v15 + 20]);
              if ( (unsigned __int8)v18 <= 0xFu )
              {
                v19 = 32801;
                if ( _bittest(&v19, v18) )
                  continue;
              }
            }
            v16->PartitionEntry[v17].StartingOffset.QuadPart = *(_QWORD *)&v12[36 * v15 + 14];
            v16->PartitionEntry[v17].PartitionLength.QuadPart = *(_QWORD *)&v12[36 * v15 + 16];
            v16->PartitionEntry[v17].HiddenSectors = v12[36 * v15 + 21];
            v16->PartitionEntry[v17].PartitionNumber = v12[36 * v15 + 18];
            v16->PartitionEntry[v17].PartitionType = v12[36 * v15 + 20];
            v16->PartitionEntry[v17].BootIndicator = BYTE1(v12[36 * v15 + 20]);
            v16->PartitionEntry[v17].RecognizedPartition = BYTE2(v12[36 * v15 + 20]);
            v16->PartitionEntry[v17].RewritePartition = v12[36 * v15 + 19];
          }
        }
        else
        {
          v8 = -1073741670;
        }
      }
    }
    if ( v12 )
      ExFreePoolWithTag(v12, 0);
  }
  v22[0] = off_140006F60;
  sub_140650D38(v22);
  return v8;
}
