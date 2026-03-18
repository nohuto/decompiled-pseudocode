/*
 * XREFs of HvpDoAllocateCell @ 0x14079C920
 * Callers:
 *     HvReallocateCell @ 0x14079BA7C (HvReallocateCell.c)
 *     HvAllocateCell @ 0x14079C8A4 (HvAllocateCell.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     HvpAddBin @ 0x14068C820 (HvpAddBin.c)
 *     HvpGetCellFlat @ 0x1406BF400 (HvpGetCellFlat.c)
 *     HvpReleaseCellFlat @ 0x1406BF450 (HvpReleaseCellFlat.c)
 *     HvpDelistFreeCell @ 0x14079C014 (HvpDelistFreeCell.c)
 *     HvpRemoveFreeCellHint @ 0x14079C290 (HvpRemoveFreeCellHint.c)
 *     HvpEnlistFreeCell @ 0x14079C440 (HvpEnlistFreeCell.c)
 *     HvpGetCellContextMove @ 0x14079CBD8 (HvpGetCellContextMove.c)
 *     HvpFindFreeCell @ 0x14079CC20 (HvpFindFreeCell.c)
 *     HvpReleaseCellPaged @ 0x1407C97C0 (HvpReleaseCellPaged.c)
 *     HvpGetCellContextReinitialize @ 0x1407C97FC (HvpGetCellContextReinitialize.c)
 *     HvpGetCellPaged @ 0x1407C9820 (HvpGetCellPaged.c)
 */

__int64 __fastcall HvpDoAllocateCell(
        ULONG_PTR BugCheckParameter2,
        unsigned int a2,
        unsigned int a3,
        unsigned int *a4,
        __int64 *a5,
        __int64 a6)
{
  __int64 v7; // rsi
  unsigned int v10; // ebx
  volatile signed __int64 *v11; // r14
  char v12; // r15
  unsigned int FreeCell; // r12d
  unsigned int *v14; // r15
  unsigned int v15; // r8d
  unsigned int v16; // edi
  __int64 v17; // r8
  unsigned int v18; // r8d
  unsigned int v19; // eax
  unsigned int v20; // eax
  unsigned int v21; // eax
  __int64 v22; // rax
  int v23; // edi
  __int64 v24; // r12
  unsigned int v26; // ebx
  __int64 CellFlat; // rax
  unsigned int v28; // [rsp+30h] [rbp-30h] BYREF
  unsigned int v29; // [rsp+34h] [rbp-2Ch]
  unsigned int v30; // [rsp+38h] [rbp-28h]
  unsigned int v31; // [rsp+3Ch] [rbp-24h]
  unsigned int v32; // [rsp+40h] [rbp-20h]
  __int64 v33; // [rsp+48h] [rbp-18h] BYREF
  __int64 v34; // [rsp+50h] [rbp-10h] BYREF

  v7 = a2;
  v28 = -1;
  v33 = 0LL;
  v34 = 0LL;
  HvpGetCellContextReinitialize(&v33);
  v29 = 0;
  v10 = ((unsigned int)v7 >> 3) - 1;
  if ( v10 >= 0x10 )
  {
    v26 = v10 >> 4;
    if ( v26 <= 0xFF )
    {
      _BitScanReverse(&v26, v26);
      v29 = v26;
    }
  }
  v11 = (volatile signed __int64 *)(BugCheckParameter2 + 80);
  ExAcquirePushLockExclusiveEx(BugCheckParameter2 + 80, 0LL);
  v12 = 1;
  FreeCell = HvpFindFreeCell(BugCheckParameter2, (__int64)&v34, (__int64)&v33);
  if ( FreeCell == -1 )
  {
    v24 = BugCheckParameter2;
    v23 = HvpAddBin(BugCheckParameter2, v7, a3, &v28);
    if ( v23 < 0 )
      goto LABEL_19;
    FreeCell = v28 + 32;
    if ( (*(_BYTE *)(BugCheckParameter2 + 140) & 1) != 0 )
      CellFlat = HvpGetCellFlat(BugCheckParameter2, v28 + 32, &v33);
    else
      CellFlat = HvpGetCellPaged(BugCheckParameter2);
    if ( CellFlat )
      v14 = (unsigned int *)(CellFlat - 4);
    else
      v14 = 0LL;
    v34 = (__int64)v14;
  }
  else
  {
    v14 = (unsigned int *)v34;
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
    v32 = FreeCell + v7;
    *v14 = -(int)v7;
    if ( v28 == -1 )
    {
      v17 = (v15 >> 3) - 1;
      v30 = 0;
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
          v30 = v19;
          v17 = v19 + 16;
        }
      }
      v31 = 0;
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
          v31 = v21;
          v20 = v21 + 16;
        }
      }
      if ( (_DWORD)v17 != v20 )
      {
        HvpRemoveFreeCellHint(BugCheckParameter2, FreeCell, v17, a3, 0);
        HvpEnlistFreeCell(BugCheckParameter2, v32, v16, a3);
      }
    }
    else
    {
      HvpEnlistFreeCell(BugCheckParameter2, FreeCell + (unsigned int)v7, v16, a3);
    }
  }
  if ( (_InterlockedExchangeAdd64(v11, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v11);
  KeAbPostRelease((ULONG_PTR)v11);
  v12 = 0;
  if ( a5 )
  {
    v22 = v34 + 4;
    v34 = 0LL;
    *a5 = v22;
    HvpGetCellContextMove(a6, &v33);
  }
  *a4 = FreeCell;
  v23 = 0;
  v24 = BugCheckParameter2;
LABEL_19:
  if ( v34 )
  {
    if ( (*(_BYTE *)(v24 + 140) & 1) != 0 )
      HvpReleaseCellFlat(v24, &v33);
    else
      HvpReleaseCellPaged(v24, &v33);
  }
  if ( v12 )
  {
    if ( (_InterlockedExchangeAdd64(v11, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v11);
    KeAbPostRelease((ULONG_PTR)v11);
  }
  return (unsigned int)v23;
}
