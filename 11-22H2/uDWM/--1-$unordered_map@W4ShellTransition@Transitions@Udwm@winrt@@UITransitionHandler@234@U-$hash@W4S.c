/*
 * XREFs of ??1?$unordered_map@W4ShellTransition@Transitions@Udwm@winrt@@UITransitionHandler@234@U?$hash@W4ShellTransition@Transitions@Udwm@winrt@@@std@@U?$equal_to@W4ShellTransition@Transitions@Udwm@winrt@@@7@V?$allocator@U?$pair@$$CBW4ShellTransition@Transitions@Udwm@winrt@@UITransitionHandler@234@@std@@@7@@std@@QEAA@XZ @ 0x1800FCD4C
 * Callers:
 *     _winrt::Udwm::Transitions::implementation::TransitionManager::TransitionManager_::_1_::dtor$1 @ 0x180068568 (_winrt--Udwm--Transitions--implementation--TransitionManager--TransitionManager_--_1_--dtor$1.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800558D4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@QEAUHWND__@@UITransitionHandler@Transitions@Udwm@winrt@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@QEAUHWND__@@UITransitionHandler@Transitions@Udwm@winrt@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@QEAUHWND__@@UITransitionHandler@Transitions@Udwm@winrt@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1800FC180 (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@QEAUHWND__@@UITransitionHandler@Transitions.c)
 */

__int64 __fastcall std::unordered_map<enum winrt::Udwm::Transitions::ShellTransition,winrt::Udwm::Transitions::ITransitionHandler>::~unordered_map<enum winrt::Udwm::Transitions::ShellTransition,winrt::Udwm::Transitions::ITransitionHandler>(
        __int64 a1)
{
  __int64 v2; // rcx

  std::_Deallocate<16,0>(*(void **)(a1 + 24), (*(_QWORD *)(a1 + 32) - *(_QWORD *)(a1 + 24)) & 0xFFFFFFFFFFFFFFF8uLL);
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  std::_List_node<std::pair<HWND__ * const,winrt::Udwm::Transitions::ITransitionHandler>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<HWND__ * const,winrt::Udwm::Transitions::ITransitionHandler>,void *>>>(
    v2,
    *(_QWORD *)(a1 + 8));
  return std::_Deallocate<16,0>(*(void **)(a1 + 8), 0x20uLL);
}
