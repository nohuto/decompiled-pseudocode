/*
 * XREFs of ??1?$map@UDockInputIdentity@@UDockInputInfo@@U?$less@UDockInputIdentity@@@std@@V?$allocator@U?$pair@$$CBUDockInputIdentity@@UDockInputInfo@@@std@@@4@@std@@QEAA@XZ @ 0x18019BD54
 * Callers:
 *     _DeviceDockServer::DeviceDockServer_::_1_::dtor$5 @ 0x18006E670 (_DeviceDockServer--DeviceDockServer_--_1_--dtor$5.c)
 * Callees:
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CBUDockInputIdentity@@UDockInputInfo@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUDockInputIdentity@@UDockInputInfo@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBUDockInputIdentity@@UDockInputInfo@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBUDockInputIdentity@@UDockInputInfo@@@std@@PEAX@1@@Z @ 0x18019B604 (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CBUDockInputIdentity@@UDockInputInfo@@@std@@.c)
 */

void __fastcall std::map<DockInputIdentity,DockInputInfo>::~map<DockInputIdentity,DockInputInfo>(void **a1)
{
  std::_Tree_val<std::_Tree_simple_types<std::pair<DockInputIdentity const,DockInputInfo>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<DockInputIdentity const,DockInputInfo>,void *>>>(
    (__int64)a1,
    (__int64)a1,
    *((_QWORD *)*a1 + 1));
  std::_Deallocate<16,0>(*a1, 0x90uLL);
}
