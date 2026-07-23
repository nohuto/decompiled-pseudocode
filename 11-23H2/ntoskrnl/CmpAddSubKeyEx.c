/*
 * XREFs of CmpAddSubKeyEx @ 0x140708778
 * Callers:
 *     CmpCreateChild @ 0x1406D0FA0 (CmpCreateChild.c)
 *     CmpAddSubKey @ 0x1408ABF2E (CmpAddSubKey.c)
 *     CmpCopySyncTree2 @ 0x140A21758 (CmpCopySyncTree2.c)
 *     CmpPartialPromoteSingleKeyFromKeyNodeStacks @ 0x140A264C8 (CmpPartialPromoteSingleKeyFromKeyNodeStacks.c)
 * Callees:
 *     HvpGetCellPaged @ 0x1406E0180 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x1406E0290 (HvpReleaseCellPaged.c)
 *     HvpGetCellContextReinitialize @ 0x1406E02CC (HvpGetCellContextReinitialize.c)
 *     CmpAddSubKeyToList @ 0x1407089E4 (CmpAddSubKeyToList.c)
 *     HvAllocateCell @ 0x14070A5D8 (HvAllocateCell.c)
 *     HvFreeCell @ 0x14070ADF0 (HvFreeCell.c)
 *     HvpMarkCellDirty @ 0x140747190 (HvpMarkCellDirty.c)
 *     HvpReleaseCellFlat @ 0x1407D9740 (HvpReleaseCellFlat.c)
 *     HvpGetCellFlat @ 0x1407FDCC0 (HvpGetCellFlat.c)
 */

__int64 __fastcall CmpAddSubKeyEx(
        ULONG_PTR BugCheckParameter3,
        ULONG_PTR BugCheckParameter4,
        unsigned int a3,
        unsigned int a4)
{
  unsigned int v5; // r12d
  unsigned int v8; // edi
  __int64 CellFlat; // rax
  __int64 v10; // r14
  __int64 v11; // r8
  __int64 v12; // r15
  unsigned int *v13; // rsi
  ULONG_PTR v14; // rdx
  __int16 *CellPaged; // rax
  __int16 v16; // cx
  __int16 *v17; // rdi
  int Cell; // esi
  int v20; // eax
  unsigned int v21; // ecx
  __int16 v22; // r13
  int v23; // edx
  __int16 *v24; // rax
  int v25; // eax
  unsigned int v26; // edx
  __int64 v27; // rcx
  __int16 *v28; // rcx
  int *v29; // rsi
  int v30; // [rsp+30h] [rbp-30h] BYREF
  int v31; // [rsp+34h] [rbp-2Ch]
  unsigned int v32; // [rsp+38h] [rbp-28h]
  __int64 v33; // [rsp+40h] [rbp-20h] BYREF
  __int16 *v34; // [rsp+48h] [rbp-18h] BYREF
  unsigned int v35[4]; // [rsp+50h] [rbp-10h] BYREF
  int v36; // [rsp+A0h] [rbp+40h] BYREF
  unsigned int v37; // [rsp+B0h] [rbp+50h]

  v37 = a3;
  v31 = -1;
  *(_QWORD *)v35 = 0LL;
  v33 = 0LL;
  v5 = -1;
  v36 = -1;
  v30 = -1;
  v8 = BugCheckParameter4;
  HvpGetCellContextReinitialize(v35);
  v34 = 0LL;
  HvpGetCellContextReinitialize(&v33);
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    CellFlat = HvpGetCellFlat(BugCheckParameter3, v8);
  else
    CellFlat = HvpGetCellPaged(BugCheckParameter3, v8, v35);
  v10 = CellFlat;
  v11 = a3 >> 31;
  v32 = a3 >> 31;
  v12 = v11;
  if ( !*(_DWORD *)(CellFlat + 4 * v11 + 20) )
  {
    if ( *(_DWORD *)(BugCheckParameter3 + 220) < 5u )
    {
      v23 = 12;
      v22 = 26220;
    }
    else
    {
      v20 = 1012;
      v21 = 1;
      v22 = 26732;
      if ( a4 )
        v21 = a4;
      if ( v21 < 0x3F4 )
        v20 = v21;
      v23 = 8 * v20 + 4;
    }
    Cell = HvAllocateCell(BugCheckParameter3, v23, v11, (unsigned int)&v36, (__int64)&v34, (__int64)&v33);
    if ( Cell < 0 )
    {
      v17 = v34;
      v5 = v36;
    }
    else
    {
      v24 = v34;
      *v34 = v22;
      v24[1] = 0;
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        HvpReleaseCellFlat(BugCheckParameter3, &v33);
      else
        HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v33);
      v17 = 0LL;
      Cell = CmpAddSubKeyToList(BugCheckParameter3);
      if ( Cell >= 0 )
      {
        v5 = -1;
        *(_DWORD *)(v10 + 4 * v12 + 28) = v36;
LABEL_11:
        ++*(_DWORD *)(v10 + 4 * v12 + 20);
        Cell = 0;
        goto LABEL_12;
      }
      v5 = v36;
    }
    goto LABEL_12;
  }
  v13 = (unsigned int *)(CellFlat + 4 * (v11 + 7));
  v14 = *v13;
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    CellPaged = (__int16 *)HvpGetCellFlat(BugCheckParameter3, v14);
  else
    CellPaged = (__int16 *)HvpGetCellPaged(BugCheckParameter3, v14, (unsigned int *)&v33);
  v16 = *CellPaged;
  v17 = CellPaged;
  if ( *CellPaged == 26220 )
  {
    if ( (unsigned __int16)CellPaged[1] < 0x1FBu )
      goto LABEL_10;
    v25 = HvpMarkCellDirty(BugCheckParameter3, *v13);
    Cell = v25;
    if ( v25 < 0 )
      goto LABEL_12;
    v26 = 0;
    if ( v17[1] )
    {
      do
      {
        v27 = v26++;
        *(_DWORD *)&v17[2 * v27 + 2] = *(_DWORD *)&v17[4 * v27 + 2];
      }
      while ( v26 < (unsigned __int16)v17[1] );
      v5 = v31;
    }
    *v17 = 26988;
  }
  else if ( v16 != 26988 && v16 != 26732 )
  {
    goto LABEL_10;
  }
  if ( (unsigned __int16)v17[1] < 0x3F5u )
    goto LABEL_10;
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    HvpReleaseCellFlat(BugCheckParameter3, &v33);
  else
    HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v33);
  v34 = 0LL;
  Cell = HvAllocateCell(BugCheckParameter3, 12, v32, (unsigned int)&v30, (__int64)&v34, (__int64)&v33);
  if ( Cell >= 0 )
  {
    v28 = v34;
    v29 = (int *)(v10 + 4 * (v12 + 7));
    *(_DWORD *)v34 = 92530;
    *((_DWORD *)v28 + 1) = *v29;
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, &v33);
    else
      HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v33);
    v17 = 0LL;
    *v29 = v30;
LABEL_10:
    Cell = CmpAddSubKeyToList(BugCheckParameter3);
    if ( Cell < 0 )
      goto LABEL_12;
    goto LABEL_11;
  }
  v17 = v34;
LABEL_12:
  if ( v10 )
  {
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, v35);
    else
      HvpReleaseCellPaged(BugCheckParameter3, v35);
  }
  if ( v17 )
  {
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, &v33);
    else
      HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v33);
  }
  if ( v5 != -1 )
    HvFreeCell(BugCheckParameter3, v5);
  return (unsigned int)Cell;
}
