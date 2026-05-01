/*
 * XREFs of ??$_Get_size_of_n@$0GA@@std@@YA_K_K@Z @ 0x1800A9E2C
 * Callers:
 *     ??$_Emplace_reallocate@USecondaryViewInfo@JointResize@@@?$vector@USecondaryViewInfo@JointResize@@V?$allocator@USecondaryViewInfo@JointResize@@@std@@@std@@QEAAPEAUSecondaryViewInfo@JointResize@@QEAU23@$$QEAU23@@Z @ 0x1805E06E0 (--$_Emplace_reallocate@USecondaryViewInfo@JointResize@@@-$vector@USecondaryViewInfo@JointResize@.c)
 * Callees:
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x1803920F4 (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 */

__int64 __fastcall std::_Get_size_of_n<96>(unsigned __int64 a1)
{
  if ( a1 > 0x2AAAAAAAAAAAAAALL )
    std::_Throw_bad_array_new_length();
  return 96 * a1;
}
