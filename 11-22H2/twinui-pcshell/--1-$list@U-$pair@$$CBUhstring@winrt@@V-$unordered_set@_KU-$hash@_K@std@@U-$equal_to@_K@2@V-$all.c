/*
 * XREFs of ??1?$list@U?$pair@$$CBUhstring@winrt@@V?$unordered_set@_KU?$hash@_K@std@@U?$equal_to@_K@2@V?$allocator@_K@2@@std@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@V?$unordered_set@_KU?$hash@_K@std@@U?$equal_to@_K@2@V?$allocator@_K@2@@std@@@std@@@2@@std@@QEAA@XZ @ 0x18070E7D8
 * Callers:
 *     _winrt::Windows::Internal::Shell::implementation::RemoteSessionPersistenceHelper::RemoteSessionPersistenceHelper_::_1_::dtor$17 @ 0x1802B6033 (_winrt--Windows--Internal--Shell--implementation--RemoteSessionPersistenceHelper--R_ea_1802B6033.c)
 * Callees:
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBUhstring@winrt@@V?$unordered_set@_KU?$hash@_K@std@@U?$equal_to@_K@2@V?$allocator@_K@2@@std@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBUhstring@winrt@@V?$unordered_set@_KU?$hash@_K@std@@U?$equal_to@_K@2@V?$allocator@_K@2@@std@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBUhstring@winrt@@V?$unordered_set@_KU?$hash@_K@std@@U?$equal_to@_K@2@V?$allocator@_K@2@@std@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x18070A80C (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CBUhstring@winrt@@V-$unordered_set@_KU-$h.c)
 */

void __fastcall std::list<std::pair<winrt::hstring const,std::unordered_set<unsigned __int64>>>::~list<std::pair<winrt::hstring const,std::unordered_set<unsigned __int64>>>(
        void **a1)
{
  std::_List_node<std::pair<winrt::hstring const,std::unordered_set<unsigned __int64>>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<winrt::hstring const,std::unordered_set<unsigned __int64>>,void *>>>(
    (__int64)a1,
    (_QWORD **)*a1);
  std::_Deallocate<16,0>(*a1, 0x58uLL);
}
