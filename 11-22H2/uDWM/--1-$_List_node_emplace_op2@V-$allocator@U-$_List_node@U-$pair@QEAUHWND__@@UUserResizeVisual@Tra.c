/*
 * XREFs of ??1?$_List_node_emplace_op2@V?$allocator@U?$_List_node@U?$pair@QEAUHWND__@@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x1800F8FEC
 * Callers:
 *     ??$emplace@PEAUHWND__@@AEBUUserResizeVisual@Transitions@Udwm@winrt@@@?$_Hash@V?$_Umap_traits@PEAUHWND__@@UUserResizeVisual@Transitions@Udwm@winrt@@V?$_Uhash_compare@PEAUHWND__@@U?$hash@PEAUHWND__@@@std@@U?$equal_to@PEAUHWND__@@@3@@std@@V?$allocator@U?$pair@QEAUHWND__@@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@7@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAUHWND__@@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@@std@@@std@@_N@1@$$QEAPEAUHWND__@@AEBUUserResizeVisual@Transitions@Udwm@winrt@@@Z @ 0x1800F8C88 (--$emplace@PEAUHWND__@@AEBUUserResizeVisual@Transitions@Udwm@winrt@@@-$_Hash@V-$_Umap_traits@PEA.c)
 *     _std::_Hash_std::_Umap_traits_HWND_____winrt::Udwm::Transitions::UserResizeVisual_std::_Uhash_compare_HWND_____std::hash_HWND______std::equal_to_HWND________std::allocator_std::pair_HWND_____const_winrt::Udwm::Transitions::UserResizeVisual____0___::emplace_HWND_____winrt::Udwm::Transitions::UserResizeVisual_const_&__::_1_::dtor$0 @ 0x1800F8DF1 (_std--_Hash_std--_Umap_traits_HWND_____winrt--Udwm--Transitions--UserResizeVisual_s_ea_1800F8DF1.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800558D4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??_G?$pair@QEAUHWND__@@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@QEAAPEAXI@Z @ 0x1800F9454 (--_G-$pair@QEAUHWND__@@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@QEAAPEAXI@Z.c)
 */

__int64 __fastcall std::_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<HWND__ * const,winrt::Udwm::Transitions::UserResizeVisual>,void *>>>::~_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<HWND__ * const,winrt::Udwm::Transitions::UserResizeVisual>,void *>>>(
        __int64 a1)
{
  __int64 v2; // rcx
  __int64 result; // rax
  void *v4; // rcx

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
    result = std::pair<HWND__ * const,winrt::Udwm::Transitions::UserResizeVisual>::`scalar deleting destructor'(v2 + 16);
  v4 = *(void **)(a1 + 8);
  if ( v4 )
    return std::_Deallocate<16,0>(v4, 0x20uLL);
  return result;
}
