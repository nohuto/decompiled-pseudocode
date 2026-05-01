/*
 * XREFs of ??$_Uninitialized_move@PEAUCRect@Geometry@@V?$allocator@UCRect@Geometry@@@std@@@std@@YAPEAUCRect@Geometry@@QEAU12@0PEAU12@AEAV?$allocator@UCRect@Geometry@@@0@@Z @ 0x1805A1274
 * Callers:
 *     ??$_Emplace_reallocate@AEBUCRect@Geometry@@@?$vector@UCRect@Geometry@@V?$allocator@UCRect@Geometry@@@std@@@std@@QEAAPEAUCRect@Geometry@@QEAU23@AEBU23@@Z @ 0x1805A107C (--$_Emplace_reallocate@AEBUCRect@Geometry@@@-$vector@UCRect@Geometry@@V-$allocator@UCRect@Geomet.c)
 *     ??$_Emplace_reallocate@UCRect@Geometry@@@?$vector@UCRect@Geometry@@V?$allocator@UCRect@Geometry@@@std@@@std@@QEAAPEAUCRect@Geometry@@QEAU23@$$QEAU23@@Z @ 0x1805A1178 (--$_Emplace_reallocate@UCRect@Geometry@@@-$vector@UCRect@Geometry@@V-$allocator@UCRect@Geometry@.c)
 *     ?_Reallocate_exactly@?$vector@UCRect@Geometry@@V?$allocator@UCRect@Geometry@@@std@@@std@@AEAAX_K@Z @ 0x1805A7708 (-_Reallocate_exactly@-$vector@UCRect@Geometry@@V-$allocator@UCRect@Geometry@@@std@@@std@@AEAAX_K.c)
 * Callees:
 *     <none>
 */

_OWORD *__fastcall std::_Uninitialized_move<Geometry::CRect *>(_OWORD *a1, _OWORD *a2, _OWORD *a3)
{
  while ( a1 != a2 )
    *a3++ = *a1++;
  return a3;
}
