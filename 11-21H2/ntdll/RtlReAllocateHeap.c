/*
 * XREFs of RtlReAllocateHeap @ 0x180024530
 * Callers:
 *     LdrpSetAlternateResourceModuleHandle @ 0x18001F100 (LdrpSetAlternateResourceModuleHandle.c)
 *     RtlpAllocateUserBlockFromHeap @ 0x18002EABC (RtlpAllocateUserBlockFromHeap.c)
 *     LdrUnloadAlternateResourceModuleEx @ 0x180052A10 (LdrUnloadAlternateResourceModuleEx.c)
 *     RtlAllocateHandle @ 0x180062CB0 (RtlAllocateHandle.c)
 *     LdrRemoveLoadAsDataTable @ 0x180067870 (LdrRemoveLoadAsDataTable.c)
 *     LdrAddLoadAsDataTable @ 0x180067BB0 (LdrAddLoadAsDataTable.c)
 *     RtlpMUIEnumerateFolder @ 0x18008F6D4 (RtlpMUIEnumerateFolder.c)
 *     NtdllpReallocateStringRoutine @ 0x1800E0AA4 (NtdllpReallocateStringRoutine.c)
 *     RtlDebugReAllocateHeap @ 0x1801059F0 (RtlDebugReAllocateHeap.c)
 *     _SafeReallocBlob @ 0x180114944 (_SafeReallocBlob.c)
 * Callees:
 *     RtlpHpTagReAllocateHeap @ 0x180021E40 (RtlpHpTagReAllocateHeap.c)
 *     RtlpHpReAllocWithExceptionProtection @ 0x180024214 (RtlpHpReAllocWithExceptionProtection.c)
 *     RtlpReAllocateHeapInternal @ 0x1800245B8 (RtlpReAllocateHeapInternal.c)
 *     RtlpLogHeapFailure @ 0x18011F650 (RtlpLogHeapFailure.c)
 */

PVOID __cdecl RtlReAllocateHeap(PVOID HeapHandle, ULONG Flags, PVOID BaseAddress, SIZE_T Size)
{
  if ( !HeapHandle )
    RtlpLogHeapFailure(19, 0, (_DWORD)BaseAddress, 0, 0LL, 0LL);
  if ( *((_DWORD *)HeapHandle + 4) == -571548178 )
    return (PVOID)RtlpHpReAllocWithExceptionProtection(HeapHandle, Flags, (__int64)BaseAddress, Size);
  if ( (RtlpHpHeapFeatures & 2) != 0 )
    return (PVOID)RtlpHpTagReAllocateHeap(HeapHandle, (__int64)BaseAddress, Size);
  return (PVOID)RtlpReAllocateHeapInternal(HeapHandle, 0LL, 0LL);
}
