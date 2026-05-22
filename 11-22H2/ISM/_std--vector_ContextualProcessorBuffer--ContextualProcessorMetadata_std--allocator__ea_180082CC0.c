/*
 * XREFs of _std::vector_ContextualProcessorBuffer::ContextualProcessorMetadata_std::allocator_ContextualProcessorBuffer::ContextualProcessorMetadata___::_Emplace_reallocate_ContextualProcessorBuffer::ContextualProcessorMetadata_const_&__::_1_::catch$95 @ 0x180082CC0
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001A954 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _CxxThrowException_0 @ 0x180057B56 (_CxxThrowException_0.c)
 *     ??$_Destroy_range@V?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@@std@@YAXPEAUContextualProcessorMetadata@ContextualProcessorBuffer@@QEAU12@AEAV?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@0@@Z @ 0x1801CC330 (--$_Destroy_range@V-$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@@st.c)
 */

void __fastcall __noreturn std::vector_ContextualProcessorBuffer::ContextualProcessorMetadata_std::allocator_ContextualProcessorBuffer::ContextualProcessorMetadata___::_Emplace_reallocate_ContextualProcessorBuffer::ContextualProcessorMetadata_const____::_1_::catch_95(
        __int64 a1,
        __int64 a2)
{
  std::_Destroy_range<std::allocator<ContextualProcessorBuffer::ContextualProcessorMetadata>>(*(ContextualProcessorBuffer::ContextualProcessorMetadata **)(a2 + 248));
  std::_Deallocate<16,0>(*(void **)(a2 + 32), 224LL * *(_QWORD *)(a2 + 264));
  throw;
}
