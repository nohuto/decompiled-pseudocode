/*
 * XREFs of ??$?0AEBU?$pair@$$CBW4EdgeLocation@Animations@Shell@Internal@Windows@winrt@@V?$vector@W4ShellView@Shell@UI@WindowsUdk@winrt@@V?$allocator@W4ShellView@Shell@UI@WindowsUdk@winrt@@@std@@@std@@@std@@@?$_List_node_emplace_op2@V?$allocator@U?$_List_node@U?$pair@$$CBW4EdgeLocation@Animations@Shell@Internal@Windows@winrt@@V?$vector@W4ShellView@Shell@UI@WindowsUdk@winrt@@V?$allocator@W4ShellView@Shell@UI@WindowsUdk@winrt@@@std@@@std@@@std@@PEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_List_node@U?$pair@$$CBW4EdgeLocation@Animations@Shell@Internal@Windows@winrt@@V?$vector@W4ShellView@Shell@UI@WindowsUdk@winrt@@V?$allocator@W4ShellView@Shell@UI@WindowsUdk@winrt@@@std@@@std@@@std@@PEAX@std@@@1@AEBU?$pair@$$CBW4EdgeLocation@Animations@Shell@Internal@Windows@winrt@@V?$vector@W4ShellView@Shell@UI@WindowsUdk@winrt@@V?$allocator@W4ShellView@Shell@UI@WindowsUdk@winrt@@@std@@@std@@@1@@Z @ 0x180093A3C
 * Callers:
 *     ??$emplace@AEBU?$pair@$$CBW4EdgeLocation@Animations@Shell@Internal@Windows@winrt@@V?$vector@W4ShellView@Shell@UI@WindowsUdk@winrt@@V?$allocator@W4ShellView@Shell@UI@WindowsUdk@winrt@@@std@@@std@@@std@@@?$_Hash@V?$_Umap_traits@W4EdgeLocation@Animations@Shell@Internal@Windows@winrt@@V?$vector@W4ShellView@Shell@UI@WindowsUdk@winrt@@V?$allocator@W4ShellView@Shell@UI@WindowsUdk@winrt@@@std@@@std@@V?$_Uhash_compare@W4EdgeLocation@Animations@Shell@Internal@Windows@winrt@@U?$hash@W4EdgeLocation@Animations@Shell@Internal@Windows@winrt@@@std@@U?$equal_to@W4EdgeLocation@Animations@Shell@Internal@Windows@winrt@@@8@@8@V?$allocator@U?$pair@$$CBW4EdgeLocation@Animations@Shell@Internal@Windows@winrt@@V?$vector@W4ShellView@Shell@UI@WindowsUdk@winrt@@V?$allocator@W4ShellView@Shell@UI@WindowsUdk@winrt@@@std@@@std@@@std@@@8@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBW4EdgeLocation@Animations@Shell@Internal@Windows@winrt@@V?$vector@W4ShellView@Shell@UI@WindowsUdk@winrt@@V?$allocator@W4ShellView@Shell@UI@WindowsUdk@winrt@@@std@@@std@@@std@@@std@@@std@@@std@@_N@1@AEBU?$pair@$$CBW4EdgeLocation@Animations@Shell@Internal@Windows@winrt@@V?$vector@W4ShellView@Shell@UI@WindowsUdk@winrt@@V?$allocator@W4ShellView@Shell@UI@WindowsUdk@winrt@@@std@@@std@@@1@@Z @ 0x18009389C (--$emplace@AEBU-$pair@$$CBW4EdgeLocation@Animations@Shell@Internal@Windows@winrt@@V-$vector@W4Sh.c)
 * Callees:
 *     ??$_Get_size_of_n@$0DA@@std@@YA_K_K@Z @ 0x180093A9C (--$_Get_size_of_n@$0DA@@std@@YA_K_K@Z.c)
 *     ??0?$vector@W4ShellView@Shell@UI@WindowsUdk@winrt@@V?$allocator@W4ShellView@Shell@UI@WindowsUdk@winrt@@@std@@@std@@QEAA@AEBV01@@Z @ 0x180093ACC (--0-$vector@W4ShellView@Shell@UI@WindowsUdk@winrt@@V-$allocator@W4ShellView@Shell@UI@WindowsUdk@.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800C4204 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall std::_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<enum winrt::Windows::Internal::Shell::Animations::EdgeLocation const,std::vector<enum winrt::WindowsUdk::UI::Shell::ShellView>>,void *>>>::_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<enum winrt::Windows::Internal::Shell::Animations::EdgeLocation const,std::vector<enum winrt::WindowsUdk::UI::Shell::ShellView>>,void *>>>(
        _QWORD *a1,
        __int64 a2,
        _DWORD *a3)
{
  __int64 size_of; // rax
  __int64 v6; // rax

  *a1 = a2;
  a1[1] = 0LL;
  a1[1] = 0LL;
  size_of = std::_Get_size_of_n<48>(1LL);
  v6 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  a1[1] = v6;
  *(_DWORD *)(v6 + 16) = *a3;
  std::vector<enum winrt::WindowsUdk::UI::Shell::ShellView>::vector<enum winrt::WindowsUdk::UI::Shell::ShellView>(
    v6 + 24,
    a3 + 2);
  return a1;
}
