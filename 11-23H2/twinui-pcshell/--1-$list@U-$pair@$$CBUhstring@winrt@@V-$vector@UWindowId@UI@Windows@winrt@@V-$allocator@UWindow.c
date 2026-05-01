/*
 * XREFs of ??1?$list@U?$pair@$$CBUhstring@winrt@@V?$vector@UWindowId@UI@Windows@winrt@@V?$allocator@UWindowId@UI@Windows@winrt@@@std@@@std@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@V?$vector@UWindowId@UI@Windows@winrt@@V?$allocator@UWindowId@UI@Windows@winrt@@@std@@@std@@@std@@@2@@std@@QEAA@XZ @ 0x18070E804
 * Callers:
 *     _winrt::Windows::Internal::Shell::implementation::RemoteSessionPersistenceHelper::GetAllWindows_::_1_::dtor$11 @ 0x1802B5C43 (_winrt--Windows--Internal--Shell--implementation--RemoteSessionPersistenceHelper--G_ea_1802B5C43.c)
 * Callees:
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBUhstring@winrt@@V?$vector@UWindowId@UI@Windows@winrt@@V?$allocator@UWindowId@UI@Windows@winrt@@@std@@@std@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBUhstring@winrt@@V?$vector@UWindowId@UI@Windows@winrt@@V?$allocator@UWindowId@UI@Windows@winrt@@@std@@@std@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBUhstring@winrt@@V?$vector@UWindowId@UI@Windows@winrt@@V?$allocator@UWindowId@UI@Windows@winrt@@@std@@@std@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1801BDA70 (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CBUhstring@winrt@@V-$vector@UWindowId@UI@.c)
 */

void __fastcall std::list<std::pair<winrt::hstring const,std::vector<winrt::Windows::UI::WindowId>>>::~list<std::pair<winrt::hstring const,std::vector<winrt::Windows::UI::WindowId>>>(
        __int64 *a1)
{
  std::_List_node<std::pair<winrt::hstring const,std::vector<winrt::Windows::UI::WindowId>>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<winrt::hstring const,std::vector<winrt::Windows::UI::WindowId>>,void *>>>(
    (__int64)a1,
    *a1);
  std::_Deallocate<16,0>((void *)*a1, 0x30uLL);
}
