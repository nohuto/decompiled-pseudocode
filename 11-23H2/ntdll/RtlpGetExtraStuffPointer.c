/*
 * XREFs of RtlpGetExtraStuffPointer @ 0x180076BA4
 * Callers:
 *     RtlpAllocateHeap @ 0x18003F1C0 (RtlpAllocateHeap.c)
 *     RtlpReAllocateHeap @ 0x180042490 (RtlpReAllocateHeap.c)
 *     RtlGetUserInfoHeap @ 0x180076510 (RtlGetUserInfoHeap.c)
 *     RtlSetUserValueHeap @ 0x180076940 (RtlSetUserValueHeap.c)
 *     RtlDebugAllocateHeap @ 0x180105270 (RtlDebugAllocateHeap.c)
 *     RtlDebugFreeHeap @ 0x1801060A0 (RtlDebugFreeHeap.c)
 *     RtlDebugReAllocateHeap @ 0x180106B14 (RtlDebugReAllocateHeap.c)
 *     RtlpValidateHeapSegment @ 0x1801085C0 (RtlpValidateHeapSegment.c)
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
