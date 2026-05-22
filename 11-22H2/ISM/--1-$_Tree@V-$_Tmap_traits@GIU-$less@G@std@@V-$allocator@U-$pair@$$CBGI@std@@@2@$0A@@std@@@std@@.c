/*
 * XREFs of ??1?$_Tree@V?$_Tmap_traits@GIU?$less@G@std@@V?$allocator@U?$pair@$$CBGI@std@@@2@$0A@@std@@@std@@QEAA@XZ @ 0x18005642C
 * Callers:
 *     _std::map_unsigned_short_unsigned_int_std::less_unsigned_short__std::allocator_std::pair_unsigned_short_const__unsigned_int_____::map_unsigned_short_unsigned_int_std::less_unsigned_short__std::allocator_std::pair_unsigned_short_const__unsigned_int______::_1_::dtor$0 @ 0x180055F1C (_std--map_unsigned_short_unsigned_int_std--less_unsigned_short__std--allocator_std--pair_unsigne.c)
 *     _dynamic_atexit_destructor_for__c_handedModifierMapping__ @ 0x180083B00 (_dynamic_atexit_destructor_for__c_handedModifierMapping__.c)
 * Callees:
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CBGI@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBGI@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBGI@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBGI@std@@PEAX@1@@Z @ 0x180064E4C (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CBGI@std@@PEAX@std@@@std@@@-$_Tree_val@U-$_T.c)
 */

void __fastcall std::_Tree<std::_Tmap_traits<unsigned short,unsigned int,std::less<unsigned short>,std::allocator<std::pair<unsigned short const,unsigned int>>,0>>::~_Tree<std::_Tmap_traits<unsigned short,unsigned int,std::less<unsigned short>,std::allocator<std::pair<unsigned short const,unsigned int>>,0>>(
        void **a1)
{
  std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned short const,unsigned int>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<unsigned short const,unsigned int>,void *>>>(
    a1,
    a1,
    *((_QWORD *)*a1 + 1));
  std::_Deallocate<16,0>(*a1, 0x28uLL);
}
