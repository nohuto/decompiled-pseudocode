/*
 * XREFs of ??1?$_Uninitialized_backout_al@V?$allocator@UParsedTaskbarLayout@@@std@@@std@@QEAA@XZ @ 0x18031B2AC
 * Callers:
 *     _std::_Uninitialized_move_ParsedTaskbarLayout___std::allocator_ParsedTaskbarLayout____::_1_::dtor$0 @ 0x18031AFF6 (_std--_Uninitialized_move_ParsedTaskbarLayout___std--allocator_ParsedTaskbarLayout____--_1_--dto.c)
 * Callees:
 *     <none>
 */

void __fastcall std::_Uninitialized_backout_al<std::allocator<ParsedTaskbarLayout>>::~_Uninitialized_backout_al<std::allocator<ParsedTaskbarLayout>>(
        __int64 *a1)
{
  std::_Destroy_range<std::allocator<ParsedTaskbarLayout>>(*a1, a1[1]);
}
