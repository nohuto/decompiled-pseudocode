/*
 * XREFs of CmpFindSubKeyByNumber @ 0x1406DAF00
 * Callers:
 *     CmDeleteLayeredKey @ 0x1406168EC (CmDeleteLayeredKey.c)
 *     CmpFindSubKeyByNumberEx @ 0x1406DAFD0 (CmpFindSubKeyByNumberEx.c)
 *     CmpClearKeyAccessBits @ 0x1408859EC (CmpClearKeyAccessBits.c)
 *     CmpEnumerateLayeredKey @ 0x140A16414 (CmpEnumerateLayeredKey.c)
 *     CmpCopySyncTree2 @ 0x140A214A8 (CmpCopySyncTree2.c)
 *     CmpPreserveSystemHiveData @ 0x140A224FC (CmpPreserveSystemHiveData.c)
 *     CmpSyncSubKeysAfterDelete @ 0x140A2309C (CmpSyncSubKeysAfterDelete.c)
 *     CmpMarkAllChildrenDirty @ 0x140A2444C (CmpMarkAllChildrenDirty.c)
 *     CmpUpdateParentForEachSon @ 0x140A24D34 (CmpUpdateParentForEachSon.c)
 *     CmpDeleteTree @ 0x140A25BC0 (CmpDeleteTree.c)
 *     CmpDoAccessCheckOnSubtree @ 0x140AF5B2C (CmpDoAccessCheckOnSubtree.c)
 *     CmSelectQualifiedInstallLanguage @ 0x140B5952C (CmSelectQualifiedInstallLanguage.c)
 *     CmpFindDrivers @ 0x140B5A8DC (CmpFindDrivers.c)
 * Callees:
 *     CmpDoFindSubKeyByNumber @ 0x1406DADDC (CmpDoFindSubKeyByNumber.c)
 *     HvpGetCellPaged @ 0x1406E0150 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x1406E0260 (HvpReleaseCellPaged.c)
 *     HvpReleaseCellFlat @ 0x1407D9470 (HvpReleaseCellFlat.c)
 *     HvpGetCellFlat @ 0x1407FD9F0 (HvpGetCellFlat.c)
 */

__int64 __fastcall CmpFindSubKeyByNumber(ULONG_PTR BugCheckParameter3, _DWORD *a2, unsigned int a3, _DWORD *a4)
{
  unsigned int v5; // eax
  unsigned int v6; // edi
  ULONG_PTR v8; // rdx
  _WORD *CellFlat; // rax
  int v11; // [rsp+38h] [rbp+10h] BYREF
  int v12; // [rsp+3Ch] [rbp+14h]

  v11 = -1;
  v12 = 0;
  v5 = a2[5];
  v6 = a3;
  *a4 = -1;
  if ( a3 >= v5 )
  {
    if ( *(_DWORD *)(BugCheckParameter3 + 216) <= 1u )
      return 0LL;
    v6 = a3 - v5;
    if ( a3 - v5 >= a2[6] )
      return 0LL;
    v8 = (unsigned int)a2[8];
  }
  else
  {
    v8 = (unsigned int)a2[7];
  }
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    CellFlat = (_WORD *)HvpGetCellFlat(BugCheckParameter3, v8);
  else
    CellFlat = (_WORD *)HvpGetCellPaged(BugCheckParameter3);
  if ( !CellFlat )
    return 3221225626LL;
  *a4 = CmpDoFindSubKeyByNumber(BugCheckParameter3, CellFlat, v6);
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) == 0 )
  {
    HvpReleaseCellPaged(BugCheckParameter3, &v11);
    return 0LL;
  }
  HvpReleaseCellFlat(BugCheckParameter3, &v11);
  return 0LL;
}
