/*
 * XREFs of PmSetSnapshotData @ 0x1C000FD58
 * Callers:
 *     PmUpdateIds @ 0x1C002745C (PmUpdateIds.c)
 *     PmSetSnapshotInfo @ 0x1C0027BA4 (PmSetSnapshotInfo.c)
 * Callees:
 *     PmWakeupNotificationWorkItem @ 0x1C000353C (PmWakeupNotificationWorkItem.c)
 *     PmGetPartitionAttributesMbr @ 0x1C0004CCC (PmGetPartitionAttributesMbr.c)
 *     PmInvalidatePartitionTableCache @ 0x1C0005B8C (PmInvalidatePartitionTableCache.c)
 *     PmSetPartitionAttributesMbr @ 0x1C000E374 (PmSetPartitionAttributesMbr.c)
 *     ?PmInvalidateSnapshotDataCache@@YAXPEAU_DEVICE_EXTENSION@@@Z @ 0x1C000FC2C (-PmInvalidateSnapshotDataCache@@YAXPEAU_DEVICE_EXTENSION@@@Z.c)
 *     PmWritePartitionTable @ 0x1C001ED64 (PmWritePartitionTable.c)
 *     ?PmVerifySnapshotData@@YAEPEAU_DISK_SNAPSHOT_DATA@@KE@Z @ 0x1C0027830 (-PmVerifySnapshotData@@YAEPEAU_DISK_SNAPSHOT_DATA@@KE@Z.c)
 *     ?PmWriteSnapshotData@@YAJPEAU_DEVICE_EXTENSION@@PEAU_DRIVE_LAYOUT_INFORMATION_EX@@PEAU_DISK_SNAPSHOT_DATA@@K@Z @ 0x1C00278F0 (-PmWriteSnapshotData@@YAJPEAU_DEVICE_EXTENSION@@PEAU_DRIVE_LAYOUT_INFORMATION_EX@@PEAU_DISK_SNAP.c)
 */

__int64 __fastcall PmSetSnapshotData(
        struct _DEVICE_EXTENSION *a1,
        struct _DRIVE_LAYOUT_INFORMATION_EX *a2,
        UCHAR *a3,
        unsigned int a4)
{
  int PartitionAttributesMbr; // edi
  ULONG v9; // r8d
  ULONG v10; // eax
  bool v11; // zf
  __int64 j; // rdx
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  KIRQL v25; // bp
  struct _DEVICE_EXTENSION *i; // rdx
  _QWORD v28[5]; // [rsp+20h] [rbp-28h] BYREF

  v28[0] = 0LL;
  if ( !PmVerifySnapshotData(a3, a4, 0) )
    return (unsigned int)-1073741811;
  v9 = *((_DWORD *)a3 + 3);
  *((_DWORD *)a3 + 4) = 0;
  v10 = RtlComputeCrc32(0, a3, v9);
  v11 = *((_DWORD *)a3 + 5) == 2;
  *((_DWORD *)a3 + 4) = v10;
  if ( !v11 )
    goto LABEL_53;
  if ( !a2->PartitionStyle )
  {
    PartitionAttributesMbr = PmGetPartitionAttributesMbr((KSPIN_LOCK *)a1, v28);
    if ( PartitionAttributesMbr < 0 )
      return (unsigned int)PartitionAttributesMbr;
    PartitionAttributesMbr = PmSetPartitionAttributesMbr((__int64)a1, v28[0] | 0xF000000000000000uLL, 0);
    if ( PartitionAttributesMbr < 0 )
      return (unsigned int)PartitionAttributesMbr;
    goto LABEL_49;
  }
  if ( a2->PartitionStyle != 1 )
  {
LABEL_49:
    v25 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)a1 + 14);
    for ( i = (struct _DEVICE_EXTENSION *)*((_QWORD *)a1 + 112);
          i != (struct _DEVICE_EXTENSION *)((char *)a1 + 896);
          i = *(struct _DEVICE_EXTENSION **)i )
    {
      *((_DWORD *)i - 26) |= 0x10u;
    }
    PmWakeupNotificationWorkItem((__int64)a1);
    KeReleaseSpinLock((PKSPIN_LOCK)a1 + 14, v25);
