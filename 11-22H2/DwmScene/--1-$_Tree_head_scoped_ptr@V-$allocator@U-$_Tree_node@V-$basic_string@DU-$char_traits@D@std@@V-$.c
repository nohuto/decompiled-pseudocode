/*
 * XREFs of ??1?$_Tree_head_scoped_ptr@V?$allocator@U?$_Tree_node@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEAX@std@@@std@@V?$_Tree_val@U?$_Tree_simple_types@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@@2@@std@@QEAA@XZ @ 0x18005FAC8
 * Callers:
 *     ??$?0V?$allocator@U?$_Tree_node@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEAX@std@@@std@@@?$_Tree@V?$_Tset_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@$0A@@std@@@std@@QEAA@AEBV01@$$QEAV?$allocator@U?$_Tree_node@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEAX@std@@@1@@Z @ 0x18005E994 (--$-0V-$allocator@U-$_Tree_node@V-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@PE.c)
 *     _std::_Tree_std::_Tset_traits_std::basic_string_char_std::char_traits_char__std::allocator_char____std::less_std::basic_string_char_std::char_traits_char__std::allocator_char______std::allocator_std::basic_string_char_std::char_traits_char__std::allocator_char______0___::_Tree_std::_Tset_traits_std::basic_string_char_std::char_traits_char__std::allocator_char____std::less_std::basic_string_char_std::char_traits_char__std::allocator_char______std::allocator_std::basic_string_char_std::char_traits_char__std::allocator_char______0____std::allocator_std::_Tree_node_std::basic_string_char_std::char_traits_char__std::allocator_char____void________::_1_::dtor$0 @ 0x1800E7ADA (_std--_Tree_std--_Tset_traits_std--basic_string_char_std--char_traits_char__std--allocator_char_.c)
 * Callees:
 *     ??$_Erase_head@V?$allocator@U?$_Tree_node@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEAX@std@@@1@@Z @ 0x18004D844 (--$_Erase_head@V-$allocator@U-$_Tree_node@V-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@.c)
 */

void __fastcall std::_Tree_head_scoped_ptr<std::allocator<std::_Tree_node<std::string,void *>>,std::_Tree_val<std::_Tree_simple_types<std::string>>>::~_Tree_head_scoped_ptr<std::allocator<std::_Tree_node<std::string,void *>>,std::_Tree_val<std::_Tree_simple_types<std::string>>>(
        __int64 a1)
{
  if ( *(_QWORD *)(a1 + 8) )
    std::_Tree_val<std::_Tree_simple_types<std::string>>::_Erase_head<std::allocator<std::_Tree_node<std::string,void *>>>(
      *(void ***)(a1 + 8),
      *(_QWORD *)a1);
}
