/*
 * XREFs of ??1?$_Alloc_construct_ptr@V?$allocator@U?$_List_node@U?$pair@QEAUHWND__@@V?$com_ptr_t@VCBitmapSource@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x1800F8FC8
 * Callers:
 *     _CWindowBorder::CCachedBorderBrush::GetBorderBrush_::_1_::dtor$57 @ 0x1800674D2 (_CWindowBorder--CCachedBorderBrush--GetBorderBrush_--_1_--dtor$57.c)
 *     _std::_List_node_emplace_op2_std::allocator_std::_List_node_std::weak_ptr_CWindowBorder::CCachedBorderBrush__void_______::_List_node_emplace_op2_std::allocator_std::_List_node_std::weak_ptr_CWindowBorder::CCachedBorderBrush__void________std::shared_ptr_CWindowBorder::CCachedBorderBrush__&__::_1_::dtor$0 @ 0x1800674E4 (_std--_List_node_emplace_op2_std--allocator_std--_List_node_std--weak_ptr_CWindowBorder--CCached.c)
 *     _std::_Hash_std::_Umap_traits_enum_winrt::Udwm::Transitions::ShellTransition_winrt::Udwm::Transitions::ITransitionHandler_std::_Uhash_compare_enum_winrt::Udwm::Transitions::ShellTransition_std::hash_enum_winrt::Udwm::Transitions::ShellTransition__std::equal_to_enum_winrt::Udwm::Transitions::ShellTransition____std::allocator_std::pair_enum_winrt::Udwm::Transitions::ShellTransition_const__winrt::Udwm::Transitions::ITransitionHandler____0___::_Try_emplace_enum_winrt::Udwm::Transitions::ShellTransition_const_&__::_1_::dtor$5 @ 0x180067EE2 (_std--_Hash_std--_Umap_traits_enum_winrt--Udwm--Transitions--ShellTransition_winrt-_ea_180067EE2.c)
 *     _std::_List_node_emplace_op2_std::allocator_std::_List_node_std::pair_HWND_____const_winrt::Udwm::Transitions::UserResizeVisual__void_______::_List_node_emplace_op2_std::allocator_std::_List_node_std::pair_HWND_____const_winrt::Udwm::Transitions::UserResizeVisual__void________HWND_____winrt::Udwm::Transitions::UserResizeVisual_const_&__::_1_::dtor$0 @ 0x1800F8983 (_std--_List_node_emplace_op2_std--allocator_std--_List_node_std--pair_HWND_____const_winrt--Udwm.c)
 *     _std::_Hash_std::_Umap_traits_HWND_____wil::com_ptr_t_CBitmapSource_wil::err_returncode_policy__std::_Uhash_compare_HWND_____std::hash_HWND______std::equal_to_HWND________std::allocator_std::pair_HWND_____const_wil::com_ptr_t_CBitmapSource_wil::err_returncode_policy______0___::_Try_emplace_HWND_____const_&__::_1_::dtor$5 @ 0x1800F8C02 (_std--_Hash_std--_Umap_traits_HWND_____wil--com_ptr_t_CBitmapSource_wil--err_returncode_policy__.c)
 *     _std::_Hash_std::_Umap_traits_HWND_____winrt::Udwm::Transitions::ITransitionHandler_std::_Uhash_compare_HWND_____std::hash_HWND______std::equal_to_HWND________std::allocator_std::pair_HWND_____const_winrt::Udwm::Transitions::ITransitionHandler____0___::_Try_emplace_HWND_____const_&__::_1_::dtor$5 @ 0x1800FC3C2 (_std--_Hash_std--_Umap_traits_HWND_____winrt--Udwm--Transitions--ITransitionHandler_ea_1800FC3C2.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800558D4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

__int64 __fastcall std::_Alloc_construct_ptr<std::allocator<std::_List_node<std::pair<HWND__ * const,wil::com_ptr_t<CBitmapSource,wil::err_returncode_policy>>,void *>>>::~_Alloc_construct_ptr<std::allocator<std::_List_node<std::pair<HWND__ * const,wil::com_ptr_t<CBitmapSource,wil::err_returncode_policy>>,void *>>>(
        __int64 a1)
{
  void *v1; // rcx
  __int64 result; // rax

  v1 = *(void **)(a1 + 8);
  if ( v1 )
    return std::_Deallocate<16,0>(v1, 0x20uLL);
  return result;
}
