/*
 * XREFs of ?SplitSegment@CTrimPathOperation@@AEAAXAEBUSegment@Path@@@Z @ 0x1800157D4
 * Callers:
 *     ?ProcessSegment@CTrimPathOperation@@AEAA_NAEBUSegment@Path@@@Z @ 0x180015B5C (-ProcessSegment@CTrimPathOperation@@AEAA_NAEBUSegment@Path@@@Z.c)
 * Callees:
 *     ?TrimToEndAt@CTrimPathOperation@@AEAAXAEBUSegment@Path@@M@Z @ 0x180015840 (-TrimToEndAt@CTrimPathOperation@@AEAAXAEBUSegment@Path@@M@Z.c)
 *     ?ShouldSplitCurrentSegment@CTrimPathOperation@@AEBA_NXZ @ 0x180015C94 (-ShouldSplitCurrentSegment@CTrimPathOperation@@AEBA_NXZ.c)
 *     ?TrimToStartAt@CTrimPathOperation@@AEAAXAEBUSegment@Path@@M@Z @ 0x1802AF4E8 (-TrimToStartAt@CTrimPathOperation@@AEAAXAEBUSegment@Path@@M@Z.c)
 */

void __fastcall CTrimPathOperation::SplitSegment(CTrimPathOperation *this, const struct Path::Segment *a2)
{
  float v4; // xmm2_4

  do
  {
    v4 = fmaxf(
           0.0,
           (float)(*((float *)this + *((unsigned int *)this + 8) + 6)
                 - (float)(*((float *)this + 11) - *((float *)a2 + 1)))
         / *((float *)a2 + 1));
    if ( *((_BYTE *)this + 396) )
      CTrimPathOperation::TrimToEndAt(this, a2, v4);
    else
      CTrimPathOperation::TrimToStartAt(this, a2, v4);
  }
  while ( CTrimPathOperation::ShouldSplitCurrentSegment(this) );
}
