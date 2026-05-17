/*
 * XREFs of RtlReAllocateHeap @ 0x1800421C0
 * Callers:
 *     RtlAllocateHandle @ 0x180003E00 (RtlAllocateHandle.c)
 *     LdrpSetAlternateResourceModuleHandle @ 0x180030F14 (LdrpSetAlternateResourceModuleHandle.c)
 *     RtlpAllocateUserBlockFromHeap @ 0x18006372C (RtlpAllocateUserBlockFromHeap.c)
 *     LdrUnloadAlternateResourceModuleEx @ 0x18006B800 (LdrUnloadAlternateResourceModuleEx.c)
 *     LdrAddLoadAsDataTable @ 0x180070A50 (LdrAddLoadAsDataTable.c)
 *     LdrRemoveLoadAsDataTable @ 0x180071FE0 (LdrRemoveLoadAsDataTable.c)
 *     NtdllpReallocateStringRoutine @ 0x1800E06E8 (NtdllpReallocateStringRoutine.c)
 *     RtlpMUIEnumerateFolder @ 0x1800FCA58 (RtlpMUIEnumerateFolder.c)
 *     RtlDebugReAllocateHeap @ 0x180106B14 (RtlDebugReAllocateHeap.c)
 *     _SafeReallocBlob @ 0x180116248 (_SafeReallocBlob.c)
 * Callees:
 *     RtlpReAllocateHeapInternal @ 0x180042250 (RtlpReAllocateHeapInternal.c)
 *     RtlpHpReAllocWithExceptionProtection @ 0x180043778 (RtlpHpReAllocWithExceptionProtection.c)
 *     RtlpHpTagReAllocateHeap @ 0x180045C54 (RtlpHpTagReAllocateHeap.c)
 *     RtlpLogHeapFailure @ 0x1801229F0 (RtlpLogHeapFailure.c)
 */

__int64 __fastcall RtlReAllocateHeap(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  if ( !a1 )
    RtlpLogHeapFailure(19, 0, a3, 0, 0LL, 0LL);
  if ( *(_DWORD *)(a1 + 16) == -571548178 )
    return RtlpHpReAllocWithExceptionProtection(a1, a2, a3, a4);
  if ( (RtlpHpHeapFeatures & 2) != 0 )
    return RtlpHpTagReAllocateHeap(a1, a3, a4, a2);
  return RtlpReAllocateHeapInternal(a1, a2, a3, a4, 0LL, 0LL);
}
