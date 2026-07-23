/*
 * XREFs of HvpFindFreeCellInBin @ 0x14070AB60
 * Callers:
 *     HvpFindFreeCell @ 0x14070A940 (HvpFindFreeCell.c)
 * Callees:
 *     HvpGetCellPaged @ 0x1406E0180 (HvpGetCellPaged.c)
 *     HvpMarkCellDirty @ 0x140747190 (HvpMarkCellDirty.c)
 *     HvpGetCellFlat @ 0x1407FDCC0 (HvpGetCellFlat.c)
 */

__int64 __fastcall HvpFindFreeCellInBin(
        ULONG_PTR BugCheckParameter3,
        unsigned int a2,
        int a3,
        _DWORD *a4,
        unsigned int *a5,
        __int64 *a6,
        unsigned int *a7)
{
  unsigned int *v7; // r10
  unsigned __int64 v8; // r11
  unsigned int v10; // eax
  __int64 result; // rax
  unsigned int v12; // ebx
  __int64 CellFlat; // rax

  v7 = a4 + 8;
  v8 = (unsigned __int64)a4 + (unsigned int)a4[2];
  if ( (unsigned __int64)(a4 + 8) >= v8 )
    return 3221226021LL;
  while ( 1 )
  {
    v10 = *v7;
    if ( (*v7 & 0x80000000) == 0 )
      break;
    v10 = -v10;
LABEL_4:
    v7 = (unsigned int *)((char *)v7 + v10);
    if ( (unsigned __int64)v7 >= v8 )
      return 3221226021LL;
  }
  v12 = a4[1] + (_DWORD)v7 + (a3 << 31) - (_DWORD)a4;
  if ( a2 > v10 )
    goto LABEL_4;
  result = HvpMarkCellDirty(BugCheckParameter3, v12);
  if ( (int)result >= 0 )
  {
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      CellFlat = HvpGetCellFlat(BugCheckParameter3, v12);
    else
      CellFlat = HvpGetCellPaged(BugCheckParameter3, v12, a7);
    if ( CellFlat )
      CellFlat -= 4LL;
    *a6 = CellFlat;
    result = 0LL;
    *a5 = v12;
  }
  return result;
}
