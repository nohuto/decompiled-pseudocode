/*
 * XREFs of ??1?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@$$CBIUComboButtonRegistration@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x1801A7214
 * Callers:
 *     ??$_Try_emplace@AEBI$$V@?$map@IUComboButtonRegistration@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUComboButtonRegistration@@@std@@@3@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBIUComboButtonRegistration@@@std@@PEAX@std@@_N@1@AEBI@Z @ 0x1801A6D74 (--$_Try_emplace@AEBI$$V@-$map@IUComboButtonRegistration@@U-$less@I@std@@V-$allocator@U-$pair@$$C.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000E6AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Tidy@?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@AEAAXXZ @ 0x18004957C (-_Tidy@-$vector@UColor@UI@Windows@@V-$allocator@UColor@UI@Windows@@@std@@@std@@AEAAXXZ.c)
 */

void __fastcall std::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<unsigned int const,ComboButtonRegistration>,void *>>>::~_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<unsigned int const,ComboButtonRegistration>,void *>>>(
        __int64 a1)
{
  __int64 v2; // rcx
  void *v3; // rcx

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
  {
    std::vector<Windows::UI::Color>::_Tidy(v2 + 48);
    v3 = *(void **)(a1 + 8);
    if ( v3 )
      std::_Deallocate<16,0>(v3, 0x70uLL);
  }
}
