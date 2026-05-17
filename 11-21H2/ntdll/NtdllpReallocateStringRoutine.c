/*
 * XREFs of NtdllpReallocateStringRoutine @ 0x1800E0AA4
 * Callers:
 *     LdrpAllocateFileNameBufferIfNeeded @ 0x18000DE78 (LdrpAllocateFileNameBufferIfNeeded.c)
 *     LdrpLoadDependentModuleA @ 0x18003D360 (LdrpLoadDependentModuleA.c)
 *     LdrpLoadDependentModuleInternal @ 0x18003D8F0 (LdrpLoadDependentModuleInternal.c)
 *     LdrpAppendUnicodeStringToFilenameBuffer @ 0x180044FE8 (LdrpAppendUnicodeStringToFilenameBuffer.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NtdllpReallocateStringRoutine(__int64 a1, int a2)
{
  return RtlReAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, a2, a1);
}
