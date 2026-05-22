/*
 * XREFs of ?AddTrailPointsWithPrediction@CDelegatedInkTrailImpl@DirectComposition@@UEAAJPEBUDCompositionInkTrailPoint@@I0IPEAI@Z @ 0x1800E68B0
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180080EBC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     DirectComposition::ConvertToSuperWetInkPoints_DCompositionInkTrailPoint_ @ 0x1800E5FBC (DirectComposition--ConvertToSuperWetInkPoints_DCompositionInkTrailPoint_.c)
 *     ?AddTrailPointsPrivate@CDelegatedInkTrailImpl@DirectComposition@@AEAAJPEAV?$vector@USuperWetInkBallpointPenPoint@@V?$allocator@USuperWetInkBallpointPenPoint@@@std@@@std@@0PEAI@Z @ 0x1800E66B4 (-AddTrailPointsPrivate@CDelegatedInkTrailImpl@DirectComposition@@AEAAJPEAV-$vector@USuperWetInkB.c)
 */

__int64 __fastcall DirectComposition::CDelegatedInkTrailImpl::AddTrailPointsWithPrediction(
        DirectComposition::CDelegatedInkTrailImpl *this,
        const struct DCompositionInkTrailPoint *a2,
        unsigned int a3,
        const struct DCompositionInkTrailPoint *a4,
        unsigned int a5,
        unsigned int *a6)
{
  unsigned int v8; // ebx
  void *v10[3]; // [rsp+20h] [rbp-38h] BYREF
  void *v11[4]; // [rsp+38h] [rbp-20h] BYREF

  DirectComposition::ConvertToSuperWetInkPoints_DCompositionInkTrailPoint_(v11, (__int64)a2, a3, 0);
  DirectComposition::ConvertToSuperWetInkPoints_DCompositionInkTrailPoint_(v10, (__int64)a4, a5, 1u);
  v8 = DirectComposition::CDelegatedInkTrailImpl::AddTrailPointsPrivate((__int64)this - 16, v11, v10, (__int64)a6);
  if ( v10[0] )
    std::_Deallocate<16,0>(v10[0], 8 * (((char *)v10[2] - (char *)v10[0]) >> 3));
  if ( v11[0] )
    std::_Deallocate<16,0>(v11[0], 8 * (((char *)v11[2] - (char *)v11[0]) >> 3));
  return v8;
}
