/*
 * XREFs of ??1?$list@U?$pair@QEAXV?$vector@IV?$allocator@I@std@@@std@@@std@@V?$allocator@U?$pair@QEAXV?$vector@IV?$allocator@I@std@@@std@@@std@@@2@@std@@QEAA@XZ @ 0x1800F8028
 * Callers:
 *     _Win32kInterop::DeliverInputToAllTargets_::_1_::dtor$9 @ 0x1800F91AE (_Win32kInterop--DeliverInputToAllTargets_--_1_--dtor$9.c)
 * Callees:
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@QEAXV?$vector@IV?$allocator@I@std@@@std@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@QEAXV?$vector@IV?$allocator@I@std@@@std@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@QEAXV?$vector@IV?$allocator@I@std@@@std@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1800F71AC (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@QEAXV-$vector@IV-$allocator@I@std@@@std@@@s.c)
 */

void __fastcall std::list<std::pair<void * const,std::vector<unsigned int>>>::~list<std::pair<void * const,std::vector<unsigned int>>>(
        void **a1)
{
  std::_List_node<std::pair<void * const,std::vector<unsigned int>>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<void * const,std::vector<unsigned int>>,void *>>>(
    (__int64)a1,
    (_QWORD **)*a1);
  std::_Deallocate<16,0>(*a1, 0x30uLL);
}
