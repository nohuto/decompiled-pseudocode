/*
 * XREFs of CmpMarkKeyDirty @ 0x14070B670
 * Callers:
 *     CmDeleteLayeredKey @ 0x140616E3C (CmDeleteLayeredKey.c)
 *     CmpCreateChild @ 0x1406D0FA0 (CmpCreateChild.c)
 *     CmpFreeKeyByCell @ 0x14070B424 (CmpFreeKeyByCell.c)
 *     CmRenameKey @ 0x140A1465C (CmRenameKey.c)
 *     CmpLightWeightPrepareDeleteKeyUoW @ 0x140A29258 (CmpLightWeightPrepareDeleteKeyUoW.c)
 * Callees:
 *     HvpGetCellPaged @ 0x1406E0180 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x1406E0290 (HvpReleaseCellPaged.c)
 *     CmpMarkValueDataDirty @ 0x14070BC58 (CmpMarkValueDataDirty.c)
 *     CmpMarkIndexDirty @ 0x14070C268 (CmpMarkIndexDirty.c)
 *     HvpMarkCellDirty @ 0x140747190 (HvpMarkCellDirty.c)
 *     HvpReleaseCellFlat @ 0x1407D9740 (HvpReleaseCellFlat.c)
 *     HvpGetCellFlat @ 0x1407FDCC0 (HvpGetCellFlat.c)
 */

__int64 __fastcall CmpMarkKeyDirty(ULONG_PTR BugCheckParameter3, ULONG_PTR a2, char a3)
{
  __int64 v3; // r14
  bool v4; // zf
  char v5; // r13
  unsigned int v6; // r12d
  __int64 CellPaged; // rax
  __int64 v9; // rsi
  int v10; // edi
  ULONG_PTR v11; // rdx
  ULONG_PTR v12; // rdx
  ULONG_PTR v13; // rdx
  __int64 CellFlat; // rax
  __int64 v15; // r15
  ULONG_PTR v17; // rdx
  __int64 v18; // rax
  __int64 v19; // r15
  ULONG_PTR v20; // rdx
  __int64 v21; // rax
  __int64 v22; // r13
  unsigned int *v23; // rdx
  unsigned int v24[2]; // [rsp+20h] [rbp-20h] BYREF
  unsigned int v25[2]; // [rsp+28h] [rbp-18h] BYREF
  unsigned int v26[4]; // [rsp+30h] [rbp-10h] BYREF
  unsigned int v27; // [rsp+80h] [rbp+40h] BYREF
  int v28; // [rsp+84h] [rbp+44h]
  unsigned int v29; // [rsp+88h] [rbp+48h]
  char v30; // [rsp+90h] [rbp+50h]

  v30 = a3;
  v29 = a2;
  v3 = 0LL;
  v26[0] = -1;
  v4 = (*(_BYTE *)(BugCheckParameter3 + 140) & 1) == 0;
  v5 = a3;
  v6 = a2;
  v26[1] = 0;
  v25[0] = -1;
  v25[1] = 0;
  v27 = -1;
  v28 = 0;
  v24[0] = -1;
  v24[1] = 0;
  if ( v4 )
    CellPaged = HvpGetCellPaged(BugCheckParameter3, a2, v26);
  else
    CellPaged = HvpGetCellFlat(BugCheckParameter3, a2);
  v9 = CellPaged;
  if ( (*(_BYTE *)(CellPaged + 2) & 2) != 0 )
  {
    v10 = 0;
    goto LABEL_22;
  }
  v10 = HvpMarkCellDirty(BugCheckParameter3, v6);
  if ( v10 < 0 )
    goto LABEL_22;
  v11 = *(unsigned int *)(v9 + 48);
  if ( (_DWORD)v11 != -1 )
  {
    v10 = HvpMarkCellDirty(BugCheckParameter3, v11);
    if ( v10 < 0 )
      goto LABEL_22;
  }
  v12 = *(unsigned int *)(v9 + 44);
  if ( (_DWORD)v12 != -1 )
  {
    v10 = HvpMarkCellDirty(BugCheckParameter3, v12);
    if ( v10 < 0 )
      goto LABEL_22;
    v13 = *(unsigned int *)(v9 + 44);
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      CellFlat = HvpGetCellFlat(BugCheckParameter3, v13);
    else
      CellFlat = HvpGetCellPaged(BugCheckParameter3, v13, &v27);
    v15 = CellFlat;
    v10 = HvpMarkCellDirty(BugCheckParameter3, *(unsigned int *)(CellFlat + 4));
    if ( v10 < 0 || (v10 = HvpMarkCellDirty(BugCheckParameter3, *(unsigned int *)(v15 + 8)), v10 < 0) )
    {
      if ( !v15 )
        goto LABEL_22;
      v23 = &v27;
LABEL_51:
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        HvpReleaseCellFlat(BugCheckParameter3, v23);
      else
        HvpReleaseCellPaged(BugCheckParameter3, v23);
      goto LABEL_21;
    }
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, &v27);
    else
      HvpReleaseCellPaged(BugCheckParameter3, &v27);
  }
  if ( (*(_BYTE *)(v9 + 2) & 0x40) == 0 && *(_DWORD *)(v9 + 36) )
  {
    v10 = HvpMarkCellDirty(BugCheckParameter3, *(unsigned int *)(v9 + 40));
    if ( v10 < 0 )
      goto LABEL_22;
    v17 = *(unsigned int *)(v9 + 40);
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      v18 = HvpGetCellFlat(BugCheckParameter3, v17);
    else
      v18 = HvpGetCellPaged(BugCheckParameter3, v17, v25);
    v19 = 0LL;
    v3 = v18;
    if ( *(_DWORD *)(v9 + 36) )
    {
      while ( 1 )
      {
        v10 = HvpMarkCellDirty(BugCheckParameter3, *(unsigned int *)(v3 + 4 * v19));
        if ( v10 < 0 )
          goto LABEL_21;
        v20 = *(unsigned int *)(v3 + 4 * v19);
        if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
          v21 = HvpGetCellFlat(BugCheckParameter3, v20);
        else
          v21 = HvpGetCellPaged(BugCheckParameter3, v20, v24);
        v22 = v21;
        v10 = CmpMarkValueDataDirty(BugCheckParameter3);
        if ( v10 < 0 )
        {
          if ( !v22 )
            goto LABEL_21;
          v23 = v24;
          goto LABEL_51;
        }
        if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
          HvpReleaseCellFlat(BugCheckParameter3, v24);
        else
          HvpReleaseCellPaged(BugCheckParameter3, v24);
        v19 = (unsigned int)(v19 + 1);
        if ( (unsigned int)v19 >= *(_DWORD *)(v9 + 36) )
        {
          v5 = v30;
          break;
        }
      }
    }
    v6 = v29;
  }
  if ( (*(_BYTE *)(v9 + 2) & 4) != 0
    || !v5
    || (v10 = CmpMarkIndexDirty(BugCheckParameter3, *(unsigned int *)(v9 + 16), v6), v10 >= 0)
    && (v10 = HvpMarkCellDirty(BugCheckParameter3, *(unsigned int *)(v9 + 16)), v10 >= 0) )
  {
    v10 = 0;
  }
LABEL_21:
  if ( v3 )
  {
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, v25);
    else
      HvpReleaseCellPaged(BugCheckParameter3, v25);
  }
LABEL_22:
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    HvpReleaseCellFlat(BugCheckParameter3, v26);
  else
    HvpReleaseCellPaged(BugCheckParameter3, v26);
  return (unsigned int)v10;
}
