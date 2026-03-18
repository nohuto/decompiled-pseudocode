/*
 * XREFs of MiGetVadCacheAttribute @ 0x140660BA4
 * Callers:
 *     MiProtectAweRegion @ 0x14064B3A4 (MiProtectAweRegion.c)
 *     MiProcessVaContiguityInformation @ 0x14065D9B4 (MiProcessVaContiguityInformation.c)
 *     MiAllocateLargeProcessPagesFromCache @ 0x14066713C (MiAllocateLargeProcessPagesFromCache.c)
 *     MiReplaceRotateWithDemandZero @ 0x140A31408 (MiReplaceRotateWithDemandZero.c)
 *     MiRotateToFrameBuffer @ 0x140A316A0 (MiRotateToFrameBuffer.c)
 *     MiRotateToFrameBufferNoCopy @ 0x140A319A4 (MiRotateToFrameBufferNoCopy.c)
 *     MmRotatePhysicalView @ 0x140A31BD0 (MmRotatePhysicalView.c)
 *     MiReferenceIncomingPhysicalPages @ 0x140A41DB8 (MiReferenceIncomingPhysicalPages.c)
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
