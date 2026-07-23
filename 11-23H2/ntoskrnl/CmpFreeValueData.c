/*
 * XREFs of CmpFreeValueData @ 0x14070B16C
 * Callers:
 *     CmpFreeValue @ 0x14070B0D8 (CmpFreeValue.c)
 *     CmpSetValueKeyExisting @ 0x14070B914 (CmpSetValueKeyExisting.c)
 *     CmDeleteValueKey @ 0x14070F134 (CmDeleteValueKey.c)
 *     CmpCopyValue @ 0x1408ABBD4 (CmpCopyValue.c)
 * Callees:
 *     HvpGetCellPaged @ 0x1406E0180 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x1406E0290 (HvpReleaseCellPaged.c)
 *     HvFreeCell @ 0x14070ADF0 (HvFreeCell.c)
 *     HvpReleaseCellFlat @ 0x1407D9740 (HvpReleaseCellFlat.c)
 *     HvpGetCellFlat @ 0x1407FDCC0 (HvpGetCellFlat.c)
 */

char __fastcall CmpFreeValueData(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter3, unsigned int a3)
{
  unsigned int v4; // r14d
  bool v6; // zf
  __int64 CellPaged; // rax
  unsigned __int16 v8; // di
  __int64 v9; // rsi
  ULONG_PTR v10; // rdx
  __int64 CellFlat; // rax
  __int64 v12; // r15
  ULONG_PTR v13; // rdx
  unsigned int v14[4]; // [rsp+20h] [rbp-10h] BYREF
  unsigned int v15; // [rsp+78h] [rbp+48h] BYREF
  int v16; // [rsp+7Ch] [rbp+4Ch]

  v4 = BugCheckParameter3;
  if ( a3 >= 0x80000000 || (_DWORD)BugCheckParameter3 == -1 )
    return 1;
  if ( *(_DWORD *)(BugCheckParameter2 + 220) < 4u || a3 - 16345 > 0x7FFFC026 )
  {
LABEL_6:
    HvFreeCell(BugCheckParameter2, v4);
    return 1;
  }
  v15 = -1;
  v6 = (*(_BYTE *)(BugCheckParameter2 + 140) & 1) == 0;
  v16 = 0;
  v14[0] = -1;
  v14[1] = 0;
  if ( v6 )
    CellPaged = HvpGetCellPaged(BugCheckParameter2, BugCheckParameter3, &v15);
  else
    CellPaged = HvpGetCellFlat(BugCheckParameter2, BugCheckParameter3);
  v8 = 0;
  v9 = CellPaged;
  if ( CellPaged )
  {
    v10 = *(unsigned int *)(CellPaged + 4);
    if ( (_DWORD)v10 != -1 )
    {
      if ( (*(_BYTE *)(BugCheckParameter2 + 140) & 1) != 0 )
        CellFlat = HvpGetCellFlat(BugCheckParameter2, v10);
      else
        CellFlat = HvpGetCellPaged(BugCheckParameter2, v10, v14);
      v12 = CellFlat;
      if ( !CellFlat )
      {
        if ( (*(_BYTE *)(BugCheckParameter2 + 140) & 1) != 0 )
          HvpReleaseCellFlat(BugCheckParameter2, &v15);
        else
          HvpReleaseCellPaged(BugCheckParameter2, &v15);
        return 0;
      }
      while ( v8 < *(_WORD *)(v9 + 2) )
      {
        v13 = *(unsigned int *)(v12 + 4LL * v8);
        if ( (_DWORD)v13 != -1 )
          HvFreeCell(BugCheckParameter2, v13);
        ++v8;
      }
      if ( (*(_BYTE *)(BugCheckParameter2 + 140) & 1) != 0 )
        HvpReleaseCellFlat(BugCheckParameter2, v14);
      else
        HvpReleaseCellPaged(BugCheckParameter2, v14);
      HvFreeCell(BugCheckParameter2, *(unsigned int *)(v9 + 4));
    }
    if ( (*(_BYTE *)(BugCheckParameter2 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter2, &v15);
    else
      HvpReleaseCellPaged(BugCheckParameter2, &v15);
    goto LABEL_6;
  }
  return 0;
}
