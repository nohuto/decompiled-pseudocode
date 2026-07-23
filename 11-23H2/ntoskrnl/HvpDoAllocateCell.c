/*
 * XREFs of HvpDoAllocateCell @ 0x14070A650
 * Callers:
 *     HvReallocateCell @ 0x140709FC0 (HvReallocateCell.c)
 *     HvAllocateCell @ 0x14070A5D8 (HvAllocateCell.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140230FD0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140231350 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1402BDBF0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402FD0A0 (ExfAcquirePushLockExclusiveEx.c)
 *     HvpGetCellPaged @ 0x1406E0180 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x1406E0290 (HvpReleaseCellPaged.c)
 *     HvpGetCellContextReinitialize @ 0x1406E02CC (HvpGetCellContextReinitialize.c)
 *     HvpDelistFreeCell @ 0x140709E20 (HvpDelistFreeCell.c)
 *     HvpRemoveFreeCellHint @ 0x14070A430 (HvpRemoveFreeCellHint.c)
 *     HvpFindFreeCell @ 0x14070A940 (HvpFindFreeCell.c)
 *     HvpGetCellContextMove @ 0x14070AC18 (HvpGetCellContextMove.c)
 *     HvpEnlistFreeCell @ 0x140746160 (HvpEnlistFreeCell.c)
 *     HvpAddBin @ 0x14074F364 (HvpAddBin.c)
 *     HvpReleaseCellFlat @ 0x1407D9740 (HvpReleaseCellFlat.c)
 *     HvpGetCellFlat @ 0x1407FDCC0 (HvpGetCellFlat.c)
 */

__int64 __fastcall HvpDoAllocateCell(
        ULONG_PTR BugCheckParameter2,
        unsigned int a2,
        int a3,
        unsigned int *a4,
        __int64 *a5,
        __int64 a6)
{
  __int64 v7; // r15
  volatile signed __int64 *v9; // rdi
  __int64 v10; // rax
  __int64 v11; // rsi
  char v12; // r14
  unsigned int FreeCell; // r12d
  unsigned int *v14; // r14
  unsigned int v15; // r8d
  unsigned int v16; // esi
  __int64 v17; // r8
  unsigned int v18; // r8d
  unsigned int v19; // eax
  unsigned int v20; // eax
  unsigned int v21; // eax
  __int64 v22; // rax
  int v23; // esi
  __int64 v24; // r12
  __int64 CellFlat; // rax
  __int64 v27; // [rsp+48h] [rbp-18h] BYREF
  __int64 v28; // [rsp+50h] [rbp-10h] BYREF

  v7 = a2;
  v27 = 0LL;
  v28 = 0LL;
  HvpGetCellContextReinitialize(&v27);
  v9 = (volatile signed __int64 *)(BugCheckParameter2 + 80);
  v10 = KeAbPreAcquire(BugCheckParameter2 + 80, 0LL);
  v11 = v10;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter2 + 80), 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(BugCheckParameter2 + 80), v10, BugCheckParameter2 + 80);
  if ( v11 )
    *(_BYTE *)(v11 + 18) = 1;
  v12 = 1;
  FreeCell = HvpFindFreeCell(BugCheckParameter2, (__int64)&v28, (__int64)&v27);
  if ( FreeCell == -1 )
  {
    v24 = BugCheckParameter2;
    v23 = HvpAddBin(BugCheckParameter2);
    if ( v23 < 0 )
      goto LABEL_21;
    FreeCell = 31;
    if ( (*(_BYTE *)(BugCheckParameter2 + 140) & 1) != 0 )
      CellFlat = HvpGetCellFlat(BugCheckParameter2, 0x1FuLL);
    else
      CellFlat = HvpGetCellPaged(BugCheckParameter2, 0x1Fu, (unsigned int *)&v27);
    if ( CellFlat )
      v14 = (unsigned int *)(CellFlat - 4);
    else
      v14 = 0LL;
    v28 = (__int64)v14;
  }
  else
  {
    v14 = (unsigned int *)v28;
  }
  v15 = *v14;
  v16 = *v14 - v7;
  if ( v16 < 8 )
  {
    HvpDelistFreeCell(BugCheckParameter2, FreeCell);
    *v14 = -*v14;
  }
  else
  {
    *(unsigned int *)((char *)v14 + v7) = v16;
    *v14 = -(int)v7;
    v17 = (v15 >> 3) - 1;
    if ( (unsigned int)v17 >= 0x10 )
    {
      v18 = (unsigned int)v17 >> 4;
      if ( v18 > 0xFF )
      {
        v17 = 23LL;
      }
      else
      {
        _BitScanReverse(&v19, v18);
        v17 = v19 + 16;
      }
    }
    v20 = (v16 >> 3) - 1;
    if ( v20 >= 0x10 )
    {
      v21 = v20 >> 4;
      if ( v21 > 0xFF )
      {
        v20 = 23;
      }
      else
      {
        _BitScanReverse(&v21, v21);
        v20 = v21 + 16;
      }
    }
    if ( (_DWORD)v17 != v20 )
    {
      HvpRemoveFreeCellHint(BugCheckParameter2, FreeCell, v17, a3, 0);
      HvpEnlistFreeCell(BugCheckParameter2);
    }
  }
  if ( (_InterlockedExchangeAdd64(v9, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v9);
  KeAbPostRelease((ULONG_PTR)v9);
  v12 = 0;
  if ( a5 )
  {
    v22 = v28 + 4;
    v28 = 0LL;
    *a5 = v22;
    HvpGetCellContextMove(a6, &v27);
  }
  *a4 = FreeCell;
  v23 = 0;
  v24 = BugCheckParameter2;
LABEL_21:
  if ( v28 )
  {
    if ( (*(_BYTE *)(v24 + 140) & 1) != 0 )
      HvpReleaseCellFlat(v24, &v27);
    else
      HvpReleaseCellPaged(v24, (unsigned int *)&v27);
  }
  if ( v12 )
  {
    if ( (_InterlockedExchangeAdd64(v9, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v9);
    KeAbPostRelease((ULONG_PTR)v9);
  }
  return (unsigned int)v23;
}
