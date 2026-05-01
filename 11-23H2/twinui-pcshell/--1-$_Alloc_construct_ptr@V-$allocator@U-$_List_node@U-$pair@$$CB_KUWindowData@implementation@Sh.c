/*
 * XREFs of ??1?$_Alloc_construct_ptr@V?$allocator@U?$_List_node@U?$pair@$$CB_KUWindowData@implementation@Shell@Internal@Windows@winrt@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x180636684
 * Callers:
 *     _std::_List_node_emplace_op2_std::allocator_std::_List_node_std::pair_unsigned___int64_const__winrt::Windows::Internal::Shell::implementation::WindowData__void_______::_List_node_emplace_op2_std::allocator_std::_List_node_std::pair_unsigned___int64_const__winrt::Windows::Internal::Shell::implementation::WindowData__void________std::piecewise_construct_t_const_&_std::tuple_unsigned___int64_const_&__std::tuple_winrt::com_ptr_winrt::Windows::Internal::Shell::implementation::TabProxyWindowFactory__&_winrt::Windows::Internal::UI::Shell::WindowTabDataModel_&_winrt::event_token_&_winrt::event_token_&____::_1_::dtor$0 @ 0x1802BE64F (_std--_List_node_emplace_op2_std--allocator_std--_List_node_std--pair_unsigned___int64_const__wi.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180168F3C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::_Alloc_construct_ptr<std::allocator<std::_List_node<std::pair<unsigned __int64 const,winrt::Windows::Internal::Shell::implementation::WindowData>,void *>>>::~_Alloc_construct_ptr<std::allocator<std::_List_node<std::pair<unsigned __int64 const,winrt::Windows::Internal::Shell::implementation::WindowData>,void *>>>(
        __int64 a1)
{
  void *v1; // rcx

  v1 = *(void **)(a1 + 8);
  if ( v1 )
    std::_Deallocate<16,0>(v1, 0xF0uLL);
}
