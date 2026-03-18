/*
 * XREFs of MmIsAddressValidEx @ 0x14028FBF0
 * Callers:
 *     MiWaitForInPageComplete @ 0x14027AA30 (MiWaitForInPageComplete.c)
 *     MiDbgCopyMemory @ 0x14028FA14 (MiDbgCopyMemory.c)
 *     MiIncreaseUsedPtesCount @ 0x14028FB74 (MiIncreaseUsedPtesCount.c)
 *     MiCommitExistingVad @ 0x14032C1B0 (MiCommitExistingVad.c)
 *     MiMakeSystemAddressValid @ 0x14032CE60 (MiMakeSystemAddressValid.c)
 *     MiSetProtectionOnSection @ 0x14032D1C0 (MiSetProtectionOnSection.c)
 *     MiInPagePageTable @ 0x140353230 (MiInPagePageTable.c)
 *     RtlMarkHiberPhase @ 0x14038D4F0 (RtlMarkHiberPhase.c)
 *     MmIsAddressValid @ 0x14038DE50 (MmIsAddressValid.c)
 *     MiDbgWriteCheck @ 0x1403AD16C (MiDbgWriteCheck.c)
 *     MiFreedUnusedPfnPagesWorker @ 0x1403C8AA8 (MiFreedUnusedPfnPagesWorker.c)
 *     KiIsAddressRangeValid @ 0x1403D7FD4 (KiIsAddressRangeValid.c)
 *     IoFreeDumpRange @ 0x140552800 (IoFreeDumpRange.c)
 *     IoSetDumpRange @ 0x140552F60 (IoSetDumpRange.c)
 *     IopGetMaxValidMemorySize @ 0x140554800 (IopGetMaxValidMemorySize.c)
 *     IopGetMaxValidMemorySizeDown @ 0x140554878 (IopGetMaxValidMemorySizeDown.c)
 *     IopGetMaxValidSectionSize @ 0x1405548F0 (IopGetMaxValidSectionSize.c)
 *     IopGetMaxValidSectionSizeDown @ 0x140554938 (IopGetMaxValidSectionSizeDown.c)
 *     IopRemovePageDumpRange @ 0x140554BC4 (IopRemovePageDumpRange.c)
 *     IoAddPagesForPartialKernelDump @ 0x14055CC5C (IoAddPagesForPartialKernelDump.c)
 *     IopMarkPagesForDpcData @ 0x14055D868 (IopMarkPagesForDpcData.c)
 *     IopMarkPagesForProcessorData @ 0x14055DD48 (IopMarkPagesForProcessorData.c)
 *     KeValidateBugCheckCallbackRecord @ 0x140567038 (KeValidateBugCheckCallbackRecord.c)
 *     KiCollectTriageDumpDataBlocks @ 0x140567630 (KiCollectTriageDumpDataBlocks.c)
 *     KiDumpParameterImages @ 0x140567C08 (KiDumpParameterImages.c)
 *     KiPcToFileHeader @ 0x140568024 (KiPcToFileHeader.c)
 *     KiScanBugCheckCallbackList @ 0x140568220 (KiScanBugCheckCallbackList.c)
 *     KiValidateComponentName @ 0x1405682F4 (KiValidateComponentName.c)
 *     KiGetCurrentKernelShadowStackBounds @ 0x140569604 (KiGetCurrentKernelShadowStackBounds.c)
 *     MmIsSpecialPoolAddress @ 0x140592348 (MmIsSpecialPoolAddress.c)
 *     MiAddPartitionToCrashDump @ 0x140592964 (MiAddPartitionToCrashDump.c)
 *     MiIsAddressRangeValid @ 0x140593064 (MiIsAddressRangeValid.c)
 *     MiKernelWriteToExecutableMemory @ 0x1405A7608 (MiKernelWriteToExecutableMemory.c)
 *     ExpHeapDumpEnumLargeAllocs @ 0x140642660 (ExpHeapDumpEnumLargeAllocs.c)
 *     ExpHeapDumpNodeLinksValid @ 0x140642758 (ExpHeapDumpNodeLinksValid.c)
 *     ViFreeTrackedPool @ 0x140A90A7C (ViFreeTrackedPool.c)
 * Callees:
 *     <none>
 */

char __fastcall MmIsAddressValidEx(__int64 a1)
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

  if ( a1 >> 47 == -1 || a1 >> 47 == 0 )
  {
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
        && (MiFlags & 0xC00000) != 0
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
    if ( (unsigned __int64)a1 < 0xFFFFF68000000000uLL || (unsigned __int64)a1 > 0xFFFFF6FFFFFFFFFFuLL )
      return 1;
  }
  return 0;
}
