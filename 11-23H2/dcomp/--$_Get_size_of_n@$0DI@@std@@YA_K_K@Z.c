/*
 * XREFs of ??$_Get_size_of_n@$0DI@@std@@YA_K_K@Z @ 0x180068C78
 * Callers:
 *     ??$_Emplace_reallocate@AEBUItem@CompositionAnchor@Composition@UI@Windows@@@?$vector@UItem@CompositionAnchor@Composition@UI@Windows@@V?$allocator@UItem@CompositionAnchor@Composition@UI@Windows@@@std@@@std@@QEAAPEAUItem@CompositionAnchor@Composition@UI@Windows@@QEAU23456@AEBU23456@@Z @ 0x180068548 (--$_Emplace_reallocate@AEBUItem@CompositionAnchor@Composition@UI@Windows@@@-$vector@UItem@Compos.c)
 *     ??$_Emplace_reallocate@AEBUSuperWetInkBallpointPenPoint@@@?$vector@USuperWetInkBallpointPenPoint@@V?$allocator@USuperWetInkBallpointPenPoint@@@std@@@std@@QEAAPEAUSuperWetInkBallpointPenPoint@@QEAU2@AEBU2@@Z @ 0x1800E62B0 (--$_Emplace_reallocate@AEBUSuperWetInkBallpointPenPoint@@@-$vector@USuperWetInkBallpointPenPoint.c)
 *     ?_Reallocate_exactly@?$vector@USuperWetInkBallpointPenPoint@@V?$allocator@USuperWetInkBallpointPenPoint@@@std@@@std@@AEAAX_K@Z @ 0x1800E7468 (-_Reallocate_exactly@-$vector@USuperWetInkBallpointPenPoint@@V-$allocator@USuperWetInkBallpointP.c)
 *     ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@VSurfaceBindPoint@Composition@UI@Windows@@V?$allocator@VSurfaceBindPoint@Composition@UI@Windows@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x18017E9C8 (--$_Resize_reallocate@U_Value_init_tag@std@@@-$vector@VSurfaceBindPoint@Composition@UI@Windows@@.c)
 * Callees:
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x1800E5D98 (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 */

__int64 __fastcall std::_Get_size_of_n<56>(unsigned __int64 a1)
{
  if ( a1 > 0x492492492492492LL )
    std::_Throw_bad_array_new_length();
  return 56 * a1;
}
