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

PVOID __fastcall NtdllpReallocateStringRoutine(SIZE_T a1, void *a2)
{
  return RtlReAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, a2, a1);
}
