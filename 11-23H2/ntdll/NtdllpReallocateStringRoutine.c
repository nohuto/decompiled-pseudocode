/*
 * XREFs of NtdllpReallocateStringRoutine @ 0x1800E06E8
 * Callers:
 *     LdrpAllocateFileNameBufferIfNeeded @ 0x180018AC4 (LdrpAllocateFileNameBufferIfNeeded.c)
 *     LdrpAppendUnicodeStringToFilenameBuffer @ 0x180019B28 (LdrpAppendUnicodeStringToFilenameBuffer.c)
 *     LdrpLoadDependentModuleA @ 0x180024D30 (LdrpLoadDependentModuleA.c)
 *     LdrpLoadDependentModuleInternal @ 0x1800251E0 (LdrpLoadDependentModuleInternal.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NtdllpReallocateStringRoutine(__int64 a1, __int64 a2)
{
  return RtlReAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, a2, a1);
}
