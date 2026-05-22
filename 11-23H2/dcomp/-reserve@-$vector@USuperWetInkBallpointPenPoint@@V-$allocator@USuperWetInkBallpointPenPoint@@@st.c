/*
 * XREFs of ?reserve@?$vector@USuperWetInkBallpointPenPoint@@V?$allocator@USuperWetInkBallpointPenPoint@@@std@@@std@@QEAAX_K@Z @ 0x1800E7514
 * Callers:
 *     DirectComposition::ConvertToSuperWetInkPoints_DCompositionInkTrailPoint_ @ 0x1800E5FBC (DirectComposition--ConvertToSuperWetInkPoints_DCompositionInkTrailPoint_.c)
 *     DirectComposition::ConvertToSuperWetInkPoints_Windows::UI::Composition::InkTrailPoint_ @ 0x1800E60C4 (DirectComposition--ConvertToSuperWetInkPoints_Windows--UI--Composition--InkTrailPoint_.c)
 * Callees:
 *     ?_Reallocate_exactly@?$vector@USuperWetInkBallpointPenPoint@@V?$allocator@USuperWetInkBallpointPenPoint@@@std@@@std@@AEAAX_K@Z @ 0x1800E7468 (-_Reallocate_exactly@-$vector@USuperWetInkBallpointPenPoint@@V-$allocator@USuperWetInkBallpointP.c)
 *     ?_Dwm_Xlength_error@std@@YAXPEBD@Z @ 0x1801004AC (-_Dwm_Xlength_error@std@@YAXPEBD@Z.c)
 */

unsigned __int64 __fastcall std::vector<SuperWetInkBallpointPenPoint>::reserve(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 result; // rax

  result = 0x6DB6DB6DB6DB6DB7LL * ((__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 3);
  if ( a2 > result )
  {
    if ( a2 > 0x492492492492492LL )
      std::_Dwm_Xlength_error((const char *)a1);
    return std::vector<SuperWetInkBallpointPenPoint>::_Reallocate_exactly(a1, a2);
  }
  return result;
}
