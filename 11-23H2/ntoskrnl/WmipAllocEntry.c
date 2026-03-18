/*
 * XREFs of WmipAllocEntry @ 0x14086AF00
 * Callers:
 *     WmipUpdateModifyGuid @ 0x1407FFC18 (WmipUpdateModifyGuid.c)
 *     WmipAddMofResource @ 0x14080EC6C (WmipAddMofResource.c)
 *     WmipAllocGuidEntry @ 0x140841AE4 (WmipAllocGuidEntry.c)
 *     WmipAddDataSource @ 0x14086A0E0 (WmipAddDataSource.c)
 *     WmipUpdateAddGuid @ 0x1409E1B6C (WmipUpdateAddGuid.c)
 * Callees:
 *     ExAllocateFromNPagedLookasideList @ 0x1402B6B30 (ExAllocateFromNPagedLookasideList.c)
 *     memset @ 0x140435A00 (memset.c)
 */

_QWORD *__fastcall WmipAllocEntry(__int64 a1)
{
  _QWORD *v2; // rax
  _QWORD *v3; // rbx

  v2 = ExAllocateFromNPagedLookasideList(*(PPAGED_LOOKASIDE_LIST *)a1);
  v3 = v2;
  if ( v2 )
  {
    memset(v2, 0, *(unsigned int *)(a1 + 8));
    v3[3] = 1LL;
    *((_DWORD *)v3 + 4) = *(_DWORD *)(a1 + 24);
    *((_DWORD *)v3 + 8) = *(_DWORD *)(a1 + 28);
  }
  return v3;
}
