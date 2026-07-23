/*
 * XREFs of HvpEnlistFreeCell @ 0x140746160
 * Callers:
 *     HvpDoAllocateCell @ 0x14070A650 (HvpDoAllocateCell.c)
 *     HvFreeCell @ 0x14070ADF0 (HvFreeCell.c)
 *     HvpEnlistFreeCells @ 0x14074FB40 (HvpEnlistFreeCells.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 *     HvpAddFreeCellHint @ 0x1407460A4 (HvpAddFreeCellHint.c)
 *     HvpGetCellMap @ 0x140AF5280 (HvpGetCellMap.c)
 */

__int64 *__fastcall HvpEnlistFreeCell(ULONG_PTR BugCheckParameter2, __int64 a2, unsigned int a3, int a4)
{
  __int64 v4; // r15
  __int64 v6; // r14
  __int64 v8; // rdi
  int v9; // r8d
  int v10; // r12d
  unsigned int v11; // ebp
  unsigned int v12; // ebx
  __int64 *result; // rax
  unsigned int v14; // ebx
  __int64 v15; // rax
  _QWORD *v16; // r8
  _QWORD *CellMap; // rax
  __int64 v18; // rcx

  v4 = a4;
  v6 = (unsigned int)a2;
  v8 = ((unsigned int)a2 & 0xFFFFF000) - *(_DWORD *)HvpGetCellMap(BugCheckParameter2, a2);
  v10 = *(_DWORD *)(HvpGetCellMap(BugCheckParameter2, v8) + 16);
  v11 = v10 + v8;
  if ( (_DWORD)v8
    && v6 == (unsigned int)v8 + 32LL
    && (_DWORD)v6 + v9 == v11
    && (v15 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(BugCheckParameter2 + 24))(24LL, 0LL, 540495171LL),
        (v16 = (_QWORD *)v15) != 0LL) )
  {
    *(_QWORD *)v15 = 0LL;
    *(_QWORD *)(v15 + 8) = 0LL;
    *(_DWORD *)(v15 + 16) = v10;
    *(_DWORD *)(v15 + 20) = v8 & 0x7FFFFFFF;
    while ( (unsigned int)v8 < v11 )
    {
      CellMap = (_QWORD *)HvpGetCellMap(BugCheckParameter2, (unsigned int)v8);
      CellMap[1] |= 2uLL;
      LODWORD(v8) = v8 + 4096;
      *CellMap = v16;
    }
    result = (__int64 *)(632 * v4 + BugCheckParameter2 + 888);
    v18 = *result;
    if ( *(__int64 **)(*result + 8) != result )
      __fastfail(3u);
    *v16 = v18;
    v16[1] = result;
    *(_QWORD *)(v18 + 8) = v16;
    *result = (__int64)v16;
  }
  else
  {
    v12 = (a3 >> 3) - 1;
    if ( v12 >= 0x10 )
    {
      v14 = v12 >> 4;
      if ( v14 > 0xFF )
      {
        v12 = 23;
      }
      else
      {
        _BitScanReverse(&v14, v14);
        v12 = v14 + 16;
      }
    }
    return (__int64 *)HvpAddFreeCellHint(BugCheckParameter2, (unsigned int)v6, v12);
  }
  return result;
}
