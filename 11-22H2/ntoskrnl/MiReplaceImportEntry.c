/*
 * XREFs of MiReplaceImportEntry @ 0x14062C720
 * Callers:
 *     MmReplaceImportEntry @ 0x14062CB38 (MmReplaceImportEntry.c)
 *     MiReplacePatchImportEntry @ 0x140642F50 (MiReplacePatchImportEntry.c)
 *     MmReplaceImportEntriesForVerifier @ 0x140A2D6BC (MmReplaceImportEntriesForVerifier.c)
 * Callees:
 *     MiGetSessionVm @ 0x14020B13C (MiGetSessionVm.c)
 *     MiLookupDataTableEntry @ 0x1402136C0 (MiLookupDataTableEntry.c)
 *     MiGetAnyMultiplexedVm @ 0x1402146D4 (MiGetAnyMultiplexedVm.c)
 *     RtlImageDirectoryEntryToData @ 0x140214A40 (RtlImageDirectoryEntryToData.c)
 *     MiMapPageInHyperSpaceWorker @ 0x14021ACC0 (MiMapPageInHyperSpaceWorker.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x14021AEA4 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiLockPageTableInternal @ 0x1402376E0 (MiLockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x14023C4E0 (MiUnlockWorkingSetShared.c)
 *     KeYieldProcessorEx @ 0x140242E20 (KeYieldProcessorEx.c)
 *     MiCopyOnWrite @ 0x14026FC80 (MiCopyOnWrite.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402711D0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiCaptureDirtyBitToPfn @ 0x140282FE0 (MiCaptureDirtyBitToPfn.c)
 *     MiLockWorkingSetShared @ 0x140283B70 (MiLockWorkingSetShared.c)
 *     MiGetSystemRegionType @ 0x140284750 (MiGetSystemRegionType.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x140284790 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiReleasePageFileInfo @ 0x1402951BC (MiReleasePageFileInfo.c)
 *     MiUnlockPageTableInternal @ 0x1403193E0 (MiUnlockPageTableInternal.c)
 *     KeBugCheckEx @ 0x14041E390 (KeBugCheckEx.c)
 *     MiCopyOnWriteCheckConditions @ 0x140666E90 (MiCopyOnWriteCheckConditions.c)
 */

__int64 __fastcall MiReplaceImportEntry(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter4)
{
  _QWORD *v4; // rax
  int v5; // edx
  ULONG_PTR v6; // rdi
  unsigned __int64 v7; // rax
  __int64 result; // rax
  unsigned __int64 v9; // rbp
  __int64 SessionVm; // rax
  unsigned __int64 v11; // rsi
  __int64 v12; // rdi
  __int64 v13; // r9
  unsigned __int8 v14; // r13
  char v15; // r12
  unsigned __int64 v16; // rax
  __int64 v17; // r14
  int v18; // r14d
  __int64 v19; // r9
  __int64 v20; // r9
  _QWORD *v21; // rcx
  unsigned __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24[9]; // [rsp+30h] [rbp-48h] BYREF
  unsigned int v26; // [rsp+90h] [rbp+18h] BYREF
  int v27; // [rsp+98h] [rbp+20h] BYREF

  v26 = 0;
  if ( PsLoadedModuleList )
  {
    v4 = MiLookupDataTableEntry(BugCheckParameter2, 1);
    v6 = (ULONG_PTR)v4;
    if ( !v4 )
      KeBugCheckEx(0x1Au, 0x1014uLL, 0LL, BugCheckParameter2, BugCheckParameter4);
    LOBYTE(v5) = 1;
    v7 = RtlImageDirectoryEntryToData(v4[6], v5, 12, (int)&v26);
    if ( !v7 || !v26 || BugCheckParameter2 < v7 || BugCheckParameter2 >= v7 + v26 )
      KeBugCheckEx(0x1Au, 0x1014uLL, v6, BugCheckParameter2, BugCheckParameter4);
  }
  _InterlockedIncrement64(&qword_140C65A78);
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
      MiLockPageTableInternal(v12, v11, 0, v13);
LABEL_19:
      v24[0] = MI_READ_PTE_LOCK_FREE(v9);
      v15 = v24[0];
      if ( (v24[0] & 1) != 0 )
        break;
      MiUnlockPageTableInternal(v12, v11);
      MiUnlockWorkingSetShared(v12, v14);
      MiLockWorkingSetShared(v12);
      MiLockPageTableInternal(v12, v11, 0, v20);
    }
    v16 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)v24) >> 12) & 0xFFFFFFFFFFLL;
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
      MiLockPageTableInternal(v12, v11, 0, v19);
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
    v27 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v17 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v27);
      while ( *(__int64 *)(v17 + 24) < 0 );
    }
    v22 = MiCaptureDirtyBitToPfn(v17);
    v23 = *(_QWORD *)(qword_140C674C8 + 8 * ((*(_QWORD *)(v17 + 40) >> 43) & 0x3FFLL));
    _InterlockedAnd64((volatile signed __int64 *)(v17 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( v22 )
      MiReleasePageFileInfo(v23, v22, 1);
  }
  MiUnlockPageTableInternal(v12, v11);
  return MiUnlockWorkingSetShared(v12, v14);
}
