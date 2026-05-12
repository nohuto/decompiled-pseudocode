/*
 * XREFs of ?PmUpdatePartitions@@YAJPEAU_DEVICE_EXTENSION@@PEAU_DRIVE_LAYOUT_INFORMATION_EX@@@Z @ 0x1C0003030
 * Callers:
 *     ?PmUpdateLayoutEx@@YAJPEAU_DEVICE_EXTENSION@@PEAU_DRIVE_LAYOUT_INFORMATION_EX@@E@Z @ 0x1C0002D88 (-PmUpdateLayoutEx@@YAJPEAU_DEVICE_EXTENSION@@PEAU_DRIVE_LAYOUT_INFORMATION_EX@@E@Z.c)
 * Callees:
 *     ?PmUpdatePartition@@YAJPEAU_DEVICE_EXTENSION@@PEAU_PARTITION_EXTENSION@@PEAU_DRIVE_LAYOUT_INFORMATION_EX@@KPEAU_PARTITION_INFORMATION_EX@@@Z @ 0x1C0003380 (-PmUpdatePartition@@YAJPEAU_DEVICE_EXTENSION@@PEAU_PARTITION_EXTENSION@@PEAU_DRIVE_LAYOUT_INFORM.c)
 *     ?PmCreatePartition@@YAJPEAU_DEVICE_EXTENSION@@PEAU_DRIVE_LAYOUT_INFORMATION_EX@@KPEAU_PARTITION_INFORMATION_EX@@PEAPEAU_PARTITION_EXTENSION@@@Z @ 0x1C001F7CC (-PmCreatePartition@@YAJPEAU_DEVICE_EXTENSION@@PEAU_DRIVE_LAYOUT_INFORMATION_EX@@KPEAU_PARTITION_.c)
 */

__int64 __fastcall PmUpdatePartitions(struct _DEVICE_EXTENSION *a1, struct _DRIVE_LAYOUT_INFORMATION_EX *a2)
{
  __int64 v2; // r9
  __int64 v5; // r8
  _QWORD *v6; // r12
  _QWORD *v7; // rsi
  _QWORD *v8; // rdi
  DWORD PartitionCount; // r15d
  DWORD v10; // r11d
  unsigned int v11; // r9d
  union _PARTITION_INFORMATION_EX::$41520227951B374488E85ABED149FDD2 *p_Mbr; // rdx
  struct _DRIVE_LAYOUT_INFORMATION_EX *v13; // r8
  struct _PARTITION_INFORMATION_EX *v14; // r10
  __int64 v15; // rax
  KIRQL v16; // al
  __int64 v17; // rcx
  __int64 v18; // rdi
  unsigned int v19; // esi
  PARTITION_INFORMATION_EX *v20; // rbx
  PARTITION_STYLE PartitionStyle; // edx
  __int64 v22; // rax
  BYTE PartitionType; // al
  _QWORD *v25; // rcx
  DWORD PartitionNumber; // eax
  struct _PARTITION_EXTENSION *v27; // rbp
  _QWORD *v28; // r15
  PARTITION_INFORMATION_EX *v29; // rcx
  PARTITION_INFORMATION_EX *v30; // rdx
  KIRQL v31; // al
  _QWORD *v32; // r8
  _QWORD *v33; // rdx
  struct _PARTITION_EXTENSION *i; // [rsp+60h] [rbp+8h] BYREF

  v2 = 0LL;
  for ( i = 0LL;
        (unsigned int)v2 < a2->PartitionCount;
        *((_DWORD *)&a2->PartitionEntry[0].PartitionStyle + 2 * v5) = a2->PartitionStyle )
  {
    v5 = 9 * v2;
    v2 = (unsigned int)(v2 + 1);
    v5 *= 2LL;
    *(&a2->PartitionEntry[0].PartitionNumber + 2 * v5) = 0;
  }
  v6 = (_QWORD *)((char *)a1 + 896);
  v7 = (_QWORD *)*((_QWORD *)a1 + 112);
  if ( (_QWORD *)*v6 == v6 )
    goto LABEL_24;
  do
  {
    v8 = v7 - 18;
    if ( (*(_DWORD *)(v7 - 13) & 4) != 0 )
      goto LABEL_23;
    PartitionCount = a2->PartitionCount;
    v10 = 0;
    v11 = 0;
    if ( !PartitionCount )
    {
LABEL_14:
      v16 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)a1 + 14);
      *((_DWORD *)v8 + 10) |= 4u;
      *((_DWORD *)v8 + 40) = 0;
      KeReleaseSpinLock((PKSPIN_LOCK)a1 + 14, v16);
      goto LABEL_23;
    }
    p_Mbr = (union _PARTITION_INFORMATION_EX::$41520227951B374488E85ABED149FDD2 *)&a2->PartitionEntry[0].Mbr;
    while ( 1 )
    {
      v13 = (struct _DRIVE_LAYOUT_INFORMATION_EX *)*(unsigned int *)&p_Mbr[-1].Gpt.Name[20];
      v14 = (struct _PARTITION_INFORMATION_EX *)&p_Mbr[-1].Gpt.Name[20];
      if ( (_DWORD)v13 )
        break;
      if ( p_Mbr->Mbr.PartitionType && p_Mbr->Mbr.PartitionType != 15 && p_Mbr->Mbr.PartitionType != 5 )
        goto LABEL_12;
LABEL_13:
      ++v10;
      p_Mbr = (union _PARTITION_INFORMATION_EX::$41520227951B374488E85ABED149FDD2 *)((char *)p_Mbr + 144);
      if ( v10 >= PartitionCount )
        goto LABEL_14;
    }
    if ( (_DWORD)v13 == 1 )
    {
      v15 = *(_QWORD *)&p_Mbr->Mbr - *(_QWORD *)&GUID_NULL.Data1;
      if ( *(_QWORD *)&p_Mbr->Mbr == *(_QWORD *)&GUID_NULL.Data1 )
        v15 = *(_QWORD *)p_Mbr->Gpt.PartitionType.Data4 - *(_QWORD *)GUID_NULL.Data4;
      if ( !v15 )
        goto LABEL_13;
    }
