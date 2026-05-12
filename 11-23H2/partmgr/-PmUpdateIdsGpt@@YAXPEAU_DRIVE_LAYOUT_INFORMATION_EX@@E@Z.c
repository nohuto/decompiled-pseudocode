/*
 * XREFs of ?PmUpdateIdsGpt@@YAXPEAU_DRIVE_LAYOUT_INFORMATION_EX@@E@Z @ 0x1C00271CC
 * Callers:
 *     PmUpdateIds @ 0x1C002745C (PmUpdateIds.c)
 * Callees:
 *     ?PmUuidCreate@@YAXPEAU_GUID@@@Z @ 0x1C0027400 (-PmUuidCreate@@YAXPEAU_GUID@@@Z.c)
 */

void __fastcall PmUpdateIdsGpt(struct _DRIVE_LAYOUT_INFORMATION_EX *a1, char a2)
{
  union _DRIVE_LAYOUT_INFORMATION_EX::$E2E3D8483D032B54611BEB6ADCC46344 *p_Mbr; // rsi
  char *DeviceExtension; // r13
  __int64 v6; // rax
  DWORD PartitionCount; // edx
  DWORD i; // edi
  DWORD v9; // r15d
  struct _GUID *v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 j; // rcx
  __int64 v14; // r8
  _OWORD Buffer[3]; // [rsp+20h] [rbp-48h] BYREF

  p_Mbr = (union _DRIVE_LAYOUT_INFORMATION_EX::$E2E3D8483D032B54611BEB6ADCC46344 *)&a1->Mbr;
  memset(Buffer, 0, 40);
  DeviceExtension = (char *)PmControlObject->DeviceExtension;
  if ( a2 )
    goto LABEL_6;
  v6 = *(_QWORD *)&p_Mbr->Mbr.Signature - *(_QWORD *)&GUID_NULL.Data1;
  if ( *(_QWORD *)&p_Mbr->Mbr.Signature == *(_QWORD *)&GUID_NULL.Data1 )
    v6 = *(_QWORD *)a1->Gpt.DiskId.Data4 - *(_QWORD *)GUID_NULL.Data4;
  if ( !v6
    || (*(_OWORD *)((char *)&Buffer[1] + 8) = *(_OWORD *)&p_Mbr->Mbr.Signature,
        RtlLookupElementGenericTableAvl((PRTL_AVL_TABLE)(DeviceExtension + 296), Buffer)) )
  {
LABEL_6:
    PmUuidCreate((struct _GUID *)p_Mbr);
  }
  PartitionCount = a1->PartitionCount;
  for ( i = 0; i < PartitionCount; PartitionCount = a1->PartitionCount )
  {
    v9 = i;
    v10 = (struct _GUID *)((char *)a1 + 144 * i);
    if ( !a2 )
    {
      v11 = *(_QWORD *)&v10[6].Data1 - *(_QWORD *)&GUID_NULL.Data1;
      if ( !v11 )
        v11 = *(_QWORD *)v10[6].Data4 - *(_QWORD *)GUID_NULL.Data4;
      if ( v11 )
      {
        v12 = *(_QWORD *)&v10[6].Data1 - *(_QWORD *)&p_Mbr->Mbr.Signature;
        if ( !v12 )
          v12 = *(_QWORD *)v10[6].Data4 - *(_QWORD *)p_Mbr->Gpt.DiskId.Data4;
        if ( v12 )
        {
          for ( j = ++i; (unsigned int)j < PartitionCount; j = (unsigned int)(j + 1) )
          {
            v14 = *(_QWORD *)&v10[6].Data1 - *(_QWORD *)&a1->PartitionEntry[j].Gpt.PartitionId.Data1;
            if ( !v14 )
              v14 = *(_QWORD *)v10[6].Data4 - *(_QWORD *)a1->PartitionEntry[j].Gpt.PartitionId.Data4;
            if ( !v14 )
              goto LABEL_22;
          }
          *(struct _GUID *)((char *)&Buffer[1] + 8) = v10[6];
          if ( !RtlLookupElementGenericTableAvl((PRTL_AVL_TABLE)(DeviceExtension + 296), Buffer) )
            continue;
        }
      }
    }
LABEL_22:
    PmUuidCreate(v10 + 6);
    i = v9 + 1;
  }
}
