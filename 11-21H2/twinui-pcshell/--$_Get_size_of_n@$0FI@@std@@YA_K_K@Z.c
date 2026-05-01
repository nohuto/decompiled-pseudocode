/*
 * XREFs of ??$_Get_size_of_n@$0FI@@std@@YA_K_K@Z @ 0x180106F2C
 * Callers:
 *     ??$_Emplace_reallocate@USecondaryViewInfo@JointResize@@@?$vector@USecondaryViewInfo@JointResize@@V?$allocator@USecondaryViewInfo@JointResize@@@std@@@std@@QEAAPEAUSecondaryViewInfo@JointResize@@QEAU23@$$QEAU23@@Z @ 0x18052787C (--$_Emplace_reallocate@USecondaryViewInfo@JointResize@@@-$vector@USecondaryViewInfo@JointResize@.c)
 * Callees:
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x1802EBA80 (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 */

__int64 __fastcall std::_Get_size_of_n<88>(unsigned __int64 a1)
{
  if ( a1 > 0x2E8BA2E8BA2E8BALL )
    std::_Throw_bad_array_new_length();
  return 88 * a1;
}
