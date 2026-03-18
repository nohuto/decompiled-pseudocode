/*
 * XREFs of CmpFreeIndexByCell @ 0x14065E7EC
 * Callers:
 *     CmpLightWeightCleanupModifyKeyDataUoW @ 0x14065E380 (CmpLightWeightCleanupModifyKeyDataUoW.c)
 *     CmRenameKey @ 0x140912608 (CmRenameKey.c)
 * Callees:
 *     HvpGetCellFlat @ 0x1406BF400 (HvpGetCellFlat.c)
 *     HvpReleaseCellFlat @ 0x1406BF450 (HvpReleaseCellFlat.c)
 *     HvFreeCell @ 0x14079BD98 (HvFreeCell.c)
 *     HvpReleaseCellPaged @ 0x1407C97C0 (HvpReleaseCellPaged.c)
 *     HvpGetCellPaged @ 0x1407C9820 (HvpGetCellPaged.c)
 */

__int64 __fastcall CmpFreeIndexByCell(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter3)
{
  unsigned int v2; // ebp
  bool v3; // zf
  _WORD *CellPaged; // rax
  _WORD *v6; // rdi
  __int64 v8; // rsi
  int v9; // [rsp+30h] [rbp+8h] BYREF
  int v10; // [rsp+34h] [rbp+Ch]

  v9 = -1;
  v2 = BugCheckParameter3;
  v3 = (*(_BYTE *)(BugCheckParameter2 + 140) & 1) == 0;
  v10 = 0;
  if ( v3 )
    CellPaged = (_WORD *)HvpGetCellPaged(BugCheckParameter2);
  else
    CellPaged = (_WORD *)HvpGetCellFlat(BugCheckParameter2, BugCheckParameter3);
  v6 = CellPaged;
  if ( *CellPaged == 26994 )
  {
    v8 = 0LL;
    if ( CellPaged[1] )
    {
      do
      {
        HvFreeCell(BugCheckParameter2, *(unsigned int *)&v6[2 * v8 + 2]);
        v8 = (unsigned int)(v8 + 1);
      }
      while ( (unsigned int)v8 < (unsigned __int16)v6[1] );
    }
  }
  if ( (*(_BYTE *)(BugCheckParameter2 + 140) & 1) != 0 )
    HvpReleaseCellFlat(BugCheckParameter2, &v9);
  else
    HvpReleaseCellPaged(BugCheckParameter2, &v9);
  return HvFreeCell(BugCheckParameter2, v2);
}
