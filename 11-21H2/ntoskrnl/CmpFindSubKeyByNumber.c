/*
 * XREFs of CmpFindSubKeyByNumber @ 0x1406BF278
 * Callers:
 *     CmDeleteLayeredKey @ 0x14053F5E8 (CmDeleteLayeredKey.c)
 *     CmpClearKeyAccessBits @ 0x1406BF110 (CmpClearKeyAccessBits.c)
 *     CmpEnumerateLayeredKey @ 0x140914324 (CmpEnumerateLayeredKey.c)
 *     CmpCopySyncTree2 @ 0x14091EEC4 (CmpCopySyncTree2.c)
 *     CmpPreserveSystemHiveData @ 0x14091FEFC (CmpPreserveSystemHiveData.c)
 *     CmpSyncSubKeysAfterDelete @ 0x140920AB4 (CmpSyncSubKeysAfterDelete.c)
 *     CmpMarkAllChildrenDirty @ 0x140921078 (CmpMarkAllChildrenDirty.c)
 *     CmpUpdateParentForEachSon @ 0x14092183C (CmpUpdateParentForEachSon.c)
 *     CmpDeleteTree @ 0x1409222C0 (CmpDeleteTree.c)
 *     CmpDoAccessCheckOnSubtree @ 0x140AB4A4C (CmpDoAccessCheckOnSubtree.c)
 *     CmpFindDrivers @ 0x140B141E0 (CmpFindDrivers.c)
 *     CmSelectQualifiedInstallLanguage @ 0x140B146C4 (CmSelectQualifiedInstallLanguage.c)
 * Callees:
 *     HvpGetCellFlat @ 0x1406BF400 (HvpGetCellFlat.c)
 *     HvpReleaseCellFlat @ 0x1406BF450 (HvpReleaseCellFlat.c)
 *     CmpDoFindSubKeyByNumber @ 0x1407C82B0 (CmpDoFindSubKeyByNumber.c)
 *     HvpReleaseCellPaged @ 0x1407C97C0 (HvpReleaseCellPaged.c)
 *     HvpGetCellPaged @ 0x1407C9820 (HvpGetCellPaged.c)
 */

__int64 __fastcall CmpFindSubKeyByNumber(ULONG_PTR BugCheckParameter3, _DWORD *a2, unsigned int a3, _DWORD *a4)
{
  unsigned int v6; // eax
  ULONG_PTR v7; // rdx
  __int64 CellFlat; // rax
  unsigned int v9; // ebx
  int v11; // [rsp+38h] [rbp+10h] BYREF
  int v12; // [rsp+3Ch] [rbp+14h]

  v11 = -1;
  v12 = 0;
  v6 = a2[5];
  *a4 = -1;
  if ( a3 >= v6 )
  {
    if ( *(_DWORD *)(BugCheckParameter3 + 216) <= 1u || a3 - v6 >= a2[6] )
      return 0;
    v7 = (unsigned int)a2[8];
  }
  else
  {
    v7 = (unsigned int)a2[7];
  }
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    CellFlat = HvpGetCellFlat(BugCheckParameter3, v7);
  else
    CellFlat = HvpGetCellPaged(BugCheckParameter3);
  v9 = 0;
  if ( CellFlat )
  {
    *a4 = CmpDoFindSubKeyByNumber(BugCheckParameter3);
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, &v11);
    else
      HvpReleaseCellPaged(BugCheckParameter3, &v11);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v9;
}
