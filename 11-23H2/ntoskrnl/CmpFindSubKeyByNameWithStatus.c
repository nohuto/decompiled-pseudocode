/*
 * XREFs of CmpFindSubKeyByNameWithStatus @ 0x140825970
 * Callers:
 *     CmpFindPathByNameEx @ 0x14067EED0 (CmpFindPathByNameEx.c)
 *     CmpFindSubKeyByName @ 0x14082594C (CmpFindSubKeyByName.c)
 *     CmpWalkUnicodeStringPath @ 0x140825BB0 (CmpWalkUnicodeStringPath.c)
 *     CmpFindControlSet @ 0x140825D40 (CmpFindControlSet.c)
 *     CmpMarkCurrentValueDirty @ 0x1408273B4 (CmpMarkCurrentValueDirty.c)
 *     CmRenameKey @ 0x140A143AC (CmRenameKey.c)
 *     CmpCopySyncTree2 @ 0x140A214A8 (CmpCopySyncTree2.c)
 *     CmpSyncSubKeysAfterDelete @ 0x140A2309C (CmpSyncSubKeysAfterDelete.c)
 * Callees:
 *     CmpFindSubKeyInRoot @ 0x1406D7E8C (CmpFindSubKeyInRoot.c)
 *     CmpFindSubKeyInLeafWithStatus @ 0x1406D94E0 (CmpFindSubKeyInLeafWithStatus.c)
 *     HvpGetCellPaged @ 0x1406E0150 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x1406E0260 (HvpReleaseCellPaged.c)
 *     HvpReleaseCellFlat @ 0x1407D9470 (HvpReleaseCellFlat.c)
 *     HvpGetCellFlat @ 0x1407FD9F0 (HvpGetCellFlat.c)
 *     CmpFindSubKeyByHashWithStatus @ 0x140825AB8 (CmpFindSubKeyByHashWithStatus.c)
 */

__int64 __fastcall CmpFindSubKeyByNameWithStatus(ULONG_PTR BugCheckParameter3, __int64 a2, __int64 a3, _DWORD *a4)
{
  __int64 v5; // rsi
  unsigned int v9; // ebx
  ULONG_PTR v10; // rdx
  _WORD *CellFlat; // rax
  unsigned int SubKeyByHashWithStatus; // eax
  _QWORD v14[2]; // [rsp+30h] [rbp-10h] BYREF
  ULONG_PTR BugCheckParameter4; // [rsp+70h] [rbp+30h] BYREF
  unsigned int v16; // [rsp+88h] [rbp+48h] BYREF

  LODWORD(BugCheckParameter4) = 0;
  v16 = 0;
  v5 = 0LL;
  v14[0] = 0xFFFFFFFFLL;
  v9 = -1073741772;
  *a4 = -1;
  if ( !*(_DWORD *)(BugCheckParameter3 + 216) )
    return v9;
  while ( 1 )
  {
    if ( !*(_DWORD *)(a2 + 4 * v5 + 20) )
      goto LABEL_19;
    v10 = *(unsigned int *)(a2 + 4 * v5 + 28);
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      CellFlat = (_WORD *)HvpGetCellFlat(BugCheckParameter3, v10, v14);
    else
      CellFlat = (_WORD *)HvpGetCellPaged(BugCheckParameter3, v10, (unsigned int *)v14);
    if ( !CellFlat )
      return (unsigned int)-1073741670;
    if ( *CellFlat == 26994 )
      break;
LABEL_7:
    if ( *CellFlat == 26732 )
      SubKeyByHashWithStatus = CmpFindSubKeyByHashWithStatus(BugCheckParameter3, CellFlat, a3, &BugCheckParameter4);
    else
      SubKeyByHashWithStatus = CmpFindSubKeyInLeafWithStatus(
                                 BugCheckParameter3,
                                 (__int64)CellFlat,
                                 a3,
                                 0,
                                 &BugCheckParameter4,
                                 &v16);
    v9 = SubKeyByHashWithStatus;
    if ( (int)(SubKeyByHashWithStatus + 0x80000000) >= 0 && SubKeyByHashWithStatus != -1073741772 )
      goto LABEL_12;
    if ( (_DWORD)BugCheckParameter4 != -1 )
    {
      *a4 = BugCheckParameter4;
      v9 = 0;
      goto LABEL_12;
    }
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, v14);
    else
      HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)v14);
LABEL_19:
    v5 = (unsigned int)(v5 + 1);
    if ( (unsigned int)v5 >= *(_DWORD *)(BugCheckParameter3 + 216) )
      return v9;
  }
  if ( (int)CmpFindSubKeyInRoot(BugCheckParameter3, (__int64)CellFlat, a3, 0LL, (unsigned int *)&BugCheckParameter4) >= 0 )
  {
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, v14);
    else
      HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)v14);
    if ( (_DWORD)BugCheckParameter4 == -1 )
      goto LABEL_19;
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      CellFlat = (_WORD *)HvpGetCellFlat(BugCheckParameter3, (unsigned int)BugCheckParameter4, v14);
    else
      CellFlat = (_WORD *)HvpGetCellPaged(BugCheckParameter3, BugCheckParameter4, (unsigned int *)v14);
    if ( !CellFlat )
      return (unsigned int)-1073741670;
    goto LABEL_7;
  }
  v9 = -1073741670;
LABEL_12:
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    HvpReleaseCellFlat(BugCheckParameter3, v14);
  else
    HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)v14);
  return v9;
}
