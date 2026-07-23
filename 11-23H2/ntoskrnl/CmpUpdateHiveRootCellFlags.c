/*
 * XREFs of CmpUpdateHiveRootCellFlags @ 0x1407D8254
 * Callers:
 *     CmpDoParseKey @ 0x1406E9130 (CmpDoParseKey.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140230FD0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140231350 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1402BDAF0 (ExfReleasePushLockShared.c)
 *     ExfAcquirePushLockSharedEx @ 0x1402FD2D0 (ExfAcquirePushLockSharedEx.c)
 *     HvpGetCellPaged @ 0x1406E0180 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x1406E0290 (HvpReleaseCellPaged.c)
 *     HvpGetCellContextReinitialize @ 0x1406E02CC (HvpGetCellContextReinitialize.c)
 *     HvpMarkCellDirty @ 0x140747190 (HvpMarkCellDirty.c)
 *     HvpReleaseCellFlat @ 0x1407D9740 (HvpReleaseCellFlat.c)
 *     HvpGetCellFlat @ 0x1407FDCC0 (HvpGetCellFlat.c)
 */

__int64 __fastcall CmpUpdateHiveRootCellFlags(ULONG_PTR BugCheckParameter3, ULONG_PTR BugCheckParameter4)
{
  unsigned int v3; // ebp
  unsigned __int64 v4; // rsi
  __int64 CellFlat; // rax
  __int64 v6; // rsi
  int v7; // ebp
  __int64 v9; // [rsp+50h] [rbp+8h] BYREF

  v9 = 0LL;
  v3 = BugCheckParameter4;
  HvpGetCellContextReinitialize(&v9);
  v4 = KeAbPreAcquire(BugCheckParameter3 + 72, 0LL);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(BugCheckParameter3 + 72), 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((signed __int64 *)(BugCheckParameter3 + 72), 0LL, v4, BugCheckParameter3 + 72);
  if ( v4 )
    *(_BYTE *)(v4 + 18) = 1;
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    CellFlat = HvpGetCellFlat(BugCheckParameter3, v3);
  else
    CellFlat = HvpGetCellPaged(BugCheckParameter3, v3, (unsigned int *)&v9);
  v6 = CellFlat;
  if ( !CellFlat )
  {
    v7 = -1073741670;
    goto LABEL_14;
  }
  if ( (*(_BYTE *)(CellFlat + 2) & 0xC) != 0xC )
  {
    v7 = HvpMarkCellDirty(BugCheckParameter3, v3, 0);
    if ( v7 < 0 )
      goto LABEL_12;
    *(_WORD *)(v6 + 2) |= 0xCu;
  }
  v7 = 0;
LABEL_12:
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    HvpReleaseCellFlat(BugCheckParameter3, &v9);
  else
    HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v9);
LABEL_14:
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(BugCheckParameter3 + 72), 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)(BugCheckParameter3 + 72));
  KeAbPostRelease(BugCheckParameter3 + 72);
  return (unsigned int)v7;
}
