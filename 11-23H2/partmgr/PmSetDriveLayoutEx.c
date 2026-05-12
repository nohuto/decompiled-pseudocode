/*
 * XREFs of PmSetDriveLayoutEx @ 0x1C001ED08
 * Callers:
 *     PmIoctlSetDriveLayoutEx @ 0x1C001EC1C (PmIoctlSetDriveLayoutEx.c)
 *     PmIoctlSetDriveLayout @ 0x1C0025F9C (PmIoctlSetDriveLayout.c)
 * Callees:
 *     PmGetDriveLayoutEx @ 0x1C0002B60 (PmGetDriveLayoutEx.c)
 *     PmInvalidatePartitionTableCache @ 0x1C0005B8C (PmInvalidatePartitionTableCache.c)
 *     PmCreateDisk @ 0x1C001E9A4 (PmCreateDisk.c)
 *     PmWritePartitionTable @ 0x1C001ED64 (PmWritePartitionTable.c)
 *     ?PmCheckServicePartitions@@YAJPEAU_DEVICE_EXTENSION@@PEAVSC_DISK_LAYOUT@@@Z @ 0x1C0026AF8 (-PmCheckServicePartitions@@YAJPEAU_DEVICE_EXTENSION@@PEAVSC_DISK_LAYOUT@@@Z.c)
 */

int __fastcall PmSetDriveLayoutEx(struct _DEVICE_EXTENSION *a1, _DWORD *a2)
{
  int result; // eax
  PARTITION_STYLE v5; // ecx
  __int128 v6; // xmm0
  struct _CREATE_DISK v7; // [rsp+20h] [rbp-28h] BYREF

  if ( !*((_BYTE *)a1 + 604)
    || !*((_BYTE *)PmControlObject->DeviceExtension + 166)
    || (result = PmCheckServicePartitions(a1, (struct SC_DISK_LAYOUT *)a2), result >= 0) )
  {
    if ( a2[1] )
    {
      result = PmWritePartitionTable(*((_QWORD *)a1 + 1), a2);
      if ( result >= 0 )
      {
        PmInvalidatePartitionTableCache((__int64)a1);
        return PmGetDriveLayoutEx((KSPIN_LOCK *)a1, 0LL);
      }
    }
    else
    {
      v5 = *a2;
      memset(&v7, 0, sizeof(v7));
      v7.PartitionStyle = v5;
      if ( v5 )
      {
        if ( v5 == PARTITION_STYLE_GPT )
        {
          v6 = *(_OWORD *)(a2 + 2);
          v7.Gpt.MaxPartitionCount = 0;
          *(_OWORD *)&v7.Mbr.Signature = v6;
        }
      }
      else
      {
        v7.Mbr.Signature = a2[2];
      }
      return PmCreateDisk((KSPIN_LOCK *)a1, &v7);
    }
  }
  return result;
}
