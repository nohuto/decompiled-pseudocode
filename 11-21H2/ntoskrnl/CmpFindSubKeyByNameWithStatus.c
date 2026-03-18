/*
 * XREFs of CmpFindSubKeyByNameWithStatus @ 0x14082F12C
 * Callers:
 *     CmpFindPathByNameEx @ 0x140657398 (CmpFindPathByNameEx.c)
 *     CmpFindSubKeyByName @ 0x14082F108 (CmpFindSubKeyByName.c)
 *     CmpFindControlSet @ 0x14082F3C4 (CmpFindControlSet.c)
 *     CmpWalkUnicodeStringPath @ 0x14082F95C (CmpWalkUnicodeStringPath.c)
 *     CmpMarkCurrentValueDirty @ 0x14083D474 (CmpMarkCurrentValueDirty.c)
 *     CmRenameKey @ 0x140912608 (CmRenameKey.c)
 *     CmpCopySyncTree2 @ 0x14091EEC4 (CmpCopySyncTree2.c)
 *     CmpSyncSubKeysAfterDelete @ 0x140920AB4 (CmpSyncSubKeysAfterDelete.c)
 * Callees:
 *     HvpGetCellFlat @ 0x1406BF400 (HvpGetCellFlat.c)
 *     HvpReleaseCellFlat @ 0x1406BF450 (HvpReleaseCellFlat.c)
 *     CmpFindSubKeyInRoot @ 0x1407C5F80 (CmpFindSubKeyInRoot.c)
 *     HvpReleaseCellPaged @ 0x1407C97C0 (HvpReleaseCellPaged.c)
 *     HvpGetCellPaged @ 0x1407C9820 (HvpGetCellPaged.c)
 *     CmpFindSubKeyInLeafWithStatus @ 0x1407CD270 (CmpFindSubKeyInLeafWithStatus.c)
 *     CmpFindSubKeyByHashWithStatus @ 0x14082F314 (CmpFindSubKeyByHashWithStatus.c)
 */

__int64 __fastcall CmpFindSubKeyByNameWithStatus(
        ULONG_PTR BugCheckParameter3,
        __int64 a2,
        const UNICODE_STRING *a3,
        _DWORD *a4)
{
  __int64 v5; // rsi
  unsigned int v9; // ebx
  ULONG_PTR v10; // rdx
  _WORD *CellFlat; // rax
  unsigned int SubKeyByHashWithStatus; // eax
  _QWORD v14[2]; // [rsp+30h] [rbp-10h] BYREF
  ULONG_PTR BugCheckParameter4; // [rsp+70h] [rbp+30h] BYREF
  int v16; // [rsp+88h] [rbp+48h] BYREF

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
      goto LABEL_17;
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
                                 0LL,
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
LABEL_17:
    v5 = (unsigned int)(v5 + 1);
    if ( (unsigned int)v5 >= *(_DWORD *)(BugCheckParameter3 + 216) )
      return v9;
  }
  if ( (int)CmpFindSubKeyInRoot(BugCheckParameter3, (__int64)CellFlat, a3, 0LL, (int *)&BugCheckParameter4) >= 0 )
  {
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, v14);
    else
      HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)v14);
    if ( (_DWORD)BugCheckParameter4 == -1 )
      goto LABEL_17;
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
