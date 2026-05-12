/*
 * XREFs of ?PmBuildStableGuid@@YAJPEAU_DEVICE_EXTENSION@@PEAU_PARTITION_EXTENSION@@@Z @ 0x1C001FA60
 * Callers:
 *     ?PmUpdatePartition@@YAJPEAU_DEVICE_EXTENSION@@PEAU_PARTITION_EXTENSION@@PEAU_DRIVE_LAYOUT_INFORMATION_EX@@KPEAU_PARTITION_INFORMATION_EX@@@Z @ 0x1C0003380 (-PmUpdatePartition@@YAJPEAU_DEVICE_EXTENSION@@PEAU_PARTITION_EXTENSION@@PEAU_DRIVE_LAYOUT_INFORM.c)
 *     ?PmCreatePartition@@YAJPEAU_DEVICE_EXTENSION@@PEAU_DRIVE_LAYOUT_INFORMATION_EX@@KPEAU_PARTITION_INFORMATION_EX@@PEAPEAU_PARTITION_EXTENSION@@@Z @ 0x1C001F7CC (-PmCreatePartition@@YAJPEAU_DEVICE_EXTENSION@@PEAU_DRIVE_LAYOUT_INFORMATION_EX@@KPEAU_PARTITION_.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PmBuildStableGuid(struct _DEVICE_EXTENSION *a1, UUID *a2)
{
  unsigned int v2; // r8d
  __int64 v3; // rax

  v2 = 0;
  if ( (*((_DWORD *)a1 + 128) & 0x4000) != 0 )
  {
    return (unsigned int)ExUuidCreate(a2 + 4);
  }
  else
  {
    v3 = 216LL;
    if ( *(_DWORD *)a2[10].Data4 != 1 )
      v3 = 208LL;
    a2[4] = *(UUID *)((char *)a2 + v3);
  }
  return v2;
}
