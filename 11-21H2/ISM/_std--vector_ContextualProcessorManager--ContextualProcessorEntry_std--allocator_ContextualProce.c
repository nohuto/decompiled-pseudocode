/*
 * XREFs of _std::vector_ContextualProcessorManager::ContextualProcessorEntry_std::allocator_ContextualProcessorManager::ContextualProcessorEntry___::_Emplace_reallocate_ContextualProcessorManager::ContextualProcessorEntry__::_1_::catch$5 @ 0x180056310
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000E6AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _CxxThrowException_0 @ 0x18004AFCA (_CxxThrowException_0.c)
 *     ??$_Destroy_range@V?$allocator@UContextualProcessorEntry@ContextualProcessorManager@@@std@@@std@@YAXPEAUContextualProcessorEntry@ContextualProcessorManager@@QEAU12@AEAV?$allocator@UContextualProcessorEntry@ContextualProcessorManager@@@0@@Z @ 0x18019FC10 (--$_Destroy_range@V-$allocator@UContextualProcessorEntry@ContextualProcessorManager@@@std@@@std@.c)
 */

void __fastcall __noreturn std::vector_ContextualProcessorManager::ContextualProcessorEntry_std::allocator_ContextualProcessorManager::ContextualProcessorEntry___::_Emplace_reallocate_ContextualProcessorManager::ContextualProcessorEntry__::_1_::catch_5(
        __int64 a1,
        __int64 a2)
{
  std::_Destroy_range<std::allocator<ContextualProcessorManager::ContextualProcessorEntry>>(
    *(_QWORD *)(a2 + 40),
    *(_QWORD *)(a2 + 56));
  std::_Deallocate<16,0>(*(void **)(a2 + 152), 16LL * *(_QWORD *)(a2 + 128));
  throw;
}
