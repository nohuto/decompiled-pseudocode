/*
 * XREFs of RtlpGetExtraStuffPointer @ 0x180078E10
 * Callers:
 *     RtlpReAllocateHeap @ 0x180024890 (RtlpReAllocateHeap.c)
 *     RtlpAllocateHeap @ 0x18002B160 (RtlpAllocateHeap.c)
 *     RtlGetUserInfoHeap @ 0x180078760 (RtlGetUserInfoHeap.c)
 *     RtlSetUserValueHeap @ 0x180078BC0 (RtlSetUserValueHeap.c)
 *     RtlDebugAllocateHeap @ 0x180104194 (RtlDebugAllocateHeap.c)
 *     RtlDebugFreeHeap @ 0x180104FAC (RtlDebugFreeHeap.c)
 *     RtlDebugReAllocateHeap @ 0x1801059F0 (RtlDebugReAllocateHeap.c)
 *     RtlpValidateHeapSegment @ 0x180107448 (RtlpValidateHeapSegment.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpGetExtraStuffPointer(__int64 a1)
{
  if ( *(_BYTE *)(a1 + 15) == 4 )
    return a1 - 32;
  else
    return a1 + 16LL * *(unsigned __int16 *)(a1 + 8) - 16;
}
