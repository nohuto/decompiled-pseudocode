/*
 * XREFs of ?_Unchecked_erase@?$list@U?$pair@$$CBUhstring@winrt@@U?$com_ptr@UIVirtualDesktop@@@2@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@U?$com_ptr@UIVirtualDesktop@@@2@@std@@@2@@std@@AEAAPEAU?$_List_node@U?$pair@$$CBUhstring@winrt@@U?$com_ptr@UIVirtualDesktop@@@2@@std@@PEAX@2@QEAU32@@Z @ 0x1807300B0
 * Callers:
 *     ?erase@?$_Hash@V?$_Umap_traits@Uhstring@winrt@@U?$com_ptr@UIVirtualDesktop@@@2@V?$_Uhash_compare@Uhstring@winrt@@U?$hash@Uhstring@winrt@@@std@@U?$equal_to@Uhstring@winrt@@@4@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@U?$com_ptr@UIVirtualDesktop@@@2@@std@@@5@$0A@@std@@@std@@QEAA_KAEBUhstring@winrt@@@Z @ 0x180730118 (-erase@-$_Hash@V-$_Umap_traits@Uhstring@winrt@@U-$com_ptr@UIVirtualDesktop@@@2@V-$_Uhash_compare.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x180085068 (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800B6D14 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180168F3C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

_QWORD *__fastcall std::list<std::pair<winrt::hstring const,winrt::com_ptr<IVirtualDesktop>>>::_Unchecked_erase(
        __int64 a1,
        void *a2)
{
  _QWORD *v2; // rdi

  v2 = *(_QWORD **)a2;
  --*(_QWORD *)(a1 + 8);
  **((_QWORD **)a2 + 1) = v2;
  v2[1] = *((_QWORD *)a2 + 1);
  if ( *((_QWORD *)a2 + 3) )
    winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)a2 + 3);
  winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)a2 + 2);
  std::_Deallocate<16,0>(a2, 0x20uLL);
  return v2;
}
