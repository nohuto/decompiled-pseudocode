/*
 * XREFs of CmpFreeIndexByCell @ 0x140A23464
 * Callers:
 *     CmRenameKey @ 0x140A143AC (CmRenameKey.c)
 *     CmpLightWeightCleanupModifyKeyDataUoW @ 0x140A27F04 (CmpLightWeightCleanupModifyKeyDataUoW.c)
 * Callees:
 *     HvpGetCellPaged @ 0x1406E0150 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x1406E0260 (HvpReleaseCellPaged.c)
 *     HvFreeCell @ 0x14070ABE0 (HvFreeCell.c)
 *     HvpReleaseCellFlat @ 0x1407D9470 (HvpReleaseCellFlat.c)
 *     HvpGetCellFlat @ 0x1407FD9F0 (HvpGetCellFlat.c)
 */

signed __int32 __fastcall CmpFreeIndexByCell(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter3)
{
  unsigned int v2; // ebp
  _WORD *CellFlat; // rax
  _WORD *v5; // rdi
  __int64 v6; // rsi
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = 0xFFFFFFFFLL;
  v2 = BugCheckParameter3;
  if ( (*(_BYTE *)(BugCheckParameter2 + 140) & 1) != 0 )
    CellFlat = (_WORD *)HvpGetCellFlat(BugCheckParameter2, BugCheckParameter3, &v8);
  else
    CellFlat = (_WORD *)HvpGetCellPaged(BugCheckParameter2, BugCheckParameter3, (unsigned int *)&v8);
  v5 = CellFlat;
  if ( *CellFlat == 26994 )
  {
    v6 = 0LL;
    if ( CellFlat[1] )
    {
      do
      {
        HvFreeCell(BugCheckParameter2, *(unsigned int *)&v5[2 * v6 + 2]);
        v6 = (unsigned int)(v6 + 1);
      }
      while ( (unsigned int)v6 < (unsigned __int16)v5[1] );
    }
  }
  if ( (*(_BYTE *)(BugCheckParameter2 + 140) & 1) != 0 )
    HvpReleaseCellFlat(BugCheckParameter2, &v8);
  else
    HvpReleaseCellPaged(BugCheckParameter2, (unsigned int *)&v8);
  return HvFreeCell(BugCheckParameter2, v2);
}
