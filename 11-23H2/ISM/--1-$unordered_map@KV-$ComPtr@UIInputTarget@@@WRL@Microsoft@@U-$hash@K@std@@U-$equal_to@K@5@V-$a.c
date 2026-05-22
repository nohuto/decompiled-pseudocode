/*
 * XREFs of ??1?$unordered_map@KV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@U?$hash@K@std@@U?$equal_to@K@5@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@5@@std@@QEAA@XZ @ 0x1800F8178
 * Callers:
 *     _ContextualProcessorBuffer::EventStreamEndedAndProcessFinalDecision_::_1_::dtor$4 @ 0x180063B15 (_ContextualProcessorBuffer--EventStreamEndedAndProcessFinalDecision_--_1_--dtor$4.c)
 *     _Win32kInterop::DoConvergedHitTestCallback_::_1_::dtor$10 @ 0x18006BA20 (_Win32kInterop--DoConvergedHitTestCallback_--_1_--dtor$10.c)
 *     _InputContext::InputContext_::_1_::dtor$2 @ 0x1800F7A6E (_InputContext--InputContext_--_1_--dtor$2.c)
 *     _std::vector_ContextualProcessorBuffer::InputSample_std::allocator_ContextualProcessorBuffer::InputSample___::_Emplace_reallocate_ContextualProcessorBuffer::InputSample__::_1_::dtor$1 @ 0x1801BECFC (_std--vector_ContextualProcessorBuffer--InputSample_std--allocator_ContextualProces_ea_1801BECFC.c)
 *     _std::vector_ContextualProcessorBuffer::InputSample_std::allocator_ContextualProcessorBuffer::InputSample___::_Emplace_reallocate_ContextualProcessorBuffer::InputSample__::_1_::dtor$2 @ 0x1801BED0C (_std--vector_ContextualProcessorBuffer--InputSample_std--allocator_ContextualProces_ea_1801BED0C.c)
 *     _std::_Uninitialized_move_ContextualProcessorBuffer::InputSample___std::allocator_ContextualProcessorBuffer::InputSample____::_1_::dtor$2 @ 0x1801BF2E4 (_std--_Uninitialized_move_ContextualProcessorBuffer--InputSample___std--allocator_C_ea_1801BF2E4.c)
 *     _std::_Uninitialized_move_ContextualProcessorBuffer::InputSample___std::allocator_ContextualProcessorBuffer::InputSample____::_1_::dtor$3 @ 0x1801BF2F4 (_std--_Uninitialized_move_ContextualProcessorBuffer--InputSample___std--allocator_C_ea_1801BF2F4.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1800569E0 (--3@YAXPEAX_K@Z.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x180096C5C (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CB_KV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CB_KV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CB_KV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1800F70DC (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CB_KV-$ComPtr@UIInputTarget@@@WRL@Microso.c)
 */

void __fastcall std::unordered_map<unsigned long,Microsoft::WRL::ComPtr<IInputTarget>>::~unordered_map<unsigned long,Microsoft::WRL::ComPtr<IInputTarget>>(
        __int64 a1)
{
  void *v2; // rcx
  __int64 v3; // rcx
  unsigned __int64 v4; // [rsp+30h] [rbp+8h] BYREF
  void *v5; // [rsp+38h] [rbp+10h] BYREF

  v2 = *(void **)(a1 + 24);
  v5 = v2;
  v4 = (*(_QWORD *)(a1 + 32) - (_QWORD)v2) & 0xFFFFFFFFFFFFFFF8uLL;
  if ( v4 >= 0x1000 )
  {
    std::_Adjust_manually_vector_aligned(&v5, &v4);
    v2 = v5;
  }
  operator delete(v2);
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  std::_List_node<std::pair<unsigned __int64 const,Microsoft::WRL::ComPtr<IInputTarget>>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<unsigned __int64 const,Microsoft::WRL::ComPtr<IInputTarget>>,void *>>>(
    v3,
    *(_QWORD ***)(a1 + 8));
  std::_Deallocate<16,0>(*(void **)(a1 + 8), 0x20uLL);
}
