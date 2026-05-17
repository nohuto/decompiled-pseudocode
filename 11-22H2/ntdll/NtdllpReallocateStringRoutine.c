/*
 * XREFs of NtdllpReallocateStringRoutine @ 0x1800DF3BC
 * Callers:
 *     LdrpAllocateFileNameBufferIfNeeded @ 0x180018CD4 (LdrpAllocateFileNameBufferIfNeeded.c)
 *     LdrpAppendUnicodeStringToFilenameBuffer @ 0x180019D38 (LdrpAppendUnicodeStringToFilenameBuffer.c)
 *     LdrpLoadDependentModuleA @ 0x180024E80 (LdrpLoadDependentModuleA.c)
 *     LdrpLoadDependentModuleInternal @ 0x180025330 (LdrpLoadDependentModuleInternal.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NtdllpReallocateStringRoutine(__int64 a1, __int64 a2)
{
  return RtlReAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, a2, a1);
}
