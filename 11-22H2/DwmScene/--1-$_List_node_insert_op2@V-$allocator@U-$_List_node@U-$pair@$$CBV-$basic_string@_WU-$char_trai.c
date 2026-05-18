/*
 * XREFs of ??1?$_List_node_insert_op2@V?$allocator@U?$_List_node@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@VConfigurationValue@Utils@Spectre@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x1800DE124
 * Callers:
 *     ??$_Assign_cast@AEAU?$pair@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@VConfigurationValue@Utils@Spectre@@@std@@V?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@VConfigurationValue@Utils@Spectre@@@std@@@std@@@std@@U_Iterator_base0@2@@2@@?$list@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@VConfigurationValue@Utils@Spectre@@@std@@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@VConfigurationValue@Utils@Spectre@@@std@@@2@@std@@AEAAXV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@VConfigurationValue@Utils@Spectre@@@std@@@std@@@std@@U_Iterator_base0@2@@1@V21@@Z @ 0x1800DD528 (--$_Assign_cast@AEAU-$pair@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@VCon.c)
 *     _std::list_std::pair_std::basic_string_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t____const__Spectre::Utils::ConfigurationValue__std::allocator_std::pair_std::basic_string_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t____const__Spectre::Utils::ConfigurationValue_____::_Assign_cast_std::pair_std::basic_string_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t____Spectre::Utils::ConfigurationValue__&_std::_List_unchecked_const_iterator_std::_List_val_std::_List_simple_types_std::pair_std::basic_string_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t____const__Spectre::Utils::ConfigurationValue______std::_Iterator_base0____::_1_::dtor$0 @ 0x1800F1D44 (_std--list_std--pair_std--basic_string_wchar_t_std--char_traits_wchar_t__std--allocator_wchar_t_.c)
 * Callees:
 *     ??$_Freenode@V?$allocator@U?$_List_node@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@VConfigurationValue@Utils@Spectre@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@VConfigurationValue@Utils@Spectre@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@VConfigurationValue@Utils@Spectre@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1800DD6D4 (--$_Freenode@V-$allocator@U-$_List_node@U-$pair@$$CBV-$basic_string@_WU-$char_traits@_W@std@@V-$.c)
 */

void __fastcall std::_List_node_insert_op2<std::allocator<std::_List_node<std::pair<std::wstring const,Spectre::Utils::ConfigurationValue>,void *>>>::~_List_node_insert_op2<std::allocator<std::_List_node<std::pair<std::wstring const,Spectre::Utils::ConfigurationValue>,void *>>>(
        __int64 a1)
{
  char *v1; // rbx
  char *v2; // rdx

  if ( *(_QWORD *)(a1 + 8) )
  {
    *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL) = 0LL;
    **(_QWORD **)(a1 + 16) = 0LL;
    v1 = *(char **)(a1 + 24);
    while ( v1 )
    {
      v2 = v1;
      v1 = *(char **)v1;
      std::_List_node<std::pair<std::wstring const,Spectre::Utils::ConfigurationValue>,void *>::_Freenode<std::allocator<std::_List_node<std::pair<std::wstring const,Spectre::Utils::ConfigurationValue>,void *>>>(
        a1,
        v2);
    }
  }
}
