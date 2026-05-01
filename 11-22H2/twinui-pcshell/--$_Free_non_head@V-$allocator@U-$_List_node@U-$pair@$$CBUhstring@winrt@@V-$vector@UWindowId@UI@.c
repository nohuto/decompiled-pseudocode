/*
 * XREFs of ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBUhstring@winrt@@V?$vector@UWindowId@UI@Windows@winrt@@V?$allocator@UWindowId@UI@Windows@winrt@@@std@@@std@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBUhstring@winrt@@V?$vector@UWindowId@UI@Windows@winrt@@V?$allocator@UWindowId@UI@Windows@winrt@@@std@@@std@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBUhstring@winrt@@V?$vector@UWindowId@UI@Windows@winrt@@V?$allocator@UWindowId@UI@Windows@winrt@@@std@@@std@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1801BDA70
 * Callers:
 *     ?RecoverRemoteSessionsData@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@QEAA_NXZ @ 0x18008CE7C (-RecoverRemoteSessionsData@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@w.c)
 *     ??1?$list@U?$pair@$$CBUhstring@winrt@@V?$vector@UWindowId@UI@Windows@winrt@@V?$allocator@UWindowId@UI@Windows@winrt@@@std@@@std@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@V?$vector@UWindowId@UI@Windows@winrt@@V?$allocator@UWindowId@UI@Windows@winrt@@@std@@@std@@@std@@@2@@std@@QEAA@XZ @ 0x18070E804 (--1-$list@U-$pair@$$CBUhstring@winrt@@V-$vector@UWindowId@UI@Windows@winrt@@V-$allocator@UWindow.c)
 *     ??1?$unordered_map@Uhstring@winrt@@V?$vector@UWindowId@UI@Windows@winrt@@V?$allocator@UWindowId@UI@Windows@winrt@@@std@@@std@@U?$hash@Uhstring@winrt@@@4@U?$equal_to@Uhstring@winrt@@@4@V?$allocator@U?$pair@$$CBUhstring@winrt@@V?$vector@UWindowId@UI@Windows@winrt@@V?$allocator@UWindowId@UI@Windows@winrt@@@std@@@std@@@std@@@4@@std@@QEAA@XZ @ 0x18070EB68 (--1-$unordered_map@Uhstring@winrt@@V-$vector@UWindowId@UI@Windows@winrt@@V-$allocator@UWindowId@.c)
 * Callees:
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800B6D14 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180168F3C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::_List_node<std::pair<winrt::hstring const,std::vector<winrt::Windows::UI::WindowId>>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<winrt::hstring const,std::vector<winrt::Windows::UI::WindowId>>,void *>>>(
        __int64 a1,
        __int64 a2)
{
  void *v2; // rbx
  void *v3; // rcx
  void *v4; // rsi

  **(_QWORD **)(a2 + 8) = 0LL;
  v2 = *(void **)a2;
  if ( *(_QWORD *)a2 )
  {
    do
    {
      v3 = (void *)*((_QWORD *)v2 + 3);
      v4 = *(void **)v2;
      if ( v3 )
      {
        std::_Deallocate<16,0>(v3, (*((_QWORD *)v2 + 5) - (_QWORD)v3) & 0xFFFFFFFFFFFFFFF8uLL);
        *((_QWORD *)v2 + 3) = 0LL;
        *((_QWORD *)v2 + 4) = 0LL;
        *((_QWORD *)v2 + 5) = 0LL;
      }
      winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)v2 + 2);
      std::_Deallocate<16,0>(v2, 0x30uLL);
      v2 = v4;
    }
    while ( v4 );
  }
}
