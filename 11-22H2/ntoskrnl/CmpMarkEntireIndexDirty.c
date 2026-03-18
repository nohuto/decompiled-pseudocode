/*
 * XREFs of CmpMarkEntireIndexDirty @ 0x140A245C8
 * Callers:
 *     CmRenameKey @ 0x140A1445C (CmRenameKey.c)
 *     CmpLightWeightDuplicateParentLists @ 0x140A28CB0 (CmpLightWeightDuplicateParentLists.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140230EE0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140231260 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1402BD930 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402FCE10 (ExfAcquirePushLockExclusiveEx.c)
 *     HvpGetCellPaged @ 0x1406E0200 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x1406E0310 (HvpReleaseCellPaged.c)
 *     HvpGetCellContextReinitialize @ 0x1406E034C (HvpGetCellContextReinitialize.c)
 *     HvpMarkCellDirty @ 0x1407474B0 (HvpMarkCellDirty.c)
 *     HvpReleaseCellFlat @ 0x1407D99F0 (HvpReleaseCellFlat.c)
 *     HvpGetCellFlat @ 0x1407FE0A0 (HvpGetCellFlat.c)
 */

__int64 __fastcall CmpMarkEntireIndexDirty(ULONG_PTR BugCheckParameter3, ULONG_PTR BugCheckParameter4)
{
  unsigned int v3; // r14d
  __int64 CellFlat; // rax
  unsigned __int64 *v5; // rdi
  _WORD *v6; // rsi
  __int64 v7; // rax
  __int64 v8; // rbp
  unsigned int i; // ebp
  __int64 v11; // [rsp+40h] [rbp+8h] BYREF

  v11 = 0LL;
  v3 = BugCheckParameter4;
  HvpGetCellContextReinitialize(&v11);
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    CellFlat = HvpGetCellFlat(BugCheckParameter3, v3, &v11);
  else
    CellFlat = HvpGetCellPaged(BugCheckParameter3, v3, (unsigned int *)&v11);
  v5 = (unsigned __int64 *)(BugCheckParameter3 + 80);
  v6 = (_WORD *)CellFlat;
  v7 = KeAbPreAcquire(BugCheckParameter3 + 80, 0LL);
  v8 = v7;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter3 + 80), 0LL) )
    ExfAcquirePushLockExclusiveEx(v5, v7, (__int64)v5);
  if ( v8 )
    *(_BYTE *)(v8 + 18) = 1;
  if ( (int)HvpMarkCellDirty(BugCheckParameter3, v3, 1) >= 0 && *v6 == 26994 )
  {
    for ( i = 0; i < (unsigned __int16)v6[1]; ++i )
    {
      if ( (int)HvpMarkCellDirty(BugCheckParameter3, *(unsigned int *)&v6[2 * i + 2], 1) < 0 )
        break;
    }
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v5);
  KeAbPostRelease((ULONG_PTR)v5);
  if ( v6 )
  {
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, &v11);
    else
      HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v11);
  }
  return 0LL;
}
