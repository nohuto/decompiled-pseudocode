/*
 * XREFs of MmIsAddressValidEx @ 0x1402E6240
 * Callers:
 *     MiCommitExistingVad @ 0x140276CC0 (MiCommitExistingVad.c)
 *     MiMakeSystemAddressValid @ 0x1402776C0 (MiMakeSystemAddressValid.c)
 *     MiSetProtectionOnSection @ 0x140277F10 (MiSetProtectionOnSection.c)
 *     MiWaitForInPageComplete @ 0x1402A1A30 (MiWaitForInPageComplete.c)
 *     MiInPagePageTable @ 0x1402E5000 (MiInPagePageTable.c)
 *     MiDbgCopyMemory @ 0x1402E60E8 (MiDbgCopyMemory.c)
 *     MiIncreaseUsedPtesCount @ 0x1402F1B64 (MiIncreaseUsedPtesCount.c)
 *     KiIsAddressRangeValid @ 0x1403885EC (KiIsAddressRangeValid.c)
 *     MiDbgWriteCheck @ 0x14038CC04 (MiDbgWriteCheck.c)
 *     MiFreedUnusedPfnPagesWorker @ 0x14038EEFC (MiFreedUnusedPfnPagesWorker.c)
 *     MmIsAddressValid @ 0x1403AEFE0 (MmIsAddressValid.c)
 *     IoFreeDumpRange @ 0x140550B40 (IoFreeDumpRange.c)
 *     IoSetDumpRange @ 0x1405514A0 (IoSetDumpRange.c)
 *     IopGetMaxValidMemorySize @ 0x140553940 (IopGetMaxValidMemorySize.c)
 *     IopGetMaxValidMemorySizeDown @ 0x1405539B8 (IopGetMaxValidMemorySizeDown.c)
 *     IopRemovePageDumpRange @ 0x140553C6C (IopRemovePageDumpRange.c)
 *     KeCapturePersistentThreadState @ 0x140554980 (KeCapturePersistentThreadState.c)
 *     IoAddPagesForPartialKernelDump @ 0x14055CA54 (IoAddPagesForPartialKernelDump.c)
 *     IopMarkPagesForDpcData @ 0x14055D7AC (IopMarkPagesForDpcData.c)
 *     IopMarkPagesForProcessorData @ 0x14055DCA8 (IopMarkPagesForProcessorData.c)
 *     KeValidateBugCheckCallbackRecord @ 0x140569BA8 (KeValidateBugCheckCallbackRecord.c)
 *     KiCollectFullProcessName @ 0x14056A30C (KiCollectFullProcessName.c)
 *     KiCollectTriageDumpDataBlocks @ 0x14056A354 (KiCollectTriageDumpDataBlocks.c)
 *     KiDumpParameterImages @ 0x14056AB88 (KiDumpParameterImages.c)
 *     KiPcToFileHeader @ 0x14056B054 (KiPcToFileHeader.c)
 *     KiScanBugCheckCallbackList @ 0x14056B250 (KiScanBugCheckCallbackList.c)
 *     KiValidateComponentName @ 0x14056B324 (KiValidateComponentName.c)
 *     KiGetCurrentKernelShadowStackBounds @ 0x14057C224 (KiGetCurrentKernelShadowStackBounds.c)
 *     ExpHeapDumpEnumLargeAllocs @ 0x14060F878 (ExpHeapDumpEnumLargeAllocs.c)
 *     ExpHeapDumpNodeLinksValid @ 0x14060F970 (ExpHeapDumpNodeLinksValid.c)
 *     MiAddPartitionToCrashDump @ 0x14062FB5C (MiAddPartitionToCrashDump.c)
 *     MiIsAddressRangeValid @ 0x140630234 (MiIsAddressRangeValid.c)
 *     MiKernelWriteToExecutableMemory @ 0x1406468BC (MiKernelWriteToExecutableMemory.c)
 *     ViFreeTrackedPool @ 0x140AD141C (ViFreeTrackedPool.c)
 * Callees:
 *     <none>
 */

bool __fastcall MmIsAddressValidEx(__int64 a1)
{
  __int64 v2; // rdx
  unsigned __int64 v3; // r9
  __int64 v4; // rcx
  struct _LIST_ENTRY *Flink; // rax
  __int64 v7; // rax
  char v8; // r9
  __int64 v9; // [rsp+0h] [rbp-30h]
  unsigned __int64 v10; // [rsp+8h] [rbp-28h]
  unsigned __int64 v11; // [rsp+10h] [rbp-20h]
  unsigned __int64 v12; // [rsp+18h] [rbp-18h]
  __int64 v13; // [rsp+20h] [rbp-10h]

  if ( a1 >> 47 != -1 && a1 >> 47 != 0 )
    return 0;
  v10 = (((unsigned __int64)a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v11 = ((v10 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v12 = ((v11 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v13 = ((v12 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v2 = 4LL;
  while ( 1 )
  {
    v3 = *(&v9 + v2--);
    v4 = *(_QWORD *)v3;
    if ( v3 >= 0xFFFFF6FB7DBED000uLL
      && v3 <= 0xFFFFF6FB7DBED7F8uLL
      && (MiFlags & 0x600000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1 )
    {
      if ( (v4 & 1) == 0 )
        return 0;
      if ( (v4 & 0x20) == 0 || (v4 & 0x42) == 0 )
      {
        Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( Flink )
        {
          v7 = *((_QWORD *)&Flink->Flink + ((v3 >> 3) & 0x1FF));
          v8 = v4 | 0x20;
          if ( (v7 & 0x20) == 0 )
            v8 = v4;
          LOBYTE(v4) = v8;
          if ( (v7 & 0x42) != 0 )
            LOBYTE(v4) = v8 | 0x42;
        }
      }
    }
    if ( (v4 & 1) == 0 )
      return 0;
    if ( (v4 & 0x80u) != 0LL )
      break;
    if ( !v2 )
      return 1;
  }
  if ( (unsigned __int64)a1 < 0xFFFFF68000000000uLL )
    return 1;
  return (unsigned __int64)a1 > 0xFFFFF6FFFFFFFFFFuLL;
}
