/*
 * XREFs of CmpFindSubKeyByNumber @ 0x1406DAFB0
 * Callers:
 *     CmDeleteLayeredKey @ 0x14061695C (CmDeleteLayeredKey.c)
 *     CmpFindSubKeyByNumberEx @ 0x1406DB080 (CmpFindSubKeyByNumberEx.c)
 *     CmpClearKeyAccessBits @ 0x140885EBC (CmpClearKeyAccessBits.c)
 *     CmpEnumerateLayeredKey @ 0x140A164C4 (CmpEnumerateLayeredKey.c)
 *     CmpCopySyncTree2 @ 0x140A21558 (CmpCopySyncTree2.c)
 *     CmpPreserveSystemHiveData @ 0x140A225AC (CmpPreserveSystemHiveData.c)
 *     CmpSyncSubKeysAfterDelete @ 0x140A2314C (CmpSyncSubKeysAfterDelete.c)
 *     CmpMarkAllChildrenDirty @ 0x140A244FC (CmpMarkAllChildrenDirty.c)
 *     CmpUpdateParentForEachSon @ 0x140A24DE4 (CmpUpdateParentForEachSon.c)
 *     CmpDeleteTree @ 0x140A25C70 (CmpDeleteTree.c)
 *     CmpDoAccessCheckOnSubtree @ 0x140AF6B2C (CmpDoAccessCheckOnSubtree.c)
 *     CmSelectQualifiedInstallLanguage @ 0x140B5C4DC (CmSelectQualifiedInstallLanguage.c)
 *     CmpFindDrivers @ 0x140B5D88C (CmpFindDrivers.c)
 * Callees:
 *     CmpDoFindSubKeyByNumber @ 0x1406DAE8C (CmpDoFindSubKeyByNumber.c)
 *     HvpGetCellPaged @ 0x1406E0200 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x1406E0310 (HvpReleaseCellPaged.c)
 *     HvpReleaseCellFlat @ 0x1407D99F0 (HvpReleaseCellFlat.c)
 *     HvpGetCellFlat @ 0x1407FE0A0 (HvpGetCellFlat.c)
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
