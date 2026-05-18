/*
 * XREFs of ??1?$_Tree_head_scoped_ptr@V?$allocator@U?$_Tree_node@V?$weak_ptr@VMaterial@Engine@Spectre@@@std@@PEAX@std@@@std@@V?$_Tree_val@U?$_Tree_simple_types@V?$weak_ptr@VMaterial@Engine@Spectre@@@std@@@std@@@2@@std@@QEAA@XZ @ 0x18005FAEC
 * Callers:
 *     ??$?0V?$allocator@U?$_Tree_node@V?$weak_ptr@VMaterial@Engine@Spectre@@@std@@PEAX@std@@@std@@@?$_Tree@V?$_Tset_traits@V?$weak_ptr@VMaterial@Engine@Spectre@@@std@@U?$owner_less@V?$weak_ptr@VMaterial@Engine@Spectre@@@std@@@2@V?$allocator@V?$weak_ptr@VMaterial@Engine@Spectre@@@std@@@2@$0A@@std@@@std@@QEAA@AEBV01@$$QEAV?$allocator@U?$_Tree_node@V?$weak_ptr@VMaterial@Engine@Spectre@@@std@@PEAX@std@@@1@@Z @ 0x18005EA50 (--$-0V-$allocator@U-$_Tree_node@V-$weak_ptr@VMaterial@Engine@Spectre@@@std@@PEAX@std@@@std@@@-$_.c)
 *     _std::_Tree_std::_Tset_traits_std::weak_ptr_Spectre::Engine::Material__std::owner_less_std::weak_ptr_Spectre::Engine::Material____std::allocator_std::weak_ptr_Spectre::Engine::Material____0___::_Tree_std::_Tset_traits_std::weak_ptr_Spectre::Engine::Material__std::owner_less_std::weak_ptr_Spectre::Engine::Material____std::allocator_std::weak_ptr_Spectre::Engine::Material____0____std::allocator_std::_Tree_node_std::weak_ptr_Spectre::Engine::Material__void________::_1_::dtor$0 @ 0x1800E7AEC (_std--_Tree_std--_Tset_traits_std--weak_ptr_Spectre--Engine--Material__std--owner_less_std--weak.c)
 * Callees:
 *     ??$_Erase_head@V?$allocator@U?$_Tree_node@V?$weak_ptr@VMaterial@Engine@Spectre@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@V?$weak_ptr@VMaterial@Engine@Spectre@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@V?$weak_ptr@VMaterial@Engine@Spectre@@@std@@PEAX@std@@@1@@Z @ 0x18005F174 (--$_Erase_head@V-$allocator@U-$_Tree_node@V-$weak_ptr@VMaterial@Engine@Spectre@@@std@@PEAX@std@@.c)
 */

void __fastcall std::_Tree_head_scoped_ptr<std::allocator<std::_Tree_node<std::weak_ptr<Spectre::Engine::Material>,void *>>,std::_Tree_val<std::_Tree_simple_types<std::weak_ptr<Spectre::Engine::Material>>>>::~_Tree_head_scoped_ptr<std::allocator<std::_Tree_node<std::weak_ptr<Spectre::Engine::Material>,void *>>,std::_Tree_val<std::_Tree_simple_types<std::weak_ptr<Spectre::Engine::Material>>>>(
        __int64 a1)
{
  if ( *(_QWORD *)(a1 + 8) )
    std::_Tree_val<std::_Tree_simple_types<std::weak_ptr<Spectre::Engine::Material>>>::_Erase_head<std::allocator<std::_Tree_node<std::weak_ptr<Spectre::Engine::Material>,void *>>>(
      *(void ***)(a1 + 8),
      *(_QWORD *)a1);
}
