/*
 * XREFs of CmpMarkIndexDirtyInStorageType @ 0x14070C3DC
 * Callers:
 *     CmpMarkIndexDirty @ 0x14070C268 (CmpMarkIndexDirty.c)
 * Callees:
 *     CmpFindSubKeyInRoot @ 0x1406D7EBC (CmpFindSubKeyInRoot.c)
 *     CmpFindSubKeyInLeafWithStatus @ 0x1406D9510 (CmpFindSubKeyInLeafWithStatus.c)
 *     HvpGetCellPaged @ 0x1406E0180 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x1406E0290 (HvpReleaseCellPaged.c)
 *     HvpGetCellContextReinitialize @ 0x1406E02CC (HvpGetCellContextReinitialize.c)
 *     HvpGetCellContextMove @ 0x14070AC18 (HvpGetCellContextMove.c)
 *     HvpMarkCellDirty @ 0x140747190 (HvpMarkCellDirty.c)
 *     HvpReleaseCellFlat @ 0x1407D9740 (HvpReleaseCellFlat.c)
 *     HvpGetCellFlat @ 0x1407FDCC0 (HvpGetCellFlat.c)
 */

__int64 __fastcall CmpMarkIndexDirtyInStorageType(
        ULONG_PTR BugCheckParameter3,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5)
{
  unsigned int v8; // r12d
  _WORD *CellFlat; // rax
  _WORD *v10; // rsi
  unsigned int v11; // r15d
  __int64 v12; // r14
  int SubKeyInLeafWithStatus; // ebx
  __int64 CellPaged; // rax
  int v16; // [rsp+30h] [rbp-20h] BYREF
  __int64 v17; // [rsp+38h] [rbp-18h] BYREF
  unsigned int v18[4]; // [rsp+40h] [rbp-10h] BYREF
  unsigned int SubKeyInRoot; // [rsp+98h] [rbp+48h] BYREF
  ULONG_PTR BugCheckParameter4; // [rsp+A0h] [rbp+50h] BYREF

  SubKeyInRoot = 0;
  *(_QWORD *)v18 = 0LL;
  LODWORD(BugCheckParameter4) = 0;
  v17 = 0LL;
  v16 = 0;
  HvpGetCellContextReinitialize(v18);
  HvpGetCellContextReinitialize(&v17);
  if ( !*(_DWORD *)(a2 + 4LL * a5 + 20) )
    return (unsigned int)-1073741772;
  v8 = *(_DWORD *)(a2 + 4LL * a5 + 28);
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    CellFlat = (_WORD *)HvpGetCellFlat(BugCheckParameter3, v8);
  else
    CellFlat = (_WORD *)HvpGetCellPaged(BugCheckParameter3, v8, v18);
  v10 = CellFlat;
  if ( !CellFlat )
    return (unsigned int)-1073741670;
  if ( *CellFlat == 26994 )
  {
    SubKeyInRoot = CmpFindSubKeyInRoot(
                     BugCheckParameter3,
                     (__int64)CellFlat,
                     a4,
                     0LL,
                     (unsigned int *)&BugCheckParameter4);
    if ( SubKeyInRoot != 0x80000000 )
    {
      v11 = BugCheckParameter4;
      if ( (_DWORD)BugCheckParameter4 == -1 )
      {
        SubKeyInLeafWithStatus = -1073741772;
LABEL_23:
        if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
          HvpReleaseCellFlat(BugCheckParameter3, v18);
        else
          HvpReleaseCellPaged(BugCheckParameter3, v18);
        return (unsigned int)SubKeyInLeafWithStatus;
      }
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        CellPaged = HvpGetCellFlat(BugCheckParameter3, (unsigned int)BugCheckParameter4);
      else
        CellPaged = HvpGetCellPaged(BugCheckParameter3, BugCheckParameter4, (unsigned int *)&v17);
      v12 = CellPaged;
      if ( CellPaged )
        goto LABEL_7;
    }
    SubKeyInLeafWithStatus = -1073741670;
    goto LABEL_23;
  }
  v11 = v8;
  v12 = (__int64)CellFlat;
  v8 = -1;
  v10 = 0LL;
  HvpGetCellContextMove((__int64)&v17, (__int64)v18);
LABEL_7:
  SubKeyInLeafWithStatus = CmpFindSubKeyInLeafWithStatus(BugCheckParameter3, v12, a4, 0, &v16, &SubKeyInRoot);
  if ( SubKeyInLeafWithStatus < 0 )
    goto LABEL_12;
  if ( !v10 || (SubKeyInLeafWithStatus = HvpMarkCellDirty(BugCheckParameter3, v8), SubKeyInLeafWithStatus >= 0) )
  {
    SubKeyInLeafWithStatus = HvpMarkCellDirty(BugCheckParameter3, v11);
    if ( SubKeyInLeafWithStatus >= 0 )
      SubKeyInLeafWithStatus = 0;
  }
  if ( v12 )
  {
LABEL_12:
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, &v17);
    else
      HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v17);
  }
  if ( v10 )
    goto LABEL_23;
  return (unsigned int)SubKeyInLeafWithStatus;
}
