/*
 * XREFs of ?PmSetPartitionFlags@@YAXPEAU_PARTITION_EXTENSION@@PEAU_DRIVE_LAYOUT_INFORMATION_EX@@@Z @ 0x1C0007914
 * Callers:
 *     ?PmCreatePartition@@YAJPEAU_DEVICE_EXTENSION@@PEAU_DRIVE_LAYOUT_INFORMATION_EX@@KPEAU_PARTITION_INFORMATION_EX@@PEAPEAU_PARTITION_EXTENSION@@@Z @ 0x1C001F7CC (-PmCreatePartition@@YAJPEAU_DEVICE_EXTENSION@@PEAU_DRIVE_LAYOUT_INFORMATION_EX@@KPEAU_PARTITION_.c)
 * Callees:
 *     <none>
 */

void __fastcall PmSetPartitionFlags(struct _PARTITION_EXTENSION *a1, struct _DRIVE_LAYOUT_INFORMATION_EX *a2)
{
  _QWORD *DeviceExtension; // r10
  int v5; // ecx
  _DWORD *v6; // r11
  int v7; // r9d
  __int64 v8; // rdx
  __int64 v9; // rcx
  _DWORD *v10; // r11
  int v11; // r9d

  DeviceExtension = PmControlObject->DeviceExtension;
  if ( *(_BYTE *)(*((_QWORD *)a1 + 3) + 604LL) )
  {
    v5 = *((_DWORD *)a1 + 42);
    if ( v5 )
    {
      if ( v5 != 1 )
        return;
      v6 = (_DWORD *)DeviceExtension[23];
      v7 = 0;
      if ( !*v6 )
        return;
      while ( 1 )
      {
        v8 = (__int64)&v6[7 * v7 + 1];
        if ( *(_DWORD *)v8 == 1 )
        {
          v9 = *(_QWORD *)(v8 + 8) - *(_QWORD *)&a2->Mbr.Signature;
          if ( !v9 )
            v9 = *(_QWORD *)(v8 + 16) - *(_QWORD *)a2->Gpt.DiskId.Data4;
          if ( !v9 && *(_DWORD *)(v8 + 4) == *((_DWORD *)a1 + 48) )
            break;
        }
        if ( (unsigned int)++v7 >= *v6 )
          return;
      }
    }
    else
    {
      v10 = (_DWORD *)DeviceExtension[23];
      v11 = 0;
      if ( !*v10 )
        return;
      while ( 1 )
      {
        v8 = (__int64)&v10[7 * v11 + 1];
        if ( !*(_DWORD *)v8 && *(_DWORD *)(v8 + 8) == a2->Mbr.Signature && *(_DWORD *)(v8 + 4) == *((_DWORD *)a1 + 48) )
          break;
        if ( (unsigned int)++v11 >= *v10 )
          return;
      }
    }
    *(_DWORD *)(*((_QWORD *)a1 + 1) + 48LL) |= *(_DWORD *)(v8 + 24) & 0xFFFFFFBF;
  }
}
