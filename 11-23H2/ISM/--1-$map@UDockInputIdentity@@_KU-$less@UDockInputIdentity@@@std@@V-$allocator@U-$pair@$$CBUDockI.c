/*
 * XREFs of ??1?$map@UDockInputIdentity@@_KU?$less@UDockInputIdentity@@@std@@V?$allocator@U?$pair@$$CBUDockInputIdentity@@_K@std@@@3@@std@@QEAA@XZ @ 0x1801A2EBC
 * Callers:
 *     _ISMHeatFrameworkHost::ISMHeatFrameworkHost_::_1_::dtor$5 @ 0x1801A2E3F (_ISMHeatFrameworkHost--ISMHeatFrameworkHost_--_1_--dtor$5.c)
 * Callees:
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CBUDockInputIdentity@@_K@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUDockInputIdentity@@_K@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBUDockInputIdentity@@_K@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBUDockInputIdentity@@_K@std@@PEAX@1@@Z @ 0x1801A2288 (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CBUDockInputIdentity@@_K@std@@PEAX@std@@@std.c)
 */

void __fastcall std::map<DockInputIdentity,unsigned __int64>::~map<DockInputIdentity,unsigned __int64>(void **a1)
{
  std::_Tree_val<std::_Tree_simple_types<std::pair<DockInputIdentity const,unsigned __int64>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<DockInputIdentity const,unsigned __int64>,void *>>>(
    (__int64)a1,
    (__int64)a1,
    *((_QWORD *)*a1 + 1));
  std::_Deallocate<16,0>(*a1, 0x40uLL);
}
