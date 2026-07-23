/*
 * XREFs of MiGetVadCacheAttribute @ 0x1406610F4
 * Callers:
 *     MiProtectAweRegion @ 0x14064B8F4 (MiProtectAweRegion.c)
 *     MiProcessVaContiguityInformation @ 0x14065DF04 (MiProcessVaContiguityInformation.c)
 *     MiAllocateLargeProcessPagesFromCache @ 0x14066768C (MiAllocateLargeProcessPagesFromCache.c)
 *     MiReplaceRotateWithDemandZero @ 0x140A316B8 (MiReplaceRotateWithDemandZero.c)
 *     MiRotateToFrameBuffer @ 0x140A31950 (MiRotateToFrameBuffer.c)
 *     MiRotateToFrameBufferNoCopy @ 0x140A31C54 (MiRotateToFrameBufferNoCopy.c)
 *     MmRotatePhysicalView @ 0x140A31E80 (MmRotatePhysicalView.c)
 *     MiReferenceIncomingPhysicalPages @ 0x140A42068 (MiReferenceIncomingPhysicalPages.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetVadCacheAttribute(__int64 a1)
{
  __int64 result; // rax
  unsigned int v2; // edx

  result = 1LL;
  v2 = (*(_DWORD *)(a1 + 48) >> 7) & 0x1F;
  if ( v2 >> 3 != 3 )
    return v2 >> 3 != 1;
  if ( (v2 & 7) != 0 )
    return 2LL;
  return result;
}
