/*
 * XREFs of ?PmVerifyPropertyChange@@YAKPEAU_PARTITION_INFORMATION_EX@@0@Z @ 0x1C0003498
 * Callers:
 *     ?PmUpdatePartition@@YAJPEAU_DEVICE_EXTENSION@@PEAU_PARTITION_EXTENSION@@PEAU_DRIVE_LAYOUT_INFORMATION_EX@@KPEAU_PARTITION_INFORMATION_EX@@@Z @ 0x1C0003380 (-PmUpdatePartition@@YAJPEAU_DEVICE_EXTENSION@@PEAU_PARTITION_EXTENSION@@PEAU_DRIVE_LAYOUT_INFORM.c)
 *     ?PmUpdatePartitionsLegacyRemovable@@YAJPEAU_DEVICE_EXTENSION@@PEAU_DRIVE_LAYOUT_INFORMATION_EX@@@Z @ 0x1C000C838 (-PmUpdatePartitionsLegacyRemovable@@YAJPEAU_DEVICE_EXTENSION@@PEAU_DRIVE_LAYOUT_INFORMATION_EX@@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PmVerifyPropertyChange(struct _PARTITION_INFORMATION_EX *a1, struct _PARTITION_INFORMATION_EX *a2)
{
  PARTITION_STYLE PartitionStyle; // r9d
  unsigned int v3; // r8d
  DWORD64 Attributes; // r11
  __int64 v6; // rcx
  __int64 v8; // rcx

  PartitionStyle = a1->PartitionStyle;
  v3 = 0;
  if ( a1->PartitionStyle == a2->PartitionStyle )
  {
    if ( PartitionStyle )
    {
      if ( PartitionStyle == PARTITION_STYLE_GPT )
      {
        Attributes = a1->Gpt.Attributes;
        if ( ((Attributes ^ a2->Gpt.Attributes) & 0x400000000000000LL) != 0 )
        {
          v3 = 256;
        }
        else if ( Attributes != a2->Gpt.Attributes )
        {
          v3 = 16;
        }
        v6 = *(_QWORD *)&a1->Mbr - *(_QWORD *)&a2->Mbr;
        if ( !v6 )
          v6 = *(_QWORD *)a1->Gpt.PartitionType.Data4 - *(_QWORD *)a2->Gpt.PartitionType.Data4;
        if ( v6 )
          v3 |= 0x10u;
      }
    }
    else
    {
      v3 = a2->Mbr.PartitionType != a1->Mbr.PartitionType ? 0x10 : 0;
      v8 = *(_QWORD *)a1->Gpt.PartitionType.Data4 - *(_QWORD *)a2->Gpt.PartitionType.Data4;
      if ( !v8 )
        v8 = *(_QWORD *)&a1->Gpt.PartitionId.Data1 - *(_QWORD *)&a2->Gpt.PartitionId.Data1;
      if ( v8 )
        v3 |= 0x20u;
    }
  }
  else
  {
    v3 = 48;
    if ( PartitionStyle == PARTITION_STYLE_GPT && _bittest64((const signed __int64 *)&a1->Gpt.Attributes, 0x3Au) )
      return 304;
  }
  return v3;
}
