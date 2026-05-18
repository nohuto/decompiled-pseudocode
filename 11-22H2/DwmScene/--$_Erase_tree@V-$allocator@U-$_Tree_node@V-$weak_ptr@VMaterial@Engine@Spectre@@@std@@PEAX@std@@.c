/*
 * XREFs of ??$_Erase_tree@V?$allocator@U?$_Tree_node@V?$weak_ptr@VMaterial@Engine@Spectre@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@V?$weak_ptr@VMaterial@Engine@Spectre@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@V?$weak_ptr@VMaterial@Engine@Spectre@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@V?$weak_ptr@VMaterial@Engine@Spectre@@@std@@PEAX@1@@Z @ 0x18005F218
 * Callers:
 *     ??$_Erase_head@V?$allocator@U?$_Tree_node@V?$weak_ptr@VMaterial@Engine@Spectre@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@V?$weak_ptr@VMaterial@Engine@Spectre@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@V?$weak_ptr@VMaterial@Engine@Spectre@@@std@@PEAX@std@@@1@@Z @ 0x18005F174 (--$_Erase_head@V-$allocator@U-$_Tree_node@V-$weak_ptr@VMaterial@Engine@Spectre@@@std@@PEAX@std@@.c)
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@V?$weak_ptr@VMaterial@Engine@Spectre@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@V?$weak_ptr@VMaterial@Engine@Spectre@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@V?$weak_ptr@VMaterial@Engine@Spectre@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@V?$weak_ptr@VMaterial@Engine@Spectre@@@std@@PEAX@1@@Z @ 0x18005F218 (--$_Erase_tree@V-$allocator@U-$_Tree_node@V-$weak_ptr@VMaterial@Engine@Spectre@@@std@@PEAX@std@@.c)
 *     ?erase@?$_Tree@V?$_Tset_traits@V?$weak_ptr@VMaterial@Engine@Spectre@@@std@@U?$owner_less@V?$weak_ptr@VMaterial@Engine@Spectre@@@std@@@2@V?$allocator@V?$weak_ptr@VMaterial@Engine@Spectre@@@std@@@2@$0A@@std@@@std@@QEAA_KAEBV?$weak_ptr@VMaterial@Engine@Spectre@@@2@@Z @ 0x180061528 (-erase@-$_Tree@V-$_Tset_traits@V-$weak_ptr@VMaterial@Engine@Spectre@@@std@@U-$owner_less@V-$weak.c)
 * Callees:
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@V?$weak_ptr@VMaterial@Engine@Spectre@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@V?$weak_ptr@VMaterial@Engine@Spectre@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@V?$weak_ptr@VMaterial@Engine@Spectre@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@V?$weak_ptr@VMaterial@Engine@Spectre@@@std@@PEAX@1@@Z @ 0x18005F218 (--$_Erase_tree@V-$allocator@U-$_Tree_node@V-$weak_ptr@VMaterial@Engine@Spectre@@@std@@PEAX@std@@.c)
 *     ??$_Freenode@V?$allocator@U?$_Tree_node@V?$weak_ptr@VMaterial@Engine@Spectre@@@std@@PEAX@std@@@std@@@?$_Tree_node@V?$weak_ptr@VMaterial@Engine@Spectre@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_Tree_node@V?$weak_ptr@VMaterial@Engine@Spectre@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x18005F2C0 (--$_Freenode@V-$allocator@U-$_Tree_node@V-$weak_ptr@VMaterial@Engine@Spectre@@@std@@PEAX@std@@@s.c)
 */

__int64 __fastcall std::_Tree_val<std::_Tree_simple_types<std::weak_ptr<Spectre::Engine::Material>>>::_Erase_tree<std::allocator<std::_Tree_node<std::weak_ptr<Spectre::Engine::Material>,void *>>>(
        __int64 a1,
        __int64 a2,
        __int64 *a3)
{
  __int64 *i; // rbx
  __int64 *v6; // rdx
  __int64 v7; // rcx
  __int64 result; // rax

  for ( i = a3;
        !*((_BYTE *)i + 25);
        result = std::_Tree_node<std::weak_ptr<Spectre::Engine::Material>,void *>::_Freenode<std::allocator<std::_Tree_node<std::weak_ptr<Spectre::Engine::Material>,void *>>>(
                   v7,
                   v6) )
  {
    std::_Tree_val<std::_Tree_simple_types<std::weak_ptr<Spectre::Engine::Material>>>::_Erase_tree<std::allocator<std::_Tree_node<std::weak_ptr<Spectre::Engine::Material>,void *>>>(
      a1,
      a2,
      i[2]);
    v6 = i;
    i = (__int64 *)*i;
  }
  return result;
}
