/*
 * XREFs of CmpSetValueDataExisting @ 0x1407E5CE4
 * Callers:
 *     CmpSetValueKeyExisting @ 0x14070B914 (CmpSetValueKeyExisting.c)
 * Callees:
 *     memmove @ 0x140435B00 (memmove.c)
 *     HvpGetCellPaged @ 0x1406E0180 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x1406E0290 (HvpReleaseCellPaged.c)
 *     HvReallocateCell @ 0x140709FC0 (HvReallocateCell.c)
 *     HvAllocateCell @ 0x14070A5D8 (HvAllocateCell.c)
 *     HvFreeCell @ 0x14070ADF0 (HvFreeCell.c)
 *     HvpReleaseCellFlat @ 0x1407D9740 (HvpReleaseCellFlat.c)
 *     HvpGetCellFlat @ 0x1407FDCC0 (HvpGetCellFlat.c)
 */

__int64 __fastcall CmpSetValueDataExisting(
        ULONG_PTR BugCheckParameter2,
        char *Src,
        unsigned int a3,
        unsigned int a4,
        ULONG_PTR BugCheckParameter4)
{
  unsigned __int16 v6; // di
  bool v8; // zf
  char *v9; // r12
  __int64 CellPaged; // rax
  __int64 v11; // r15
  ULONG_PTR v12; // rdx
  __int64 CellFlat; // rax
  __int64 v14; // r14
  unsigned int v15; // esi
  ULONG_PTR v16; // rdx
  void *v17; // rax
  size_t v18; // r8
  int Cell; // edi
  ULONG_PTR v21; // rdx
  int v22; // eax
  unsigned __int16 v23; // r12
  unsigned __int16 v24; // di
  ULONG_PTR v25; // rdx
  __int64 v26; // [rsp+40h] [rbp-20h] BYREF
  __int64 v27; // [rsp+48h] [rbp-18h] BYREF
  __int64 v28; // [rsp+50h] [rbp-10h] BYREF
  __int64 v29; // [rsp+58h] [rbp-8h] BYREF
  __int64 v30; // [rsp+A0h] [rbp+40h] BYREF
  char *v31; // [rsp+A8h] [rbp+48h]
  unsigned int v32; // [rsp+B8h] [rbp+58h]

  v32 = a4;
  v31 = Src;
  v6 = 0;
  v28 = 0xFFFFFFFFLL;
  v29 = 0xFFFFFFFFLL;
  v8 = (*(_BYTE *)(BugCheckParameter2 + 140) & 1) == 0;
  v9 = Src;
  v26 = 0xFFFFFFFFLL;
  LODWORD(v30) = 0;
  if ( v8 )
    CellPaged = HvpGetCellPaged(BugCheckParameter2, BugCheckParameter4, (unsigned int *)&v29);
  else
    CellPaged = HvpGetCellFlat(BugCheckParameter2, (unsigned int)BugCheckParameter4);
  v11 = CellPaged;
  if ( !CellPaged )
    return 3221225626LL;
  v12 = *(unsigned int *)(CellPaged + 4);
  if ( (*(_BYTE *)(BugCheckParameter2 + 140) & 1) != 0 )
    CellFlat = HvpGetCellFlat(BugCheckParameter2, v12);
  else
    CellFlat = HvpGetCellPaged(BugCheckParameter2, v12, (unsigned int *)&v26);
  v14 = CellFlat;
  if ( !CellFlat )
    goto LABEL_42;
  v15 = (a3 + 16343) / 0x3FD8;
  if ( (unsigned __int16)v15 > *(_WORD *)(v11 + 2) )
  {
    if ( (*(_BYTE *)(BugCheckParameter2 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter2, &v26);
    else
      HvpReleaseCellPaged(BugCheckParameter2, (unsigned int *)&v26);
    v21 = *(unsigned int *)(v11 + 4);
    v27 = 0LL;
    v22 = HvReallocateCell(
            BugCheckParameter2,
            v21,
            4 * (unsigned int)(unsigned __int16)v15,
            1,
            &v30,
            &v27,
            (__int64)&v26);
    v14 = v27;
    Cell = v22;
    if ( v22 < 0 )
      goto LABEL_19;
    v23 = *(_WORD *)(v11 + 2);
    *(_DWORD *)(v11 + 4) = v30;
    while ( v23 < (unsigned __int16)v15 )
    {
      Cell = HvAllocateCell(BugCheckParameter2, 16344, v32, (_DWORD *)(v14 + 4LL * v23), 0LL, 0LL);
      if ( Cell < 0 )
        goto LABEL_19;
      ++v23;
    }
    v9 = v31;
    v6 = 0;
  }
  else if ( (unsigned __int16)v15 < *(_WORD *)(v11 + 2) )
  {
    v24 = (a3 + 16343) / 0x3FD8;
    do
      HvFreeCell(BugCheckParameter2, *(unsigned int *)(v14 + 4LL * v24++));
    while ( v24 < *(_WORD *)(v11 + 2) );
    if ( (*(_BYTE *)(BugCheckParameter2 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter2, &v26);
    else
      HvpReleaseCellPaged(BugCheckParameter2, (unsigned int *)&v26);
    v25 = *(unsigned int *)(v11 + 4);
    v6 = 0;
    v27 = 0LL;
    HvReallocateCell(BugCheckParameter2, v25, 4 * (unsigned __int16)v15, 1, &v30, &v27, (__int64)&v26);
    v14 = v27;
    *(_DWORD *)(v11 + 4) = v30;
  }
  if ( (_WORD)v15 )
  {
    while ( 1 )
    {
      v16 = *(unsigned int *)(v14 + 4LL * v6);
      v17 = (void *)((*(_BYTE *)(BugCheckParameter2 + 140) & 1) != 0
                   ? HvpGetCellFlat(BugCheckParameter2, v16)
                   : HvpGetCellPaged(BugCheckParameter2, v16, (unsigned int *)&v28));
      if ( !v17 )
        break;
      v18 = a3;
      if ( a3 > 0x3FD8 )
        v18 = 16344LL;
      memmove(v17, v9, v18);
      if ( (*(_BYTE *)(BugCheckParameter2 + 140) & 1) != 0 )
        HvpReleaseCellFlat(BugCheckParameter2, &v28);
      else
        HvpReleaseCellPaged(BugCheckParameter2, (unsigned int *)&v28);
      a3 -= 16344;
      v9 += 16344;
      if ( ++v6 >= (unsigned __int16)v15 )
        goto LABEL_18;
    }
LABEL_42:
    Cell = -1073741670;
    goto LABEL_19;
  }
LABEL_18:
  *(_WORD *)(v11 + 2) = v15;
  Cell = 0;
LABEL_19:
  if ( v14 )
  {
    if ( (*(_BYTE *)(BugCheckParameter2 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter2, &v26);
    else
      HvpReleaseCellPaged(BugCheckParameter2, (unsigned int *)&v26);
  }
  if ( (*(_BYTE *)(BugCheckParameter2 + 140) & 1) != 0 )
    HvpReleaseCellFlat(BugCheckParameter2, &v29);
  else
    HvpReleaseCellPaged(BugCheckParameter2, (unsigned int *)&v29);
  return (unsigned int)Cell;
}
