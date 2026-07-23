/*
 * XREFs of CmpFindSubKeyInRoot @ 0x1406D7EBC
 * Callers:
 *     CmpWalkOneLevel @ 0x1406DD850 (CmpWalkOneLevel.c)
 *     CmpRemoveSubKeyFromList @ 0x14070BF30 (CmpRemoveSubKeyFromList.c)
 *     CmpMarkIndexDirtyInStorageType @ 0x14070C3DC (CmpMarkIndexDirtyInStorageType.c)
 *     CmpFindSubKeyByNameWithStatus @ 0x140825C70 (CmpFindSubKeyByNameWithStatus.c)
 *     CmpSelectLeaf @ 0x140874D50 (CmpSelectLeaf.c)
 * Callees:
 *     CmpCompareInIndex @ 0x1406D9690 (CmpCompareInIndex.c)
 *     HvpGetCellPaged @ 0x1406E0180 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x1406E0290 (HvpReleaseCellPaged.c)
 *     HvpReleaseCellFlat @ 0x1407D9740 (HvpReleaseCellFlat.c)
 *     HvpGetCellFlat @ 0x1407FDCC0 (HvpGetCellFlat.c)
 */

__int64 __fastcall CmpFindSubKeyInRoot(
        ULONG_PTR BugCheckParameter3,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int *a5)
{
  int v5; // r15d
  unsigned int v6; // r15d
  unsigned int *v7; // rdi
  unsigned int v8; // r12d
  __int64 v10; // rbx
  unsigned int v11; // esi
  __int64 CellFlat; // rax
  __int64 v13; // r13
  int v14; // eax
  int v15; // eax
  __int64 v16; // r13
  __int64 CellPaged; // rax
  __int64 v18; // rbx
  int v19; // eax
  int v20; // eax
  __int64 v22; // rax
  int v23; // eax
  int v24; // [rsp+80h] [rbp+48h] BYREF
  int v25; // [rsp+84h] [rbp+4Ch]
  __int64 v26; // [rsp+88h] [rbp+50h]
  __int64 v27; // [rsp+90h] [rbp+58h]
  __int64 v28; // [rsp+98h] [rbp+60h]

  v28 = a4;
  v27 = a3;
  v26 = a2;
  v5 = *(unsigned __int16 *)(a2 + 2);
  v24 = -1;
  v6 = v5 - 1;
  v7 = a5;
  v8 = 0;
  v25 = 0;
  while ( 1 )
  {
    v10 = v8 + ((v6 - v8) >> 1);
    v11 = *(_DWORD *)(a2 + 4 * v10 + 4);
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      CellFlat = HvpGetCellFlat(BugCheckParameter3, v11);
    else
      CellFlat = HvpGetCellPaged(BugCheckParameter3);
    v13 = CellFlat;
    if ( !CellFlat )
      goto LABEL_46;
    v14 = CmpCompareInIndex(
            BugCheckParameter3,
            v27,
            v28,
            (unsigned int)*(unsigned __int16 *)(CellFlat + 2) - 1,
            CellFlat,
            (__int64)v7);
    if ( v14 == 2 )
      goto LABEL_39;
    if ( !v14 )
      goto LABEL_25;
    if ( v14 >= 0 )
    {
      v8 += (v6 - v8) >> 1;
    }
    else
    {
      v15 = CmpCompareInIndex(BugCheckParameter3, v27, v28, 0, v13, (__int64)v7);
      if ( v15 == 2 )
        goto LABEL_39;
      if ( v15 >= 0 )
        goto LABEL_25;
      v6 = v8 + ((v6 - v8) >> 1);
    }
    if ( v6 - v8 <= 1 )
      break;
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, &v24);
    else
      HvpReleaseCellPaged(BugCheckParameter3, &v24);
    a2 = v26;
  }
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    HvpReleaseCellFlat(BugCheckParameter3, &v24);
  else
    HvpReleaseCellPaged(BugCheckParameter3, &v24);
  v16 = v26;
  v11 = *(_DWORD *)(v26 + 4LL * v8 + 4);
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    CellPaged = HvpGetCellFlat(BugCheckParameter3, *(unsigned int *)(v26 + 4LL * v8 + 4));
  else
    CellPaged = HvpGetCellPaged(BugCheckParameter3);
  v18 = CellPaged;
  if ( !CellPaged )
    goto LABEL_46;
  v19 = CmpCompareInIndex(
          BugCheckParameter3,
          v27,
          v28,
          (unsigned int)*(unsigned __int16 *)(CellPaged + 2) - 1,
          CellPaged,
          (__int64)v7);
  if ( v19 == 2 )
    goto LABEL_39;
  if ( v19 )
  {
    if ( v19 < 0 )
    {
      v20 = CmpCompareInIndex(BugCheckParameter3, v27, v28, 0, v18, (__int64)v7);
      if ( v20 != 2 )
      {
        LODWORD(v10) = v8;
        if ( v20 >= 0 )
          goto LABEL_25;
        goto LABEL_36;
      }
LABEL_39:
      LODWORD(v10) = 0x80000000;
LABEL_36:
      v11 = -1;
      goto LABEL_25;
    }
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, &v24);
    else
      HvpReleaseCellPaged(BugCheckParameter3, &v24);
    v11 = *(_DWORD *)(v16 + 4LL * v6 + 4);
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      v22 = HvpGetCellFlat(BugCheckParameter3, *(unsigned int *)(v16 + 4LL * v6 + 4));
    else
      v22 = HvpGetCellPaged(BugCheckParameter3);
    if ( v22 )
    {
      v23 = CmpCompareInIndex(
              BugCheckParameter3,
              v27,
              v28,
              (unsigned int)*(unsigned __int16 *)(v22 + 2) - 1,
              v22,
              (__int64)v7);
      if ( v23 != 2 )
      {
        LODWORD(v10) = v6;
        if ( v23 <= 0 )
          goto LABEL_25;
        goto LABEL_36;
      }
      goto LABEL_39;
    }
LABEL_46:
    *v7 = -1;
    LODWORD(v10) = 0x80000000;
    return (unsigned int)v10;
  }
  LODWORD(v10) = v8;
LABEL_25:
  *v7 = v11;
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    HvpReleaseCellFlat(BugCheckParameter3, &v24);
  else
    HvpReleaseCellPaged(BugCheckParameter3, &v24);
  return (unsigned int)v10;
}
