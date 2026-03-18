/*
 * XREFs of CmpRemoveSubKeyCellNoCellRef @ 0x1409211E4
 * Callers:
 *     CmpCheckRegistry2 @ 0x1407C5CB0 (CmpCheckRegistry2.c)
 * Callees:
 *     HvpGetCellFlat @ 0x1406BF400 (HvpGetCellFlat.c)
 *     HvpReleaseCellFlat @ 0x1406BF450 (HvpReleaseCellFlat.c)
 *     HvpMarkCellDirty @ 0x14071F300 (HvpMarkCellDirty.c)
 *     HvFreeCell @ 0x14079BD98 (HvFreeCell.c)
 *     HvpReleaseCellPaged @ 0x1407C97C0 (HvpReleaseCellPaged.c)
 *     HvpGetCellPaged @ 0x1407C9820 (HvpGetCellPaged.c)
 *     CmpFindCellInIndex @ 0x140920C14 (CmpFindCellInIndex.c)
 *     CmpRemoveCellFromIndex @ 0x140921144 (CmpRemoveCellFromIndex.c)
 */

__int64 __fastcall CmpRemoveSubKeyCellNoCellRef(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter4, int a3)
{
  unsigned int v5; // edi
  _WORD *v6; // r13
  __int64 CellFlat; // rax
  __int64 v8; // r14
  int v9; // edi
  unsigned int v10; // r12d
  _WORD *CellPaged; // rax
  _WORD *v12; // rsi
  unsigned int *v13; // r15
  unsigned int v14; // r15d
  _WORD *v15; // rax
  unsigned __int16 v17; // di
  unsigned __int16 v18; // r15
  unsigned __int16 CellInIndex; // [rsp+20h] [rbp-30h]
  __int64 v21; // [rsp+28h] [rbp-28h] BYREF
  __int64 v22; // [rsp+30h] [rbp-20h] BYREF
  __int64 v23; // [rsp+38h] [rbp-18h] BYREF
  _WORD *v24; // [rsp+40h] [rbp-10h]
  unsigned __int16 v25; // [rsp+90h] [rbp+40h]
  unsigned __int16 v27; // [rsp+A8h] [rbp+58h]

  v23 = 0xFFFFFFFFLL;
  v22 = 0xFFFFFFFFLL;
  v21 = 0xFFFFFFFFLL;
  v5 = BugCheckParameter4;
  v6 = 0LL;
  if ( (*(_BYTE *)(BugCheckParameter2 + 140) & 1) != 0 )
    CellFlat = HvpGetCellFlat(BugCheckParameter2, BugCheckParameter4, &v23);
  else
    CellFlat = HvpGetCellPaged(BugCheckParameter2, BugCheckParameter4, (unsigned int *)&v23);
  v8 = CellFlat;
  v9 = HvpMarkCellDirty(BugCheckParameter2, v5, 0);
  if ( v9 < 0 )
    goto LABEL_51;
  v10 = *(_DWORD *)(v8 + 28);
  if ( (*(_BYTE *)(BugCheckParameter2 + 140) & 1) != 0 )
    CellPaged = (_WORD *)HvpGetCellFlat(BugCheckParameter2, v10, &v22);
  else
    CellPaged = (_WORD *)HvpGetCellPaged(BugCheckParameter2, v10, (unsigned int *)&v22);
  v12 = CellPaged;
  if ( *CellPaged == 26994 )
  {
    v27 = CellPaged[1];
    v9 = 0;
    if ( !v27 )
    {
LABEL_21:
      if ( (*(_DWORD *)(v8 + 20))-- == 1 )
      {
        *(_DWORD *)(v8 + 28) = -1;
        *(_WORD *)(v8 + 52) = 0;
        *(_DWORD *)(v8 + 56) = 0;
      }
      goto LABEL_23;
    }
    v13 = (unsigned int *)(CellPaged + 2);
    v24 = CellPaged + 2;
    while ( 1 )
    {
      if ( v9 )
      {
        if ( (*(_BYTE *)(BugCheckParameter2 + 140) & 1) != 0 )
          HvpReleaseCellFlat(BugCheckParameter2, &v21);
        else
          HvpReleaseCellPaged(BugCheckParameter2, (unsigned int *)&v21);
      }
      v14 = *v13;
      v15 = (_WORD *)((*(_BYTE *)(BugCheckParameter2 + 140) & 1) != 0
                    ? HvpGetCellFlat(BugCheckParameter2, v14, &v21)
                    : HvpGetCellPaged(BugCheckParameter2, v14, (unsigned int *)&v21));
      v6 = v15;
      CellInIndex = CmpFindCellInIndex(v15, a3);
      v25 = v6[1];
      if ( CellInIndex < v25 )
        break;
      ++v9;
      v13 = (unsigned int *)(v24 + 2);
      v24 += 2;
      if ( v9 >= (unsigned int)v27 )
        goto LABEL_20;
    }
    v9 = HvpMarkCellDirty(BugCheckParameter2, v14, 0);
    if ( v9 < 0 )
      goto LABEL_23;
    if ( v25 == 1 )
    {
      v9 = HvpMarkCellDirty(BugCheckParameter2, v10, 0);
      if ( v9 < 0 )
        goto LABEL_23;
      v17 = CmpFindCellInIndex(v12, v14);
      if ( v17 >= v12[1] )
      {
        v9 = -1073741492;
LABEL_23:
        if ( v6 )
        {
          if ( (*(_BYTE *)(BugCheckParameter2 + 140) & 1) != 0 )
            HvpReleaseCellFlat(BugCheckParameter2, &v21);
          else
            HvpReleaseCellPaged(BugCheckParameter2, (unsigned int *)&v21);
        }
        goto LABEL_47;
      }
    }
    else
    {
      v17 = v27;
    }
    CmpRemoveCellFromIndex(v6, CellInIndex);
    if ( v25 != 1 )
    {
LABEL_20:
      v9 = 0;
      goto LABEL_21;
    }
    CmpRemoveCellFromIndex(v12, v17);
    if ( (*(_BYTE *)(BugCheckParameter2 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter2, &v21);
    else
      HvpReleaseCellPaged(BugCheckParameter2, (unsigned int *)&v21);
    v9 = 0;
    v6 = 0LL;
    HvFreeCell(BugCheckParameter2, v14);
LABEL_37:
    if ( !v12[1] )
    {
      if ( (*(_BYTE *)(BugCheckParameter2 + 140) & 1) != 0 )
        HvpReleaseCellFlat(BugCheckParameter2, &v22);
      else
        HvpReleaseCellPaged(BugCheckParameter2, (unsigned int *)&v22);
      v12 = 0LL;
      HvFreeCell(BugCheckParameter2, v10);
    }
    goto LABEL_21;
  }
  v18 = CmpFindCellInIndex(CellPaged, a3);
  if ( v18 < v12[1] )
  {
    v9 = HvpMarkCellDirty(BugCheckParameter2, v10, 0);
    if ( v9 >= 0 )
    {
      CmpRemoveCellFromIndex(v12, v18);
      v9 = 0;
      goto LABEL_37;
    }
  }
  else
  {
    v9 = -1073741492;
  }
LABEL_47:
  if ( v12 )
  {
    if ( (*(_BYTE *)(BugCheckParameter2 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter2, &v22);
    else
      HvpReleaseCellPaged(BugCheckParameter2, (unsigned int *)&v22);
  }
LABEL_51:
  if ( v8 )
  {
    if ( (*(_BYTE *)(BugCheckParameter2 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter2, &v23);
    else
      HvpReleaseCellPaged(BugCheckParameter2, (unsigned int *)&v23);
  }
  return (unsigned int)v9;
}
