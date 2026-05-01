/*
 * XREFs of ??1?$list@U?$pair@$$CBUhstring@winrt@@USnapLaunchData@CShellSnapComponent@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@USnapLaunchData@CShellSnapComponent@@@std@@@2@@std@@QEAA@XZ @ 0x1802218D4
 * Callers:
 *     _std::_Hash_std::_Umap_traits_winrt::hstring_CShellSnapComponent::SnapLaunchData_std::_Uhash_compare_winrt::hstring_std::hash_winrt::hstring__std::equal_to_winrt::hstring____std::allocator_std::pair_winrt::hstring_const__CShellSnapComponent::SnapLaunchData____0___::_Hash_std::_Umap_traits_winrt::hstring_CShellSnapComponent::SnapLaunchData_std::_Uhash_compare_winrt::hstring_std::hash_winrt::hstring__std::equal_to_winrt::hstring____std::allocator_std::pair_winrt::hstring_const__CShellSnapComponent::SnapLaunchData____0____::_1_::dtor$0 @ 0x1802213FD (_std--_Hash_std--_Umap_traits_winrt--hstring_CShellSnapComponent--SnapLaunchData_st_ea_1802213FD.c)
 * Callees:
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBUhstring@winrt@@USnapLaunchData@CShellSnapComponent@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBUhstring@winrt@@USnapLaunchData@CShellSnapComponent@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBUhstring@winrt@@USnapLaunchData@CShellSnapComponent@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1802205F8 (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CBUhstring@winrt@@USnapLaunchData@CShellS.c)
 */

void __fastcall std::list<std::pair<winrt::hstring const,CShellSnapComponent::SnapLaunchData>>::~list<std::pair<winrt::hstring const,CShellSnapComponent::SnapLaunchData>>(
        __int64 *a1)
{
  std::_List_node<std::pair<winrt::hstring const,CShellSnapComponent::SnapLaunchData>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<winrt::hstring const,CShellSnapComponent::SnapLaunchData>,void *>>>(
    (__int64)a1,
    *a1);
  std::_Deallocate<16,0>((void *)*a1, 0x30uLL);
}
