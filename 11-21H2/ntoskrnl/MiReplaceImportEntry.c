/*
 * XREFs of MiReplaceImportEntry @ 0x1405905F0
 * Callers:
 *     MmReplaceImportEntry @ 0x140590A00 (MmReplaceImportEntry.c)
 *     MiReplacePatchImportEntry @ 0x1405A3DC0 (MiReplacePatchImportEntry.c)
 *     MmReplaceImportEntriesForVerifier @ 0x14096A1D0 (MmReplaceImportEntriesForVerifier.c)
 * Callees:
 *     MiUnlockPageTableInternal @ 0x14020D8D0 (MiUnlockPageTableInternal.c)
 *     MiGetAnyMultiplexedVm @ 0x14026DFC0 (MiGetAnyMultiplexedVm.c)
 *     MiGetSystemRegionType @ 0x14027B080 (MiGetSystemRegionType.c)
 *     MiGetSessionVm @ 0x14027B520 (MiGetSessionVm.c)
 *     MiUnlockWorkingSetShared @ 0x1402B0CE0 (MiUnlockWorkingSetShared.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x1402BEDD0 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiMapPageInHyperSpaceWorker @ 0x1402CC7C0 (MiMapPageInHyperSpaceWorker.c)
 *     MiLockWorkingSetShared @ 0x1402CF4F0 (MiLockWorkingSetShared.c)
 *     RtlImageDirectoryEntryToData @ 0x1402D6CB0 (RtlImageDirectoryEntryToData.c)
 *     MiReleasePageFileInfo @ 0x1402E20D0 (MiReleasePageFileInfo.c)
 *     KeYieldProcessorEx @ 0x1402F32E0 (KeYieldProcessorEx.c)
 *     MiLookupDataTableEntry @ 0x1402FDA80 (MiLookupDataTableEntry.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x1402FDD20 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiCopyOnWrite @ 0x140316400 (MiCopyOnWrite.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140317A10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiLockPageTableInternal @ 0x14031DE00 (MiLockPageTableInternal.c)
 *     MiCaptureDirtyBitToPfn @ 0x14033C2A0 (MiCaptureDirtyBitToPfn.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     MiCopyOnWriteCheckConditions @ 0x1405BCAF8 (MiCopyOnWriteCheckConditions.c)
 */

__int64 __fastcall MiReplaceImportEntry(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter4)
{
  _QWORD *v4; // rax
  int v5; // edx
  ULONG_PTR v6; // rdi
  unsigned __int64 v7; // rax
  __int64 result; // rax
  unsigned __int64 v9; // r14
  __int64 SessionVm; // rax
  unsigned __int64 v11; // rsi
  __int64 v12; // rdi
  __int64 v13; // r9
  unsigned __int8 v14; // r13
  char v15; // r12
  unsigned __int64 v16; // rax
  __int64 v17; // rbp
  int v18; // ebp
  __int64 v19; // r9
  __int64 v20; // r9
  _QWORD *v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  unsigned __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27[9]; // [rsp+30h] [rbp-48h] BYREF
  unsigned int v29; // [rsp+90h] [rbp+18h] BYREF
  int v30; // [rsp+98h] [rbp+20h] BYREF

  v29 = 0;
  if ( PsLoadedModuleList )
  {
    v4 = MiLookupDataTableEntry(BugCheckParameter2, 1);
    v6 = (ULONG_PTR)v4;
    if ( !v4 )
      KeBugCheckEx(0x1Au, 0x1014uLL, 0LL, BugCheckParameter2, BugCheckParameter4);
    LOBYTE(v5) = 1;
    v7 = RtlImageDirectoryEntryToData(v4[6], v5, 12, (int)&v29);
    if ( !v7 || !v29 || BugCheckParameter2 < v7 || BugCheckParameter2 >= v7 + v29 )
      KeBugCheckEx(0x1Au, 0x1014uLL, v6, BugCheckParameter2, BugCheckParameter4);
  }
  result = MI_IS_PHYSICAL_ADDRESS(BugCheckParameter2);
  if ( (_DWORD)result )
  {
    *(_QWORD *)BugCheckParameter2 = BugCheckParameter4;
    return result;
  }
  v9 = ((BugCheckParameter2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( (unsigned int)MiGetSystemRegionType(BugCheckParameter2) == 1 )
    SessionVm = MiGetSessionVm();
  else
    SessionVm = (__int64)MiGetAnyMultiplexedVm(1);
  v11 = 0LL;
  v12 = SessionVm;
  v14 = MiLockWorkingSetShared(SessionVm);
  while ( 1 )
  {
    while ( 1 )
    {
      if ( v11 )
      {
        if ( ((BugCheckParameter2 >> 9) & 0xFF8) != 0 )
          goto LABEL_19;
        MiUnlockPageTableInternal(v12, v11);
      }
      v11 = ((v9 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      MiLockPageTableInternal(v12, v11, 0LL, v13);
LABEL_19:
      v27[0] = MI_READ_PTE_LOCK_FREE(v9);
      v15 = v27[0];
      if ( (v27[0] & 1) != 0 )
        break;
      MiUnlockPageTableInternal(v12, v11);
      MiUnlockWorkingSetShared(v12, v14);
      MiLockWorkingSetShared(v12);
      MiLockPageTableInternal(v12, v11, 0LL, v20);
    }
    v16 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)v27) >> 12) & 0xFFFFFFFFFFLL;
    v17 = 48 * v16 - 0x220000000000LL;
    if ( *(__int64 *)(v17 + 40) >= 0 )
      break;
    v18 = MiCopyOnWrite(BugCheckParameter2, v9, 0xFFFFFFFFFFFFFFFFuLL, 0);
    if ( v18 < 0 )
    {
      MiUnlockPageTableInternal(v12, v11);
      MiUnlockWorkingSetShared(v12, v14);
      MiCopyOnWriteCheckConditions(v12, (unsigned int)v18);
      MiLockWorkingSetShared(v12);
      MiLockPageTableInternal(v12, v11, 0LL, v19);
    }
  }
  if ( (v15 & 0x42) != 0 )
  {
    *(_QWORD *)BugCheckParameter2 = BugCheckParameter4;
  }
  else
  {
    v21 = (_QWORD *)((BugCheckParameter2 & 0xFFF) + MiMapPageInHyperSpaceWorker(v16, 0LL, 0x80000000));
    *v21 = BugCheckParameter4;
    MiUnmapPageInHyperSpaceWorker((unsigned __int64)v21, 0x11u);
    v30 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v17 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v30, v22, v23, v24);
      while ( *(__int64 *)(v17 + 24) < 0 );
    }
    v25 = MiCaptureDirtyBitToPfn(v17);
    v26 = *(_QWORD *)(qword_140C51F48 + 8 * ((*(_QWORD *)(v17 + 40) >> 43) & 0x3FFLL));
    _InterlockedAnd64((volatile signed __int64 *)(v17 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( v25 )
      MiReleasePageFileInfo(v26, v25, 1);
  }
  MiUnlockPageTableInternal(v12, v11);
  return MiUnlockWorkingSetShared(v12, v14);
}
