/*
 * XREFs of CmpCheckAndFixSecurityCellsRefcount @ 0x1407D1598
 * Callers:
 *     CmpCheckRegistry2 @ 0x1406DFB00 (CmpCheckRegistry2.c)
 * Callees:
 *     CmpRemoveSecurityCellList @ 0x14036208C (CmpRemoveSecurityCellList.c)
 *     HvpGetCellPaged @ 0x1406E0180 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x1406E0290 (HvpReleaseCellPaged.c)
 *     HvFreeCell @ 0x14070ADF0 (HvFreeCell.c)
 *     HvpReleaseCellFlat @ 0x1407D9740 (HvpReleaseCellFlat.c)
 *     HvpGetCellFlat @ 0x1407FDCC0 (HvpGetCellFlat.c)
 *     HvMarkCellDirty @ 0x1408ABF46 (HvMarkCellDirty.c)
 *     HvpGetBinContextInitialize @ 0x140AF5200 (HvpGetBinContextInitialize.c)
 */

__int64 __fastcall CmpCheckAndFixSecurityCellsRefcount(ULONG_PTR BugCheckParameter2)
{
  unsigned int *v1; // rsi
  unsigned int v3; // ebp
  _BYTE *i; // rbx
  unsigned int v5; // r14d
  unsigned int *v6; // r15
  unsigned int v7; // r12d
  ULONG_PTR v8; // rdx
  __int64 CellFlat; // rax
  int v10; // r14d
  unsigned int v11; // ebp
  __int64 v13; // [rsp+68h] [rbp+10h] BYREF

  v1 = 0LL;
  v13 = 0xFFFFFFFFLL;
  HvpGetBinContextInitialize((char *)&v13 + 4);
  v3 = 0;
  for ( i = (_BYTE *)(BugCheckParameter2 + 140); v3 < *(_DWORD *)(BugCheckParameter2 + 1872); v3 = v11 + 1 )
  {
    v5 = v3;
    v6 = (unsigned int *)(*(_QWORD *)(BugCheckParameter2 + 1888) + 16LL * v3);
    v7 = *v6;
    v8 = *v6;
    if ( (*i & 1) != 0 )
      CellFlat = HvpGetCellFlat(BugCheckParameter2, v8);
    else
      CellFlat = HvpGetCellPaged(BugCheckParameter2, v8, (unsigned int *)&v13);
    v1 = (unsigned int *)CellFlat;
    if ( *(_DWORD *)(CellFlat + 12) != *(_DWORD *)(*((_QWORD *)v6 + 1) + 28LL) )
    {
      v10 = HvMarkCellDirty(BugCheckParameter2, *v6, 0LL);
      if ( v10 < 0 )
        goto LABEL_23;
      v5 = v3;
      v1[3] = *(_DWORD *)(*((_QWORD *)v6 + 1) + 28LL);
    }
    if ( *(_DWORD *)(*((_QWORD *)v6 + 1) + 28LL) )
    {
      v11 = v5;
      if ( v1 )
      {
        if ( (*i & 1) != 0 )
          HvpReleaseCellFlat(BugCheckParameter2, &v13);
        else
          HvpReleaseCellPaged(BugCheckParameter2, (unsigned int *)&v13);
        v1 = 0LL;
      }
    }
    else
    {
      v10 = HvMarkCellDirty(BugCheckParameter2, v7, 0LL);
      if ( v10 < 0 )
        goto LABEL_23;
      v10 = HvMarkCellDirty(BugCheckParameter2, v1[1], 0LL);
      if ( v10 < 0 )
        goto LABEL_23;
      v10 = HvMarkCellDirty(BugCheckParameter2, v1[2], 0LL);
      if ( v10 < 0 )
        goto LABEL_23;
      if ( (*i & 1) != 0 )
        HvpReleaseCellFlat(BugCheckParameter2, &v13);
      else
        HvpReleaseCellPaged(BugCheckParameter2, (unsigned int *)&v13);
      v1 = 0LL;
      CmpRemoveSecurityCellList(BugCheckParameter2, v7);
      HvFreeCell(BugCheckParameter2, v7);
      v11 = v3 - 1;
    }
  }
  v10 = 0;
LABEL_23:
  if ( v1 )
  {
    if ( (*i & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter2, &v13);
    else
      HvpReleaseCellPaged(BugCheckParameter2, (unsigned int *)&v13);
  }
  return (unsigned int)v10;
}
