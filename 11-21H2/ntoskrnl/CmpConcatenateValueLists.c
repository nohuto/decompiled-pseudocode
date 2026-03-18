/*
 * XREFs of CmpConcatenateValueLists @ 0x14065C3B8
 * Callers:
 *     CmpFullPromoteSingleKeyFromKeyNodeStacks @ 0x14065AAAC (CmpFullPromoteSingleKeyFromKeyNodeStacks.c)
 * Callees:
 *     memmove @ 0x140435B40 (memmove.c)
 *     HvpGetCellFlat @ 0x1406BF400 (HvpGetCellFlat.c)
 *     HvpReleaseCellFlat @ 0x1406BF450 (HvpReleaseCellFlat.c)
 *     HvFreeCell @ 0x14079BD98 (HvFreeCell.c)
 *     HvAllocateCell @ 0x14079C8A4 (HvAllocateCell.c)
 *     HvpReleaseCellPaged @ 0x1407C97C0 (HvpReleaseCellPaged.c)
 *     HvpGetCellContextReinitialize @ 0x1407C97FC (HvpGetCellContextReinitialize.c)
 *     HvpGetCellPaged @ 0x1407C9820 (HvpGetCellPaged.c)
 */

__int64 __fastcall CmpConcatenateValueLists(
        ULONG_PTR BugCheckParameter3,
        unsigned int *a2,
        unsigned int *a3,
        int a4,
        unsigned int *a5)
{
  unsigned int v9; // r15d
  int Cell; // eax
  char *v11; // r12
  unsigned int v12; // edi
  unsigned int v13; // edi
  const void *CellPaged; // rax
  unsigned int *v15; // rcx
  unsigned int v16; // esi
  int v17; // eax
  unsigned int *v19; // rax
  const void *CellFlat; // rax
  __int64 v21; // [rsp+30h] [rbp-10h] BYREF
  void *v22; // [rsp+38h] [rbp-8h] BYREF
  int v23; // [rsp+78h] [rbp+38h] BYREF
  __int64 v24; // [rsp+80h] [rbp+40h] BYREF

  v24 = 0LL;
  v21 = 0LL;
  v22 = 0LL;
  v23 = -1;
  HvpGetCellContextReinitialize(&v21);
  HvpGetCellContextReinitialize(&v24);
  v9 = *a2 + *a3;
  if ( v9 < *a2 )
  {
    return (unsigned int)-1073741670;
  }
  else if ( v9 )
  {
    Cell = HvAllocateCell(BugCheckParameter3, 4 * v9, a4, (unsigned int)&v23, (__int64)&v22, (__int64)&v21);
    v11 = (char *)v22;
    v12 = Cell;
    if ( Cell < 0 )
    {
      v16 = v23;
    }
    else
    {
      v13 = 0;
      if ( *a2 )
      {
        if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
          CellFlat = (const void *)HvpGetCellFlat(BugCheckParameter3, a2[1]);
        else
          CellFlat = (const void *)HvpGetCellPaged(BugCheckParameter3);
        memmove(v11, CellFlat, 4LL * *a2);
        if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
          HvpReleaseCellFlat(BugCheckParameter3, &v24);
        else
          HvpReleaseCellPaged(BugCheckParameter3, &v24);
        v13 = *a2;
      }
      if ( *a3 )
      {
        if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
          CellPaged = (const void *)HvpGetCellFlat(BugCheckParameter3, a3[1]);
        else
          CellPaged = (const void *)HvpGetCellPaged(BugCheckParameter3);
        memmove(&v11[4 * v13], CellPaged, 4LL * *a3);
        if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
          HvpReleaseCellFlat(BugCheckParameter3, &v24);
        else
          HvpReleaseCellPaged(BugCheckParameter3, &v24);
      }
      v15 = a5;
      v16 = -1;
      v17 = v23;
      v12 = 0;
      *a5 = v9;
      v15[1] = v17;
    }
    if ( v11 )
    {
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        HvpReleaseCellFlat(BugCheckParameter3, &v21);
      else
        HvpReleaseCellPaged(BugCheckParameter3, &v21);
    }
    if ( v16 != -1 )
      HvFreeCell(BugCheckParameter3, v16);
  }
  else
  {
    v19 = a5;
    *a5 = 0;
    v12 = 0;
    v19[1] = -1;
  }
  return v12;
}
