/*
 * XREFs of ?PartitionInsertPatch@@YAJPEAU_PARTITION_EXTENSION@@_K11@Z @ 0x1C000F538
 * Callers:
 *     ?PmAssociatePartitions@@YAJPEAU_DEVICE_EXTENSION@@PEAU_DRIVE_LAYOUT_INFORMATION_EX@@@Z @ 0x1C0002ED0 (-PmAssociatePartitions@@YAJPEAU_DEVICE_EXTENSION@@PEAU_DRIVE_LAYOUT_INFORMATION_EX@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PartitionInsertPatch(struct _PARTITION_EXTENSION *a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // edi
  _QWORD *v6; // rcx
  _QWORD *i; // rbx
  _QWORD *Pool2; // rax
  _QWORD *v11; // rcx

  v4 = 0;
  v6 = (_QWORD *)((char *)a1 + 328);
  for ( i = (_QWORD *)*v6; i != v6 && i[2] <= a2; i = (_QWORD *)*i )
    ;
  Pool2 = (_QWORD *)ExAllocatePool2(66LL, 40LL, 1347448144LL);
  if ( Pool2 )
  {
    Pool2[2] = a2;
    Pool2[3] = a3;
    Pool2[4] = a4;
    v11 = (_QWORD *)i[1];
    if ( (_QWORD *)*v11 != i )
      __fastfail(3u);
    *Pool2 = i;
    Pool2[1] = v11;
    *v11 = Pool2;
    i[1] = Pool2;
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v4;
}
