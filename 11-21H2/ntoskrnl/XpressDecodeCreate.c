/*
 * XREFs of XpressDecodeCreate @ 0x140654BB0
 * Callers:
 *     CMFReadCompressedSegment @ 0x140A04C34 (CMFReadCompressedSegment.c)
 * Callees:
 *     CMFAllocFn @ 0x140A03F90 (CMFAllocFn.c)
 */

__int64 XpressDecodeCreate()
{
  __int64 result; // rax

  result = CMFAllocFn(0LL, 112LL);
  if ( result )
    *(_DWORD *)(result + 104) = 903790814;
  return result;
}
