/*
 * XREFs of XpressDecodeCreate @ 0x140679D68
 * Callers:
 *     CMFReadCompressedSegment @ 0x140A025C0 (CMFReadCompressedSegment.c)
 * Callees:
 *     CMFAllocFn @ 0x140A018C0 (CMFAllocFn.c)
 */

__int64 XpressDecodeCreate()
{
  __int64 result; // rax

  result = CMFAllocFn(0LL, 112LL);
  if ( result )
    *(_DWORD *)(result + 104) = 903790814;
  return result;
}
