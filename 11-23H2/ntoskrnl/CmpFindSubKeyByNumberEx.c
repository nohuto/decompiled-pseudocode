/*
 * XREFs of CmpFindSubKeyByNumberEx @ 0x1406DB000
 * Callers:
 *     CmEnumerateKey @ 0x1406DC470 (CmEnumerateKey.c)
 *     CmpFindSubKeyByNumberFromMergedView @ 0x140A198B8 (CmpFindSubKeyByNumberFromMergedView.c)
 * Callees:
 *     CmpDelayDerefKeyControlBlock @ 0x1406D86D0 (CmpDelayDerefKeyControlBlock.c)
 *     CmpDoFindSubKeyByNumber @ 0x1406DAE0C (CmpDoFindSubKeyByNumber.c)
 *     CmpFindSubKeyByNumber @ 0x1406DAF30 (CmpFindSubKeyByNumber.c)
 *     HvpGetCellPaged @ 0x1406E0180 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x1406E0290 (HvpReleaseCellPaged.c)
 *     CmEqualTrans @ 0x1407693B0 (CmEqualTrans.c)
 *     CmpFindSubkeyInHashByChildCell @ 0x1407694D0 (CmpFindSubkeyInHashByChildCell.c)
 *     CmpReferenceKeyControlBlock @ 0x14076A8E0 (CmpReferenceKeyControlBlock.c)
 *     CmRmIsKCBVisible @ 0x1407B3BD0 (CmRmIsKCBVisible.c)
 *     CmpIsKeyDeleted @ 0x1407CB4CC (CmpIsKeyDeleted.c)
 *     HvpReleaseCellFlat @ 0x1407D9740 (HvpReleaseCellFlat.c)
 *     HvpGetCellFlat @ 0x1407FDCC0 (HvpGetCellFlat.c)
 *     CmListGetNextElement @ 0x140AF56A8 (CmListGetNextElement.c)
 */

