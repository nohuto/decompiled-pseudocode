/*
 * XREFs of ?PmAssociatePartitions@@YAJPEAU_DEVICE_EXTENSION@@PEAU_DRIVE_LAYOUT_INFORMATION_EX@@@Z @ 0x1C0002ED0
 * Callers:
 *     ?PmUpdateLayoutEx@@YAJPEAU_DEVICE_EXTENSION@@PEAU_DRIVE_LAYOUT_INFORMATION_EX@@E@Z @ 0x1C0002D88 (-PmUpdateLayoutEx@@YAJPEAU_DEVICE_EXTENSION@@PEAU_DRIVE_LAYOUT_INFORMATION_EX@@E@Z.c)
 * Callees:
 *     ?PmFreePending@@YAXPEAU_DEVICE_EXTENSION@@@Z @ 0x1C00035D0 (-PmFreePending@@YAXPEAU_DEVICE_EXTENSION@@@Z.c)
 *     ?PmCommitPending@@YAXPEAU_DEVICE_EXTENSION@@PEAU_DRIVE_LAYOUT_INFORMATION_EX@@@Z @ 0x1C0003690 (-PmCommitPending@@YAXPEAU_DEVICE_EXTENSION@@PEAU_DRIVE_LAYOUT_INFORMATION_EX@@@Z.c)
 *     ?PartitionInsertPatch@@YAJPEAU_PARTITION_EXTENSION@@_K11@Z @ 0x1C000F538 (-PartitionInsertPatch@@YAJPEAU_PARTITION_EXTENSION@@_K11@Z.c)
 *     ?PmFindPartitionById@@YAPEAU_PARTITION_EXTENSION@@PEAU_DEVICE_EXTENSION@@PEAGK@Z @ 0x1C000F5EC (-PmFindPartitionById@@YAPEAU_PARTITION_EXTENSION@@PEAU_DEVICE_EXTENSION@@PEAGK@Z.c)
 */

__int64 __fastcall PmAssociatePartitions(KSPIN_LOCK *a1, struct _DRIVE_LAYOUT_INFORMATION_EX *a2)
{
  KSPIN_LOCK *v2; // rdi
  int inserted; // r12d
  _QWORD *v6; // rsi
  unsigned int v7; // r8d
  _QWORD *v8; // rbx
  KIRQL v9; // cl
  __int64 v10; // rax
  _QWORD *v11; // rbx
  _QWORD *v12; // rdi
  __int64 v13; // rbp
  __int64 v14; // r14
  _QWORD *Pool2; // rax
  _QWORD *v16; // rcx
  struct _PARTITION_EXTENSION *PartitionById; // rax
  KIRQL v19; // [rsp+50h] [rbp+8h]

  v2 = a1 + 14;
  inserted = 0;
  v6 = a1 + 112;
  v19 = KeAcquireSpinLockRaiseToDpc(a1 + 14);
  v8 = (_QWORD *)*v6;
  v9 = v19;
  if ( (_QWORD *)*v6 == v6 )
  {
LABEL_8:
    v11 = (_QWORD *)*v6;
    if ( (_QWORD *)*v6 != v6 )
    {
      while ( 1 )
      {
        if ( (*(_DWORD *)(v11 - 13) & 0x40) == 0 )
        {
          v12 = (_QWORD *)v11[23];
          if ( v12 == v11 + 23 )
          {
            v13 = v11[5];
            inserted = 0;
            v14 = v11[4];
            Pool2 = (_QWORD *)ExAllocatePool2(66LL, 40LL, 1347448144LL);
            if ( !Pool2 )
            {
              inserted = -1073741670;
              v2 = a1 + 14;
              goto LABEL_24;
            }
            Pool2[2] = 0LL;
            Pool2[3] = v14;
            Pool2[4] = v13;
            v16 = (_QWORD *)v12[1];
            if ( (_QWORD *)*v16 != v12 )
              __fastfail(3u);
            *Pool2 = v12;
            Pool2[1] = v16;
            *v16 = Pool2;
            v12[1] = Pool2;
          }
        }
        v11 = (_QWORD *)*v11;
        if ( v11 == v6 )
        {
          v9 = v19;
          v2 = a1 + 14;
          break;
        }
      }
    }
    KeReleaseSpinLock(v2, v9);
    PmCommitPending((struct _DEVICE_EXTENSION *)a1, a2);
  }
  else
  {
    while ( 1 )
    {
      *(v8 - 14) = 0LL;
      if ( a2->PartitionStyle == 1 )
      {
        v10 = v8[7] - *(_QWORD *)&PARTITION_PATCH_GUID.Data1;
        if ( !v10 )
          v10 = v8[8] - *(_QWORD *)PARTITION_PATCH_GUID.Data4;
        if ( !v10 )
        {
          *((_DWORD *)v8 - 26) |= 0x40u;
          inserted = 0;
          PartitionById = PmFindPartitionById((struct _DEVICE_EXTENSION *)a1, (unsigned __int16 *)v8 + 48, v7);
          *(v8 - 14) = PartitionById;
          if ( PartitionById )
            inserted = PartitionInsertPatch(PartitionById, v8[11] & 0xFFFFFFFFFFFFFF00uLL, v8[4], v8[5]);
          if ( inserted < 0 )
            break;
        }
      }
      v8 = (_QWORD *)*v8;
      if ( v8 == v6 )
      {
        v9 = v19;
        goto LABEL_8;
      }
    }
LABEL_24:
    KeReleaseSpinLock(v2, v19);
  }
  PmFreePending((struct _DEVICE_EXTENSION *)a1);
  return (unsigned int)inserted;
}
