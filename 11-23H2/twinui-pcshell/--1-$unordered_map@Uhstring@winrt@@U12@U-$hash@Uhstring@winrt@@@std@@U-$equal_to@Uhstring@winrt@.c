/*
 * XREFs of ??1?$unordered_map@Uhstring@winrt@@U12@U?$hash@Uhstring@winrt@@@std@@U?$equal_to@Uhstring@winrt@@@4@V?$allocator@U?$pair@$$CBUhstring@winrt@@U12@@std@@@4@@std@@QEAA@XZ @ 0x18070EA78
 * Callers:
 *     _winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel::RemoteSystemDataModel_::_1_::dtor$2 @ 0x1802BDEEC (_winrt--Windows--Internal--Shell--factory_implementation--RemoteSystemDataModel--Re_ea_1802BDEEC.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180168F3C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBUhstring@winrt@@U12@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBUhstring@winrt@@U12@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBUhstring@winrt@@U12@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x18070A7BC (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CBUhstring@winrt@@U12@@std@@PEAX@std@@@st.c)
 */

void __fastcall std::unordered_map<winrt::hstring,winrt::hstring>::~unordered_map<winrt::hstring,winrt::hstring>(
        __int64 a1)
{
  __int64 v2; // rcx

  std::_Deallocate<16,0>(*(void **)(a1 + 24), (*(_QWORD *)(a1 + 32) - *(_QWORD *)(a1 + 24)) & 0xFFFFFFFFFFFFFFF8uLL);
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  std::_List_node<std::pair<winrt::hstring const,winrt::hstring>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<winrt::hstring const,winrt::hstring>,void *>>>(
    v2,
    *(_QWORD *)(a1 + 8));
  std::_Deallocate<16,0>(*(void **)(a1 + 8), 0x20uLL);
}
