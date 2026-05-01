/*
 * XREFs of ??$_Find_last@Uhstring@winrt@@@?$_Hash@V?$_Umap_traits@Uhstring@winrt@@_NV?$_Uhash_compare@Uhstring@winrt@@U?$hash@Uhstring@winrt@@@std@@U?$equal_to@Uhstring@winrt@@@4@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@_N@std@@@4@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@$$CBUhstring@winrt@@_N@std@@PEAX@std@@@1@AEBUhstring@winrt@@_K@Z @ 0x1806EF700
 * Callers:
 *     ??$_Try_emplace@AEBUhstring@winrt@@$$V@?$_Hash@V?$_Umap_traits@Uhstring@winrt@@_NV?$_Uhash_compare@Uhstring@winrt@@U?$hash@Uhstring@winrt@@@std@@U?$equal_to@Uhstring@winrt@@@4@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@_N@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CBUhstring@winrt@@_N@std@@PEAX@std@@_N@1@AEBUhstring@winrt@@@Z @ 0x1806EFA74 (--$_Try_emplace@AEBUhstring@winrt@@$$V@-$_Hash@V-$_Umap_traits@Uhstring@winrt@@_NV-$_Uhash_compa.c)
 *     ??$emplace@U?$pair@$$CBUhstring@winrt@@_N@std@@@?$_Hash@V?$_Umap_traits@Uhstring@winrt@@_NV?$_Uhash_compare@Uhstring@winrt@@U?$hash@Uhstring@winrt@@@std@@U?$equal_to@Uhstring@winrt@@@4@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@_N@std@@@4@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUhstring@winrt@@_N@std@@@std@@@std@@@std@@_N@1@$$QEAU?$pair@$$CBUhstring@winrt@@_N@1@@Z @ 0x1806F0038 (--$emplace@U-$pair@$$CBUhstring@winrt@@_N@std@@@-$_Hash@V-$_Umap_traits@Uhstring@winrt@@_NV-$_Uh.c)
 *     ??$find@X@?$_Hash@V?$_Umap_traits@Uhstring@winrt@@_NV?$_Uhash_compare@Uhstring@winrt@@U?$hash@Uhstring@winrt@@@std@@U?$equal_to@Uhstring@winrt@@@4@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@_N@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUhstring@winrt@@_N@std@@@std@@@std@@@1@AEBUhstring@winrt@@@Z @ 0x1806F013C (--$find@X@-$_Hash@V-$_Umap_traits@Uhstring@winrt@@_NV-$_Uhash_compare@Uhstring@winrt@@U-$hash@Uh.c)
 *     ?erase@?$_Hash@V?$_Umap_traits@Uhstring@winrt@@_NV?$_Uhash_compare@Uhstring@winrt@@U?$hash@Uhstring@winrt@@@std@@U?$equal_to@Uhstring@winrt@@@4@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@_N@std@@@4@$0A@@std@@@std@@QEAA_KAEBUhstring@winrt@@@Z @ 0x1806F6EDC (-erase@-$_Hash@V-$_Umap_traits@Uhstring@winrt@@_NV-$_Uhash_compare@Uhstring@winrt@@U-$hash@Uhstr.c)
 * Callees:
 *     ??8winrt@@YA_NAEBUhstring@0@0@Z @ 0x18004CF30 (--8winrt@@YA_NAEBUhstring@0@0@Z.c)
 */

winrt::Windows::Internal::Shell::implementation::AppBackupListener **__fastcall std::_Hash<std::_Umap_traits<winrt::hstring,bool,std::_Uhash_compare<winrt::hstring,std::hash<winrt::hstring>,std::equal_to<winrt::hstring>>,std::allocator<std::pair<winrt::hstring const,bool>>,0>>::_Find_last<winrt::hstring>(
        __int64 a1,
        winrt::Windows::Internal::Shell::implementation::AppBackupListener **a2,
        __int64 a3,
        __int64 a4)
{
  winrt::Windows::Internal::Shell::implementation::AppBackupListener *v5; // rcx
  winrt::Windows::Internal::Shell::implementation::AppBackupListener *v7; // rdi
  winrt::Windows::Internal::Shell::implementation::AppBackupListener *v8; // rsi

  v5 = qword_180990158;
  v7 = *(winrt::Windows::Internal::Shell::implementation::AppBackupListener **)(qword_180990168
                                                                              + 16 * (a4 & qword_180990180)
                                                                              + 8);
  if ( v7 == qword_180990158 )
  {
    a2[1] = 0LL;
    *a2 = v5;
  }
  else
  {
    v8 = *(winrt::Windows::Internal::Shell::implementation::AppBackupListener **)(qword_180990168
                                                                                + 16 * (a4 & qword_180990180));
    while ( !(unsigned __int8)winrt::operator==(a3, (__int64)v7 + 16, a3) )
    {
      if ( v7 == v8 )
      {
        a2[1] = 0LL;
        *a2 = v7;
        return a2;
      }
      v7 = (winrt::Windows::Internal::Shell::implementation::AppBackupListener *)*((_QWORD *)v7 + 1);
    }
    *a2 = *(winrt::Windows::Internal::Shell::implementation::AppBackupListener **)v7;
    a2[1] = v7;
  }
  return a2;
}
