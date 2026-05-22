/*
 * XREFs of ?at@?$vector@USuperWetInkBallpointPenPoint@@V?$allocator@USuperWetInkBallpointPenPoint@@@std@@@std@@QEAAAEAUSuperWetInkBallpointPenPoint@@_K@Z @ 0x1800E74F0
 * Callers:
 *     ?AddTrailPointsPrivate@CDelegatedInkTrailImpl@DirectComposition@@AEAAJPEAV?$vector@USuperWetInkBallpointPenPoint@@V?$allocator@USuperWetInkBallpointPenPoint@@@std@@@std@@0PEAI@Z @ 0x1800E66B4 (-AddTrailPointsPrivate@CDelegatedInkTrailImpl@DirectComposition@@AEAAJPEAV-$vector@USuperWetInkB.c)
 * Callees:
 *     ?_Dwm_Xlength_error@std@@YAXPEBD@Z @ 0x1801004AC (-_Dwm_Xlength_error@std@@YAXPEBD@Z.c)
 */

__int64 __fastcall std::vector<SuperWetInkBallpointPenPoint>::at(__int64 a1)
{
  if ( *(_QWORD *)(a1 + 8) == *(_QWORD *)a1 )
    std::_Dwm_Xlength_error((const char *)a1);
  return *(_QWORD *)a1;
}