LABEL_53:
    PartitionAttributesMbr = PmWriteSnapshotData(a1, a2, (struct _DISK_SNAPSHOT_DATA *)a3, a4);
    if ( PartitionAttributesMbr >= 0 )
      PmInvalidateSnapshotDataCache((KSPIN_LOCK *)a1);
    return (unsigned int)PartitionAttributesMbr;
  }
  for ( j = 0LL; (unsigned int)j < a2->PartitionCount; j = (unsigned int)(j + 1) )
  {
    v13 = *(_QWORD *)&a2->PartitionEntry[j].Mbr - *(_QWORD *)&PARTITION_BSP_GUID.Data1;
    if ( !v13 )
      v13 = *(_QWORD *)a2->PartitionEntry[j].Gpt.PartitionType.Data4 - *(_QWORD *)PARTITION_BSP_GUID.Data4;
    if ( v13 )
    {
      v14 = *(_QWORD *)&a2->PartitionEntry[j].Mbr - *(_QWORD *)&PARTITION_DPP_GUID.Data1;
      if ( !v14 )
        v14 = *(_QWORD *)a2->PartitionEntry[j].Gpt.PartitionType.Data4 - *(_QWORD *)PARTITION_DPP_GUID.Data4;
      if ( v14 )
      {
        v15 = *(_QWORD *)&a2->PartitionEntry[j].Mbr - *(_QWORD *)&PARTITION_BASIC_DATA_GUID.Data1;
        if ( !v15 )
          v15 = *(_QWORD *)a2->PartitionEntry[j].Gpt.PartitionType.Data4 - *(_QWORD *)PARTITION_BASIC_DATA_GUID.Data4;
        if ( v15 )
        {
          v16 = *(_QWORD *)&a2->PartitionEntry[j].Mbr - *(_QWORD *)&PARTITION_MAIN_OS_GUID.Data1;
          if ( !v16 )
            v16 = *(_QWORD *)a2->PartitionEntry[j].Gpt.PartitionType.Data4 - *(_QWORD *)PARTITION_MAIN_OS_GUID.Data4;
          if ( v16 )
          {
            v17 = *(_QWORD *)&a2->PartitionEntry[j].Mbr - *(_QWORD *)&PARTITION_MSFT_RECOVERY_GUID.Data1;
            if ( !v17 )
              v17 = *(_QWORD *)a2->PartitionEntry[j].Gpt.PartitionType.Data4
                  - *(_QWORD *)PARTITION_MSFT_RECOVERY_GUID.Data4;
            if ( v17 )
            {
              v18 = *(_QWORD *)&a2->PartitionEntry[j].Mbr - *(_QWORD *)&PARTITION_OS_DATA_GUID.Data1;
              if ( !v18 )
                v18 = *(_QWORD *)a2->PartitionEntry[j].Gpt.PartitionType.Data4 - *(_QWORD *)PARTITION_OS_DATA_GUID.Data4;
              if ( v18 )
              {
                v19 = *(_QWORD *)&a2->PartitionEntry[j].Mbr - *(_QWORD *)&PARTITION_PRE_INSTALLED_GUID.Data1;
                if ( !v19 )
                  v19 = *(_QWORD *)a2->PartitionEntry[j].Gpt.PartitionType.Data4
                      - *(_QWORD *)PARTITION_PRE_INSTALLED_GUID.Data4;
                if ( v19 )
                {
                  v20 = *(_QWORD *)&a2->PartitionEntry[j].Mbr - PARTITION_SERVICING_FILES_GUID;
                  if ( !v20 )
                    v20 = *(_QWORD *)a2->PartitionEntry[j].Gpt.PartitionType.Data4 - 0x6A00C0A9EA8D4CAELL;
                  if ( v20 )
                  {
                    v21 = *(_QWORD *)&a2->PartitionEntry[j].Mbr - PARTITION_SERVICING_METADATA_GUID;
                    if ( !v21 )
                      v21 = *(_QWORD *)a2->PartitionEntry[j].Gpt.PartitionType.Data4 + 0x31D62D50C28FB145LL;
                    if ( v21 )
                    {
                      v22 = *(_QWORD *)&a2->PartitionEntry[j].Mbr - PARTITION_SERVICING_RESERVE_GUID;
                      if ( !v22 )
                        v22 = *(_QWORD *)a2->PartitionEntry[j].Gpt.PartitionType.Data4 - 0x146D13FEB6FF19A3LL;
                      if ( v22 )
                      {
                        v23 = *(_QWORD *)&a2->PartitionEntry[j].Mbr - PARTITION_SERVICING_STAGING_ROOT_GUID;
                        if ( !v23 )
                          v23 = *(_QWORD *)a2->PartitionEntry[j].Gpt.PartitionType.Data4 + 0x2046FB4244130C56LL;
                        if ( v23 )
                        {
                          v24 = *(_QWORD *)&a2->PartitionEntry[j].Mbr - *(_QWORD *)&PARTITION_WINDOWS_SYSTEM_GUID.Data1;
                          if ( !v24 )
                            v24 = *(_QWORD *)a2->PartitionEntry[j].Gpt.PartitionType.Data4
                                - *(_QWORD *)PARTITION_WINDOWS_SYSTEM_GUID.Data4;
                          if ( v24 )
                            continue;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    a2->PartitionEntry[j].Gpt.Attributes |= 0xF000000000000000uLL;
  }
  PartitionAttributesMbr = PmWritePartitionTable(*((_QWORD *)a1 + 1), a2);
  if ( PartitionAttributesMbr >= 0 )
  {
    PmInvalidatePartitionTableCache((__int64)a1);
    goto LABEL_49;
  }
  return (unsigned int)PartitionAttributesMbr;
}
