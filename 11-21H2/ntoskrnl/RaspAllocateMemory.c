/*
 * XREFs of RaspAllocateMemory @ 0x1403AA258
 * Callers:
 *     RaspLoadEmptyGlyph @ 0x1403A7B7C (RaspLoadEmptyGlyph.c)
 *     RaspScanConvert @ 0x1403A8E50 (RaspScanConvert.c)
 *     RaspRectangleCreate @ 0x1403A96CC (RaspRectangleCreate.c)
 *     RaspCreatePointList @ 0x1403A97A4 (RaspCreatePointList.c)
 *     RaspInitializeGlyphData @ 0x1403A9A80 (RaspInitializeGlyphData.c)
 *     RaspCreateSegmentList @ 0x1403A9E80 (RaspCreateSegmentList.c)
 *     RaspInterpolatePoint @ 0x1403AA1D0 (RaspInterpolatePoint.c)
 *     RaspGetXExtent @ 0x1403CA20C (RaspGetXExtent.c)
 *     RaspGetCompositeGlyphList @ 0x14064ED90 (RaspGetCompositeGlyphList.c)
 *     RaspInitializeCompositeGlyphData @ 0x14064F0C0 (RaspInitializeCompositeGlyphData.c)
 * Callees:
 *     BgpFwAllocateMemory @ 0x1403AA2B8 (BgpFwAllocateMemory.c)
 */

__int64 __fastcall RaspAllocateMemory(unsigned __int64 a1, __int64 *a2)
{
  __int64 v3; // rcx
  unsigned __int64 v4; // rbx
  __int64 Memory; // rdx

  v3 = *a2;
  v4 = (a2[2] + 15) & 0xFFFFFFFFFFFFFFF0uLL;
  if ( *a2 )
  {
    if ( a1 > a2[1] - v4 )
    {
      return 0LL;
    }
    else
    {
      a2[2] = v4 + a1;
      return v3 + v4;
    }
  }
  else
  {
    Memory = BgpFwAllocateMemory(a1);
    if ( Memory )
      a2[2] = v4 + a1;
  }
  return Memory;
}
