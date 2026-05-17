/*
 * XREFs of RtlpGetReservedBlockSize @ 0x1800B13A8
 * Callers:
 *     RtlpFreeHeapInternal @ 0x180027BF0 (RtlpFreeHeapInternal.c)
 *     RtlpLowFragHeapFlushCaches @ 0x18006C404 (RtlpLowFragHeapFlushCaches.c)
 *     RtlpWalkLFHBlock @ 0x1800B1434 (RtlpWalkLFHBlock.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall RtlpGetReservedBlockSize(__int64 a1)
{
  if ( (*(_BYTE *)(a1 + 38) & 3) != 0 )
    return (((16 * (*(unsigned __int16 *)(a1 + 36) + 256LL)) & 0xFFFFFFFFFFFFF000uLL) + 4096) >> 4;
  else
    return *(unsigned __int16 *)(a1 + 36);
}
