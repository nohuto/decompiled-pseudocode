/*
 * XREFs of ??1?$_Uninitialized_backout_al@V?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@@std@@QEAA@XZ @ 0x1801BF990
 * Callers:
 *     _std::vector_ContextualProcessorBuffer::ContextualProcessorMetadata_std::allocator_ContextualProcessorBuffer::ContextualProcessorMetadata___::_Emplace_reallocate_ContextualProcessorBuffer::ContextualProcessorMetadata_const_&__::_1_::dtor$0 @ 0x18006F400 (_std--vector_ContextualProcessorBuffer--ContextualProcessorMetadata_std--allocator_ContextualPro.c)
 *     _std::_Uninitialized_move_ContextualProcessorBuffer::ContextualProcessorMetadata___std::allocator_ContextualProcessorBuffer::ContextualProcessorMetadata____::_1_::dtor$0 @ 0x1801BF20C (_std--_Uninitialized_move_ContextualProcessorBuffer--ContextualProcessorMetadata___std--allocato.c)
 * Callees:
 *     <none>
 */

void __fastcall std::_Uninitialized_backout_al<std::allocator<ContextualProcessorBuffer::ContextualProcessorMetadata>>::~_Uninitialized_backout_al<std::allocator<ContextualProcessorBuffer::ContextualProcessorMetadata>>(
        ContextualProcessorBuffer::ContextualProcessorMetadata **a1)
{
  std::_Destroy_range<std::allocator<ContextualProcessorBuffer::ContextualProcessorMetadata>>(*a1, a1[1]);
}
