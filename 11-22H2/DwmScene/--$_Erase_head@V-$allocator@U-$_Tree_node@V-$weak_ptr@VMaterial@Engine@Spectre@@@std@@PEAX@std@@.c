/*
 * XREFs of ??$_Erase_head@V?$allocator@U?$_Tree_node@V?$weak_ptr@VMaterial@Engine@Spectre@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@V?$weak_ptr@VMaterial@Engine@Spectre@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@V?$weak_ptr@VMaterial@Engine@Spectre@@@std@@PEAX@std@@@1@@Z @ 0x18005F174
 * Callers:
 *     ??1?$_Tree_head_scoped_ptr@V?$allocator@U?$_Tree_node@V?$weak_ptr@VMaterial@Engine@Spectre@@@std@@PEAX@std@@@std@@V?$_Tree_val@U?$_Tree_simple_types@V?$weak_ptr@VMaterial@Engine@Spectre@@@std@@@std@@@2@@std@@QEAA@XZ @ 0x18005FAEC (--1-$_Tree_head_scoped_ptr@V-$allocator@U-$_Tree_node@V-$weak_ptr@VMaterial@Engine@Spectre@@@std.c)
 *     ??1?$set@V?$weak_ptr@VMaterial@Engine@Spectre@@@std@@U?$owner_less@V?$weak_ptr@VMaterial@Engine@Spectre@@@std@@@2@V?$allocator@V?$weak_ptr@VMaterial@Engine@Spectre@@@std@@@2@@std@@QEAA@XZ @ 0x18005FBD4 (--1-$set@V-$weak_ptr@VMaterial@Engine@Spectre@@@std@@U-$owner_less@V-$weak_ptr@VMaterial@Engine@.c)
 *     ??1ShaderFamily@Engine@Spectre@@QEAA@XZ @ 0x18005FC40 (--1ShaderFamily@Engine@Spectre@@QEAA@XZ.c)
 *     ?ReleaseResources@ShaderFamily@Engine@Spectre@@QEAAXXZ @ 0x180060FAC (-ReleaseResources@ShaderFamily@Engine@Spectre@@QEAAXXZ.c)
 * Callees:
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@V?$weak_ptr@VMaterial@Engine@Spectre@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@V?$weak_ptr@VMaterial@Engine@Spectre@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@V?$weak_ptr@VMaterial@Engine@Spectre@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@V?$weak_ptr@VMaterial@Engine@Spectre@@@std@@PEAX@1@@Z @ 0x18005F218 (--$_Erase_tree@V-$allocator@U-$_Tree_node@V-$weak_ptr@VMaterial@Engine@Spectre@@@std@@PEAX@std@@.c)
 */

void __fastcall std::_Tree_val<std::_Tree_simple_types<std::weak_ptr<Spectre::Engine::Material>>>::_Erase_head<std::allocator<std::_Tree_node<std::weak_ptr<Spectre::Engine::Material>,void *>>>(
        void **a1,
        __int64 a2)
{
  std::_Tree_val<std::_Tree_simple_types<std::weak_ptr<Spectre::Engine::Material>>>::_Erase_tree<std::allocator<std::_Tree_node<std::weak_ptr<Spectre::Engine::Material>,void *>>>(
    a1,
    a2,
    *((_QWORD *)*a1 + 1));
  std::_Deallocate<16,0>(*a1, 0x30uLL);
}
