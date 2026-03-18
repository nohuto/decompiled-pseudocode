/*
 * XREFs of CmpDeleteTree @ 0x140A25C70
 * Callers:
 *     CmRestoreKey @ 0x140A0ACF4 (CmRestoreKey.c)
 *     CmpSyncSubKeysAfterDelete @ 0x140A2314C (CmpSyncSubKeysAfterDelete.c)
 * Callees:
 *     CmpFindSubKeyByNumber @ 0x1406DAFB0 (CmpFindSubKeyByNumber.c)
 *     HvpGetCellPaged @ 0x1406E0200 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x1406E0310 (HvpReleaseCellPaged.c)
 *     CmpFreeKeyByCell @ 0x14070B2C4 (CmpFreeKeyByCell.c)
 *     HvpReleaseCellFlat @ 0x1407D99F0 (HvpReleaseCellFlat.c)
 *     HvpGetCellFlat @ 0x1407FE0A0 (HvpGetCellFlat.c)
 */

char __fastcall CmpDeleteTree(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter4)
{
  int v2; // r15d
  unsigned int v4; // esi
  _DWORD *CellFlat; // rax
  unsigned int v6; // edi
  int SubKeyByNumber; // edi
  __int64 v8; // rax
  int v9; // r14d
  __int64 v11; // [rsp+50h] [rbp+30h] BYREF
  ULONG_PTR BugCheckParameter4a; // [rsp+58h] [rbp+38h] BYREF

  LODWORD(BugCheckParameter4a) = 0;
  v2 = BugCheckParameter4;
  v11 = 0xFFFFFFFFLL;
  v4 = BugCheckParameter4;
  while ( 1 )
  {
    if ( (*(_BYTE *)(BugCheckParameter2 + 140) & 1) != 0 )
      CellFlat = (_DWORD *)HvpGetCellFlat(BugCheckParameter2, v4, &v11);
    else
      CellFlat = (_DWORD *)HvpGetCellPaged(BugCheckParameter2, v4, (unsigned int *)&v11);
    if ( !CellFlat )
      return 0;
    v6 = CellFlat[4];
    if ( !(CellFlat[5] + CellFlat[6]) )
      break;
    SubKeyByNumber = CmpFindSubKeyByNumber(BugCheckParameter2, CellFlat, 0, &BugCheckParameter4a);
    if ( (*(_BYTE *)(BugCheckParameter2 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter2, &v11);
    else
      HvpReleaseCellPaged(BugCheckParameter2, (unsigned int *)&v11);
    if ( SubKeyByNumber < 0 )
      return 0;
    v6 = BugCheckParameter4a;
    if ( (_DWORD)BugCheckParameter4a == -1 )
      return 0;
    v8 = (*(_BYTE *)(BugCheckParameter2 + 140) & 1) != 0
       ? HvpGetCellFlat(BugCheckParameter2, (unsigned int)BugCheckParameter4a, &v11)
       : HvpGetCellPaged(BugCheckParameter2, BugCheckParameter4a, (unsigned int *)&v11);
    if ( !v8 )
      return 0;
    v9 = *(_DWORD *)(v8 + 20) + *(_DWORD *)(v8 + 24);
    if ( (*(_BYTE *)(BugCheckParameter2 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter2, &v11);
    else
      HvpReleaseCellPaged(BugCheckParameter2, (unsigned int *)&v11);
    if ( v9 )
    {
LABEL_20:
      v4 = v6;
    }
    else if ( (int)CmpFreeKeyByCell(BugCheckParameter2, v6, 1) < 0 )
    {
      return 0;
    }
  }
  if ( (*(_BYTE *)(BugCheckParameter2 + 140) & 1) != 0 )
    HvpReleaseCellFlat(BugCheckParameter2, &v11);
  else
    HvpReleaseCellPaged(BugCheckParameter2, (unsigned int *)&v11);
  if ( v4 != v2 )
    goto LABEL_20;
  return 1;
}
