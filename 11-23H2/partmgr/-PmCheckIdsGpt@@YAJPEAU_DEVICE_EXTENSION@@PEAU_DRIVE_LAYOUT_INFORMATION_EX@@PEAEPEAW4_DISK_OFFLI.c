/*
 * XREFs of ?PmCheckIdsGpt@@YAJPEAU_DEVICE_EXTENSION@@PEAU_DRIVE_LAYOUT_INFORMATION_EX@@PEAEPEAW4_DISK_OFFLINE_REASON@@@Z @ 0x1C001CBF0
 * Callers:
 *     ?PmCheckIds@@YAJPEAU_DEVICE_EXTENSION@@PEAU_DRIVE_LAYOUT_INFORMATION_EX@@PEAEPEAW4_DISK_OFFLINE_REASON@@@Z @ 0x1C0003CEC (-PmCheckIds@@YAJPEAU_DEVICE_EXTENSION@@PEAU_DRIVE_LAYOUT_INFORMATION_EX@@PEAEPEAW4_DISK_OFFLINE_.c)
 * Callees:
 *     ?PmIsRedundantPath@@YAJPEAU_DEVICE_EXTENSION@@0PEAE@Z @ 0x1C0026C38 (-PmIsRedundantPath@@YAJPEAU_DEVICE_EXTENSION@@0PEAE@Z.c)
 */

__int64 __fastcall PmCheckIdsGpt(
        struct _DEVICE_EXTENSION *a1,
        struct _DRIVE_LAYOUT_INFORMATION_EX *a2,
        unsigned __int8 *a3,
        enum _DISK_OFFLINE_REASON *a4)
{
  unsigned int IsRedundantPath; // ebp
  char *DeviceExtension; // r13
  __int64 v10; // rax
  struct _DEVICE_EXTENSION **v11; // rax
  DWORD PartitionCount; // r10d
  DWORD v13; // ebx
  char *v14; // r9
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rax
  struct _DEVICE_EXTENSION *inserted; // rax
  char *v20; // rbx
  struct _DEVICE_EXTENSION **v21; // rcx
  DWORD v22; // esi
  char *v23; // rax
  char **v24; // rcx
  _OWORD Buffer[3]; // [rsp+20h] [rbp-68h] BYREF
  unsigned __int8 v27; // [rsp+98h] [rbp+10h] BYREF
  unsigned __int8 NewElement; // [rsp+A0h] [rbp+18h] BYREF

