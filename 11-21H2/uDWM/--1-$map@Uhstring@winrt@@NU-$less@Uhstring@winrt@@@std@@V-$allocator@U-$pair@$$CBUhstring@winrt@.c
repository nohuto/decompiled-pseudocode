/*
 * XREFs of ??1?$map@Uhstring@winrt@@NU?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@N@std@@@4@@std@@QEAA@XZ @ 0x1800F97D0
 * Callers:
 *     _std::map_winrt::hstring_double_std::less_winrt::hstring__std::allocator_std::pair_winrt::hstring_const__double_____::map_winrt::hstring_double_std::less_winrt::hstring__std::allocator_std::pair_winrt::hstring_const__double______::_1_::dtor$0 @ 0x1800F962C (_std--map_winrt--hstring_double_std--less_winrt--hstring__std--allocator_std--pair_winrt--hstrin.c)
 *     _winrt::Udwm::Transitions::implementation::TransitionManager::SkipAnimationDelays_::_1_::dtor$4 @ 0x1800FB191 (_winrt--Udwm--Transitions--implementation--TransitionManager--SkipAnimationDelays_--_1_--dtor$4.c)
 *     _winrt::Udwm::Transitions::implementation::TransitionManager::UpdateAngle_::_1_::dtor$5 @ 0x1800FB47D (_winrt--Udwm--Transitions--implementation--TransitionManager--UpdateAngle_--_1_--dtor$5.c)
 *     _winrt::Udwm::Transitions::implementation::TransitionManager::UpdateRect_::_1_::dtor$6 @ 0x1800FB799 (_winrt--Udwm--Transitions--implementation--TransitionManager--UpdateRect_--_1_--dtor$6.c)
 * Callees:
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CBUhstring@winrt@@N@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUhstring@winrt@@N@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBUhstring@winrt@@N@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBUhstring@winrt@@N@std@@PEAX@1@@Z @ 0x1800F8C88 (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CBUhstring@winrt@@N@std@@PEAX@std@@@std@@@-$.c)
 */

__int64 __fastcall std::map<winrt::hstring,double>::~map<winrt::hstring,double>(void **a1)
{
  std::_Tree_val<std::_Tree_simple_types<std::pair<winrt::hstring const,double>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<winrt::hstring const,double>,void *>>>(
    (__int64)a1,
    (__int64)a1,
    *((_QWORD *)*a1 + 1));
  return std::_Deallocate<16,0>(*a1, 0x30uLL);
}
