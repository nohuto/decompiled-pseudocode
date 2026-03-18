/*
 * XREFs of RaspAllocateMemory @ 0x1403875CC
 * Callers:
 *     RaspLoadEmptyGlyph @ 0x140384F14 (RaspLoadEmptyGlyph.c)
 *     RaspGetXExtent @ 0x140385CA4 (RaspGetXExtent.c)
 *     RaspScanConvert @ 0x140386240 (RaspScanConvert.c)
 *     RaspCreatePointList @ 0x140386C1C (RaspCreatePointList.c)
 *     RaspRectangleCreate @ 0x140386CD4 (RaspRectangleCreate.c)
 *     RaspInitializeGlyphData @ 0x140386E1C (RaspInitializeGlyphData.c)
 *     RaspCreateSegmentList @ 0x1403871FC (RaspCreateSegmentList.c)
 *     RaspInterpolatePoint @ 0x140387544 (RaspInterpolatePoint.c)
 *     RaspGetCompositeGlyphList @ 0x1406734AC (RaspGetCompositeGlyphList.c)
 *     RaspInitializeCompositeGlyphData @ 0x1406737DC (RaspInitializeCompositeGlyphData.c)
 * Callees:
 *     BgpFwAllocateMemory @ 0x14038762C (BgpFwAllocateMemory.c)
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
