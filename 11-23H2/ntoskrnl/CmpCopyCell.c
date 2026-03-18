/*
 * XREFs of CmpCopyCell @ 0x1407DDCB0
 * Callers:
 *     CmpCopyKeyPartial @ 0x1407DD858 (CmpCopyKeyPartial.c)
 *     CmpCopyValue @ 0x1408AB984 (CmpCopyValue.c)
 *     CmpCopyMergeOfLayeredKeyNode @ 0x140A210D8 (CmpCopyMergeOfLayeredKeyNode.c)
 *     CmpSyncKeyValues @ 0x140A22DD4 (CmpSyncKeyValues.c)
 *     CmpFullPromoteSingleKeyFromKeyNodeStacks @ 0x140A25DD4 (CmpFullPromoteSingleKeyFromKeyNodeStacks.c)
 *     CmpLightWeightCreateSetValueData @ 0x140A28AC4 (CmpLightWeightCreateSetValueData.c)
 *     CmpLightWeightPrepareRenameKeyUoW @ 0x140A293A0 (CmpLightWeightPrepareRenameKeyUoW.c)
 * Callees:
 *     memmove @ 0x140435700 (memmove.c)
 *     HvpGetCellPaged @ 0x1406E0150 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x1406E0260 (HvpReleaseCellPaged.c)
 *     HvpGetCellContextReinitialize @ 0x1406E029C (HvpGetCellContextReinitialize.c)
 *     HvAllocateCell @ 0x14070A3C8 (HvAllocateCell.c)
 *     HvpReleaseCellFlat @ 0x1407D9470 (HvpReleaseCellFlat.c)
 *     HvpGetCellFlat @ 0x1407FD9F0 (HvpGetCellFlat.c)
 */

__int64 __fastcall CmpCopyCell(
        ULONG_PTR BugCheckParameter3,
        ULONG_PTR BugCheckParameter4,
        ULONG_PTR a3,
        unsigned int a4,
        int *a5)
{
  unsigned int v8; // esi
  __int64 CellFlat; // rax
  const void *v10; // rsi
  unsigned int v11; // r12d
  int v12; // r14d
  __int64 v14; // [rsp+30h] [rbp-20h] BYREF
  __int64 v15; // [rsp+38h] [rbp-18h] BYREF
  void *v16; // [rsp+40h] [rbp-10h] BYREF
  int v17; // [rsp+70h] [rbp+20h] BYREF

  v14 = 0LL;
  v15 = 0LL;
  v17 = -1;
  v8 = BugCheckParameter4;
  HvpGetCellContextReinitialize(&v14);
  v16 = 0LL;
  HvpGetCellContextReinitialize(&v15);
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    CellFlat = HvpGetCellFlat(BugCheckParameter3, v8);
  else
    CellFlat = HvpGetCellPaged(BugCheckParameter3, v8, (unsigned int *)&v14);
  v10 = (const void *)CellFlat;
  v11 = -4 - *(_DWORD *)(CellFlat - 4);
  v12 = HvAllocateCell(a3, v11, a4, &v17, (__int64)&v16, (__int64)&v15);
  if ( v12 >= 0 )
  {
    memmove(v16, v10, v11);
    v12 = 0;
    *a5 = v17;
  }
  if ( v16 )
  {
    if ( (*(_BYTE *)(a3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(a3, &v15);
    else
      HvpReleaseCellPaged(a3, (unsigned int *)&v15);
  }
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    HvpReleaseCellFlat(BugCheckParameter3, &v14);
  else
    HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v14);
  return (unsigned int)v12;
}