  memset(Buffer, 0, 40);
  IsRedundantPath = 0;
  DeviceExtension = (char *)PmControlObject->DeviceExtension;
  v27 = 0;
  *a3 = 0;
  v10 = *(_QWORD *)&a2->Mbr.Signature - *(_QWORD *)&GUID_NULL.Data1;
  NewElement = 0;
  *(_DWORD *)a4 = 4;
  if ( !v10 )
    v10 = *(_QWORD *)a2->Gpt.DiskId.Data4 - *(_QWORD *)GUID_NULL.Data4;
  if ( v10 )
  {
    *(_OWORD *)((char *)&Buffer[1] + 8) = *(_OWORD *)&a2->Mbr.Signature;
    v11 = (struct _DEVICE_EXTENSION **)RtlLookupElementGenericTableAvl((PRTL_AVL_TABLE)(DeviceExtension + 296), Buffer);
    if ( v11 )
    {
      IsRedundantPath = PmIsRedundantPath(a1, v11[2], &v27);
      if ( (IsRedundantPath & 0x80000000) == 0 && v27 )
        *(_DWORD *)a4 = 2;
      return IsRedundantPath;
    }
  }
  else
  {
    *a3 = 1;
  }
  PartitionCount = a2->PartitionCount;
  v13 = 0;
  if ( !PartitionCount )
  {
LABEL_19:
    *(_DWORD *)a4 = 0;
    if ( *a3 )
      return IsRedundantPath;
    *(_OWORD *)((char *)&Buffer[1] + 8) = *(_OWORD *)&a2->Mbr.Signature;
    inserted = (struct _DEVICE_EXTENSION *)RtlInsertElementGenericTableAvl(
                                             (PRTL_AVL_TABLE)(DeviceExtension + 296),
                                             Buffer,
                                             0x28u,
                                             &NewElement);
    if ( inserted )
    {
      v20 = (char *)a1 + 632;
      v21 = (struct _DEVICE_EXTENSION **)*((_QWORD *)a1 + 80);
      if ( *v21 != (struct _DEVICE_EXTENSION *)((char *)a1 + 632) )
LABEL_33:
        __fastfail(3u);
      *(_QWORD *)inserted = v20;
      v22 = 0;
      *((_QWORD *)inserted + 1) = v21;
      *v21 = inserted;
      *((_QWORD *)a1 + 80) = inserted;
      *((_QWORD *)inserted + 2) = a1;
      if ( !a2->PartitionCount )
        return IsRedundantPath;
      while ( 1 )
      {
        *(GUID *)((char *)&Buffer[1] + 8) = a2->PartitionEntry[v22].Gpt.PartitionId;
        v23 = (char *)RtlInsertElementGenericTableAvl(
                        (PRTL_AVL_TABLE)(DeviceExtension + 296),
                        Buffer,
                        0x28u,
                        &NewElement);
        if ( !v23 )
          break;
        v24 = (char **)*((_QWORD *)a1 + 80);
        if ( *v24 != v20 )
          goto LABEL_33;
        *(_QWORD *)v23 = v20;
        ++v22;
        *((_QWORD *)v23 + 1) = v24;
        *v24 = v23;
        *((_QWORD *)a1 + 80) = v23;
        *((_QWORD *)v23 + 2) = a1;
        if ( v22 >= a2->PartitionCount )
          return IsRedundantPath;
      }
    }
    return (unsigned int)-1073741670;
  }
  while ( 1 )
  {
    v14 = (char *)a2 + 144 * v13;
    v15 = *((_QWORD *)v14 + 12) - *(_QWORD *)&GUID_NULL.Data1;
    if ( !v15 )
      v15 = *((_QWORD *)v14 + 13) - *(_QWORD *)GUID_NULL.Data4;
    if ( v15 )
      break;
    *a3 = 1;
    ++v13;
LABEL_18:
    PartitionCount = a2->PartitionCount;
    if ( v13 >= PartitionCount )
      goto LABEL_19;
  }
  v16 = *((_QWORD *)v14 + 12) - *(_QWORD *)&a2->Mbr.Signature;
  if ( !v16 )
    v16 = *((_QWORD *)v14 + 13) - *(_QWORD *)a2->Gpt.DiskId.Data4;
  if ( !v16 )
    return IsRedundantPath;
  v17 = v13 + 1;
  v13 = v17;
  if ( (unsigned int)v17 >= PartitionCount )
  {
LABEL_17:
    *(_OWORD *)((char *)&Buffer[1] + 8) = *((_OWORD *)v14 + 6);
    if ( RtlLookupElementGenericTableAvl((PRTL_AVL_TABLE)(DeviceExtension + 296), Buffer) )
      return IsRedundantPath;
    goto LABEL_18;
  }
  while ( 1 )
  {
    v18 = *((_QWORD *)v14 + 12) - *(_QWORD *)&a2->PartitionEntry[v17].Gpt.PartitionId.Data1;
    if ( !v18 )
      v18 = *((_QWORD *)v14 + 13) - *(_QWORD *)a2->PartitionEntry[v17].Gpt.PartitionId.Data4;
    if ( !v18 )
      return IsRedundantPath;
    v17 = (unsigned int)(v17 + 1);
    if ( (unsigned int)v17 >= PartitionCount )
      goto LABEL_17;
  }
}
