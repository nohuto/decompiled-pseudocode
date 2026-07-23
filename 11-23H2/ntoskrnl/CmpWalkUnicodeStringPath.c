/*
 * XREFs of CmpWalkUnicodeStringPath @ 0x140825EB0
 * Callers:
 *     CmpWalkPath @ 0x140825E68 (CmpWalkPath.c)
 *     CmpFindHiveSubKey @ 0x140B590B8 (CmpFindHiveSubKey.c)
 * Callees:
 *     HvpGetCellPaged @ 0x1406E0180 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x1406E0290 (HvpReleaseCellPaged.c)
 *     HvpReleaseCellFlat @ 0x1407D9740 (HvpReleaseCellFlat.c)
 *     HvpGetCellFlat @ 0x1407FDCC0 (HvpGetCellFlat.c)
 *     CmpFindSubKeyByNameWithStatus @ 0x140825C70 (CmpFindSubKeyByNameWithStatus.c)
 *     CmpGetNextName @ 0x140825F74 (CmpGetNextName.c)
 */

__int64 __fastcall CmpWalkUnicodeStringPath(ULONG_PTR BugCheckParameter3, ULONG_PTR BugCheckParameter4, __int128 *a3)
{
  unsigned int v3; // edi
  __int64 CellFlat; // rax
  __int128 v7; // [rsp+20h] [rbp-20h] BYREF
  __int128 v8; // [rsp+30h] [rbp-10h] BYREF
  unsigned int v9; // [rsp+68h] [rbp+28h] BYREF
  __int64 v10; // [rsp+70h] [rbp+30h] BYREF

  v10 = 0xFFFFFFFFLL;
  v3 = BugCheckParameter4;
  v7 = 0LL;
  v8 = *a3;
  while ( 1 )
  {
    CmpGetNextName(&v8, &v7, &v9);
    if ( !(_WORD)v7 )
      break;
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      CellFlat = HvpGetCellFlat(BugCheckParameter3, v3, &v10);
    else
      CellFlat = HvpGetCellPaged(BugCheckParameter3, v3, (unsigned int *)&v10);
    if ( CellFlat )
    {
      v9 = 0;
      CmpFindSubKeyByNameWithStatus(BugCheckParameter3, CellFlat, (__int64)&v7, &v9);
      v3 = v9;
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        HvpReleaseCellFlat(BugCheckParameter3, &v10);
      else
        HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v10);
      if ( v3 != -1 )
        continue;
    }
    return 0xFFFFFFFFLL;
  }
  return v3;
}
