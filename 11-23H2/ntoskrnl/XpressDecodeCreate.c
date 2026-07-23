/*
 * XREFs of XpressDecodeCreate @ 0x14067A2B8
 * Callers:
 *     CMFReadCompressedSegment @ 0x140A02850 (CMFReadCompressedSegment.c)
 * Callees:
 *     CMFAllocFn @ 0x140A01B50 (CMFAllocFn.c)
 */

__int64 XpressDecodeCreate()
{
  __int64 result; // rax

  result = CMFAllocFn(0LL, 112LL);
  if ( result )
    *(_DWORD *)(result + 104) = 903790814;
  return result;
}