LABEL_12:
    ++v11;
    if ( *(_DWORD *)&p_Mbr[-1].Gpt.Name[32]
      || *(_QWORD *)&p_Mbr[-1].Gpt.Name[24] != v8[22]
      || *(_QWORD *)&p_Mbr[-1].Gpt.Name[28] != v8[23] )
    {
      goto LABEL_13;
    }
    if ( (_DWORD)v13 == 1 && *((_DWORD *)v8 + 42) == 1 )
    {
      v17 = *(_QWORD *)&p_Mbr->Gpt.PartitionId.Data1 - v8[27];
      if ( !v17 )
        v17 = *(_QWORD *)p_Mbr->Gpt.PartitionId.Data4 - v8[28];
      if ( v17 )
        goto LABEL_13;
    }
    v14->PartitionNumber = *((_DWORD *)v8 + 48);
    PmUpdatePartition(a1, (struct _PARTITION_EXTENSION *)(v7 - 18), v13, v11, v14);
LABEL_23:
    v7 = (_QWORD *)*v7;
  }
  while ( v7 != v6 );
LABEL_24:
  v18 = 0LL;
  v19 = 0;
  if ( a2->PartitionCount )
  {
    while ( 1 )
    {
      v20 = &a2->PartitionEntry[v18];
      PartitionStyle = v20->PartitionStyle;
      if ( v20->PartitionStyle == PARTITION_STYLE_MBR )
        break;
      if ( PartitionStyle != PARTITION_STYLE_GPT )
      {
        if ( PartitionStyle )
          goto LABEL_30;
LABEL_34:
        PartitionType = v20->Mbr.PartitionType;
        if ( PartitionType != 15 && PartitionType != 5 )
          goto LABEL_30;
        goto LABEL_31;
      }
      v22 = *(_QWORD *)&v20->Mbr - *(_QWORD *)&GUID_NULL.Data1;
      if ( !v22 )
        v22 = *(_QWORD *)v20->Gpt.PartitionType.Data4 - *(_QWORD *)GUID_NULL.Data4;
      if ( v22 )
      {
LABEL_30:
        ++v19;
        if ( !v20->PartitionNumber )
        {
          for ( v20->PartitionNumber = 1; ; v20->PartitionNumber = PartitionNumber + 1 )
          {
            v25 = (_QWORD *)*v6;
            if ( (_QWORD *)*v6 == v6 )
              break;
            while ( 1 )
            {
              if ( (*(_DWORD *)(v25 - 13) & 4) == 0 )
              {
                PartitionNumber = v20->PartitionNumber;
                if ( *((_DWORD *)v25 + 12) == PartitionNumber )
                  break;
              }
              v25 = (_QWORD *)*v25;
              if ( v25 == v6 )
                goto LABEL_46;
            }
          }
LABEL_46:
          if ( (int)PmCreatePartition(a1, a2, v19, &a2->PartitionEntry[v18], &i) < 0 )
          {
            v20->PartitionNumber = 0;
          }
          else
          {
            v27 = i;
            if ( v20->PartitionLength.QuadPart )
            {
              v28 = (_QWORD *)*v6;
              if ( (_QWORD *)*v6 != v6 )
              {
                while ( 1 )
                {
                  if ( (*(_DWORD *)(v28 - 13) & 4) == 0 )
                  {
                    v29 = (PARTITION_INFORMATION_EX *)(v28 + 3);
                    if ( v20->StartingOffset.QuadPart <= v28[4] )
                    {
                      v30 = &a2->PartitionEntry[v18];
                    }
                    else
                    {
                      v30 = (PARTITION_INFORMATION_EX *)(v28 + 3);
                      v29 = &a2->PartitionEntry[v18];
                    }
                    if ( v30->PartitionLength.QuadPart > (unsigned __int64)(v29->StartingOffset.QuadPart
                                                                          - v30->StartingOffset.QuadPart) )
                      break;
                  }
                  v28 = (_QWORD *)*v28;
                  if ( v28 == v6 )
                    goto LABEL_54;
                }
                *((_DWORD *)i + 10) |= 0x40u;
                v28 = (_QWORD *)*v28;
              }
            }
            else
            {
              *((_DWORD *)i + 10) |= 0x40u;
              v28 = v6;
            }
LABEL_54:
            v31 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)a1 + 14);
            v32 = (_QWORD *)v28[1];
            v33 = (_QWORD *)((char *)v27 + 144);
            if ( (_QWORD *)*v32 != v28 )
              __fastfail(3u);
            *v33 = v28;
            *((_QWORD *)v27 + 19) = v32;
            *v32 = v33;
            v28[1] = v33;
            KeReleaseSpinLock((PKSPIN_LOCK)a1 + 14, v31);
          }
        }
      }
LABEL_31:
      v18 = (unsigned int)(v18 + 1);
      if ( (unsigned int)v18 >= a2->PartitionCount )
        return 0LL;
    }
    if ( !v20->Mbr.PartitionType )
      goto LABEL_31;
    goto LABEL_34;
  }
  return 0LL;
}
