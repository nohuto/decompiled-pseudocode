/*
 * XREFs of ??1?$map@W4BackgroundIdentifier@Themes@UI@Internal@Windows@winrt@@_KU?$less@W4BackgroundIdentifier@Themes@UI@Internal@Windows@winrt@@@std@@V?$allocator@U?$pair@$$CBW4BackgroundIdentifier@Themes@UI@Internal@Windows@winrt@@_K@std@@@8@@std@@QEAA@XZ @ 0x1806E1A78
 * Callers:
 *     _winrt::Windows::Internal::UI::Themes::implementation::ThemeCoordinator::ThemeCoordinator_::_1_::dtor$6 @ 0x1802B488F (_winrt--Windows--Internal--UI--Themes--implementation--ThemeCoordinator--ThemeCoord_ea_1802B488F.c)
 * Callees:
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CBW4BackgroundIdentifier@Themes@UI@Internal@Windows@winrt@@_K@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBW4BackgroundIdentifier@Themes@UI@Internal@Windows@winrt@@_K@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBW4BackgroundIdentifier@Themes@UI@Internal@Windows@winrt@@_K@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBW4BackgroundIdentifier@Themes@UI@Internal@Windows@winrt@@_K@std@@PEAX@1@@Z @ 0x180129074 (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CBW4BackgroundIdentifier@Themes@UI@Internal@.c)
 */

void __fastcall std::map<enum winrt::Windows::Internal::UI::Themes::BackgroundIdentifier,unsigned __int64>::~map<enum winrt::Windows::Internal::UI::Themes::BackgroundIdentifier,unsigned __int64>(
        void **a1)
{
  std::_Tree_val<std::_Tree_simple_types<std::pair<enum winrt::Windows::Internal::UI::Themes::BackgroundIdentifier const,unsigned __int64>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<enum winrt::Windows::Internal::UI::Themes::BackgroundIdentifier const,unsigned __int64>,void *>>>(
    (__int64)a1,
    (__int64)a1,
    *((__int64 **)*a1 + 1));
  std::_Deallocate<16,0>(*a1, 0x30uLL);
}
