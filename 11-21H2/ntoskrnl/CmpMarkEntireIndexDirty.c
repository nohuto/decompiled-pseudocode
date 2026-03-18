/*
 * XREFs of CmpMarkEntireIndexDirty @ 0x14065E97C
 * Callers:
 *     CmpLightWeightDuplicateParentLists @ 0x14065E5A4 (CmpLightWeightDuplicateParentLists.c)
 *     CmRenameKey @ 0x140912608 (CmRenameKey.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     HvpGetCellFlat @ 0x1406BF400 (HvpGetCellFlat.c)
 *     HvpReleaseCellFlat @ 0x1406BF450 (HvpReleaseCellFlat.c)
 *     HvpMarkCellDirty @ 0x14071F300 (HvpMarkCellDirty.c)
 *     HvpReleaseCellPaged @ 0x1407C97C0 (HvpReleaseCellPaged.c)
 *     HvpGetCellContextReinitialize @ 0x1407C97FC (HvpGetCellContextReinitialize.c)
 *     HvpGetCellPaged @ 0x1407C9820 (HvpGetCellPaged.c)
 */

__int64 __fastcall CmpMarkEntireIndexDirty(ULONG_PTR BugCheckParameter3, ULONG_PTR BugCheckParameter4)
{
  unsigned int v3; // ebp
  __int64 CellFlat; // rax
  _WORD *v5; // rdi
  unsigned int i; // ebp
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF

  v8 = 0LL;
  v3 = BugCheckParameter4;
  HvpGetCellContextReinitialize(&v8);
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    CellFlat = HvpGetCellFlat(BugCheckParameter3, v3);
  else
    CellFlat = HvpGetCellPaged(BugCheckParameter3);
  v5 = (_WORD *)CellFlat;
  ExAcquirePushLockExclusiveEx(BugCheckParameter3 + 80, 0LL);
  if ( (int)HvpMarkCellDirty(BugCheckParameter3, v3) >= 0 && *v5 == 26994 )
  {
    for ( i = 0; i < (unsigned __int16)v5[1]; ++i )
    {
      if ( (int)HvpMarkCellDirty(BugCheckParameter3, *(unsigned int *)&v5[2 * i + 2]) < 0 )
        break;
    }
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(BugCheckParameter3 + 80), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(BugCheckParameter3 + 80);
  KeAbPostRelease(BugCheckParameter3 + 80);
  if ( v5 )
  {
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, &v8);
    else
      HvpReleaseCellPaged(BugCheckParameter3, &v8);
  }
  return 0LL;
}
