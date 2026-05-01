/*
 * XREFs of ??1?$list@U?$pair@$$CB_KV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@V?$allocator@U?$pair@$$CB_KV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@2@@std@@QEAA@XZ @ 0x180636828
 * Callers:
 *     _winrt::Windows::Internal::Shell::implementation::WindowTabHost::GetAllAppTabAllotment_::_1_::dtor$10 @ 0x1802B648B (_winrt--Windows--Internal--Shell--implementation--WindowTabHost--GetAllAppTabAllotm_ea_1802B648B.c)
 * Callees:
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CB_KV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CB_KV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CB_KV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x180092210 (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CB_KV-$basic_string@GU-$char_traits@G@std.c)
 */

void __fastcall std::list<std::pair<unsigned __int64 const,std::wstring>>::~list<std::pair<unsigned __int64 const,std::wstring>>(
        __int64 *a1)
{
  std::_List_node<std::pair<unsigned __int64 const,std::wstring>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<unsigned __int64 const,std::wstring>,void *>>>(
    (__int64)a1,
    *a1);
  std::_Deallocate<16,0>((void *)*a1, 0x38uLL);
}
