/*
 * XREFs of WmipAllocEntry @ 0x14075E074
 * Callers:
 *     WmipAddDataSource @ 0x14075D1B4 (WmipAddDataSource.c)
 *     WmipAllocGuidEntry @ 0x14075DFE4 (WmipAllocGuidEntry.c)
 *     WmipAddMofResource @ 0x14084E03C (WmipAddMofResource.c)
 *     WmipUpdateAddGuid @ 0x1409DE730 (WmipUpdateAddGuid.c)
 *     WmipUpdateModifyGuid @ 0x1409DEB60 (WmipUpdateModifyGuid.c)
 * Callees:
 *     ExAllocateFromNPagedLookasideList @ 0x140202234 (ExAllocateFromNPagedLookasideList.c)
 *     memset @ 0x140435E00 (memset.c)
 */

_QWORD *__fastcall WmipAllocEntry(__int64 a1)
{
  _QWORD *v2; // rax
  _QWORD *v3; // rbx

  v2 = ExAllocateFromNPagedLookasideList(*(PNPAGED_LOOKASIDE_LIST *)a1);
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
