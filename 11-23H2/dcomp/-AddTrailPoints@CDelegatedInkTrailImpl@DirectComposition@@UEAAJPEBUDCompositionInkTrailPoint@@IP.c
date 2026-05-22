/*
 * XREFs of ?AddTrailPoints@CDelegatedInkTrailImpl@DirectComposition@@UEAAJPEBUDCompositionInkTrailPoint@@IPEAI@Z @ 0x1800E6640
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180080EBC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     DirectComposition::ConvertToSuperWetInkPoints_DCompositionInkTrailPoint_ @ 0x1800E5FBC (DirectComposition--ConvertToSuperWetInkPoints_DCompositionInkTrailPoint_.c)
 *     ?AddTrailPointsPrivate@CDelegatedInkTrailImpl@DirectComposition@@AEAAJPEAV?$vector@USuperWetInkBallpointPenPoint@@V?$allocator@USuperWetInkBallpointPenPoint@@@std@@@std@@0PEAI@Z @ 0x1800E66B4 (-AddTrailPointsPrivate@CDelegatedInkTrailImpl@DirectComposition@@AEAAJPEAV-$vector@USuperWetInkB.c)
 */

__int64 __fastcall DirectComposition::CDelegatedInkTrailImpl::AddTrailPoints(
        DirectComposition::CDelegatedInkTrailImpl *this,
        const struct DCompositionInkTrailPoint *a2,
        unsigned int a3,
        unsigned int *a4)
{
  unsigned int v6; // ebx
  void *v8[5]; // [rsp+20h] [rbp-28h] BYREF

  DirectComposition::ConvertToSuperWetInkPoints_DCompositionInkTrailPoint_(v8, (__int64)a2, a3, 0);
  v6 = DirectComposition::CDelegatedInkTrailImpl::AddTrailPointsPrivate((char *)this - 16, v8, 0LL, a4);
  if ( v8[0] )
    std::_Deallocate<16,0>(v8[0], 8 * (((char *)v8[2] - (char *)v8[0]) >> 3));
  return v6;
}
