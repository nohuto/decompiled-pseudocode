/*
 * XREFs of ??1?$unordered_map@Uhstring@winrt@@V?$vector@UWindowId@UI@Windows@winrt@@V?$allocator@UWindowId@UI@Windows@winrt@@@std@@@std@@U?$hash@Uhstring@winrt@@@4@U?$equal_to@Uhstring@winrt@@@4@V?$allocator@U?$pair@$$CBUhstring@winrt@@V?$vector@UWindowId@UI@Windows@winrt@@V?$allocator@UWindowId@UI@Windows@winrt@@@std@@@std@@@std@@@4@@std@@QEAA@XZ @ 0x18070EB68
 * Callers:
 *     _winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel::RecoverRemoteSessionsData_::_1_::dtor$1 @ 0x1802B5B45 (_winrt--Windows--Internal--Shell--factory_implementation--RemoteSystemDataModel--Re_ea_1802B5B45.c)
 *     _winrt::Windows::Internal::Shell::implementation::RemoteSessionPersistenceHelper::GetAllWindows_::_1_::dtor$0 @ 0x1802B5BCB (_winrt--Windows--Internal--Shell--implementation--RemoteSessionPersistenceHelper--GetAllWindows_.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180168F3C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBUhstring@winrt@@V?$vector@UWindowId@UI@Windows@winrt@@V?$allocator@UWindowId@UI@Windows@winrt@@@std@@@std@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBUhstring@winrt@@V?$vector@UWindowId@UI@Windows@winrt@@V?$allocator@UWindowId@UI@Windows@winrt@@@std@@@std@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBUhstring@winrt@@V?$vector@UWindowId@UI@Windows@winrt@@V?$allocator@UWindowId@UI@Windows@winrt@@@std@@@std@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1801BDA70 (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CBUhstring@winrt@@V-$vector@UWindowId@UI@.c)
 */

void __fastcall std::unordered_map<winrt::hstring,std::vector<winrt::Windows::UI::WindowId>>::~unordered_map<winrt::hstring,std::vector<winrt::Windows::UI::WindowId>>(
        __int64 a1)
{
  __int64 v2; // rcx

  std::_Deallocate<16,0>(*(void **)(a1 + 24), (*(_QWORD *)(a1 + 32) - *(_QWORD *)(a1 + 24)) & 0xFFFFFFFFFFFFFFF8uLL);
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  std::_List_node<std::pair<winrt::hstring const,std::vector<winrt::Windows::UI::WindowId>>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<winrt::hstring const,std::vector<winrt::Windows::UI::WindowId>>,void *>>>(
    v2,
    *(_QWORD *)(a1 + 8));
  std::_Deallocate<16,0>(*(void **)(a1 + 8), 0x30uLL);
}
