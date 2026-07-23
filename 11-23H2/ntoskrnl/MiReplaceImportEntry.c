/*
 * XREFs of MiReplaceImportEntry @ 0x14062CC00
 * Callers:
 *     MmReplaceImportEntry @ 0x14062D018 (MmReplaceImportEntry.c)
 *     MiReplacePatchImportEntry @ 0x140643430 (MiReplacePatchImportEntry.c)
 *     MmReplaceImportEntriesForVerifier @ 0x140A2D8FC (MmReplaceImportEntriesForVerifier.c)
 * Callees:
 *     MiGetSessionVm @ 0x14020B11C (MiGetSessionVm.c)
 *     MiLookupDataTableEntry @ 0x1402136A0 (MiLookupDataTableEntry.c)
 *     MiGetAnyMultiplexedVm @ 0x1402146B4 (MiGetAnyMultiplexedVm.c)
 *     RtlImageDirectoryEntryToData @ 0x140214A20 (RtlImageDirectoryEntryToData.c)
 *     MiMapPageInHyperSpaceWorker @ 0x14021ACA0 (MiMapPageInHyperSpaceWorker.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x14021AE84 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiLockPageTableInternal @ 0x1402377D0 (MiLockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x14023C5D0 (MiUnlockWorkingSetShared.c)
 *     KeYieldProcessorEx @ 0x140242F10 (KeYieldProcessorEx.c)
 *     MiCopyOnWrite @ 0x140270030 (MiCopyOnWrite.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140271580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiCaptureDirtyBitToPfn @ 0x140283390 (MiCaptureDirtyBitToPfn.c)
 *     MiLockWorkingSetShared @ 0x140283F20 (MiLockWorkingSetShared.c)
 *     MiGetSystemRegionType @ 0x140284B00 (MiGetSystemRegionType.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x140284B40 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiReleasePageFileInfo @ 0x14029556C (MiReleasePageFileInfo.c)
 *     MiUnlockPageTableInternal @ 0x140319850 (MiUnlockPageTableInternal.c)
 *     KeBugCheckEx @ 0x14041EDE0 (KeBugCheckEx.c)
 *     MiCopyOnWriteCheckConditions @ 0x140667370 (MiCopyOnWriteCheckConditions.c)
 */

__int64 __fastcall MiReplaceImportEntry(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter4)
{
  _QWORD *v4; // rax
  ULONG_PTR v5; // rdi
  PVOID v6; // rax
  __int64 result; // rax
  unsigned __int64 v8; // rbp
  __int64 SessionVm; // rax
  unsigned __int64 v10; // rsi
  __int64 v11; // rdi
  __int64 v12; // r9
  unsigned __int8 v13; // r13
  char v14; // r12
  unsigned __int64 v15; // rax
  __int64 v16; // r14
  int v17; // r14d
  __int64 v18; // r9
  __int64 v19; // r9
  _QWORD *v20; // rcx
  unsigned __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23[9]; // [rsp+30h] [rbp-48h] BYREF
  ULONG Size; // [rsp+90h] [rbp+18h] BYREF
  int v26; // [rsp+98h] [rbp+20h] BYREF

  Size = 0;
  if ( PsLoadedModuleList )
  {
    v4 = MiLookupDataTableEntry(BugCheckParameter2, 1);
    v5 = (ULONG_PTR)v4;
    if ( !v4 )
      KeBugCheckEx(0x1Au, 0x1014uLL, 0LL, BugCheckParameter2, BugCheckParameter4);
    v6 = RtlImageDirectoryEntryToData((PVOID)v4[6], 1u, 0xCu, &Size);
    if ( !v6 || !Size || BugCheckParameter2 < (unsigned __int64)v6 || BugCheckParameter2 >= (unsigned __int64)v6 + Size )
      KeBugCheckEx(0x1Au, 0x1014uLL, v5, BugCheckParameter2, BugCheckParameter4);
  }
  _InterlockedIncrement64(&qword_140C65978);
  result = MI_IS_PHYSICAL_ADDRESS(BugCheckParameter2);
  if ( (_DWORD)result )
  {
    *(_QWORD *)BugCheckParameter2 = BugCheckParameter4;
    return result;
  }
  v8 = ((BugCheckParameter2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( (unsigned int)MiGetSystemRegionType(BugCheckParameter2) == 1 )
    SessionVm = MiGetSessionVm();
  else
    SessionVm = (__int64)MiGetAnyMultiplexedVm(1);
  v10 = 0LL;
  v11 = SessionVm;
  v13 = MiLockWorkingSetShared(SessionVm);
  while ( 1 )
  {
    while ( 1 )
    {
      if ( v10 )
      {
        if ( ((BugCheckParameter2 >> 9) & 0xFF8) != 0 )
          goto LABEL_19;
        MiUnlockPageTableInternal(v11, v10);
      }
      v10 = ((v8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      MiLockPageTableInternal(v11, v10, 0, v12);
LABEL_19:
      v23[0] = MI_READ_PTE_LOCK_FREE(v8);
      v14 = v23[0];
      if ( (v23[0] & 1) != 0 )
        break;
      MiUnlockPageTableInternal(v11, v10);
      MiUnlockWorkingSetShared(v11, v13);
      MiLockWorkingSetShared(v11);
      MiLockPageTableInternal(v11, v10, 0, v19);
    }
    v15 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)v23) >> 12) & 0xFFFFFFFFFFLL;
    v16 = 48 * v15 - 0x220000000000LL;
    if ( *(__int64 *)(v16 + 40) >= 0 )
      break;
    v17 = MiCopyOnWrite(BugCheckParameter2, v8, 0xFFFFFFFFFFFFFFFFuLL, 0);
    if ( v17 < 0 )
    {
      MiUnlockPageTableInternal(v11, v10);
      MiUnlockWorkingSetShared(v11, v13);
      MiCopyOnWriteCheckConditions(v11, (unsigned int)v17);
      MiLockWorkingSetShared(v11);
      MiLockPageTableInternal(v11, v10, 0, v18);
    }
  }
  if ( (v14 & 0x42) != 0 )
  {
    *(_QWORD *)BugCheckParameter2 = BugCheckParameter4;
  }
  else
  {
    v20 = (_QWORD *)((BugCheckParameter2 & 0xFFF) + MiMapPageInHyperSpaceWorker(v15, 0LL, 0x80000000));
    *v20 = BugCheckParameter4;
    MiUnmapPageInHyperSpaceWorker((unsigned __int64)v20, 0x11u);
    v26 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v16 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v26);
      while ( *(__int64 *)(v16 + 24) < 0 );
    }
    v21 = MiCaptureDirtyBitToPfn(v16);
    v22 = *(_QWORD *)(qword_140C673C8 + 8 * ((*(_QWORD *)(v16 + 40) >> 43) & 0x3FFLL));
    _InterlockedAnd64((volatile signed __int64 *)(v16 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( v21 )
      MiReleasePageFileInfo(v22, v21, 1);
  }
  MiUnlockPageTableInternal(v11, v10);
  return MiUnlockWorkingSetShared(v11, v13);
}
