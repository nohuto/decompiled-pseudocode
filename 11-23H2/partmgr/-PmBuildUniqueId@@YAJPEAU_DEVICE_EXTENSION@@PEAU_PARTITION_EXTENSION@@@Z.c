/*
 * XREFs of ?PmBuildUniqueId@@YAJPEAU_DEVICE_EXTENSION@@PEAU_PARTITION_EXTENSION@@@Z @ 0x1C00079B8
 * Callers:
 *     ?PmUpdatePartition@@YAJPEAU_DEVICE_EXTENSION@@PEAU_PARTITION_EXTENSION@@PEAU_DRIVE_LAYOUT_INFORMATION_EX@@KPEAU_PARTITION_INFORMATION_EX@@@Z @ 0x1C0003380 (-PmUpdatePartition@@YAJPEAU_DEVICE_EXTENSION@@PEAU_PARTITION_EXTENSION@@PEAU_DRIVE_LAYOUT_INFORM.c)
 *     ?PmCreatePartition@@YAJPEAU_DEVICE_EXTENSION@@PEAU_DRIVE_LAYOUT_INFORMATION_EX@@KPEAU_PARTITION_INFORMATION_EX@@PEAPEAU_PARTITION_EXTENSION@@@Z @ 0x1C001F7CC (-PmCreatePartition@@YAJPEAU_DEVICE_EXTENSION@@PEAU_DRIVE_LAYOUT_INFORMATION_EX@@KPEAU_PARTITION_.c)
 * Callees:
 *     memmove @ 0x1C000B740 (memmove.c)
 */

__int64 __fastcall PmBuildUniqueId(struct _DEVICE_EXTENSION *a1, struct _PARTITION_EXTENSION *a2)
{
  unsigned int v2; // esi
  _DWORD *v3; // rbx
  int v6; // ebp
  __int64 Pool2; // rax
  _WORD *v8; // r15
  _QWORD *v9; // rcx
  __int128 v10; // xmm0
  KIRQL v11; // al
  void *v12; // rbp

  v2 = 0;
  v3 = (_DWORD *)((char *)a1 + 512);
  if ( *((_DWORD *)a2 + 42) == 1 || (*v3 & 0x4000) != 0 )
  {
    v6 = 24;
  }
  else if ( (*(_DWORD *)(*((_QWORD *)a1 + 1) + 52LL) & 1) != 0 )
  {
    v6 = *((unsigned __int16 *)a2 + 24);
  }
  else
  {
    v6 = 12;
  }
  Pool2 = ExAllocatePool2(66LL, (unsigned int)(v6 + 2), 1178758480LL);
  v8 = (_WORD *)Pool2;
  if ( Pool2 )
  {
    v9 = (_QWORD *)(Pool2 + 2);
    if ( *((_DWORD *)a2 + 42) == 1 || (*v3 & 0x4000) != 0 )
    {
      v10 = *((_OWORD *)a2 + 4);
      *v9 = 0x3A44493A4F494D44LL;
      *(_OWORD *)(Pool2 + 10) = v10;
    }
    else if ( (*(_DWORD *)(*((_QWORD *)a1 + 1) + 52LL) & 1) != 0 )
    {
      memmove(v9, *((const void **)a2 + 7), *((unsigned __int16 *)a2 + 24));
    }
    else
    {
      *(_DWORD *)v9 = *((_DWORD *)a2 + 52);
      *(_QWORD *)(Pool2 + 6) = *((_QWORD *)a2 + 22);
    }
    *v8 = v6;
    v11 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)a1 + 14);
    v12 = (void *)*((_QWORD *)a2 + 10);
    *((_QWORD *)a2 + 10) = v8;
    KeReleaseSpinLock((PKSPIN_LOCK)a1 + 14, v11);
    if ( v12 )
      ExFreePoolWithTag(v12, 0);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v2;
}
