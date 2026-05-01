/*
 * XREFs of ??1?$_Uninitialized_backout_al@V?$allocator@UParsedPenWorkspaceLayout@@@std@@@std@@QEAA@XZ @ 0x1803BD340
 * Callers:
 *     _std::_Uninitialized_move_ParsedPenWorkspaceLayout___std::allocator_ParsedPenWorkspaceLayout____::_1_::dtor$0 @ 0x1803BD25A (_std--_Uninitialized_move_ParsedPenWorkspaceLayout___std--allocator_ParsedPenWorkspaceLayout____.c)
 * Callees:
 *     <none>
 */

void __fastcall std::_Uninitialized_backout_al<std::allocator<ParsedPenWorkspaceLayout>>::~_Uninitialized_backout_al<std::allocator<ParsedPenWorkspaceLayout>>(
        __int64 *a1)
{
  std::_Destroy_range<std::allocator<ParsedPenWorkspaceLayout>>(*a1, a1[1]);
}
