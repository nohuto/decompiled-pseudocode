/*
 * XREFs of ?_Unchecked_erase@?$list@U?$pair@$$CBUhstring@winrt@@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@2@@std@@AEAAPEAU?$_List_node@U?$pair@$$CBUhstring@winrt@@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@PEAX@2@QEAU32@@Z @ 0x1806F6A5C
 * Callers:
 *     ?erase@?$_Hash@V?$_Umap_traits@Uhstring@winrt@@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$_Uhash_compare@Uhstring@winrt@@U?$hash@Uhstring@winrt@@@std@@U?$equal_to@Uhstring@winrt@@@4@@4@V?$allocator@U?$pair@$$CBUhstring@winrt@@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@4@$0A@@std@@@std@@QEAA_KAEBUhstring@winrt@@@Z @ 0x1806F6E20 (-erase@-$_Hash@V-$_Umap_traits@Uhstring@winrt@@V-$basic_string@GU-$char_traits@G@std@@V-$allocat.c)
 * Callees:
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800B6D14 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800C43CC (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180168F3C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

_QWORD *__fastcall std::list<std::pair<winrt::hstring const,std::wstring>>::_Unchecked_erase(__int64 a1, void *a2)
{
  _QWORD *v2; // rdi

  v2 = *(_QWORD **)a2;
  --*(_QWORD *)(a1 + 8);
  **((_QWORD **)a2 + 1) = v2;
  v2[1] = *((_QWORD *)a2 + 1);
  std::wstring::_Tidy_deallocate((__int64)a2 + 24);
  winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)a2 + 2);
  std::_Deallocate<16,0>(a2, 0x38uLL);
  return v2;
}
