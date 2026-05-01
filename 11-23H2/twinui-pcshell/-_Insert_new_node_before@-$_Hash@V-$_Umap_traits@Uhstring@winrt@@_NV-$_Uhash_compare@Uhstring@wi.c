/*
 * XREFs of ?_Insert_new_node_before@?$_Hash@V?$_Umap_traits@Uhstring@winrt@@_NV?$_Uhash_compare@Uhstring@winrt@@U?$hash@Uhstring@winrt@@@std@@U?$equal_to@Uhstring@winrt@@@4@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@_N@std@@@4@$0A@@std@@@std@@IEAAPEAU?$_List_node@U?$pair@$$CBUhstring@winrt@@_N@std@@PEAX@2@_KQEAU32@1@Z @ 0x1806F69A4
 * Callers:
 *     ??$_Try_emplace@AEBUhstring@winrt@@$$V@?$_Hash@V?$_Umap_traits@Uhstring@winrt@@_NV?$_Uhash_compare@Uhstring@winrt@@U?$hash@Uhstring@winrt@@@std@@U?$equal_to@Uhstring@winrt@@@4@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@_N@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CBUhstring@winrt@@_N@std@@PEAX@std@@_N@1@AEBUhstring@winrt@@@Z @ 0x1806EFA74 (--$_Try_emplace@AEBUhstring@winrt@@$$V@-$_Hash@V-$_Umap_traits@Uhstring@winrt@@_NV-$_Uhash_compa.c)
 *     ??$emplace@U?$pair@$$CBUhstring@winrt@@_N@std@@@?$_Hash@V?$_Umap_traits@Uhstring@winrt@@_NV?$_Uhash_compare@Uhstring@winrt@@U?$hash@Uhstring@winrt@@@std@@U?$equal_to@Uhstring@winrt@@@4@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@_N@std@@@4@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUhstring@winrt@@_N@std@@@std@@@std@@@std@@_N@1@$$QEAU?$pair@$$CBUhstring@winrt@@_N@1@@Z @ 0x1806F0038 (--$emplace@U-$pair@$$CBUhstring@winrt@@_N@std@@@-$_Hash@V-$_Umap_traits@Uhstring@winrt@@_NV-$_Uh.c)
 * Callees:
 *     <none>
 */

winrt::Windows::Internal::Shell::implementation::AppBackupListener **__fastcall std::_Hash<std::_Umap_traits<winrt::hstring,bool,std::_Uhash_compare<winrt::hstring,std::hash<winrt::hstring>,std::equal_to<winrt::hstring>>,std::allocator<std::pair<winrt::hstring const,bool>>,0>>::_Insert_new_node_before(
        __int64 a1,
        __int64 a2,
        winrt::Windows::Internal::Shell::implementation::AppBackupListener *a3,
        winrt::Windows::Internal::Shell::implementation::AppBackupListener **a4)
{
  winrt::Windows::Internal::Shell::implementation::AppBackupListener ***v4; // r10
  __int64 v5; // rcx
  __int64 v6; // rax
  winrt::Windows::Internal::Shell::implementation::AppBackupListener *v7; // rdx

  v4 = (winrt::Windows::Internal::Shell::implementation::AppBackupListener ***)*((_QWORD *)a3 + 1);
  ++qword_180990160;
  *a4 = a3;
  a4[1] = (winrt::Windows::Internal::Shell::implementation::AppBackupListener *)v4;
  *v4 = a4;
  *((_QWORD *)a3 + 1) = a4;
  v5 = qword_180990168;
  v6 = 2 * (a2 & qword_180990180);
  v7 = *(winrt::Windows::Internal::Shell::implementation::AppBackupListener **)(qword_180990168
                                                                              + 16 * (a2 & qword_180990180));
  if ( v7 == qword_180990158 )
  {
    *(_QWORD *)(qword_180990168 + 8 * v6) = a4;
LABEL_6:
    *(_QWORD *)(v5 + 8 * v6 + 8) = a4;
    return a4;
  }
  if ( v7 == a3 )
  {
    *(_QWORD *)(qword_180990168 + 8 * v6) = a4;
  }
  else if ( *(winrt::Windows::Internal::Shell::implementation::AppBackupListener ****)(qword_180990168 + 8 * v6 + 8) == v4 )
  {
    goto LABEL_6;
  }
  return a4;
}
