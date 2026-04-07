/*
 * XREFs of ??1?$list@U?$pair@$$CBW4ShellTransition@Transitions@Udwm@winrt@@UITransitionHandler@234@@std@@V?$allocator@U?$pair@$$CBW4ShellTransition@Transitions@Udwm@winrt@@UITransitionHandler@234@@std@@@2@@std@@QEAA@XZ @ 0x1800FCCE0
 * Callers:
 *     _winrt::Udwm::Transitions::implementation::TransitionManager::TransitionManager_::_1_::dtor$45 @ 0x18006857E (_winrt--Udwm--Transitions--implementation--TransitionManager--TransitionManager_--_1_--dtor$45.c)
 *     _std::_Hash_std::_Umap_traits_HWND_____winrt::Udwm::Transitions::ITransitionHandler_std::_Uhash_compare_HWND_____std::hash_HWND______std::equal_to_HWND________std::allocator_std::pair_HWND_____const_winrt::Udwm::Transitions::ITransitionHandler____0___::_Hash_std::_Umap_traits_HWND_____winrt::Udwm::Transitions::ITransitionHandler_std::_Uhash_compare_HWND_____std::hash_HWND______std::equal_to_HWND________std::allocator_std::pair_HWND_____const_winrt::Udwm::Transitions::ITransitionHandler____0____::_1_::dtor$0 @ 0x180068614 (_std--_Hash_std--_Umap_traits_HWND_____winrt--Udwm--Transitions--ITransitionHandler_std--_Uhash_.c)
 * Callees:
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@QEAUHWND__@@UITransitionHandler@Transitions@Udwm@winrt@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@QEAUHWND__@@UITransitionHandler@Transitions@Udwm@winrt@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@QEAUHWND__@@UITransitionHandler@Transitions@Udwm@winrt@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1800FC180 (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@QEAUHWND__@@UITransitionHandler@Transitions.c)
 */

__int64 __fastcall std::list<std::pair<enum winrt::Udwm::Transitions::ShellTransition const,winrt::Udwm::Transitions::ITransitionHandler>>::~list<std::pair<enum winrt::Udwm::Transitions::ShellTransition const,winrt::Udwm::Transitions::ITransitionHandler>>(
        __int64 *a1)
{
  std::_List_node<std::pair<HWND__ * const,winrt::Udwm::Transitions::ITransitionHandler>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<HWND__ * const,winrt::Udwm::Transitions::ITransitionHandler>,void *>>>(
    (__int64)a1,
    *a1);
  return std::_Deallocate<16,0>((void *)*a1, 0x20uLL);
}