__int64 __fastcall CmpFindSubKeyByNumberEx(
        ULONG_PTR BugCheckParameter3,
        ULONG_PTR a2,
        unsigned int a3,
        _DWORD *a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        ULONG_PTR *a9)
{
  ULONG_PTR v9; // r15
  unsigned int SubKeyByNumber; // r14d
  _DWORD *CellFlat; // rax
  _DWORD *v14; // rdi
  __int64 result; // rax
  int v16; // ecx
  int v17; // eax
  bool v18; // zf
  int v19; // eax
  unsigned int v20; // ecx
  int v21; // r14d
  char v22; // al
  _WORD *v23; // rax
  int v24; // eax
  _DWORD *v25; // rdx
  int SubkeyInHashByChildCell; // eax
  __int64 NextElement; // rax
  int v28; // eax
  _WORD *CellPaged; // rax
  unsigned int i; // [rsp+30h] [rbp-48h]
  _DWORD v31[2]; // [rsp+38h] [rbp-40h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+40h] [rbp-38h]
  unsigned int BugCheckParameter4; // [rsp+48h] [rbp-30h]
  unsigned int BugCheckParameter4_4; // [rsp+4Ch] [rbp-2Ch]
  __int64 j; // [rsp+50h] [rbp-28h]
  _DWORD v36[2]; // [rsp+58h] [rbp-20h] BYREF
  _DWORD v37[2]; // [rsp+60h] [rbp-18h] BYREF
  __int64 v38; // [rsp+68h] [rbp-10h] BYREF
  int v39; // [rsp+B0h] [rbp+38h]

  v31[0] = -1;
  v9 = 0LL;
  v31[1] = 0;
  SubKeyByNumber = 0;
  BugCheckParameter2 = 0LL;
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    CellFlat = (_DWORD *)HvpGetCellFlat(BugCheckParameter3, a2);
  else
    CellFlat = (_DWORD *)HvpGetCellPaged(BugCheckParameter3);
  v14 = CellFlat;
  if ( !CellFlat )
    return 3221225626LL;
  *a4 = -1;
  if ( a9 )
    *a9 = 0LL;
  if ( !a5 || *(_QWORD *)(a5 + 208) == a5 + 208 )
  {
    SubKeyByNumber = CmpFindSubKeyByNumber(BugCheckParameter3, CellFlat, a3, a4);
  }
  else
  {
    v16 = CellFlat[5];
    v39 = 0;
    v36[0] = -1;
    v36[1] = 0;
    v37[0] = -1;
    v37[1] = 0;
    LODWORD(v38) = v16;
    if ( v16 )
      BugCheckParameter4 = CellFlat[7];
    else
      BugCheckParameter4 = -1;
    v17 = CellFlat[6];
    if ( v17 )
      BugCheckParameter4_4 = v14[8];
    else
      BugCheckParameter4_4 = -1;
    v18 = (*(_BYTE *)(BugCheckParameter3 + 140) & 1) == 0;
    LODWORD(j) = v16 + v17;
    if ( v18 )
      HvpReleaseCellPaged(BugCheckParameter3, v31);
    else
      HvpReleaseCellFlat(BugCheckParameter3, v31);
    v19 = j;
    v20 = 0;
    v14 = 0LL;
    for ( i = 0; v20 < (unsigned int)j; i = v20 )
    {
      v21 = v38;
      v22 = *(_BYTE *)(BugCheckParameter3 + 140) & 1;
      BugCheckParameter2 = 0LL;
      if ( v20 >= (unsigned int)v38 )
      {
        if ( v22 )
          CellPaged = (_WORD *)HvpGetCellFlat(BugCheckParameter3, BugCheckParameter4_4);
        else
          CellPaged = (_WORD *)HvpGetCellPaged(BugCheckParameter3);
        if ( !CellPaged )
          return 3221225626LL;
        v24 = CmpDoFindSubKeyByNumber(BugCheckParameter3, CellPaged, i - v21);
        v25 = v37;
      }
      else
      {
        if ( v22 )
          v23 = (_WORD *)HvpGetCellFlat(BugCheckParameter3, BugCheckParameter4);
        else
          v23 = (_WORD *)HvpGetCellPaged(BugCheckParameter3);
        if ( !v23 )
          return 3221225626LL;
        v24 = CmpDoFindSubKeyByNumber(BugCheckParameter3, v23, i);
        v25 = v36;
      }
      v18 = (*(_BYTE *)(BugCheckParameter3 + 140) & 1) == 0;
      *a4 = v24;
      if ( v18 )
        HvpReleaseCellPaged(BugCheckParameter3, v25);
      else
        HvpReleaseCellFlat(BugCheckParameter3, v25);
      if ( *a4 == -1 )
        return 3221225626LL;
      result = CmpFindSubkeyInHashByChildCell(a5, a6, BugCheckParameter3);
      SubKeyByNumber = result;
      if ( (int)result < 0 )
        return result;
      v9 = BugCheckParameter2;
      if ( !BugCheckParameter2
        || (unsigned __int8)CmRmIsKCBVisible(BugCheckParameter2, a7) && !(unsigned __int8)CmpIsKeyDeleted(v9, a7) )
      {
        ++v39;
      }
      if ( v39 == a3 + 1 )
      {
        v20 = i;
        v19 = j;
        break;
      }
      if ( v9 )
        CmpDelayDerefKeyControlBlock(v9, a8);
      v19 = j;
      v20 = i + 1;
    }
    if ( v20 == v19 )
    {
      v38 = 0LL;
      *a4 = -1;
      NextElement = CmListGetNextElement(a5 + 208, &v38, 32LL);
      for ( j = NextElement; NextElement; j = NextElement )
      {
        if ( (unsigned __int8)CmEqualTrans(*(_QWORD *)(NextElement + 56), a7) )
        {
          v28 = *(_DWORD *)(j + 68);
          if ( v28 == 1 )
          {
            v9 = *(_QWORD *)(j + 88);
          }
          else
          {
            if ( v28 != 10 )
              goto LABEL_56;
            v9 = *(_QWORD *)(j + 96);
          }
          BugCheckParameter2 = v9;
          if ( (unsigned __int8)CmRmIsKCBVisible(v9, a7) && !(unsigned __int8)CmpIsKeyDeleted(v9, a7) )
          {
            if ( v39 == a3 )
            {
              *a4 = *(_DWORD *)(v9 + 40);
              CmpReferenceKeyControlBlock(v9);
              break;
            }
            ++v39;
          }
        }
LABEL_56:
        v9 = 0LL;
        BugCheckParameter2 = 0LL;
        NextElement = CmListGetNextElement(a5 + 208, &v38, 32LL);
      }
    }
  }
  if ( !a9 || *a4 == -1 )
  {
    if ( v9 )
      CmpDelayDerefKeyControlBlock(v9, a8);
  }
  else
  {
    if ( !v9 )
    {
      if ( v14 )
      {
        if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
          HvpReleaseCellFlat(BugCheckParameter3, v31);
        else
          HvpReleaseCellPaged(BugCheckParameter3, v31);
        v14 = 0LL;
      }
      SubkeyInHashByChildCell = CmpFindSubkeyInHashByChildCell(a5, a6, BugCheckParameter3);
      v9 = BugCheckParameter2;
      SubKeyByNumber = SubkeyInHashByChildCell;
      if ( SubkeyInHashByChildCell < 0 )
        *a4 = -1;
    }
    *a9 = v9;
  }
  if ( v14 )
  {
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, v31);
    else
      HvpReleaseCellPaged(BugCheckParameter3, v31);
  }
  return SubKeyByNumber;
}
