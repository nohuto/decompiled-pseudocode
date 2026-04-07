/*
 * XREFs of ??1?$_Alloc_construct_ptr@V?$allocator@U?$_List_node@U?$pair@$$CBW4ShellTransition@Transitions@Udwm@winrt@@UITransitionHandler@234@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x1800F977C
 * Callers:
 *     _CWindowBorder::CCachedBorderBrush::GetBorderBrush_::_1_::dtor$45 @ 0x180065406 (_CWindowBorder--CCachedBorderBrush--GetBorderBrush_--_1_--dtor$45.c)
 *     _std::_List_node_emplace_op2_std::allocator_std::_List_node_std::weak_ptr_CWindowBorder::CCachedBorderBrush__void_______::_List_node_emplace_op2_std::allocator_std::_List_node_std::weak_ptr_CWindowBorder::CCachedBorderBrush__void________std::shared_ptr_CWindowBorder::CCachedBorderBrush__&__::_1_::dtor$0 @ 0x180065418 (_std--_List_node_emplace_op2_std--allocator_std--_List_node_std--weak_ptr_CWindowBorder--CCached.c)
 *     _std::_Hash_std::_Umap_traits_enum_winrt::Udwm::Transitions::ShellTransition_winrt::Udwm::Transitions::ITransitionHandler_std::_Uhash_compare_enum_winrt::Udwm::Transitions::ShellTransition_std::hash_enum_winrt::Udwm::Transitions::ShellTransition__std::equal_to_enum_winrt::Udwm::Transitions::ShellTransition____std::allocator_std::pair_enum_winrt::Udwm::Transitions::ShellTransition_const__winrt::Udwm::Transitions::ITransitionHandler____0___::_Try_emplace_enum_winrt::Udwm::Transitions::ShellTransition_const_&__::_1_::dtor$5 @ 0x1800661E4 (_std--_Hash_std--_Umap_traits_enum_winrt--Udwm--Transitions--ShellTransition_winrt-_ea_1800661E4.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000FF20 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

__int64 __fastcall std::_Alloc_construct_ptr<std::allocator<std::_List_node<std::pair<enum winrt::Udwm::Transitions::ShellTransition const,winrt::Udwm::Transitions::ITransitionHandler>,void *>>>::~_Alloc_construct_ptr<std::allocator<std::_List_node<std::pair<enum winrt::Udwm::Transitions::ShellTransition const,winrt::Udwm::Transitions::ITransitionHandler>,void *>>>(
        __int64 a1)
{
  void *v1; // rcx
  __int64 result; // rax

  v1 = *(void **)(a1 + 8);
  if ( v1 )
    return std::_Deallocate<16,0>(v1, 0x20uLL);
  return result;
}
