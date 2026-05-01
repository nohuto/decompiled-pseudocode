/*
 * XREFs of ??1?$removed_values@U?$vector_impl@UMenuItem@UI@WindowsUdk@winrt@@V?$vector@UMenuItem@UI@WindowsUdk@winrt@@V?$allocator@UMenuItem@UI@WindowsUdk@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@X@impl@winrt@@QEAA@XZ @ 0x1806CBA20
 * Callers:
 *     _CLauncherTipContextMenu::GetMenuItemsAsyncHelper$_ResumeCoro$1_::_1_::dtor$4 @ 0x180257C18 (_CLauncherTipContextMenu--GetMenuItemsAsyncHelper$_ResumeCoro$1_--_1_--dtor$4.c)
 *     _CLauncherTipContextMenu::GetMenuItemsAsyncHelper$_ResumeCoro$1_::_1_::dtor$14 @ 0x180257D61 (_CLauncherTipContextMenu--GetMenuItemsAsyncHelper$_ResumeCoro$1_--_1_--dtor$14.c)
 *     _winrt::vector_base_winrt::impl::vector_impl_winrt::WindowsUdk::UI::MenuItem_std::vector_winrt::WindowsUdk::UI::MenuItem_std::allocator_winrt::WindowsUdk::UI::MenuItem____winrt::impl::single_threaded_collection_base__winrt::WindowsUdk::UI::MenuItem_::ReplaceAll_::_1_::dtor$0 @ 0x1806CE641 (_winrt--vector_base_winrt--impl--vector_impl_winrt--WindowsUdk--UI--MenuItem_std--vector_winrt--.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180168F3C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@UMenuItem@UI@WindowsUdk@winrt@@@std@@@std@@YAXPEAUMenuItem@UI@WindowsUdk@winrt@@QEAU1234@AEAV?$allocator@UMenuItem@UI@WindowsUdk@winrt@@@0@@Z @ 0x1806C9A80 (--$_Destroy_range@V-$allocator@UMenuItem@UI@WindowsUdk@winrt@@@std@@@std@@YAXPEAUMenuItem@UI@Win.c)
 */

void __fastcall winrt::impl::removed_values<winrt::impl::vector_impl<winrt::WindowsUdk::UI::MenuItem,std::vector<winrt::WindowsUdk::UI::MenuItem>,winrt::impl::single_threaded_collection_base>,void>::~removed_values<winrt::impl::vector_impl<winrt::WindowsUdk::UI::MenuItem,std::vector<winrt::WindowsUdk::UI::MenuItem>,winrt::impl::single_threaded_collection_base>,void>(
        __int64 a1)
{
  winrt::Windows::Internal::Shell::RegistrationData *v2; // rcx

  v2 = *(winrt::Windows::Internal::Shell::RegistrationData **)a1;
  if ( v2 )
  {
    std::_Destroy_range<std::allocator<winrt::WindowsUdk::UI::MenuItem>>(
      v2,
      *(winrt::Windows::Internal::Shell::RegistrationData **)(a1 + 8));
    std::_Deallocate<16,0>(*(void **)a1, (*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) & 0xFFFFFFFFFFFFFFF8uLL);
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
