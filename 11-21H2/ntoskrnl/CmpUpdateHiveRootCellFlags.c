/*
 * XREFs of CmpUpdateHiveRootCellFlags @ 0x1406D7440
 * Callers:
 *     CmpDoParseKey @ 0x1407362A0 (CmpDoParseKey.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     HvpGetCellFlat @ 0x1406BF400 (HvpGetCellFlat.c)
 *     HvpReleaseCellFlat @ 0x1406BF450 (HvpReleaseCellFlat.c)
 *     HvpMarkCellDirty @ 0x14071F300 (HvpMarkCellDirty.c)
 *     HvpReleaseCellPaged @ 0x1407C97C0 (HvpReleaseCellPaged.c)
 *     HvpGetCellContextReinitialize @ 0x1407C97FC (HvpGetCellContextReinitialize.c)
 *     HvpGetCellPaged @ 0x1407C9820 (HvpGetCellPaged.c)
 */

__int64 __fastcall CmpUpdateHiveRootCellFlags(ULONG_PTR BugCheckParameter3, ULONG_PTR BugCheckParameter4)
{
  unsigned int v3; // ebp
  __int64 CellFlat; // rax
  __int64 v5; // rdi
  int v6; // ebp
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF

  v8 = 0LL;
  v3 = BugCheckParameter4;
  HvpGetCellContextReinitialize(&v8);
  ExAcquirePushLockSharedEx(BugCheckParameter3 + 72, 0LL);
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    CellFlat = HvpGetCellFlat(BugCheckParameter3, v3, &v8);
  else
    CellFlat = HvpGetCellPaged(BugCheckParameter3);
  v5 = CellFlat;
  if ( !CellFlat )
  {
    v6 = -1073741670;
    goto LABEL_10;
  }
  if ( (*(_BYTE *)(CellFlat + 2) & 0xC) != 0xC )
  {
    v6 = HvpMarkCellDirty(BugCheckParameter3, v3);
    if ( v6 < 0 )
      goto LABEL_8;
    *(_WORD *)(v5 + 2) |= 0xCu;
  }
  v6 = 0;
LABEL_8:
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    HvpReleaseCellFlat(BugCheckParameter3, &v8);
  else
    HvpReleaseCellPaged(BugCheckParameter3, &v8);
LABEL_10:
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(BugCheckParameter3 + 72), 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)(BugCheckParameter3 + 72));
  KeAbPostRelease(BugCheckParameter3 + 72);
  return (unsigned int)v6;
}
