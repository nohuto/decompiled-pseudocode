/*
 * XREFs of CmpDoFindSubKeyByNumber @ 0x1406DAE8C
 * Callers:
 *     CmpFindSubKeyByNumber @ 0x1406DAFB0 (CmpFindSubKeyByNumber.c)
 *     CmpFindSubKeyByNumberEx @ 0x1406DB080 (CmpFindSubKeyByNumberEx.c)
 *     CmpKeyEnumStackEntryAdvance @ 0x140A23BBC (CmpKeyEnumStackEntryAdvance.c)
 *     CmpKeyEnumStackEntryBegin @ 0x140A23CDC (CmpKeyEnumStackEntryBegin.c)
 *     CmpKeyEnumStackEntryNotifyPromotion @ 0x140A23F6C (CmpKeyEnumStackEntryNotifyPromotion.c)
 * Callees:
 *     HvpGetCellPaged @ 0x1406E0200 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x1406E0310 (HvpReleaseCellPaged.c)
 *     HvpReleaseCellFlat @ 0x1407D99F0 (HvpReleaseCellFlat.c)
 *     HvpGetCellFlat @ 0x1407FE0A0 (HvpGetCellFlat.c)
 */

__int64 __fastcall CmpDoFindSubKeyByNumber(ULONG_PTR BugCheckParameter3, _WORD *a2, unsigned int a3)
{
  int v7; // ebp
  __int64 CellFlat; // rax
  _WORD *v9; // rcx
  unsigned int v10; // eax
  unsigned int v11; // edi
  int v12; // [rsp+48h] [rbp+10h] BYREF
  int v13; // [rsp+4Ch] [rbp+14h]

  v12 = -1;
  v13 = 0;
  if ( *a2 == 26994 && (v7 = 0, a2[1]) )
  {
    while ( 1 )
    {
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        CellFlat = HvpGetCellFlat(BugCheckParameter3, *(unsigned int *)&a2[2 * v7 + 2]);
      else
        CellFlat = HvpGetCellPaged(BugCheckParameter3);
      v9 = (_WORD *)CellFlat;
      if ( !CellFlat )
        return 0xFFFFFFFFLL;
      v10 = *(unsigned __int16 *)(CellFlat + 2);
      if ( a3 < v10 )
        break;
      a3 -= v10;
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        HvpReleaseCellFlat(BugCheckParameter3, &v12);
      else
        HvpReleaseCellPaged(BugCheckParameter3, &v12);
      if ( ++v7 >= (unsigned int)(unsigned __int16)a2[1] )
        goto LABEL_2;
    }
    if ( ((*v9 - 26220) & 0xFDFF) != 0 )
      v11 = *(_DWORD *)&v9[2 * a3 + 2];
    else
      v11 = *(_DWORD *)&v9[4 * a3 + 2];
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, &v12);
    else
      HvpReleaseCellPaged(BugCheckParameter3, &v12);
    return v11;
  }
  else
  {
LABEL_2:
    if ( ((*a2 - 26220) & 0xFDFF) != 0 )
      return *(unsigned int *)&a2[2 * a3 + 2];
    else
      return *(unsigned int *)&a2[4 * a3 + 2];
  }
}
