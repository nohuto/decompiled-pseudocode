/*
 * XREFs of RtlReAllocateHeap @ 0x180042320
 * Callers:
 *     RtlAllocateHandle @ 0x180003CA0 (RtlAllocateHandle.c)
 *     LdrRemoveLoadAsDataTable @ 0x180008560 (LdrRemoveLoadAsDataTable.c)
 *     LdrAddLoadAsDataTable @ 0x1800088C0 (LdrAddLoadAsDataTable.c)
 *     LdrpSetAlternateResourceModuleHandle @ 0x1800310E4 (LdrpSetAlternateResourceModuleHandle.c)
 *     RtlpAllocateUserBlockFromHeap @ 0x18006385C (RtlpAllocateUserBlockFromHeap.c)
 *     LdrUnloadAlternateResourceModuleEx @ 0x18006B820 (LdrUnloadAlternateResourceModuleEx.c)
 *     NtdllpReallocateStringRoutine @ 0x1800DF3BC (NtdllpReallocateStringRoutine.c)
 *     RtlpMUIEnumerateFolder @ 0x1800FB648 (RtlpMUIEnumerateFolder.c)
 *     RtlDebugReAllocateHeap @ 0x180105704 (RtlDebugReAllocateHeap.c)
 *     _SafeReallocBlob @ 0x180114D98 (_SafeReallocBlob.c)
 * Callees:
 *     RtlpReAllocateHeapInternal @ 0x1800423B0 (RtlpReAllocateHeapInternal.c)
 *     RtlpHpReAllocWithExceptionProtection @ 0x1800438D8 (RtlpHpReAllocWithExceptionProtection.c)
 *     RtlpHpTagReAllocateHeap @ 0x180045DB4 (RtlpHpTagReAllocateHeap.c)
 *     RtlpLogHeapFailure @ 0x180121540 (RtlpLogHeapFailure.c)
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
