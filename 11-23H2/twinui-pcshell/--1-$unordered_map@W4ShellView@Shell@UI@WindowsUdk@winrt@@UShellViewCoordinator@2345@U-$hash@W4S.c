/*
 * XREFs of ??1?$unordered_map@W4ShellView@Shell@UI@WindowsUdk@winrt@@UShellViewCoordinator@2345@U?$hash@W4ShellView@Shell@UI@WindowsUdk@winrt@@@std@@U?$equal_to@W4ShellView@Shell@UI@WindowsUdk@winrt@@@8@V?$allocator@U?$pair@$$CBW4ShellView@Shell@UI@WindowsUdk@winrt@@UShellViewCoordinator@2345@@std@@@8@@std@@QEAA@XZ @ 0x18064C918
 * Callers:
 *     _TouchEdgeGestureManager::TouchEdgeGestureManager_::_1_::dtor$17 @ 0x1802B66C6 (_TouchEdgeGestureManager--TouchEdgeGestureManager_--_1_--dtor$17.c)
 *     _winrt::Windows::Internal::Shell::Animations::implementation::EdgeAnimationRelationshipManager::EdgeAnimationRelationshipManager_::_1_::dtor$11 @ 0x1802B68E0 (_winrt--Windows--Internal--Shell--Animations--implementation--EdgeAnimationRelation_ea_1802B68E0.c)
 *     _winrt::Windows::Internal::Shell::Animations::implementation::EdgeAnimationRelationshipManager::Create_::_1_::dtor$11 @ 0x1802B6AAD (_winrt--Windows--Internal--Shell--Animations--implementation--EdgeAnimationRelation_ea_1802B6AAD.c)
 *     _std::unordered_map_enum_winrt::WindowsUdk::UI::Shell::ShellView_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator_std::hash_enum_winrt::WindowsUdk::UI::Shell::ShellView__std::equal_to_enum_winrt::WindowsUdk::UI::Shell::ShellView__std::allocator_std::pair_enum_winrt::WindowsUdk::UI::Shell::ShellView_const__winrt::WindowsUdk::UI::Shell::ShellViewCoordinator_____::unordered_map_enum_winrt::WindowsUdk::UI::Shell::ShellView_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator_std::hash_enum_winrt::WindowsUdk::UI::Shell::ShellView__std::equal_to_enum_winrt::WindowsUdk::UI::Shell::ShellView__std::allocator_std::pair_enum_winrt::WindowsUdk::UI::Shell::ShellView_const__winrt::WindowsUdk::UI::Shell::ShellViewCoordinator______::_1_::dtor$0 @ 0x1802C1961 (_std--unordered_map_enum_winrt--WindowsUdk--UI--Shell--ShellView_winrt--WindowsUdk--UI--Shell--S.c)
 * Callees:
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBW4ShellView@Shell@UI@WindowsUdk@winrt@@UShellViewCoordinator@2345@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBW4ShellView@Shell@UI@WindowsUdk@winrt@@UShellViewCoordinator@2345@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBW4ShellView@Shell@UI@WindowsUdk@winrt@@UShellViewCoordinator@2345@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x18012C948 (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CBW4ShellView@Shell@UI@WindowsUdk@winrt@@.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180168F3C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::unordered_map<enum winrt::WindowsUdk::UI::Shell::ShellView,winrt::WindowsUdk::UI::Shell::ShellViewCoordinator>::~unordered_map<enum winrt::WindowsUdk::UI::Shell::ShellView,winrt::WindowsUdk::UI::Shell::ShellViewCoordinator>(
        __int64 a1)
{
  __int64 v2; // rcx

  std::_Deallocate<16,0>(*(void **)(a1 + 24), (*(_QWORD *)(a1 + 32) - *(_QWORD *)(a1 + 24)) & 0xFFFFFFFFFFFFFFF8uLL);
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  std::_List_node<std::pair<enum winrt::WindowsUdk::UI::Shell::ShellView const,winrt::WindowsUdk::UI::Shell::ShellViewCoordinator>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<enum winrt::WindowsUdk::UI::Shell::ShellView const,winrt::WindowsUdk::UI::Shell::ShellViewCoordinator>,void *>>>(
    v2,
    *(_QWORD *)(a1 + 8));
  std::_Deallocate<16,0>(*(void **)(a1 + 8), 0x20uLL);
}
