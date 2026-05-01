/*
 * XREFs of ?_Check_max_size@?$_Hash@V?$_Umap_traits@Uhstring@winrt@@U?$com_ptr@UIVirtualDesktop@@@2@V?$_Uhash_compare@Uhstring@winrt@@U?$hash@Uhstring@winrt@@@std@@U?$equal_to@Uhstring@winrt@@@4@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@U?$com_ptr@UIVirtualDesktop@@@2@@std@@@5@$0A@@std@@@std@@IEBAXXZ @ 0x18073007C
 * Callers:
 *     ??$emplace@AEBU?$pair@$$CBUhstring@winrt@@U?$com_ptr@UIVirtualDesktop@@@2@@std@@@?$_Hash@V?$_Umap_traits@Uhstring@winrt@@U?$com_ptr@UIVirtualDesktop@@@2@V?$_Uhash_compare@Uhstring@winrt@@U?$hash@Uhstring@winrt@@@std@@U?$equal_to@Uhstring@winrt@@@4@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@U?$com_ptr@UIVirtualDesktop@@@2@@std@@@5@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUhstring@winrt@@U?$com_ptr@UIVirtualDesktop@@@2@@std@@@std@@@std@@@std@@_N@1@AEBU?$pair@$$CBUhstring@winrt@@U?$com_ptr@UIVirtualDesktop@@@2@@1@@Z @ 0x18072FB00 (--$emplace@AEBU-$pair@$$CBUhstring@winrt@@U-$com_ptr@UIVirtualDesktop@@@2@@std@@@-$_Hash@V-$_Uma.c)
 *     ??$emplace@AEBUhstring@winrt@@AEBU?$com_ptr@UIVirtualDesktop@@@2@@?$_Hash@V?$_Umap_traits@Uhstring@winrt@@U?$com_ptr@UIVirtualDesktop@@@2@V?$_Uhash_compare@Uhstring@winrt@@U?$hash@Uhstring@winrt@@@std@@U?$equal_to@Uhstring@winrt@@@4@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@U?$com_ptr@UIVirtualDesktop@@@2@@std@@@5@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUhstring@winrt@@U?$com_ptr@UIVirtualDesktop@@@2@@std@@@std@@@std@@@std@@_N@1@AEBUhstring@winrt@@AEBU?$com_ptr@UIVirtualDesktop@@@4@@Z @ 0x18072FC20 (--$emplace@AEBUhstring@winrt@@AEBU-$com_ptr@UIVirtualDesktop@@@2@@-$_Hash@V-$_Umap_traits@Uhstri.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Hash<std::_Umap_traits<winrt::hstring,winrt::com_ptr<IVirtualDesktop>,std::_Uhash_compare<winrt::hstring,std::hash<winrt::hstring>,std::equal_to<winrt::hstring>>,std::allocator<std::pair<winrt::hstring const,winrt::com_ptr<IVirtualDesktop>>>,0>>::_Check_max_size(
        __int64 a1)
{
  __int64 result; // rax

  result = 0x7FFFFFFFFFFFFFFLL;
  if ( *(_QWORD *)(a1 + 16) == 0x7FFFFFFFFFFFFFFLL )
    std::_Xlength_error("unordered_map/set too long");
  return result;
}
